/*
 * XREFs of sub_18003C93C @ 0x18003C93C
 * Callers:
 *     sub_18003C9B0 @ 0x18003C9B0 (sub_18003C9B0.c)
 * Callees:
 *     sub_18003CA2C @ 0x18003CA2C (sub_18003CA2C.c)
 */

__int64 __fastcall sub_18003C93C(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10
  _QWORD *v9; // r8
  __int64 v10; // r10

  if ( (unsigned int)sub_18003CA2C(a2, &xmmword_180095B68) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)sub_18003CA2C(v2, &xmmword_180095B48) )
    {
      *v6 = v8;
    }
    else if ( (unsigned int)sub_18003CA2C(v5, &xmmword_180095B38) )
    {
      *v9 = v10 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
