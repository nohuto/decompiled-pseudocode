/*
 * XREFs of sub_180104C90 @ 0x180104C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180104D08 @ 0x180104D08 (sub_180104D08.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180104C90(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  sub_180104D08(a1, a2, a3, a4, a5, a6);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)a1 + 32LL))(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
