/*
 * XREFs of DrawSize @ 0x1C0246280
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00AFD24 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C025E57C (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v6; // rcx
  int v9; // edi
  int v10; // ebx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v13; // edi
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rbx
  int v20; // edi
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  _DWORD v26[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem(v6);
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    v6 = *(_QWORD *)(a1 + 40);
    a3 = v9 - v10 - a3 - DpiDependentMetric;
  }
  v13 = *(_DWORD *)(v6 + 100);
  v14 = *(_DWORD *)(v6 + 92);
  v15 = GetDpiForSystem(v6);
  v16 = GetDpiDependentMetric(1LL, v15);
  v18 = v13 - v14;
  v19 = *(_QWORD *)(a1 + 40);
  v20 = v18 - a4 - v16;
  if ( (*(_WORD *)(v19 + 42) & 0x3FFF) == 0x29A )
    v21 = (*(_BYTE *)(v19 + 28) & 0x10) == 0;
  else
    v21 = SizeBoxHwnd(a1) == 0;
  if ( !v21 )
    return BitBltSysBmp((__int64)a2, a3, v20, (*(_BYTE *)(v19 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v26[0] = a3;
  v26[1] = v20;
  v22 = GetDpiForSystem(v17);
  v26[2] = GetDpiDependentMetric(0LL, v22);
  v24 = GetDpiForSystem(v23);
  v26[3] = GetDpiDependentMetric(1LL, v24);
  v27 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v26, 1u);
}
