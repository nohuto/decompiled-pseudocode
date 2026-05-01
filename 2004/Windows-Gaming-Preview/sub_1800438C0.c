/*
 * XREFs of sub_1800438C0 @ 0x1800438C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043A60 @ 0x180043A60 (sub_180043A60.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800438C0(
        __int64 (__fastcall ***a1)(_QWORD, __int64, _QWORD *),
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = sub_180043A60(a1, 0LL, a2);
  if ( (int)result >= 0 )
    return (**a1)(a1, a3, a4);
  return result;
}
