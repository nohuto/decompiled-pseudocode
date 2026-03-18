/*
 * XREFs of SetTiledRect @ 0x1C006143C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // esi
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // ebp
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax
  int v19; // r11d
  int v20; // ebp
  int v21; // r9d
  int v22; // r10d
  int v23; // r8d
  int v24; // ecx
  int v25; // r8d
  int v26; // ecx
  __int64 result; // rax
  __int128 v28; // [rsp+30h] [rbp-28h] BYREF

  v28 = 0LL;
  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v28, 2, v6, 0);
  ++*(_WORD *)(a3 + 226);
  DpiForSystem = GetDpiForSystem(v7);
  DpiDependentMetric = GetDpiDependentMetric(14LL, DpiForSystem);
  v11 = GetDpiForSystem(v10);
  v12 = GetDpiDependentMetric(12LL, v11) + DpiDependentMetric;
  v14 = GetDpiForSystem(v13);
  v15 = GetDpiDependentMetric(15LL, v14);
  v17 = GetDpiForSystem(v16);
  v18 = GetDpiDependentMetric(13LL, v17);
  v19 = DWORD2(v28) - v28;
  v20 = v18 + v15;
  v21 = HIDWORD(v28);
  v22 = DWORD1(v28);
  v23 = v12 * *(__int16 *)(a3 + 226);
  v24 = v20 * *(__int16 *)(a3 + 226);
  if ( v23 > (DWORD2(v28) - (int)v28) / 4 || v24 > (HIDWORD(v28) - DWORD1(v28)) / 4 )
  {
    *(_WORD *)(a3 + 226) = 0;
    v23 = v12;
    v24 = v20;
  }
  v25 = v28 + v23;
  *a2 = v25;
  v26 = v22 + v24;
  a2[2] = v25 + (v19 + 2 * (v19 + 1)) / 4;
  a2[1] = v26;
  result = (unsigned int)(v26 + (v21 - v22 + 2 * (v21 - v22 + 1)) / 4);
  a2[3] = result;
  return result;
}
