/*
 * XREFs of _DrawSize@16 @ 0x1A3566
 * Callers:
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _SizeBoxHwnd@4 @ 0x1B6D75 (_SizeBoxHwnd@4.c)
 */

DC *__fastcall DrawSize(int a1, HDC a2, int a3, int a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // edi
  int v8; // esi
  INT DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v11; // edi
  int v12; // eax
  int v13; // esi
  INT v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  INT v21; // eax
  INT v22; // eax
  int v23; // ecx
  _DWORD v25[5]; // [esp+10h] [ebp-18h] BYREF
  HDC v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+30h] [ebp+8h]

  v26 = a2;
  v5 = *(_DWORD *)(a1 + 20);
  if ( (*(_BYTE *)(v5 + 17) & 0x40) != 0 )
  {
    v6 = a3;
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 60);
    v8 = *(_DWORD *)(v5 + 52);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(0, DpiForSystem);
    v11 = v7 - v8;
    v5 = *(_DWORD *)(a1 + 20);
    v6 = v11 - a3 - DpiDependentMetric;
  }
  v12 = *(_DWORD *)(v5 + 64);
  v13 = *(_DWORD *)(v5 + 56);
  v27 = v12;
  v14 = GetDpiForSystem();
  v15 = GetDpiDependentMetric(1, v14);
  v16 = v27 - v13;
  v17 = *(_DWORD *)(a1 + 20);
  v18 = v16 - a4 - v15;
  v28 = v18;
  if ( (*(_WORD *)(v17 + 30) & 0x3FFF) == 0x29A )
  {
    v19 = (*(_BYTE *)(v17 + 20) & 0x10) == 0;
  }
  else
  {
    v20 = SizeBoxHwnd(a1);
    v18 = v28;
    v19 = v20 == 0;
  }
  if ( !v19 )
    return BitBltSysBmp(v26, v6, v18, (*(_BYTE *)(v17 + 17) & 0x40) != 0 ? 91 : 45, 1);
  v25[0] = v6;
  v25[1] = v18;
  v21 = GetDpiForSystem();
  v25[2] = GetDpiDependentMetric(0, v21);
  v22 = GetDpiForSystem();
  v25[3] = GetDpiDependentMetric(1, v22);
  v25[4] = *(_DWORD *)(_gpsi + 4352);
  return (DC *)GrePolyPatBlt(v26, 0xF00021u, (struct XDCOBJ *)v25, 1u, v23);
}
