/*
 * XREFs of sub_180105C94 @ 0x180105C94
 * Callers:
 *     sub_1801045F8 @ 0x1801045F8 (sub_1801045F8.c)
 *     sub_18010489C @ 0x18010489C (sub_18010489C.c)
 *     sub_180104B4C @ 0x180104B4C (sub_180104B4C.c)
 *     sub_18010510C @ 0x18010510C (sub_18010510C.c)
 * Callees:
 *     sub_1801030C8 @ 0x1801030C8 (sub_1801030C8.c)
 */

unsigned __int64 __fastcall sub_180105C94(__int64 *a1, unsigned __int64 a2)
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
        return sub_1801030C8(a1, a2);
      }
    }
  }
  else
  {
    a1[1] = *a1 + 16 * a2;
  }
  return result;
}
