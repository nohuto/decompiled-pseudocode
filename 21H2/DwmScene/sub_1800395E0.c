/*
 * XREFs of sub_1800395E0 @ 0x1800395E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DE90 @ 0x18006DE90 (sub_18006DE90.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800395E0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_18006DE90();
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}
