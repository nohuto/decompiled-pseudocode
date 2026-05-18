/*
 * XREFs of sub_18008F520 @ 0x18008F520
 * Callers:
 *     sub_18008B3B8 @ 0x18008B3B8 (sub_18008B3B8.c)
 *     sub_18008B484 @ 0x18008B484 (sub_18008B484.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008F520(_QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (volatile signed __int32 *)v3[4];
      v5 = (_QWORD *)*v3;
      if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      j_j__o_free(v3);
      v3 = v5;
    }
    while ( v5 );
  }
  return j_j__o_free(*a1);
}
