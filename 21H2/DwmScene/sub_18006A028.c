/*
 * XREFs of sub_18006A028 @ 0x18006A028
 * Callers:
 *     sub_18006AEF0 @ 0x18006AEF0 (sub_18006AEF0.c)
 *     sub_18006B074 @ 0x18006B074 (sub_18006B074.c)
 * Callees:
 *     sub_18006A14C @ 0x18006A14C (sub_18006A14C.c)
 *     sub_18006B43C @ 0x18006B43C (sub_18006B43C.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006A028(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v4 = *a1;
  v5 = *(__int64 **)(v4 + 8);
  if ( !*((_BYTE *)v5 + 25) )
  {
    do
    {
      sub_18006A14C(a1, a2, v5[2]);
      v6 = v5;
      v5 = (__int64 *)*v5;
      sub_18006B43C(v6 + 4, 0LL);
      j_j__o_free(v6);
    }
    while ( !*((_BYTE *)v5 + 25) );
    v4 = *a1;
  }
  return j_j__o_free(v4);
}
