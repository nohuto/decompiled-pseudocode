/*
 * XREFs of sub_180010974 @ 0x180010974
 * Callers:
 *     sub_180010A90 @ 0x180010A90 (sub_180010A90.c)
 * Callees:
 *     sub_1800108DC @ 0x1800108DC (sub_1800108DC.c)
 */

__int64 __fastcall sub_180010974(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r9

  if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_9;
  a1 += 8LL;
  if ( *a2 == -666202229 && a2[1] == 1243973449 && a2[2] == -973679728 && a2[3] == 1837639588 )
    goto LABEL_9;
  a1 += 8LL;
  if ( *a2 == 1426958011 && a2[1] == 1338139691 && a2[2] == 1202063538 && a2[3] == -476019267 )
    goto LABEL_9;
  result = sub_1800108DC(a1 + 8, a2, a3);
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
  if ( (_DWORD)result == -2147467262 )
  {
    a1 = v5 + 64;
    if ( (*v4 != -1796592748 || v4[1] != 1239476684 || v4[2] != 1693384640 || v4[3] != -1873047606)
      && (*v4 != 3 || v4[1] || v4[2] != 192 || v4[3] != 1174405120) )
    {
      return 2147500034LL;
    }
LABEL_9:
    *a3 = a1;
    return 0LL;
  }
  return result;
}
