/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1406BA62C
 * Callers:
 *     AlpcReserveDestroyProcedure @ 0x1406BA480 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406BA500 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406BA570 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406D8C00 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
