/*
 * XREFs of sub_1800CDFEC @ 0x1800CDFEC
 * Callers:
 *     sub_180027860 @ 0x180027860 (sub_180027860.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_18004DDF0 @ 0x18004DDF0 (sub_18004DDF0.c)
 *     sub_1800CD878 @ 0x1800CD878 (sub_1800CD878.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 */

bool __fastcall sub_1800CDFEC(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = sub_1800CD4DC(a2, &v6);
  v3 = v6;
  v4 = v2 < 0 || !v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
