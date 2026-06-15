/*
 * XREFs of sub_180104244 @ 0x180104244
 * Callers:
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FE430 @ 0x1800FE430 (sub_1800FE430.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 *     sub_1800FF8CC @ 0x1800FF8CC (sub_1800FF8CC.c)
 *     sub_1801004FC @ 0x1801004FC (sub_1801004FC.c)
 *     sub_180100A10 @ 0x180100A10 (sub_180100A10.c)
 *     sub_1801024B0 @ 0x1801024B0 (sub_1801024B0.c)
 *     sub_180102594 @ 0x180102594 (sub_180102594.c)
 *     sub_18010274C @ 0x18010274C (sub_18010274C.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_18010046C @ 0x18010046C (sub_18010046C.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180104244(__int64 a1)
{
  _UNKNOWN **v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v6; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v7; // [rsp+30h] [rbp-10h] BYREF
  char v8; // [rsp+38h] [rbp-8h]

  v7 = (LPCRITICAL_SECTION)(a1 + 16);
  v8 = 0;
  sub_180057764((__int64)&v7);
  v2 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Eu, (__int64)&unk_1801726D0, a1);
    v2 = (_UNKNOWN **)off_18019C348;
  }
  if ( *(_DWORD *)(a1 + 56) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 88LL))(*(_QWORD *)(a1 + 80));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 88LL))(*(_QWORD *)(a1 + 184));
    lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 400);
    v6 = 0;
    sub_180057764((__int64)&lpCriticalSection);
    while ( *(_QWORD *)(a1 + 320) )
    {
      v3 = (_QWORD *)sub_180103778((__int64 *)(a1 + 304));
      if ( v3 )
        sub_18010046C(v3);
    }
    while ( *(_QWORD *)(a1 + 368) )
    {
      v4 = (_QWORD *)sub_180103778((__int64 *)(a1 + 352));
      if ( v4 )
        sub_18010046C(v4);
    }
    if ( v6 )
      LeaveCriticalSection(lpCriticalSection);
    *(_DWORD *)(a1 + 56) = 4;
  }
  else if ( v2 != &off_18019C348 && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
  {
    sub_1800BD7DC((__int64)v2[2], 0x3Fu, (__int64)&unk_1801726D0, a1);
  }
  if ( v8 )
    LeaveCriticalSection(v7);
}
