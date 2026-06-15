/*
 * XREFs of sub_180047278 @ 0x180047278
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC (-getZName@UnDecorator@@CA-AVDName@@_N0@Z.c)
 *     sub_180038A00 @ 0x180038A00 (sub_180038A00.c)
 *     sub_180072E14 @ 0x180072E14 (sub_180072E14.c)
 *     sub_180073800 @ 0x180073800 (sub_180073800.c)
 *     sub_18007D190 @ 0x18007D190 (sub_18007D190.c)
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 *     sub_1800D74D0 @ 0x1800D74D0 (sub_1800D74D0.c)
 *     sub_1800D8D90 @ 0x1800D8D90 (sub_1800D8D90.c)
 *     sub_1800D8E00 @ 0x1800D8E00 (sub_1800D8E00.c)
 *     sub_180126598 @ 0x180126598 (sub_180126598.c)
 *     sub_180126864 @ 0x180126864 (sub_180126864.c)
 *     sub_1801269B0 @ 0x1801269B0 (sub_1801269B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180047278(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
