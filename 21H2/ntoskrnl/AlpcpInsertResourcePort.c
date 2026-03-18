/*
 * XREFs of AlpcpInsertResourcePort @ 0x1407A6950
 * Callers:
 *     AlpcpMapLegacyPortRemoteView @ 0x1406622B8 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpCreateSection @ 0x14066BC7C (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x1407A74A4 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
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
