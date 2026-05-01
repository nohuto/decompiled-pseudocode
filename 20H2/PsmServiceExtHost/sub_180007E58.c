/*
 * XREFs of sub_180007E58 @ 0x180007E58
 * Callers:
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_180007C3C @ 0x180007C3C (sub_180007C3C.c)
 *     sub_180007CF8 @ 0x180007CF8 (sub_180007CF8.c)
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_18006B4F0 @ 0x18006B4F0 (sub_18006B4F0.c)
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007E58(__int64 a1, int a2, signed int a3)
{
  _QWORD *i; // r10
  __int64 v5; // rdx

  if ( a3 >= 2 )
    return 0LL;
  for ( i = (_QWORD *)(a1 + 8 * (a3 + 2LL * a3 + 139)); ; i += 3 )
  {
    if ( _bittest(&a2, a3) )
    {
      v5 = 0LL;
      if ( (_QWORD *)*i != i )
        v5 = *i - 1296LL;
      if ( v5 )
        break;
    }
    if ( ++a3 >= 2 )
      return 0LL;
  }
  return v5;
}
