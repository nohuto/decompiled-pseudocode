/*
 * XREFs of sub_180007130 @ 0x180007130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AFC0 @ 0x18000AFC0 (sub_18000AFC0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007130(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rcx

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 32) || (result = sub_18000AFC0(), (int)result >= 0) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( v9 )
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v9 + 16) + 56LL))(
               v9 + 16,
               a2,
               a3,
               a4);
  }
  return result;
}
