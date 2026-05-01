/*
 * XREFs of sub_180011E60 @ 0x180011E60
 * Callers:
 *     sub_18000CD00 @ 0x18000CD00 (sub_18000CD00.c)
 *     sub_18000E670 @ 0x18000E670 (sub_18000E670.c)
 *     sub_180010710 @ 0x180010710 (sub_180010710.c)
 *     sub_180019250 @ 0x180019250 (sub_180019250.c)
 *     sub_18001A0B0 @ 0x18001A0B0 (sub_18001A0B0.c)
 *     sub_180023D40 @ 0x180023D40 (sub_180023D40.c)
 *     sub_180025680 @ 0x180025680 (sub_180025680.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall sub_180011E60(__int64 a1)
{
  _DWORD *v1; // rdi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx

  v1 = 0LL;
  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v4 = v3;
  if ( v3 )
  {
    v5 = qword_18005ADB0;
    v3[3] = 1;
    *(_QWORD *)v3 = off_180048D60;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4[4] = 0x3FFFFFFF;
    *(_QWORD *)v4 = off_180048D88;
    v1 = v4;
    *((_QWORD *)v4 + 3) = a1;
    v4[3] = 2;
  }
  return v1;
}
