/*
 * XREFs of ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C00230E4
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C002307C (GetMaxTrackSizeForWindow.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 */

struct tagSIZE __fastcall ComputeMaxTrackSize(struct tagRECT *a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // edi
  int DpiDependentMetric; // ebx
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // r8
  __int64 v11; // [rsp+30h] [rbp+8h]

  v3 = a2;
  DpiDependentMetric = GetDpiDependentMetric(29LL, a2, a3);
  v7 = DpiDependentMetric + (unsigned int)GetDpiDependentMetric(14LL, v3, v6) + 2;
  LODWORD(v11) = a1->right + 2 * v7 - a1->left;
  v8 = GetDpiDependentMetric(29LL, v3, v7);
  HIDWORD(v11) = a1->bottom + 2 * (v8 + GetDpiDependentMetric(15LL, v3, v9)) + 4 - a1->top;
  return (struct tagSIZE)v11;
}
