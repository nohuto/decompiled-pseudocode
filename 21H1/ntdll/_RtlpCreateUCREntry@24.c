/*
 * XREFs of _RtlpCreateUCREntry@24 @ 0x4B2C092B
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     @RtlpFindUCREntry@8 @ 0x4B2C0A8E (@RtlpFindUCREntry@8.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int *__fastcall RtlpCreateUCREntry(int a1, char *a2, int *a3, int a4, int *a5, int *a6)
{
  int *v7; // esi
  unsigned int v8; // eax
  bool v9; // cc
  bool v10; // zf
  int v11; // edx
  int UCREntry; // eax
  int **v13; // ecx
  _DWORD *v14; // edx
  unsigned __int8 v15; // al
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  _DWORD *v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  int *result; // eax
  unsigned int v22; // eax
  char v23; // [esp+10h] [ebp-8h]

  a3[4] = (int)(a3 + 6);
  v7 = a3 - 2;
  a3[5] = a4;
  *((_WORD *)v7 + 1) = 1;
  *(_WORD *)v7 = 4;
  *((_BYTE *)v7 + 7) = 3;
  if ( *((char **)a2 + 6) == a2 )
  {
    LOBYTE(v8) = 0;
  }
  else
  {
    v8 = ((unsigned int)((char *)v7 - a2) >> 16) + 1;
    v23 = ((unsigned int)((char *)v7 - a2) >> 16) + 1;
    if ( v8 >= 0xFE )
    {
      RtlpLogHeapFailure(a3 - 2, a2, 0, 0);
      LOBYTE(v8) = v23;
    }
  }
  v9 = RtlpHeapErrorHandlerThreshold < 1;
  *((_BYTE *)v7 + 6) = v8;
  if ( v9 )
    goto LABEL_4;
  v10 = a5 == v7;
  if ( a5 > v7 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
    if ( !byte_4B3A5DA8 )
      RtlpReportHeapFailure(1);
LABEL_4:
    v10 = a5 == v7;
  }
  if ( !v10 )
    *((_WORD *)v7 + 2) = *(_WORD *)(a1 + 84);
  if ( *(_DWORD *)(a1 + 76) )
  {
    *((_BYTE *)v7 + 3) = *(_BYTE *)v7 ^ *((_BYTE *)v7 + 2) ^ *((_BYTE *)v7 + 1);
    *v7 ^= *(_DWORD *)(a1 + 80);
  }
  v11 = a3[5];
  if ( v11 )
  {
    UCREntry = RtlpFindUCREntry(a1, v11);
    v13 = *(int ***)(UCREntry + 4);
    if ( *v13 == (int *)UCREntry )
    {
      *a3 = UCREntry;
      a3[1] = (int)v13;
      *v13 = a3;
      *(_DWORD *)(UCREntry + 4) = a3;
    }
    else
    {
      RtlpLogHeapFailure(UCREntry, 0, *v13, 0);
    }
    v14 = *(_DWORD **)(a1 + 184);
    if ( v14 )
    {
      v22 = (unsigned int)a3[5] >> 12;
      while ( v22 >= v14[1] )
      {
        if ( !*v14 )
        {
          v22 = v14[1] - 1;
          break;
        }
        v14 = (_DWORD *)*v14;
      }
      RtlpHeapAddListEntry(a1, v14, 0, (int)a3, v22, a3[5]);
    }
  }
  v15 = *((_BYTE *)v7 + 6);
  if ( v15 )
    v16 = ((unsigned int)v7 & 0xFFFF0000) - (v15 << 16) + 0x10000;
  else
    v16 = a1;
  v17 = v16 + 56;
  v18 = a3 + 2;
  v19 = *(_DWORD *)v17;
  if ( *(_DWORD *)(*(_DWORD *)v17 + 4) == v17 )
  {
    *v18 = v19;
    a3[3] = v17;
    *(_DWORD *)(v19 + 4) = v18;
    *(_DWORD *)v17 = v18;
  }
  else
  {
    RtlpLogHeapFailure(v17, *(_DWORD *)(v19 + 4), 0, 0);
  }
  ++*((_DWORD *)a2 + 12);
  *((_DWORD *)a2 + 11) += (unsigned int)a3[5] >> 12;
  *(_DWORD *)(a1 + 504) -= a3[5];
  if ( ++*(_DWORD *)(a1 + 520) > 0xAu
    && !*(_DWORD *)(a1 + 184)
    && (*(_DWORD *)(a1 + 64) & 3) == 2
    && (RtlpDisableHeapLookaside & 1) == 0 )
  {
    *(_DWORD *)(a1 + 72) |= 0x10000000u;
  }
  v20 = a3[5];
  if ( v20 >= 0x7F000 )
    *(_DWORD *)(a1 + 508) += v20;
  result = a6;
  *a6 = ((char *)v7 - (char *)a5) >> 3;
  return result;
}
