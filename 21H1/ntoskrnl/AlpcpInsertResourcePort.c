/*
 * XREFs of AlpcpInsertResourcePort @ 0x140612D74
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x140611CE0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     AlpcpCreateSection @ 0x140642A04 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14075B484 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v2 = (volatile signed __int64 *)(a1 + 328);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v5 = a1 + 336;
  v6 = (_QWORD *)(a2 - 48);
  v7 = *(_QWORD **)(v5 + 8);
  if ( *v7 != v5 )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = v5;
  *v7 = v6;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
