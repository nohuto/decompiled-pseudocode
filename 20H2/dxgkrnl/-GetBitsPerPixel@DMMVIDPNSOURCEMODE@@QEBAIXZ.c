/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C005B194
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C0144D54 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EB530 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000A584 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int BitsPerPixel; // edi
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = *((unsigned int *)this + 18);
  if ( (((_DWORD)v3 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v3 == 2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  BitsPerPixel = GetBitsPerPixel(*((_DWORD *)this + 24));
  if ( !BitsPerPixel )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v8, v9) + 24) = *((int *)this + 24);
  return BitsPerPixel;
}
