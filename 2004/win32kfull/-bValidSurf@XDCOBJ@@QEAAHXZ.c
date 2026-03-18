/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     NtGdiStartPage @ 0x1C013FD90 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C01455D0 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C0147068 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015A504 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C027DBC0 (NtGdiEndPage.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B84F0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // ecx

  v1 = *(_QWORD *)this;
  result = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( *(_QWORD *)(v1 + 496) )
    {
      v3 = *(_DWORD *)(v1 + 36);
      if ( (v3 & 0x1000) == 0 || (v3 & 0x4000) != 0 )
        return 1LL;
    }
  }
  return result;
}
