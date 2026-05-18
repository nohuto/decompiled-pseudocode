/*
 * XREFs of sub_18007E1E8 @ 0x18007E1E8
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E1E8(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_18007AB84(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &unk_18020FC28, 0LL);
  if ( (_BYTE)result )
    sub_18007B2BC();
  return result;
}
