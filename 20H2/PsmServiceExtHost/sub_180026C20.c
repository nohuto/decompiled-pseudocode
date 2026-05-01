/*
 * XREFs of sub_180026C20 @ 0x180026C20
 * Callers:
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180026B84 @ 0x180026B84 (sub_180026B84.c)
 *     sub_180027DE0 @ 0x180027DE0 (sub_180027DE0.c)
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_1800646F4 @ 0x1800646F4 (sub_1800646F4.c)
 *     sub_180079F98 @ 0x180079F98 (sub_180079F98.c)
 *     sub_180085180 @ 0x180085180 (sub_180085180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026C20(_WORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // r8
  __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - (_QWORD)a1;
      while ( v4 + a2 )
      {
        v6 = *(_WORD *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        if ( !--a2 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      --a1;
      v3 = -2147024774;
    }
  }
  *a1 = 0;
  return (unsigned int)v3;
}
