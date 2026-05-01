/*
 * XREFs of sub_1800704C8 @ 0x1800704C8
 * Callers:
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800704C8(__int64 a1, __int64 a2)
{
  _QWORD *i; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h]

  RtlAcquireSRWLockExclusive(a1 + 16);
  v6 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                     + 8LL
                     * ((37
                       * (BYTE6(v6)
                        + 37
                        * (BYTE5(v6)
                         + 37
                         * (BYTE4(v6)
                          + 37
                          * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                       + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)a2;
      --*(_DWORD *)a1;
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *(_DWORD *)(a2 + 24) |= 0x80000000;
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
