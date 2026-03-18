/*
 * XREFs of _vIFIMetricsToEnumLogFontExDvW@8 @ 0xDBF4C
 * Callers:
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 *     _bInitSystemFont@8 @ 0x293D42 (_bInitSystemFont@8.c)
 * Callees:
 *     ?IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z @ 0x89762 (-IsVariableFont@@YG_NPAU_IFIMETRICS@@@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z @ 0x89836 (-vIFIMetricsToEnumLogFontW@@YGXPAUtagENUMLOGFONTW@@PAU_IFIMETRICS@@@Z.c)
 *     ?vLookupScript@@YGXKPAGK@Z @ 0x89F72 (-vLookupScript@@YGXKPAGK@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __fastcall vIFIMetricsToEnumLogFontExDvW(int a1, int a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int16 *v7; // [esp+0h] [ebp-Ch]
  unsigned int v8; // [esp+4h] [ebp-8h]

  vIFIMetricsToEnumLogFontW(a1, a2);
  vLookupScript(*(unsigned __int8 *)(a2 + 44), v4, v7, v8);
  if ( ((*(_DWORD *)(a2 + 48) & 0x4000) != 0 || IsVariableFont((_DWORD *)a2)) && *(_DWORD *)(a2 + 4) > 0xCu )
  {
    v6 = (_DWORD *)(a2 + *(_DWORD *)(a2 + 196));
    v5 = v6[1];
    if ( v5 > 0x10 )
      v5 = 16;
    memcpy((void *)(a1 + 348), v6, 4 * v5 + 8);
  }
  else
  {
    v5 = 0;
    *(_DWORD *)(a1 + 348) = 134248036;
  }
  *(_DWORD *)(a1 + 352) = v5;
}
