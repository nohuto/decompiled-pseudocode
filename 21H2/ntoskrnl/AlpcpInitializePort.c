/*
 * XREFs of AlpcpInitializePort @ 0x140667864
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3)
{
  unsigned int v4; // ecx
  __int64 *v5; // rax
  char v6; // al
  struct _KSEMAPHORE *v8; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  v4 = *(_DWORD *)(a1 + 416) & 0xFFFFFDF9 | (2 * (a2 & 3 | ((a3 & 1) << 8)));
  *(_DWORD *)(a1 + 416) = v4;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v8 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v8;
    if ( !v8 )
      return 3221225626LL;
    KeInitializeSemaphore(v8, 0, 0x7FFFFFFF);
    v4 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) = v4 | 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  v5 = (__int64 *)qword_140C2A098;
  if ( *(__int64 **)qword_140C2A098 != &AlpcpPortList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = qword_140C2A098;
  *(_QWORD *)a1 = &AlpcpPortList;
  *v5 = a1;
  qword_140C2A098 = a1;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
