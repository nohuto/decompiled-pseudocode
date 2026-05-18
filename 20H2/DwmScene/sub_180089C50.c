/*
 * XREFs of sub_180089C50 @ 0x180089C50
 * Callers:
 *     sub_180085AE8 @ 0x180085AE8 (sub_180085AE8.c)
 *     sub_180085BB4 @ 0x180085BB4 (sub_180085BB4.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180089C50(_QWORD *a1)
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
