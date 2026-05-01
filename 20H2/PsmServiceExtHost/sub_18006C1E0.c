/*
 * XREFs of sub_18006C1E0 @ 0x18006C1E0
 * Callers:
 *     sub_18006BD88 @ 0x18006BD88 (sub_18006BD88.c)
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_18006C1E0(__int64 a1, void *a2)
{
  _QWORD *i; // rdx
  __int64 v5; // [rsp+38h] [rbp+10h]

  if ( *((_QWORD *)a2 + 2) )
  {
    v5 = *((_QWORD *)a2 + 1) & (-1LL << (*(_DWORD *)(a1 + 76) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 80)
                       + 8LL
                       * ((37
                         * (BYTE6(v5)
                          + 37
                          * (BYTE5(v5)
                           + 37
                           * (BYTE4(v5)
                            + 37
                            * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))
                         + HIBYTE(v5)) & (unsigned int)((*(_DWORD *)(a1 + 76) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (void *)*i == a2 )
      {
        *i = *(_QWORD *)a2;
        --*(_DWORD *)(a1 + 72);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    NtClose(*((HANDLE *)a2 + 2));
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
}
