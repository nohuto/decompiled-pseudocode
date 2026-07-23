/*
 * XREFs of RtlpHpStackTraceAllocFindMapping @ 0x180108D88
 * Callers:
 *     RtlpHpStackTraceAllocRemove @ 0x180108E5C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801093C0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpStackTraceAllocFindMapping(__int64 a1, __int64 a2)
{
  int v2; // r11d
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 20) >> 5;
  v3 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v4 = 0LL;
  v5 = a2 & v3;
  if ( v2 )
  {
    v8 = a2 & v3;
    v6 = *(_QWORD *)(a1 + 24)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v5 + 11623883)))))))
         + HIBYTE(v8)) & (unsigned int)(v2 - 1));
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v5 == (v3 & *(_QWORD *)(v6 + 8)) )
        return v6;
    }
  }
  return v4;
}
