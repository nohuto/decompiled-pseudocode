/*
 * XREFs of sub_1800240B4 @ 0x1800240B4
 * Callers:
 *     sub_180021370 @ 0x180021370 (sub_180021370.c)
 * Callees:
 *     sub_18002486C @ 0x18002486C (sub_18002486C.c)
 */

__int64 __fastcall sub_1800240B4(__int64 a1, _DWORD *a2, _QWORD *a3)
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
      || (v6 = a1 + 168, *a2 == 935113442) && a2[1] == 1448647791 && a2[2] == 686635940 && a2[3] == 1485049086 )
    {
      *a3 = v6;
      return 0LL;
    }
    else
    {
      return sub_18002486C(a1 + 176);
    }
  }
  return result;
}
