/*
 * XREFs of TpAdjustBindingCount @ 0x180010A00
 * Callers:
 *     TppDestroyTimer @ 0x18000F1E8 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x180010960 (TppInitializeTimer.c)
 *     TpBindFileToDirect @ 0x180075E98 (TpBindFileToDirect.c)
 *     TppAllocAlpcCompletion @ 0x1800797D4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18007D600 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x18007F510 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180083AF0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180085260 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1801136E8 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A0480 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    v5 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v4;
    NtSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
  }
}
