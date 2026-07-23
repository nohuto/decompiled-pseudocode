/*
 * XREFs of RtlpPopulateListIndex @ 0x18000A600
 * Callers:
 *     RtlpExtendListLookup @ 0x180009574 (RtlpExtendListLookup.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180108240 (RtlpHeapHandleError.c)
 */

void __fastcall RtlpPopulateListIndex(__int64 a1, __int64 *a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 *v8; // r14
  __int64 *v9; // rax
  int v10; // ebp
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // eax

  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v11 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    v12 = 2 * v11;
    if ( !*((_DWORD *)a2 + 3) )
      v12 = v11;
    *(_QWORD *)(a2[6] + 8 * v12) = 0LL;
    v13 = (unsigned __int64)(unsigned int)(*((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1) >> 5;
    *(_DWORD *)(a2[5] + 4 * v13) &= ~(1 << ((*((_BYTE *)a2 + 8) - *((_BYTE *)a2 + 24) - 1) & 0x1F));
  }
  for ( i = *(_QWORD *)(a1 + 344); a1 + 336 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    v7 = *(unsigned __int16 *)(i - 8);
    v8 = a2;
    v6 = *((unsigned int *)a2 + 2);
    if ( v7 < v6 )
    {
LABEL_21:
      v10 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v9 = (__int64 *)*v8;
        if ( !*v8 )
          break;
        v8 = (__int64 *)*v8;
        if ( v7 < *((unsigned int *)v9 + 2) )
          goto LABEL_21;
      }
      v10 = *((_DWORD *)v8 + 2) - 1;
    }
    if ( *a2 )
    {
      v5 = v6 - 1;
      if ( (unsigned int)v7 < (unsigned int)v6 )
        v5 = *(unsigned __int16 *)(i - 8);
      LOBYTE(v6) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)a2, v6, i, v5, *(unsigned __int16 *)(i - 8));
    }
    LOBYTE(v6) = 1;
    RtlpHeapAddListEntry(a1, (_DWORD)v8, v6, i, v10, *(unsigned __int16 *)(i - 8));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      v14 = *(_DWORD *)(v8[5] + 4 * ((unsigned __int64)(unsigned int)(v10 - *((_DWORD *)v8 + 6)) >> 5));
      if ( !_bittest(&v14, ((_BYTE)v10 - *((_BYTE *)v8 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
}
