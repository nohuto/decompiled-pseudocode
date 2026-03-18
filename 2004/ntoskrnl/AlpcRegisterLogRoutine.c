/*
 * XREFs of AlpcRegisterLogRoutine @ 0x1408C039C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140780518 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 (__fastcall **i)(__int64, int); // rax
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x634C6C41u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = EtwpTraceALPC;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_11;
    }
  }
  v5 = off_140C0EC90;
  if ( *(PVOID **)off_140C0EC90 != &AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v5;
  *v5 = v2;
  off_140C0EC90 = v2;
  AlpcpLogEnabled = 1;
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
