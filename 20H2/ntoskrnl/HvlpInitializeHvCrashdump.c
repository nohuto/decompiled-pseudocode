/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1404F77FC
 * Callers:
 *     HvlPhase1Initialize @ 0x1403CF1E8 (HvlPhase1Initialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039EA20 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeRegisterNmiCallback @ 0x140512DD0 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x1406CF8C0 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x14075E200 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
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
  dword_140C473FC = *(_DWORD *)a1;
  qword_140C47400 = *(_QWORD *)(a1 + 8);
  dword_140C473F8 = v1;
  qword_140C473F0 = v3;
  if ( !v1 || (qword_140C473E8 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
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
      stru_140C47358.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C47358,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C47408 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C47408 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C47388.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C47388,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C47358.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C47358,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C473B8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C473B8,
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
