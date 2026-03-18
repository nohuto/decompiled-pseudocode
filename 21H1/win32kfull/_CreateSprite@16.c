/*
 * XREFs of _CreateSprite@16 @ 0x1F5C2
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 * Callees:
 *     _GreCreateSprite@44 @ 0x1F6C0 (_GreCreateSprite@44.c)
 *     _IsWindowContentProtected@4 @ 0x20BBA (_IsWindowContentProtected@4.c)
 *     ?InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z @ 0x2B2EE (-InitializeMiniWinInfo@@YGXQAUtagWND@@PAUtagMINIWINDOWINFO@@@Z.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall CreateSprite(int a1, _DWORD *a2, int a3, int *a4)
{
  int v5; // ecx
  int v6; // esi
  BOOL v7; // esi
  int v8; // eax
  int Sprite; // ecx
  int result; // eax
  int v11; // [esp-8h] [ebp-B8h]
  struct tagWND *v12; // [esp+0h] [ebp-B0h]
  const struct tagRECT *v13; // [esp+0h] [ebp-B0h]
  struct tagMINIWINDOWINFO *v14; // [esp+4h] [ebp-ACh]
  const struct tagRECT *v15; // [esp+4h] [ebp-ACh]
  int v17; // [esp+18h] [ebp-98h]
  BOOL v18; // [esp+1Ch] [ebp-94h]
  _BYTE v19[140]; // [esp+20h] [ebp-90h] BYREF

  memset(v19, 0, 0x84u);
  InitializeMiniWinInfo(v12, v14);
  v5 = a2[5];
  v17 = *(_BYTE *)(v5 + 23) & 0x10;
  v6 = *(_WORD *)(v5 + 30) & 0x3FFF;
  v18 = v6 == 669;
  v7 = EqualRectInl(v13, v15) || v6 == 669;
  v11 = IsWindowContentProtected(a2);
  v8 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(a1, *a2, a3, v19, a2[37], v8, v17, v18, v7, v11, 0);
  result = Sprite != 0 ? 0 : -2143354878;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
