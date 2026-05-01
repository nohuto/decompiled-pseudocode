/*
 * XREFs of sub_180020294 @ 0x180020294
 * Callers:
 *     sub_18001F89C @ 0x18001F89C (sub_18001F89C.c)
 *     sub_180020294 @ 0x180020294 (sub_180020294.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180020294 @ 0x180020294 (sub_180020294.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180020294(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int64 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6, 48LL) )
  {
    sub_180020294(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = (volatile signed __int64 *)v6[5];
    if ( v7 )
    {
      v6[5] = 0LL;
      sub_1800120A0(v7);
    }
    WindowsDeleteString((HSTRING)v6[4]);
    v6[4] = 0LL;
  }
  return result;
}
