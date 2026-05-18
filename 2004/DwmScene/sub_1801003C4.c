/*
 * XREFs of sub_1801003C4 @ 0x1801003C4
 * Callers:
 *     sub_1800FED28 @ 0x1800FED28 (sub_1800FED28.c)
 *     sub_1800FEFCC @ 0x1800FEFCC (sub_1800FEFCC.c)
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 * Callees:
 *     sub_1800FD7F8 @ 0x1800FD7F8 (sub_1800FD7F8.c)
 */

unsigned __int64 __fastcall sub_1801003C4(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 result; // rax
  unsigned __int64 i; // rdx

  v2 = a1[1];
  v3 = (v2 - *a1) >> 4;
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      result = (a1[2] - *a1) >> 4;
      if ( a2 <= result )
      {
        for ( i = a2 - v3; i; --i )
        {
          *(_QWORD *)v2 = 0LL;
          *(_DWORD *)(v2 + 8) = 0;
          *(_DWORD *)(v2 + 12) = 1065353216;
          v2 += 16LL;
        }
        a1[1] = v2;
      }
      else
      {
        return sub_1800FD7F8(a1, a2);
      }
    }
  }
  else
  {
    a1[1] = *a1 + 16 * a2;
  }
  return result;
}
