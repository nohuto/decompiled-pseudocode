/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1406DB93C
 * Callers:
 *     AlpcReserveDestroyProcedure @ 0x1406DB790 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406DB810 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406DB880 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406FC7B0 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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
