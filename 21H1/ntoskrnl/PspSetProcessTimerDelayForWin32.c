/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x14057CC2C
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x14057C468 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int SessionId; // [rsp+40h] [rbp+8h] BYREF

  v1 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( *(_QWORD *)(a1 + 1288) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v4 = *(_QWORD *)(a1 + 2416);
    SessionId = MmGetSessionIdEx(a1);
    v5 = a1;
    v6 = v4 & 0x3FFFFFFF;
    v7 = (v4 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(41LL, &v5, 1LL, &SessionId);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0LL;
  }
}
