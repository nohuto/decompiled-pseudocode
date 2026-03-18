/*
 * XREFs of sub_1C002DF88 @ 0x1C002DF88
 * Callers:
 *     sub_1C002C0A0 @ 0x1C002C0A0 (sub_1C002C0A0.c)
 *     sub_1C003DAA8 @ 0x1C003DAA8 (sub_1C003DAA8.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C002DF88(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int64 (__fastcall *v9)(_QWORD, __int64, __int64, _QWORD, __int64); // r10

  v8 = sub_1C000F050(a1);
  v9 = (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64))*((_QWORD *)v8 + 538);
  if ( v9 )
    return v9(*((_QWORD *)v8 + 529), a2, a3, a4, a5);
  else
    return 3221225474LL;
}
