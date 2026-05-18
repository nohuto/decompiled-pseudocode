/*
 * XREFs of sub_1800731C0 @ 0x1800731C0
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 * Callees:
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_1800E4264 @ 0x1800E4264 (sub_1800E4264.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800731C0(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_1800752B4(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180208BD0, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_180208BF0, 0LL);
  if ( v3 && v4 )
    sub_1800759EC(a1);
  sub_1800E4264(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800E3F08(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}
