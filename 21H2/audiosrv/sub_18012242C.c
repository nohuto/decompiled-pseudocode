/*
 * XREFs of sub_18012242C @ 0x18012242C
 * Callers:
 *     sub_180034FA0 @ 0x180034FA0 (sub_180034FA0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 */

__int64 __fastcall sub_18012242C(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( sub_180027D40(a2, &dword_18015B248) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_180027D40(v2, &qword_18015B840) )
    {
      *v7 = v9;
    }
    else if ( sub_180027D40(v6, &dword_18015BE10) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
