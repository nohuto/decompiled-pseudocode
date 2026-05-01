/*
 * XREFs of sub_180036C9C @ 0x180036C9C
 * Callers:
 *     sub_180035E40 @ 0x180035E40 (sub_180035E40.c)
 * Callees:
 *     sub_18002486C @ 0x18002486C (sub_18002486C.c)
 */

__int64 __fastcall sub_180036C9C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *a2 == 54 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
LABEL_6:
    result = 0LL;
    goto LABEL_17;
  }
  v5 = a1 + 72;
  if ( *a2 == -1796592748 && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606
    || *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = v5;
    goto LABEL_6;
  }
  result = 2147500034LL;
LABEL_17:
  if ( (_DWORD)result == -2147467262 )
  {
    v6 = a1 + 160;
    if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
      || (v6 = a1 + 168, *a2 == -843714637) && a2[1] == 1352488840 && a2[2] == -864951909 && a2[3] == 708223928 )
    {
      *a3 = v6;
      return 0LL;
    }
    else
    {
      return sub_18002486C(a1 + 176, a2, a3);
    }
  }
  return result;
}
