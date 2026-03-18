/*
 * XREFs of AlpcpTrackPortReferences @ 0x1406E3498
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14060A800 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpTrackPortReferences(__int64 a1)
{
  signed __int32 v2; // edi
  volatile signed __int64 *v3; // rbx
  struct _KEVENT *v4; // rcx
  char result; // al

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 404));
  if ( *(_QWORD *)(a1 + 408) )
  {
    v3 = (volatile signed __int64 *)(a1 + 352);
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v4 = *(struct _KEVENT **)(a1 + 408);
    if ( v4 && v2 == v4[1].Header.LockNV )
      KeSetEvent(v4, 0, 0);
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    return KeAbPostRelease((ULONG_PTR)v3);
  }
  return result;
}
