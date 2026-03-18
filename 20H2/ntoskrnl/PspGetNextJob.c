/*
 * XREFs of PspGetNextJob @ 0x1406651C0
 * Callers:
 *     PspGetNextSilo @ 0x140665070 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x1406650BC (PspEnforceLimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
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
