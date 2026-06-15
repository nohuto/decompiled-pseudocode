/*
 * XREFs of sub_1800524EC @ 0x1800524EC
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800524EC(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 v3; // rcx

  v1 = *a1;
  v3 = **a1;
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return *a1;
}
