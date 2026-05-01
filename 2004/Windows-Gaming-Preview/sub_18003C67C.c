/*
 * XREFs of sub_18003C67C @ 0x18003C67C
 * Callers:
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 *     sub_18003C410 @ 0x18003C410 (sub_18003C410.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C67C(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( *a2 == 53 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || (a1 += 8LL, *a2 == -1796592748) && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606 )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
    result = 0LL;
  }
  else
  {
    if ( *a2 == 1850792316 && a2[1] == 1200514794 && a2[2] == 2096472484 && a2[3] == -419394290 )
    {
      *a3 = a1 + 32;
      return 0LL;
    }
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
    return 2147500034LL;
  return result;
}
