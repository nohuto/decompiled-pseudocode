/*
 * XREFs of sub_1800089D0 @ 0x1800089D0
 * Callers:
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000A19C @ 0x18000A19C (sub_18000A19C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800089D0(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = off_18003E198;
  *(_QWORD *)(a1 + 8) = off_18003E160;
  if ( qword_18004FE28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18004FE28 + 8LL))(qword_18004FE28);
  *(_QWORD *)a1 = off_18003E788;
  *(_QWORD *)(a1 + 8) = off_18003E750;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_18000A19C(a1 + 72);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 176), 0, 0);
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  v2 = (_QWORD *)sub_180009F20(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 224) = v2;
  v3 = v2;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  v4 = (_QWORD *)sub_180009F20(0x80uLL);
  *(_QWORD *)(a1 + 240) = v4;
  *(_QWORD *)(a1 + 256) = v4 + 16;
  v5 = 16LL;
  do
  {
    *v4++ = v3;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 248) = v4;
  *(_QWORD *)(a1 + 264) = 7LL;
  *(_QWORD *)(a1 + 272) = 8LL;
  *(_DWORD *)(a1 + 216) = 1065353216;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_BYTE *)(a1 + 360) = 0;
  Mtx_init_in_situ((_Mtx_t)(a1 + 368), 2);
  *(_DWORD *)(a1 + 288) = 3;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 1;
  *(_DWORD *)(a1 + 352) = 72;
  *(_DWORD *)(a1 + 448) = 2;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_DWORD *)(a1 + 488) = 0;
  return a1;
}
