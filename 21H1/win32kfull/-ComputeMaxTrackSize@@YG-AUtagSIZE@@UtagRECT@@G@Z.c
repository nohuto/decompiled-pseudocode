/*
 * XREFs of ?ComputeMaxTrackSize@@YG?AUtagSIZE@@UtagRECT@@G@Z @ 0x7067C
 * Callers:
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 * Callees:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 */

int __userpurge ComputeMaxTrackSize@<eax>(unsigned __int16 a1@<cx>, struct tagRECT a2, unsigned __int16 a3)
{
  INT v3; // ebx
  int DpiDependentMetric; // esi
  int v5; // edi

  v3 = a1;
  DpiDependentMetric = GetDpiDependentMetric(29, a1);
  v5 = a2.right + 2 * (GetDpiDependentMetric(14, v3) + DpiDependentMetric) + 4 - a2.left;
  GetDpiDependentMetric(29, v3);
  GetDpiDependentMetric(15, v3);
  return v5;
}
