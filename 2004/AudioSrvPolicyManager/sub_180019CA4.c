/*
 * XREFs of sub_180019CA4 @ 0x180019CA4
 * Callers:
 *     sub_180018308 @ 0x180018308 (sub_180018308.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180019CA4(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_18003E828;
  if ( qword_18004FE28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18004FE28 + 8LL))(qword_18004FE28);
  *(_QWORD *)a1 = off_18003EE88;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v2 = sub_180009F20(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 64) = v2;
  v3 = v2;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v4 = sub_180009F20(0x80uLL);
  *(_QWORD *)(a1 + 80) = v4;
  *(_QWORD *)(a1 + 96) = v4 + 16;
  v5 = 16LL;
  do
  {
    *v4++ = v3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_QWORD *)(a1 + 112) = 8LL;
  *(_DWORD *)(a1 + 56) = 1065353216;
  return a1;
}
