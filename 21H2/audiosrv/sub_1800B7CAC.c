/*
 * XREFs of sub_1800B7CAC @ 0x1800B7CAC
 * Callers:
 *     sub_1800B8270 @ 0x1800B8270 (sub_1800B8270.c)
 * Callees:
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7F64 @ 0x1800B7F64 (sub_1800B7F64.c)
 */

__int64 (**__fastcall sub_1800B7CAC(__int64 a1))(void)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 (**result)(void); // rax

  *(_QWORD *)a1 = &off_180148DB0;
  *(_QWORD *)(a1 + 72) = &off_180148D70;
  *(_QWORD *)(a1 + 80) = off_180148D60;
  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 88);
  if ( v2 )
    (**v2)(v2, 1LL);
  *(_QWORD *)(a1 + 88) = 0LL;
  sub_1800B7F64(a1 + 376);
  sub_1800B7F64(a1 + 208);
  sub_1800356E8(a1 + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 112));
  result = off_18014A080;
  *(_QWORD *)a1 = off_18014A080;
  return result;
}
