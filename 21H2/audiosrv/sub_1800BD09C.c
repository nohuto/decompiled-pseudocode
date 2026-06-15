/*
 * XREFs of sub_1800BD09C @ 0x1800BD09C
 * Callers:
 *     sub_18000FE80 @ 0x18000FE80 (sub_18000FE80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800BD09C(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, void *, __int64))*a1)(*a1, &unk_18015DE88, a2) >= 0;
}
