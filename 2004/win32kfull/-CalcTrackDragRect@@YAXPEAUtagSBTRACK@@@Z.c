/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244F18
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0245658 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C02469C0 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r9d

  v2 = *(_DWORD *)a1 & 2;
  v3 = v2 != 0 ? 4 : 0;
  v4 = -(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  DpiDependentMetric = GetDpiDependentMetric(4 - (unsigned int)(v2 != 0), DpiForSystem);
  v7 = *((_QWORD *)a1 + 12);
  v8 = *(_DWORD *)(v7 + 24);
  v9 = 8 * (*(_DWORD *)(v7 + 28) - v8);
  *(_DWORD *)((char *)a1 + v4 + 36) = v8 - v9;
  *(_DWORD *)((char *)a1 + v3 + 32) = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - 2 * DpiDependentMetric;
  *(_DWORD *)((char *)a1 + v4 + 44) = v9 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  *(_DWORD *)((char *)a1 + v3 + 40) = 2 * DpiDependentMetric + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
