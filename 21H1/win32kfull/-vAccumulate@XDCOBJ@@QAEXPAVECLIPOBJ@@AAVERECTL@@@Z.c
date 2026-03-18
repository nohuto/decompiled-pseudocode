/*
 * XREFs of ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA
 * Callers:
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 */

void __thiscall XDCOBJ::vAccumulate(XDCOBJ *this, struct ECLIPOBJ *a2, struct ERECTL *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v4 = *(_DWORD *)this;
  v9 = *(_DWORD *)a3;
  v5 = *(_DWORD *)(v4 + 28);
  v10 = *((_DWORD *)a3 + 1);
  v6 = v5 & 1;
  v7 = *(_DWORD *)(v4 + 8 * v6 + 1048);
  v11 = *((_DWORD *)a3 + 2);
  v12 = *((_DWORD *)a3 + 3);
  v9 -= v7;
  v11 -= v7;
  v8 = *(_DWORD *)(v4 + 8 * v6 + 1052);
  v10 -= v8;
  v12 -= v8;
  if ( (*(_BYTE *)(v4 + 24) & 0x20) != 0 )
  {
    ERECTL::operator|=((_DWORD *)(v4 + 1096), &v9);
    v4 = *(_DWORD *)this;
  }
  if ( *(char *)(v4 + 24) < 0 )
    ERECTL::operator|=((_DWORD *)(v4 + 1128), &v9);
}
