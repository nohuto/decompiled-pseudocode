/*
 * XREFs of sub_180078A90 @ 0x180078A90
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_1800E9B34 @ 0x1800E9B34 (sub_1800E9B34.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180078A90(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_18007AB84(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_18020FC48, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_18020FC68, 0LL);
  if ( v3 && v4 )
    sub_18007B2BC(a1);
  sub_1800E9B34(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800E97D8(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}
