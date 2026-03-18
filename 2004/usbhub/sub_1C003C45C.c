/*
 * XREFs of sub_1C003C45C @ 0x1C003C45C
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C0041890 @ 0x1C0041890 (sub_1C0041890.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003C45C(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax

  v5 = sub_1C000F050(a1);
  if ( *((_QWORD *)v5 + 545) )
    return (*((__int64 (__fastcall **)(_QWORD, __int64, __int64))v5 + 545))(*((_QWORD *)v5 + 529), a2, a3);
  else
    return 3221225474LL;
}
