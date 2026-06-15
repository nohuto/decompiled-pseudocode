/*
 * XREFs of sub_180052B8C @ 0x180052B8C
 * Callers:
 *     sub_180052D54 @ 0x180052D54 (sub_180052D54.c)
 *     sub_1800671EC @ 0x1800671EC (sub_1800671EC.c)
 *     sub_180107298 @ 0x180107298 (sub_180107298.c)
 * Callees:
 *     sub_180052B24 @ 0x180052B24 (sub_180052B24.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180052B8C(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  __int64 v6; // rcx

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  v6 = 0LL;
  if ( v5 )
    v6 = sub_180052B24((__int64)v5, a2);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
