/*
 * XREFs of _RtlpPopulateListIndex@8 @ 0x4B2B19E4
 * Callers:
 *     @RtlpExtendListLookup@12 @ 0x4B2B12B3 (@RtlpExtendListLookup@12.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 */

_DWORD *__fastcall RtlpPopulateListIndex(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  unsigned __int16 *v5; // edi
  unsigned int v6; // edx
  _DWORD *v7; // eax
  bool i; // cf
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // edx
  _DWORD *v15; // [esp+10h] [ebp-10h]
  _DWORD *v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-Ch]
  _DWORD *v18; // [esp+18h] [ebp-8h]
  _DWORD *v19; // [esp+1Ch] [ebp-4h]

  v18 = a1;
  a1[45] = a2;
  if ( *a2 )
  {
    v11 = a2[1] - a2[5];
    v12 = 8 * v11 - 8;
    if ( !a2[2] )
      v12 = 4 * v11 - 4;
    *(_DWORD *)(v12 + a2[8]) = 0;
    v13 = a2[7];
    v14 = a2[1] - a2[5] - 1;
    *(_DWORD *)(v13 + 4 * (v14 >> 5)) &= ~(1 << (v14 & 0x1F));
    a1 = v18;
  }
  result = a1 + 48;
  v4 = (_DWORD *)a1[49];
  while ( 1 )
  {
    v19 = v4;
    if ( result == v4 )
      return result;
    v5 = (unsigned __int16 *)(v4 - 2);
    if ( a1[19] )
    {
      *(_DWORD *)v5 ^= a1[20];
      if ( *((_BYTE *)v5 + 3) != (*(_BYTE *)v5 ^ (unsigned __int8)(*((_BYTE *)v5 + 1) ^ *((_BYTE *)v5 + 2))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v6 = *v5;
    v7 = a2;
    for ( i = v6 < a2[1]; ; i = v6 < v16[1] )
    {
      v15 = v7;
      if ( i )
        break;
      v16 = (_DWORD *)*v7;
      v4 = v19;
      if ( !*v7 )
      {
        v17 = v7[1] - 1;
        goto LABEL_11;
      }
      v7 = (_DWORD *)*v7;
    }
    v17 = *v5;
LABEL_11:
    if ( *a2 )
    {
      v9 = a2[1];
      i = v6 < v9;
      v10 = v9 - 1;
      if ( i )
        v10 = *v5;
      RtlpHeapRemoveListEntry(1, v4, v10, v6);
    }
    RtlpHeapAddListEntry(1, v4, v17, *v5);
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      if ( ((1 << ((v17 - *((_BYTE *)v15 + 20)) & 0x1F)) & *(_DWORD *)(v15[7] + 4 * ((unsigned int)(v17 - v15[5]) >> 5))) == 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        if ( !byte_4B3A5DA8 )
          RtlpReportHeapFailure(1);
      }
      v4 = v19;
    }
    a1 = v18;
    if ( v18[19] )
    {
      *((_BYTE *)v5 + 3) = *(_BYTE *)v5 ^ *((_BYTE *)v5 + 1) ^ *((_BYTE *)v5 + 2);
      *(_DWORD *)v5 ^= v18[20];
    }
    v4 = (_DWORD *)v4[1];
    result = v18 + 48;
  }
}
