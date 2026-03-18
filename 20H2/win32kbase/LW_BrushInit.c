/*
 * XREFs of LW_BrushInit @ 0x1C00BFBB0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*LW_BrushInit())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024FCA8;
  if ( qword_1C024FCA8 )
    return (__int64 (*)(void))qword_1C024FCA8();
  return result;
}
