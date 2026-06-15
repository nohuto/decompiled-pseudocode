/*
 * XREFs of sub_18000F3E8 @ 0x18000F3E8
 * Callers:
 *     sub_18000F494 @ 0x18000F494 (sub_18000F494.c)
 *     sub_18002D3E8 @ 0x18002D3E8 (sub_18002D3E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18000F3E8(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, char *); // rcx

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = off_18003EDD0;
    *((_QWORD *)v5 + 9) = 0LL;
    v7 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
    if ( v7 )
      *((_QWORD *)v5 + 9) = (**v7)(v7, (char *)v5 + 16);
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6 + 4;
  a1[1] = v6;
  return a1;
}
