/*
 * XREFs of PspGetNextJob @ 0x140657860
 * Callers:
 *     PspGetNextSilo @ 0x140657710 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x14065775C (PspEnforceLimits.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14020AF40 (ObReferenceObjectSafeWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rcx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
  if ( Object )
    v4 = (__int64 *)Object[3];
  else
    v4 = (__int64 *)PspJobList;
  if ( v4 != &PspJobList )
  {
    while ( !ObReferenceObjectSafeWithTag((__int64)(v4 - 3)) )
    {
      v4 = (__int64 *)*v4;
      if ( v4 == &PspJobList )
        goto LABEL_6;
    }
    v3 = v4 - 3;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
