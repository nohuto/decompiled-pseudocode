/*
 * XREFs of sub_180034504 @ 0x180034504
 * Callers:
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180034200 @ 0x180034200 (sub_180034200.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180034504(__int64 a1, __int64 a2, int a3, char a4, char a5, _OWORD *a6, _OWORD *a7)
{
  HANDLE ProcessHeap; // rax
  _OWORD *v9; // rax
  HANDLE v10; // rax
  _OWORD *v11; // rax

  sub_180034200(a1, a2, a3, a4, a5);
  *(_QWORD *)a1 = off_18003F5D8;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( a6 )
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    if ( v9 )
      *v9 = *a6;
    *(_QWORD *)(a1 + 152) = v9;
    if ( !v9 )
      sub_18000A174(-2147024882);
  }
  if ( a7 )
  {
    v10 = GetProcessHeap();
    v11 = HeapAlloc(v10, 0, 0x10uLL);
    if ( v11 )
      *v11 = *a7;
    *(_QWORD *)(a1 + 160) = v11;
    if ( !v11 )
    {
      sub_180039D98(*(void **)(a1 + 152));
      *(_QWORD *)(a1 + 152) = 0LL;
      sub_18000A174(-2147024882);
    }
  }
  return a1;
}
