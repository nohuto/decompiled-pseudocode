/*
 * XREFs of LW_BrushInit @ 0x1C005F890
 * Callers:
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*LW_BrushInit())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0251CA8;
  if ( qword_1C0251CA8 )
    return (__int64 (*)(void))qword_1C0251CA8();
  return result;
}
