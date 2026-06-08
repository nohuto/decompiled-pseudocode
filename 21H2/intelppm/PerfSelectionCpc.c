/*
 * XREFs of PerfSelectionCpc @ 0x1C0009A60
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0009AC0 (PerformanceFromPercentage.c)
 */

__int64 __fastcall PerfSelectionCpc(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int64 a9)
{
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // r9
  unsigned __int64 v13; // rdx

  v9 = a3;
  if ( a2 >= a3 )
    v9 = a2;
  if ( v9 > a4 )
    v9 = a4;
  if ( a9 )
  {
    v10 = PerformanceFromPercentage(a1, v9);
    *v12 = v10;
    v13 = *(_QWORD *)(v11 + 56);
    if ( v10 < v13 )
      v13 = v10;
    if ( a8 )
      *a8 = v13 * *(unsigned int *)(v11 + 64) / *(_QWORD *)(v11 + 16);
  }
  return v9;
}
