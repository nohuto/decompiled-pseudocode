/*
 * XREFs of AlpcRegisterLogRoutine @ 0x140967754
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  void (__fastcall **i)(__int64, int); // rax
  _QWORD *v5; // rax

  Pool2 = ExAllocatePool2(256LL, 24LL, 1665952833LL);
  v1 = 0;
  v2 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = EtwpTraceALPC;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (void (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (void (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (void (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_11;
    }
  }
  v5 = off_140C08EA0;
  if ( *off_140C08EA0 != (_UNKNOWN *)&AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v5;
  *v5 = v2;
  off_140C08EA0 = (_UNKNOWN **)v2;
  AlpcpLogEnabled = 1;
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
