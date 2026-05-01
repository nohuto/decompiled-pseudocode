/*
 * XREFs of sub_18001F930 @ 0x18001F930
 * Callers:
 *     sub_18001F210 @ 0x18001F210 (sub_18001F210.c)
 *     sub_1800467D3 @ 0x1800467D3 (sub_1800467D3.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001F930(volatile signed __int64 ***a1)
{
  volatile signed __int64 **v1; // rbx
  volatile signed __int64 **v3; // rbp
  volatile signed __int64 **v4; // rdi
  volatile signed __int64 *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          sub_1800120A0(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    v6 = ((char *)a1[2] - (char *)v1) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = (__int64)*(v1 - 1);
      v6 += 39LL;
      if ( (unsigned __int64)v1 - v7 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        __debugbreak();
        JUMPOUT(0x18001F9DALL);
      }
      v1 = (volatile signed __int64 **)*(v1 - 1);
    }
    result = j_j__o_free(v1, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
