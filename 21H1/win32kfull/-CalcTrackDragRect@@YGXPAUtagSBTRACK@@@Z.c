/*
 * XREFs of ?CalcTrackDragRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A26D0
 * Callers:
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 *     _xxxSBTrackInit@16 @ 0x1A3B45 (_xxxSBTrackInit@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 */

void __thiscall CalcTrackDragRect(int *this)
{
  int v2; // esi
  INT DpiForSystem; // eax
  int v4; // esi
  int v5; // ebx
  int DpiDependentMetric; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx

  v2 = *this;
  DpiForSystem = GetDpiForSystem();
  v4 = v2 & 2;
  v5 = 4 * (v4 == 0) + 16;
  DpiDependentMetric = GetDpiDependentMetric(4 - (v4 != 0), DpiForSystem);
  v7 = this[16];
  v8 = *(_DWORD *)(v7 + 24);
  v9 = 8 * (*(_DWORD *)(v7 + 28) - v8);
  *(int *)((char *)this + v5) = v8 - v9;
  v10 = 4 * (v4 != 0) + 16;
  *(int *)((char *)this + v10) = *(_DWORD *)(this[16] + 16) - 2 * DpiDependentMetric;
  *(int *)((char *)this + v5 + 8) = v9 + *(_DWORD *)(this[16] + 28);
  *(int *)((char *)this + v10 + 8) = 2 * DpiDependentMetric + *(_DWORD *)(this[16] + 20);
}
