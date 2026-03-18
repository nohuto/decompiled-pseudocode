/*
 * XREFs of AlpcpRemoveResourcePort @ 0x140636230
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1406BA480 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406BA500 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1406BA570 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406D8C00 (AlpcSectionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14075B484 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
