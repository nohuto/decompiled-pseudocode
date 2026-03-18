/*
 * XREFs of PspGetNextJob @ 0x140615A40
 * Callers:
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     PspEnforceLimits @ 0x140615940 (PspEnforceLimits.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140263E60 (ObReferenceObjectSafeWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PspGetNextJob(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  bool v9; // zf

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
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v3;
}
