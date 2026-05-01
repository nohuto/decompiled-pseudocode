/*
 * XREFs of sub_1800380EC @ 0x1800380EC
 * Callers:
 *     sub_1800381F0 @ 0x1800381F0 (sub_1800381F0.c)
 * Callees:
 *     sub_1800108DC @ 0x1800108DC (sub_1800108DC.c)
 */

__int64 __fastcall sub_1800380EC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  bool v8; // zf

  if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || (a1 += 8LL, *a2 == 1935221971) && a2[1] == 1150583071 && a2[2] == 1103535286 && a2[3] == 1125500576 )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -666202229 && a2[1] == 1243973449 && a2[2] == -973679728 && a2[3] == 1837639588 )
  {
    *a3 = a1 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    result = sub_1800108DC(a1 + 24, a2, a3);
    v8 = (_DWORD)result == v7;
    if ( (_DWORD)result == v7 )
    {
      if ( *v4 == 324 && !v4[1] && v4[2] == 192 && v4[3] == 1174405120 )
      {
        *v5 = v6 + 56;
        return 0LL;
      }
      result = v7;
      v8 = 1;
    }
    if ( v8 )
      return v7;
  }
  return result;
}
