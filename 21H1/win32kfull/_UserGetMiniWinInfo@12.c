/*
 * XREFs of _UserGetMiniWinInfo@12 @ 0x1539A0
 * Callers:
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE (-InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __fastcall UserGetMiniWinInfo(unsigned int a1, int a2, _DWORD *a3)
{
  int v4; // esi
  float *v5; // eax
  float *v6; // edi

  v4 = 0;
  v5 = (float *)HMValidateHandleNoSecure(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    InitializeMiniWinInfo(v5, a2);
    v4 = 1;
    *a3 = *((_DWORD *)v6 + 37);
  }
  return v4;
}
