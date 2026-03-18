/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x140685E3C
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x140685460 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406CC760 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406CEF90 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1406DDC20 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  unsigned __int64 v8; // rcx

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = a1 + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 1), 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( v8 < a1[2] && *(_QWORD *)(*a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
