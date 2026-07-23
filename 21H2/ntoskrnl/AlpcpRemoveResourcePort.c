/*
 * XREFs of AlpcpRemoveResourcePort @ 0x140688180
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140607530 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x14060BBA0 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x14061CE80 (AlpcReserveDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x140687AA0 (AlpcViewDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x140689730 (AlpcSecurityDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407704B0 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
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
