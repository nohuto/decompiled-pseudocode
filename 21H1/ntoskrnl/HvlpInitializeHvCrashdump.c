/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1404F393C
 * Callers:
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeRegisterNmiCallback @ 0x14050EE50 (KeRegisterNmiCallback.c)
 *     MmAllocateMappingAddress @ 0x1406D9530 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x14074B200 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
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
  dword_140C4753C = *(_DWORD *)a1;
  qword_140C47540 = *(_QWORD *)(a1 + 8);
  dword_140C47538 = v1;
  qword_140C47530 = v3;
  if ( !v1 || (qword_140C47528 = (void *)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
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
      stru_140C47498.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140C47498,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_16;
      *(_QWORD *)&HvlpCrashdumpData = KeRegisterNmiCallback((PNMI_CALLBACK)HvlCrashdumpCallbackRoutine, 0LL);
      qword_140C47548 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140C47548 )
        goto LABEL_16;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140C474C8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140C474C8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140C47498.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140C47498,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140C474F8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140C474F8,
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
