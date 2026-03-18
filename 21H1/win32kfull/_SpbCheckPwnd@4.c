/*
 * XREFs of _SpbCheckPwnd@4 @ 0x17E6EC
 * Callers:
 *     _zzzLockWindowUpdate2@8 @ 0x178C6 (_zzzLockWindowUpdate2@8.c)
 *     ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A (-xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YG_NPAUtagSPB@@@Z @ 0xF3F28 (-IsSpbPresentOrNull@@YG_NPAUtagSPB@@@Z.c)
 *     _FreeSpb@4 @ 0x17E3AE (_FreeSpb@4.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 */

int __fastcall SpbCheckPwnd(int a1)
{
  char *v1; // edi
  bool i; // zf
  char *v3; // ebx
  int j; // esi
  char v5; // al
  int result; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v7 = a1;
LABEL_2:
  v1 = *(char **)(_gpDispInfo + 16);
  for ( i = v1 == 0; !i; i = v3 == 0 )
  {
    v3 = *(char **)v1;
    for ( j = *((_DWORD *)v1 + 1); j; j = *(_DWORD *)(j + 56) )
    {
      if ( a1 == j )
      {
        FreeSpb(v1);
        a1 = v7;
      }
    }
    v5 = IsSpbPresentOrNull(v3);
    a1 = v7;
    if ( !v5 )
      goto LABEL_2;
    v1 = v3;
  }
  result = _gpDispInfo;
  if ( *(_DWORD *)(_gpDispInfo + 16) )
    return SpbCheckRect(a1, *(_DWORD *)(a1 + 20) + 52, 0);
  return result;
}
