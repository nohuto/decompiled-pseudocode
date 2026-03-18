/*
 * XREFs of xxxCancelTracking @ 0x1C003126C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 */

__int64 xxxCancelTracking()
{
  __int64 v0; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v3; // r15
  int v4; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD v9[84]; // [rsp+20h] [rbp-2C8h] BYREF

  memset(v9, 0, 0x60uLL);
  v0 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v3 = i - 92;
    if ( *(i - 9) )
    {
      if ( (unsigned int)v0 < 0xC )
      {
        LockW32Thread(i - 92, &v9[3 * v0 + 48]);
        v5 = &v9[3 * v0 + 12];
        v6 = *(_QWORD *)(v3[83] + 16LL);
        *v5 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v5;
        v9[3 * v0 + 13] = v6;
        result = HMLockObject(v6);
        v9[v0] = v3;
        v0 = (unsigned int)(v0 + 1);
      }
    }
  }
  v4 = v0 - 1;
  if ( (int)v0 - 1 >= 0 )
  {
    v7 = &v9[v4];
    v8 = &v9[3 * v4 + 48];
    do
    {
      if ( (*(_DWORD *)(*v7 + 480LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1();
      result = PopAndFreeW32ThreadLock(v8);
      v8 -= 3;
      --v7;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return result;
}
