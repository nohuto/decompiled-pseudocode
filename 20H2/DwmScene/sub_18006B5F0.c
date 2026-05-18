/*
 * XREFs of sub_18006B5F0 @ 0x18006B5F0
 * Callers:
 *     sub_180025C30 @ 0x180025C30 (sub_180025C30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006B5F0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  return sub_1800D06C0(*v2);
}
