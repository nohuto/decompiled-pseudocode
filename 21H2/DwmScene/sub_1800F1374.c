/*
 * XREFs of sub_1800F1374 @ 0x1800F1374
 * Callers:
 *     sub_1800F1B44 @ 0x1800F1B44 (sub_1800F1B44.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F2600 @ 0x1800F2600 (sub_1800F2600.c)
 *     sub_1800F50A8 @ 0x1800F50A8 (sub_1800F50A8.c)
 * Callees:
 *     sub_1800F13F8 @ 0x1800F13F8 (sub_1800F13F8.c)
 *     memset @ 0x18012396A (memset.c)
 */

unsigned __int64 __fastcall sub_1800F1374(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rbx

  v2 = (char *)a1[1];
  v5 = *a1;
  v6 = (__int64)&v2[-*a1] >> 2;
  if ( a2 >= v6 )
  {
    if ( a2 > v6 )
    {
      result = (a1[2] - v5) >> 2;
      if ( a2 <= result )
      {
        v8 = a2 - v6;
        if ( v8 )
        {
          result = (unsigned __int64)memset(v2, 0, 4 * v8);
          v2 += 4 * v8;
        }
        a1[1] = (__int64)v2;
      }
      else
      {
        return sub_1800F13F8(a1, a2);
      }
    }
  }
  else
  {
    result = v5 + 4 * a2;
    a1[1] = result;
  }
  return result;
}
