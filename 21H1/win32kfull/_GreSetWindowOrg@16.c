/*
 * XREFs of _GreSetWindowOrg@16 @ 0x21D7A5
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     ?xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z @ 0x1A17E9 (-xxxDWPPrint@@YGHPAUtagWND@@PAUHDC__@@J@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3 (-MirrorWindowOrg@DC@@QAEXXZ.c)
 */

int __fastcall GreSetWindowOrg(HDC a1, int a2, int a3, int a4)
{
  int v4; // esi
  __int64 v6; // rax
  __int64 v7; // rax
  DC *v8; // ecx
  DC *v9; // ecx
  _BYTE v11[12]; // [esp+Ch] [ebp-34h] BYREF
  _DWORD v12[3]; // [esp+18h] [ebp-28h] BYREF
  DC *v13[3]; // [esp+24h] [ebp-1Ch] BYREF
  int v14; // [esp+30h] [ebp-10h] BYREF
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h] BYREF
  int v17; // [esp+3Ch] [ebp-4h]

  v4 = 0;
  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v13, -2147483132);
    LODWORD(v6) = -a2;
    ltoef_c(v6, -a2, &v16);
    LODWORD(v7) = -a3;
    ltoef_c(v7, -a3, &v14);
    if ( v16 )
      v17 += 4;
    if ( v14 )
      v15 += 4;
    v8 = v13[0];
    if ( (*(_DWORD *)(*((_DWORD *)v13[0] + 255) + 184) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v13, 1026);
      if ( v12[0] )
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v12,
          (struct _POINTFIX *)(*((_DWORD *)v13[0] + 255) + 8),
          (struct _POINTL *)(*((_DWORD *)v13[0] + 255) + 236),
          1u);
      *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 184) &= ~0x100u;
      v8 = v13[0];
    }
    *(_DWORD *)(*((_DWORD *)v8 + 255) + 184) |= 0x200u;
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 340) |= 0x2010u;
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 308) = a2;
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 312) = a3;
    v9 = v13[0];
    *(_DWORD *)(*((_DWORD *)v13[0] + 255) + 304) = a2;
    DC::MirrorWindowOrg(v9);
    EXFORMOBJ::vInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v13, 0x402u, 0);
    v4 = 1;
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v4;
}
