/*
 * XREFs of _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

void __fastcall RtlpInsertFreeBlock(int a1, unsigned __int16 *a2, unsigned int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ecx
  __int16 v6; // bx
  unsigned __int8 v7; // al
  char v8; // al
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _DWORD *Entry; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx
  unsigned int v15; // ecx
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  SIZE_T v20; // [esp-8h] [ebp-2Ch]
  ULONG v21; // [esp+0h] [ebp-24h]
  int v22; // [esp+10h] [ebp-14h]
  unsigned int v23; // [esp+14h] [ebp-10h]
  unsigned int v24; // [esp+18h] [ebp-Ch]
  __int16 v25; // [esp+1Ch] [ebp-8h]
  char v26; // [esp+23h] [ebp-1h]

  v4 = (unsigned int)a2;
  v5 = a3;
  v24 = a3;
  if ( a3 )
  {
    v6 = *(_WORD *)(a1 + 84) ^ a2[2];
    if ( !v6
      && RtlpHeapErrorHandlerThreshold >= 1
      && (a2[1] & 8) == 0
      && (unsigned __int16 *)(((unsigned int)a2 + 4095) & 0xFFFFF000) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      if ( !byte_4B3A5DA8 )
        RtlpReportHeapFailure(1);
      v5 = a3;
    }
    v7 = *(_BYTE *)(v4 + 6);
    if ( v7 )
      v23 = (v4 & 0xFFFF0000) - (v7 << 16) + 0x10000;
    else
      v23 = a1;
    v8 = *(_BYTE *)(v4 + 2);
    v26 = v8;
    while ( 1 )
    {
      if ( v5 > 0xFE00 )
      {
        v25 = -512;
        if ( v5 == 65025 )
        {
          LOWORD(v5) = -528;
          v25 = -528;
        }
        else
        {
          LOWORD(v5) = -512;
        }
        v8 = 0;
      }
      else
      {
        v25 = v5;
      }
      *(_BYTE *)(v4 + 2) = v8;
      *(_WORD *)(v4 + 4) = v6 ^ *(_WORD *)(a1 + 84);
      if ( *(_DWORD *)(v23 + 24) == v23 )
      {
        LOBYTE(v9) = 0;
      }
      else
      {
        v9 = ((v4 - v23) >> 16) + 1;
        if ( v9 >= 0xFE )
        {
          RtlpLogHeapFailure(v4, v23, 0, 0);
          LOWORD(v5) = v25;
          LOBYTE(v9) = ((v4 - v23) >> 16) + 1;
        }
      }
      *(_BYTE *)(v4 + 2) &= 0xF0u;
      *(_BYTE *)(v4 + 6) = v9;
      *(_WORD *)v4 = v5;
      *(_BYTE *)(v4 + 3) = 0;
      v10 = (unsigned __int16)v5;
      *(_BYTE *)(v4 + 7) = 0;
      v22 = (unsigned __int16)v5;
      if ( (*(_BYTE *)(a1 + 64) & 0x40) != 0 )
      {
        HIDWORD(v20) = -17891602;
        LODWORD(v20) = 8 * (unsigned __int16)v5 - 16;
        RtlFillMemoryUlong((PVOID)(v4 + 16), v20, v21);
        *(_BYTE *)(v4 + 2) |= 4u;
      }
      if ( *(_DWORD *)(a1 + 180) )
        Entry = (_DWORD *)RtlpFindEntry(a1, v10);
      else
        Entry = *(_DWORD **)(a1 + 192);
      if ( (_DWORD *)(a1 + 192) != Entry )
      {
        v18 = *(_DWORD *)(a1 + 76);
        do
        {
          if ( v18 )
          {
            v19 = *(Entry - 2);
            v18 = *(_DWORD *)(a1 + 76);
            if ( (v18 & v19) != 0 )
              v19 ^= *(_DWORD *)(a1 + 80);
          }
          else
          {
            LOWORD(v19) = *((_WORD *)Entry - 4);
          }
          if ( v10 <= (unsigned __int16)v19 )
            break;
          Entry = (_DWORD *)*Entry;
        }
        while ( (_DWORD *)(a1 + 192) != Entry );
      }
      v12 = (_DWORD *)Entry[1];
      v13 = (_DWORD *)(v4 + 8);
      if ( (_DWORD *)*v12 == Entry )
      {
        *v13 = Entry;
        *(_DWORD *)(v4 + 12) = v12;
        *v12 = v13;
        Entry[1] = v13;
      }
      else
      {
        RtlpLogHeapFailure(Entry, 0, *v12, 0);
      }
      *(_DWORD *)(a1 + 116) += *(unsigned __int16 *)v4;
      v14 = *(_DWORD **)(a1 + 180);
      if ( v14 )
      {
        v15 = *(unsigned __int16 *)v4;
        if ( v15 < v14[1] )
        {
LABEL_21:
          v17 = *(unsigned __int16 *)v4;
        }
        else
        {
          while ( 1 )
          {
            v16 = (_DWORD *)*v14;
            if ( !*v14 )
              break;
            v14 = (_DWORD *)*v14;
            if ( v15 < v16[1] )
              goto LABEL_21;
          }
          v17 = v14[1] - 1;
        }
        RtlpHeapAddListEntry(a1, v14, 1, v4 + 8, v17, *(unsigned __int16 *)v4);
      }
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_BYTE *)(v4 + 3) = *(_BYTE *)v4 ^ *(_BYTE *)(v4 + 2) ^ *(_BYTE *)(v4 + 1);
        *(_DWORD *)v4 ^= *(_DWORD *)(a1 + 80);
      }
      v5 = v24 - v22;
      v6 = v25;
      v4 += 8 * v22;
      v24 -= v22;
      if ( v4 >= *(_DWORD *)(v23 + 40) )
        break;
      v8 = v26;
      if ( !v5 )
      {
        *(_WORD *)(v4 + 4) = v25 ^ *(_WORD *)(a1 + 84);
        if ( !v25 && RtlpHeapErrorHandlerThreshold >= 1 && ((v4 + 4095) & 0xFFFFF000) != v4 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
          if ( !byte_4B3A5DA8 )
            RtlpReportHeapFailure(1);
        }
        return;
      }
    }
  }
}
