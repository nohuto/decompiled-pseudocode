/*
 * XREFs of GetWndSBDisableFlags @ 0x1C014D02C
 * Callers:
 *     xxxDrawScrollBar @ 0x1C014CAB0 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0244184 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244694 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02451EC (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0245720 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rax
  int v4; // ecx
  int v5; // eax

  v3 = *(int **)(a1 + 152);
  if ( v3 )
  {
    v4 = *v3;
    v5 = *v3 >> 2;
    if ( !(_DWORD)a2 )
      LOBYTE(v5) = v4;
    return v5 & 3;
  }
  else
  {
    UserSetLastError(1447LL, a2, a3);
    return 0LL;
  }
}
