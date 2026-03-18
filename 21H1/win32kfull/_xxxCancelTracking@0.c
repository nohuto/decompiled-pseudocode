/*
 * XREFs of _xxxCancelTracking@0 @ 0x17842
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxCancelTrackingForThread@4 @ 0x17668C (_xxxCancelTrackingForThread@4.c)
 */

_DWORD *__stdcall xxxCancelTracking()
{
  unsigned int v0; // ebx
  _DWORD *result; // eax
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  _DWORD *v6; // edi
  int v7; // [esp+10h] [ebp-160h]
  _DWORD v8[85]; // [esp+18h] [ebp-158h] BYREF

  memset(v8, 0, 0x30u);
  v0 = 0;
  result = (_DWORD *)_grpdeskRitInput;
  v2 = *(_DWORD **)(_grpdeskRitInput + 92);
  if ( v2 != (_DWORD *)(_grpdeskRitInput + 92) )
  {
    v3 = 0;
    v7 = 0;
    do
    {
      if ( *(v2 - 9) && v0 < 0xC )
      {
        LockW32Thread(v2 - 101, (char *)&v8[48] + v3);
        v5 = *(_DWORD *)(*(v2 - 9) + 8);
        v8[v7 + 12] = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v8[v7 + 12];
        v8[v7 + 13] = v5;
        HMLockObject(v5);
        result = v2 - 101;
        v8[v0++] = v2 - 101;
        v3 = v7 * 4 + 12;
        v7 += 3;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 != (_DWORD *)(_grpdeskRitInput + 92) );
  }
  v4 = v0 - 1;
  if ( (int)(v0 - 1) >= 0 )
  {
    v6 = &v8[3 * v4 + 48];
    do
    {
      if ( (*(_BYTE *)(v8[v4] + 264) & 1) == 0 )
        xxxCancelTrackingForThread(v8[v4]);
      ThreadUnlock1();
      result = (_DWORD *)PopAndFreeW32ThreadLock(v6);
      v6 -= 3;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return result;
}
