/*
 * XREFs of _SetTiledRect@12 @ 0x6FF46
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _InternalGetRealClientRect@20 @ 0xA23FA (_InternalGetRealClientRect@20.c)
 */

int __fastcall SetTiledRect(_DWORD *a1, int *a2, int a3)
{
  INT DpiForSystem; // eax
  int DpiDependentMetric; // edi
  INT v6; // eax
  INT v7; // eax
  INT v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int result; // eax
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+10h] [ebp-20h]
  int v16; // [esp+18h] [ebp-18h]

  _GetDesktopWindow(a1);
  InternalGetRealClientRect(2, a3, 0);
  ++*(_WORD *)(a3 + 118);
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(14, DpiForSystem);
  v6 = GetDpiForSystem();
  v16 = GetDpiDependentMetric(12, v6) + DpiDependentMetric;
  v7 = GetDpiForSystem();
  v14 = GetDpiDependentMetric(15, v7);
  v8 = GetDpiForSystem();
  v9 = GetDpiDependentMetric(13, v8);
  v10 = *(__int16 *)(a3 + 118);
  v11 = v16 * v10;
  v12 = (v9 + v14) * v10;
  v15 = v9 + v14;
  if ( v11 > 0 || v12 > 0 )
  {
    v11 = v16;
    *(_WORD *)(a3 + 118) = 0;
    v12 = v15;
  }
  *a2 = v11;
  a2[1] = v12;
  a2[2] = v11;
  result = v12;
  a2[3] = v12;
  return result;
}
