/*
 * XREFs of sub_1800817CC @ 0x1800817CC
 * Callers:
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 * Callees:
 *     sub_18008186C @ 0x18008186C (sub_18008186C.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800817CC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbp
  _QWORD *i; // rbx
  __int64 result; // rax

  sub_1800839A4(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = 196608LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x30000) == 0x30000 )
    sub_18008186C(a1, a2, a3, a4);
  return result;
}
