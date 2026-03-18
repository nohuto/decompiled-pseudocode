/*
 * XREFs of ?IsValidIFIMETRICS@@YG_NPBU_IFIMETRICS@@K@Z @ 0x20A333
 * Callers:
 *     ?ProbeAndReadIFIMETRICS@@YGPAU_IFIMETRICS@@PAU1@HK@Z @ 0x20A7B1 (-ProbeAndReadIFIMETRICS@@YGPAU_IFIMETRICS@@PAU1@HK@Z.c)
 * Callees:
 *     ?IsValidAXESLISTW@@YG_NPBXKJ@Z @ 0x20A1C9 (-IsValidAXESLISTW@@YG_NPBXKJ@Z.c)
 *     ?IsValidCharsets@@YG_NPBXKJ@Z @ 0x20A20E (-IsValidCharsets@@YG_NPBXKJ@Z.c)
 *     ?IsValidDESIGNVECTOR@@YG_NPBXKJ@Z @ 0x20A249 (-IsValidDESIGNVECTOR@@YG_NPBXKJ@Z.c)
 *     ?IsValidFONTSIGNATURE@@YG_NPBXKJ@Z @ 0x20A2B7 (-IsValidFONTSIGNATURE@@YG_NPBXKJ@Z.c)
 *     ?IsValidFONTSIM@@YG_NPBXKJ@Z @ 0x20A2DF (-IsValidFONTSIM@@YG_NPBXKJ@Z.c)
 *     ?IsValidString@@YG_NPBXKJ@Z @ 0x20A423 (-IsValidString@@YG_NPBXKJ@Z.c)
 */

bool __fastcall IsValidIFIMETRICS(int a1, unsigned int a2)
{
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v8; // [esp+0h] [ebp-8h]
  unsigned int v9; // [esp+0h] [ebp-8h]
  unsigned int v10; // [esp+0h] [ebp-8h]
  unsigned int v11; // [esp+0h] [ebp-8h]
  unsigned int v12; // [esp+0h] [ebp-8h]
  unsigned int v13; // [esp+0h] [ebp-8h]
  unsigned int v14; // [esp+0h] [ebp-8h]
  int v15; // [esp+4h] [ebp-4h]
  int v16; // [esp+4h] [ebp-4h]
  int v17; // [esp+4h] [ebp-4h]
  int v18; // [esp+4h] [ebp-4h]
  int v19; // [esp+4h] [ebp-4h]
  int v20; // [esp+4h] [ebp-4h]
  int v21; // [esp+4h] [ebp-4h]

  if ( a2 < 0xB8
    || *(_DWORD *)a1 != a2
    || !IsValidString(*(const void **)(a1 + 8), v8, v15)
    || !IsValidString(*(const void **)(a1 + 12), v9, v16)
    || !IsValidString(*(const void **)(a1 + 16), v10, v17)
    || !IsValidString(*(const void **)(a1 + 20), v11, v18)
    || !IsValidFONTSIM(a2, v4, *(char **)(a1 + 24), v12, v19)
    || !IsValidCharsets(v5, a1, *(char **)(a1 + 40), v13, v20) )
  {
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 4);
  if ( !v6 )
    return 1;
  if ( v6 > a2 - 184 )
    return 0;
  if ( v6 >= 0x14 )
    v6 = 20;
  return v6 == 4
      || (v6 == 8
       || v6 == 12
       || (v6 == 16 || v6 == 20 && IsValidAXESLISTW(a2, a1, *(char **)(a1 + 200), v14, v21))
       && IsValidDESIGNVECTOR(a2, a1, *(char **)(a1 + 196), v14, v21))
      && IsValidFONTSIGNATURE(a2, *(const void **)(a1 + 188), v14, v21);
}
