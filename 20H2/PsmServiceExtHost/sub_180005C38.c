/*
 * XREFs of sub_180005C38 @ 0x180005C38
 * Callers:
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 * Callees:
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 */

__int64 __fastcall sub_180005C38(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rdx
  _QWORD *v4; // r10
  _QWORD *j; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h]
  __int64 v8; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockExclusive(v1 + 32);
  v7 = *(_QWORD *)(a1 + 8) & (-1LL << (*(_DWORD *)(v1 + 20) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v1 + 24)
                     + 8LL
                     * ((37
                       * (BYTE6(v7)
                        + 37
                        * (BYTE5(v7)
                         + 37
                         * (BYTE4(v7)
                          + 37
                          * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                       + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v1 + 20) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
  {
    if ( *i == a1 )
    {
      *i = *(_QWORD *)a1;
      --*(_DWORD *)(v1 + 16);
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
  }
  *(_DWORD *)(a1 + 24) |= 0x80000000;
  v4 = (_QWORD *)(a1 + 1392);
  v8 = *(_QWORD *)(a1 + 1400) & (-1LL << (*(_DWORD *)(v1 + 2532) & 0x1F));
  for ( j = (_QWORD *)(*(_QWORD *)(v1 + 2536)
                     + 8LL
                     * ((37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                       + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v1 + 2532) >> 5) - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
  {
    if ( (_QWORD *)*j == v4 )
    {
      *j = *v4;
      --*(_DWORD *)(v1 + 2528);
      *v4 |= 0x8000000000000002uLL;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(v1 + 32);
  result = sub_180005EAC(a1 + 64);
  if ( *(_QWORD *)(a1 + 1200) )
    return sub_180005E50(a1);
  return result;
}
