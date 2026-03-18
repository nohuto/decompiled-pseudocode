/*
 * XREFs of _SpbCheckRect@12 @ 0x17E755
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C (-BltValidInit@@YGHPAUtagSMWP@@@Z.c)
 *     _SpbCheckPwnd@4 @ 0x17E6EC (_SpbCheckPwnd@4.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     ?IsSpbPresentOrNull@@YG_NPAUtagSPB@@@Z @ 0xF3F28 (-IsSpbPresentOrNull@@YG_NPAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z @ 0x17E205 (-SpbCheckRect2@@YGHPAUtagSPB@@PAUtagWND@@PAUtagRECT@@K@Z.c)
 */

char __fastcall SpbCheckRect(_DWORD *a1, struct tagSPB *a2, struct tagRECT *a3)
{
  int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  struct tagRECT *v9; // [esp+0h] [ebp-10h]
  unsigned int v10; // [esp+4h] [ebp-Ch]

  v5 = IsVisible(a1);
  if ( v5 )
  {
    while ( 1 )
    {
      LOBYTE(v5) = _gpDispInfo;
      v6 = *(_DWORD **)(_gpDispInfo + 16);
      if ( !v6 )
        break;
      while ( 1 )
      {
        v7 = (_DWORD *)*v6;
        v5 = SpbCheckRect2(a1, (int)v6, a2, a3, v9, v10);
        if ( !v5 )
        {
          LOBYTE(v5) = IsSpbPresentOrNull(v7);
          if ( !(_BYTE)v5 )
            break;
        }
        v6 = v7;
        if ( !v7 )
          return v5;
      }
    }
  }
  return v5;
}
