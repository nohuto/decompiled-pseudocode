/*
 * XREFs of sub_1800D19BC @ 0x1800D19BC
 * Callers:
 *     sub_1800D1B48 @ 0x1800D1B48 (sub_1800D1B48.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D19BC(__int64 a1))()
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 (__fastcall **result)(); // rax

  sub_18005262C((void **)(a1 + 320));
  sub_18005262C((void **)(a1 + 312));
  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 )
  {
    sub_1800583E4(*(__int64 **)(a1 + 272), *(__int64 **)(a1 + 280));
    sub_1800472E0(v2, (*(_QWORD *)(a1 + 288) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  sub_18000F708((__int64 *)(a1 + 200));
  sub_18000F708((__int64 *)(a1 + 192));
  sub_18000F708((__int64 *)(a1 + 184));
  sub_18000F708((__int64 *)(a1 + 176));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v5 = *(void **)(a1 + 120);
  if ( v5 )
    sub_180033A70(v5);
  v6 = *(void **)(a1 + 112);
  if ( v6 )
    sub_180033A70(v6);
  sub_18000F708((__int64 *)(a1 + 80));
  sub_18000F708((__int64 *)(a1 + 64));
  result = &off_180147338;
  *(_QWORD *)(a1 + 32) = &off_180147338;
  return result;
}
