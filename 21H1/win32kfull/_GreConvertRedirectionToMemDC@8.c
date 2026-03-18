/*
 * XREFs of _GreConvertRedirectionToMemDC@8 @ 0x200FC3
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     _UpdateSpriteArea@44 @ 0xC4700 (_UpdateSpriteArea@44.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76 (--0DCOBJA@@QAE@PAUHDC__@@@Z.c)
 */

int __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  int v3; // esi
  int *v4; // ecx
  int v5; // eax
  int *v7[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( !v7[0][5] )
    {
      v5 = v7[0][9];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 1416) & 0x400) != 0 )
        {
          v7[0][6] &= 0xFFFFBFFE;
          v3 = 1;
          v4[5] = 1;
          if ( a2 )
            *(_DWORD *)(v4[126] + 72) &= ~0x800u;
        }
      }
    }
    XDCOBJ::vAltUnlockFast(v7);
  }
  return v3;
}
