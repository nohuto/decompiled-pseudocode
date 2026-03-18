/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C006902C
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C01BE07C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C03ABDDC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0011EE8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int BitsPerPixel; // edi

  v2 = *((_DWORD *)this + 18);
  if ( ((v2 - 1) & 0xFFFFFFFC) != 0 || v2 == 2 )
    WdLogSingleEntry0(1LL);
  BitsPerPixel = GetBitsPerPixel(*((_DWORD *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3) + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
