/*
 * XREFs of sub_18002C26C @ 0x18002C26C
 * Callers:
 *     sub_180017B10 @ 0x180017B10 (sub_180017B10.c)
 *     sub_1800183C0 @ 0x1800183C0 (sub_1800183C0.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_18002B0A0 @ 0x18002B0A0 (sub_18002B0A0.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_1800C63BC @ 0x1800C63BC (sub_1800C63BC.c)
 *     sub_1800D50E8 @ 0x1800D50E8 (sub_1800D50E8.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002C26C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi

  v2 = *a1 - 24LL;
  v3 = *(_QWORD *)v2;
  if ( *(_DWORD *)(v2 + 8) )
  {
    if ( *(int *)(v2 + 16) >= 0 )
    {
      sub_180006A30((volatile signed __int32 *)v2);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) + 24;
    }
    else
    {
      sub_1800448E4(a1, 0LL);
    }
  }
}
