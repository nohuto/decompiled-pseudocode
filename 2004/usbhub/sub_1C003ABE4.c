/*
 * XREFs of sub_1C003ABE4 @ 0x1C003ABE4
 * Callers:
 *     sub_1C001890C @ 0x1C001890C (sub_1C001890C.c)
 *     sub_1C0037D08 @ 0x1C0037D08 (sub_1C0037D08.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003ABE4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, __int64, __int64, __int64, __int64, __int64); // r10

  v9 = sub_1C000F050(a1);
  v10 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64))*((_QWORD *)v9 + 534);
  if ( v10 )
    return v10(*((_QWORD *)v9 + 529), a2, a3, a4, a5, a6);
  else
    return 3221225474LL;
}
