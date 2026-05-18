/*
 * XREFs of sub_18008709C @ 0x18008709C
 * Callers:
 *     sub_18008E204 @ 0x18008E204 (sub_18008E204.c)
 * Callees:
 *     sub_18008713C @ 0x18008713C (sub_18008713C.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008709C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbp
  _QWORD *i; // rbx
  __int64 result; // rax

  sub_180089274(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = 196608LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x30000) == 0x30000 )
    sub_18008713C(a1, a2, a3, a4);
  return result;
}
