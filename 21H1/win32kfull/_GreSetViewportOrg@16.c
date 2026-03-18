/*
 * XREFs of _GreSetViewportOrg@16 @ 0xB675E
 * Callers:
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

int __fastcall GreSetViewportOrg(HDC a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v6; // ecx
  int v7; // edx
  _BYTE v9[12]; // [esp+Ch] [ebp-34h] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-28h] BYREF
  _DWORD v11[3]; // [esp+24h] [ebp-1Ch] BYREF
  int v12; // [esp+30h] [ebp-10h] BYREF
  int v13; // [esp+34h] [ebp-Ch]
  int v14; // [esp+38h] [ebp-8h] BYREF
  int v15; // [esp+3Ch] [ebp-4h]

  v4 = 0;
  memset(v11, 0, sizeof(v11));
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  v6 = v11[0];
  if ( v11[0] )
  {
    v7 = *(_DWORD *)(v11[0] + 1020);
    if ( (*(_BYTE *)(v7 + 148) & 1) != 0 )
      a2 = -a2;
    if ( (unsigned int)(a2 + 134217726) <= 0xFFFFFFC && (unsigned int)(a3 + 134217726) <= 0xFFFFFFC )
    {
      if ( (*(_DWORD *)(v7 + 184) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v11, 1026);
        if ( v10[0] )
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)v10,
            (struct _POINTFIX *)(*(_DWORD *)(v11[0] + 1020) + 8),
            (struct _POINTL *)(*(_DWORD *)(v11[0] + 1020) + 236),
            1u);
        *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 184) &= ~0x100u;
        v6 = v11[0];
      }
      *(_DWORD *)(*(_DWORD *)(v6 + 1020) + 184) |= 0x200u;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v11, -2147483132);
      ltoef_c(a2, &v14);
      ltoef_c(a3, &v12);
      if ( v14 )
        v15 += 4;
      if ( v12 )
        v13 += 4;
      *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 340) |= 0x2010u;
      *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 324) = a2;
      *(_DWORD *)(*(_DWORD *)(v11[0] + 1020) + 328) = a3;
      EXFORMOBJ::vInit((EXFORMOBJ *)v9, (struct XDCOBJ *)v11, 0x402u, 0);
      v6 = v11[0];
      v4 = 1;
    }
    if ( v6 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v4;
}
