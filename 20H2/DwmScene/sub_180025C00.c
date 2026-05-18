/*
 * XREFs of sub_180025C00 @ 0x180025C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025C00(__int64 a1)
{
  sub_18006187C(a1 + 24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return sub_18006B450(a1);
}
