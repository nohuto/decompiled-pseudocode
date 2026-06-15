/*
 * XREFs of sub_1800CDF74 @ 0x1800CDF74
 * Callers:
 *     sub_1800CE248 @ 0x1800CE248 (sub_1800CE248.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_1 @ 0x1800CE364 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurren_ea_1800CE364.c)
 *     sub_1800CE420 @ 0x1800CE420 (sub_1800CE420.c)
 *     sub_1800CF570 @ 0x1800CF570 (sub_1800CF570.c)
 *     sub_1800CF702 @ 0x1800CF702 (sub_1800CF702.c)
 *     sub_1800CFE30 @ 0x1800CFE30 (sub_1800CFE30.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA_2 @ 0x1800CFF11 (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurren_ea_1800CFF11.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CDF74(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
