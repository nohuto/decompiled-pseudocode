/*
 * XREFs of sub_180041F58 @ 0x180041F58
 * Callers:
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 *     sub_180041E9C @ 0x180041E9C (sub_180041E9C.c)
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 *     sub_180071DF0 @ 0x180071DF0 (sub_180071DF0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180041F58(_QWORD *a1, __int64 a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  *a1 = a2;
  return a2;
}
