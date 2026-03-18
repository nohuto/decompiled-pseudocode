/*
 * XREFs of _GreConvertMemToRedirectionDC@8 @ 0x7AB00
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     _UpdateSpriteArea@44 @ 0xC4700 (_UpdateSpriteArea@44.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76 (--0DCOBJA@@QAE@PAUHDC__@@@Z.c)
 */

int __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  v4 = (_DWORD *)v9[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( v4[5] == 1 )
    {
      v5 = v4[9];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 1416) & 0x400) != 0 )
        {
          v4[6] |= 0x4001u;
          v4[5] = 0;
          v7 = v4[126];
          v3 = 1;
          v8 = *(_DWORD *)(v7 + 72);
          if ( (v8 & 0x800) == 0 && !*(_WORD *)(v7 + 64) )
          {
            *a2 = 1;
            *(_DWORD *)(v7 + 72) = v8 | 0x800;
          }
        }
      }
    }
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v9);
  }
  return v3;
}
