/*
 * XREFs of sub_1800F23D8 @ 0x1800F23D8
 * Callers:
 *     sub_1800F24B0 @ 0x1800F24B0 (sub_1800F24B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_1800F4C54 @ 0x1800F4C54 (sub_1800F4C54.c)
 *     sub_1800F503C @ 0x1800F503C (sub_1800F503C.c)
 */

__int64 (__fastcall **__fastcall sub_1800F23D8(__int64 a1))()
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)a1 = &off_1801479B0;
  sub_1800F503C();
  sub_1800F4C54(a1 + 272);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 232));
  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_1800BC578((__int64 *)(a1 + 160));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v3 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v3 )
    (**v3)(v3, 1LL);
  *(_QWORD *)(a1 + 16) = 0LL;
  result = &off_180147338;
  *(_QWORD *)a1 = &off_180147338;
  return result;
}
