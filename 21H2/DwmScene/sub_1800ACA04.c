/*
 * XREFs of sub_1800ACA04 @ 0x1800ACA04
 * Callers:
 *     sub_1800AB57C @ 0x1800AB57C (sub_1800AB57C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800ACA04(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx

  if ( a1 == a2 )
    return 1;
  v4 = (_QWORD *)(a3 + 16);
  v5 = (__int64)a1 - a3;
  while ( *(_QWORD *)((char *)v4 + v5 - 8) == *(v4 - 1)
       && *(_QWORD *)((char *)v4 + v5) == *v4
       && *(_QWORD *)((char *)v4 + v5 + 8) == v4[1]
       && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)((char *)v4 + v5 + 16) + 16LL))(
            *(_QWORD *)((char *)v4 + v5 + 16),
            v4[2]) )
  {
    v4 += 6;
    if ( (_QWORD *)((char *)v4 + v5 - 16) == a2 )
      return 1;
  }
  return 0;
}
