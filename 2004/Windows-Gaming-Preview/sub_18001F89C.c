/*
 * XREFs of sub_18001F89C @ 0x18001F89C
 * Callers:
 *     sub_18001F210 @ 0x18001F210 (sub_18001F210.c)
 *     sub_18001F374 @ 0x18001F374 (sub_18001F374.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180020294 @ 0x180020294 (sub_180020294.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001F89C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  volatile signed __int64 *v5; // rcx

  v2 = *a1;
  v3 = *(__int64 **)(v2 + 8);
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      sub_180020294(a1, a1, v3[2]);
      v4 = v3;
      v3 = (__int64 *)*v3;
      v5 = (volatile signed __int64 *)v4[5];
      if ( v5 )
      {
        v4[5] = 0LL;
        sub_1800120A0(v5);
      }
      WindowsDeleteString((HSTRING)v4[4]);
      v4[4] = 0LL;
      j_j__o_free(v4, 48LL);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  return j_j__o_free(v2, 48LL);
}
