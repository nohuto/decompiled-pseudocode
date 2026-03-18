/*
 * XREFs of ExGetNextProcess @ 0x1407B69F0
 * Callers:
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 *__fastcall ExGetNextProcess(__int64 *Object, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v5; // rbp
  int v6; // r14d
  __int64 *v7; // rsi
  bool v8; // zf
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  Handle = 0LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    if ( Object )
      v7 = (__int64 *)Object[137];
    else
      v7 = (__int64 *)PsActiveProcessHead;
    if ( v7 != &PsActiveProcessHead )
    {
      while ( 1 )
      {
        v5 = v7 - 137;
        if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 137)) )
          break;
        v7 = (__int64 *)*v7;
        if ( v7 == &PsActiveProcessHead )
          goto LABEL_7;
      }
      v6 = 1;
    }
LABEL_7:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
    KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x6E457350u);
    Object = 0LL;
    if ( v6 )
      Object = v5;
    if ( !Object )
      return 0LL;
    if ( (*((_DWORD *)Object + 281) & 0x4000000) != 0 )
    {
      if ( !a2 )
        return Object;
      if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Handle) >= 0 )
      {
        ObCloseHandle(Handle, 0);
        return Object;
      }
    }
  }
}
