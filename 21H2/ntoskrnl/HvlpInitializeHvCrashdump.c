/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1404F931C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039E7B0 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeRegisterNmiCallback @ 0x140514B50 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x14060CD20 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140762BB0 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x140764790 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // ebx
  __int64 v3; // r9
  void *IndependentPages; // rax

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C475BC = *(_DWORD *)a1;
  qword_140C475C0 = *(_QWORD *)(a1 + 8);
  dword_140C475B8 = v1;
  qword_140C475B0 = v3;
  if ( !v1 || (qword_140C475A8 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_16;
      stru_140C47518.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C47518,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C475C8 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C475C8 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C47548.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C47548,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C47518.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C47518,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C47578.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C47578,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlSkCrashdumpCallbackRoutine, 0LL);
          return 0;
        }
      }
    }
  }
LABEL_16:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages(HvlpFallbackScratchPage, 4096LL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
