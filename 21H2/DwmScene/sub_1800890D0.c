/*
 * XREFs of sub_1800890D0 @ 0x1800890D0
 * Callers:
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     sub_180087AC4 @ 0x180087AC4 (sub_180087AC4.c)
 * Callees:
 *     sub_1800855B4 @ 0x1800855B4 (sub_1800855B4.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800890D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *i; // rsi

  result = sub_18008933C(a1);
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = a1;
    do
    {
      sub_180089274(v3);
      v4 = *(_QWORD **)(v3 + 384);
      for ( i = *(_QWORD **)(v3 + 376); i != v4; i += 2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 128LL))(*i);
      *(_BYTE *)(v3 + 104) = 0;
      result = sub_1800855B4(a1, v3);
      v3 = result;
    }
    while ( result );
  }
  return result;
}
