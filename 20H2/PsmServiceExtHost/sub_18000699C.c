/*
 * XREFs of sub_18000699C @ 0x18000699C
 * Callers:
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000699C(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rdx
  __int64 v4; // [rsp+38h] [rbp+10h]

  if ( !a2[69] )
  {
    v4 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 2548) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 2552)
                       + 8LL
                       * ((37
                         * (BYTE6(v4)
                          + 37
                          * (BYTE5(v4)
                           + 37
                           * (BYTE4(v4)
                            + 37
                            * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
                         + HIBYTE(v4)) & (unsigned int)((*(_DWORD *)(a1 + 2548) >> 5) - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)(a1 + 2544);
        *a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
