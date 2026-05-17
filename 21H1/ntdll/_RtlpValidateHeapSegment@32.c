/*
 * XREFs of _RtlpValidateHeapSegment@32 @ 0x4B360CCF
 * Callers:
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpGetExtraStuffPointer@4 @ 0x4B2E3AB9 (_RtlpGetExtraStuffPointer@4.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlpCheckBusyBlockTail@8 @ 0x4B35D48C (_RtlpCheckBusyBlockTail@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char __fastcall RtlpValidateHeapSegment(
        _DWORD *Entry,
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  int v8; // eax
  unsigned int v10; // edi
  unsigned int v11; // esi
  bool v12; // zf
  unsigned __int8 v13; // dl
  int v14; // ecx
  _BYTE *ExtraStuffPointer; // eax
  int v16; // edx
  unsigned int v17; // eax
  _DWORD *v18; // edx
  int v19; // eax
  int v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _DWORD *v24; // eax
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // edx
  int v29; // eax
  unsigned __int8 v30; // al
  unsigned int v31; // eax
  int v33; // [esp+10h] [ebp-18h]
  _DWORD *v34; // [esp+10h] [ebp-18h]
  unsigned int v35; // [esp+10h] [ebp-18h]
  char *v36; // [esp+14h] [ebp-14h]
  int v37; // [esp+14h] [ebp-14h]
  int v38; // [esp+18h] [ebp-10h]
  char *v39; // [esp+18h] [ebp-10h]
  int v40; // [esp+1Ch] [ebp-Ch]
  int v41; // [esp+20h] [ebp-8h]
  unsigned __int16 v42; // [esp+24h] [ebp-4h]

  v40 = 0;
  v8 = 0;
  v42 = 0;
  v41 = 0;
  v10 = (unsigned int)Entry;
  v11 = (unsigned int)a2;
  if ( v11 < *(_DWORD *)(v11 + 40) )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 76) == 0;
      *a6 = v11;
      if ( !v12 )
      {
        *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
        if ( *(_BYTE *)(v11 + 3) != (*(_BYTE *)v11 ^ (unsigned __int8)(*(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2))) )
          RtlpAnalyzeHeapFailure(Entry);
      }
      if ( v42 != (*(_WORD *)(v10 + 84) ^ *(_WORD *)(v11 + 4)) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ");
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
          (const void *)v11,
          *(unsigned __int16 *)(v10 + 84) ^ *(unsigned __int16 *)(v11 + 4),
          v42);
LABEL_116:
        if ( *(_DWORD *)(v10 + 76) )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
          *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
        }
        return 0;
      }
      v13 = *(_BYTE *)(v11 + 2);
      v14 = *(unsigned __int16 *)v11;
      v42 = *(_WORD *)v11;
      v38 = v14;
      v33 = 8 * v14;
      if ( (v13 & 1) != 0 )
        break;
      if ( ((v13 >> 2) & ((*(_BYTE *)(v10 + 64) & 0x40) != 0)) != 0 )
      {
        v17 = v33 - 16;
        v36 = (char *)(v33 - 16);
        if ( (v13 & 2) != 0 && v17 > 4 )
        {
          v17 = v33 - 20;
          v36 = (char *)(v33 - 20);
        }
        if ( (v13 & 8) != 0 )
        {
          v18 = *(_DWORD **)(v11 + 12);
          v37 = *(_DWORD *)(v11 + 8);
          v34 = v18;
          v19 = *(_DWORD *)(v37 + 4);
          if ( *v18 == v19 && (v20 = *(_DWORD *)(v11 + 8), *v18 == v11 + 8) )
          {
            *(_DWORD *)(v10 + 116) -= v38;
            v21 = *(_DWORD **)(v10 + 180);
            if ( v21 )
            {
              while ( 1 )
              {
                if ( (unsigned int)*(unsigned __int16 *)v11 < v21[1] )
                {
                  v22 = *(unsigned __int16 *)v11;
                  goto LABEL_35;
                }
                if ( !*v21 )
                  break;
                v21 = (_DWORD *)*v21;
              }
              v22 = v21[1] - 1;
LABEL_35:
              RtlpHeapRemoveListEntry(v10, v21, 1, (int *)(v11 + 8), v22, *(unsigned __int16 *)v11);
              v20 = v37;
            }
            *v34 = v20;
            *(_DWORD *)(v20 + 4) = v34;
            if ( (*(_BYTE *)(v11 + 2) & 8) == 0 || RtlpCommitBlock((_DWORD *)v10, v11) )
            {
              v23 = *(unsigned __int16 *)v11;
              v24 = (_DWORD *)(v10 + 192);
              v35 = v23;
              *(_BYTE *)(v11 + 2) = 0;
              *(_BYTE *)(v11 + 7) = 0;
              if ( *(_DWORD *)(v10 + 180) )
              {
                Entry = (_DWORD *)RtlpFindEntry(v10, v23);
                v24 = (_DWORD *)(v10 + 192);
              }
              else
              {
                Entry = (_DWORD *)*v24;
              }
              if ( v24 != Entry )
              {
                v25 = *(_DWORD *)(v10 + 76);
                do
                {
                  if ( v25 )
                  {
                    v26 = *(Entry - 2);
                    v25 = *(_DWORD *)(v10 + 76);
                    if ( (v26 & v25) != 0 )
                      v26 ^= *(_DWORD *)(v10 + 80);
                  }
                  else
                  {
                    LOWORD(v26) = *((_WORD *)Entry - 4);
                  }
                  if ( v35 <= (unsigned __int16)v26 )
                    break;
                  Entry = (_DWORD *)*Entry;
                }
                while ( (_DWORD *)(v10 + 192) != Entry );
              }
              v27 = (_DWORD *)Entry[1];
              if ( (_DWORD *)*v27 == Entry )
              {
                *(_DWORD *)(v11 + 8) = Entry;
                *(_DWORD *)(v11 + 12) = v27;
                *v27 = v11 + 8;
                Entry[1] = v11 + 8;
              }
              else
              {
                RtlpLogHeapFailure(Entry, 0, *v27, 0);
              }
              *(_DWORD *)(v10 + 116) += *(unsigned __int16 *)v11;
              v28 = *(_DWORD **)(v10 + 180);
              if ( v28 )
              {
                while ( 1 )
                {
                  if ( (unsigned int)*(unsigned __int16 *)v11 < v28[1] )
                  {
                    v29 = *(unsigned __int16 *)v11;
                    goto LABEL_61;
                  }
                  if ( !*v28 )
                    break;
                  v28 = (_DWORD *)*v28;
                }
                v29 = v28[1] - 1;
LABEL_61:
                RtlpHeapAddListEntry(v10, v28, 1, v11 + 8, v29, *(unsigned __int16 *)v11);
              }
              if ( *(_DWORD *)(v10 + 76) )
              {
                *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
                *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
              }
            }
            else
            {
              RtlpDeCommitFreeBlock(v10, v11, *(unsigned __int16 *)v11, 1);
            }
          }
          else
          {
            RtlpLogHeapFailure(v11 + 8, v19, *v18, 0);
          }
          goto LABEL_87;
        }
        v39 = RtlCompareMemoryUlong((char *)(v11 + 16), v17, -17891602);
        if ( v39 != v36 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ");
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", v11, &v39[v11 + 8]);
          goto LABEL_116;
        }
      }
      ++*a4;
      *a5 += *(unsigned __int16 *)v11;
LABEL_68:
      v30 = *(_BYTE *)(v11 + 6);
      if ( v30 )
        Entry = (_DWORD *)((v11 & 0xFFFF0000) - (v30 << 16) + 0x10000);
      else
        Entry = (_DWORD *)v10;
      if ( Entry != a2 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ");
        else
          DbgPrint("HEAP: ");
        DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", v11, *(unsigned __int8 *)(v11 + 6));
        goto LABEL_116;
      }
      if ( *(_BYTE *)(v11 + 7) == 3 )
      {
        v31 = *(_DWORD *)(v11 + 28);
        if ( !v31 )
        {
          if ( v11 + 8 * *(unsigned __int16 *)v11 != a2[10] )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Heap block at %p is not last block in segment (%p)\n", v11, a2[10]);
            goto LABEL_116;
          }
          if ( *(_DWORD *)(v10 + 76) )
          {
            *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
            *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
          }
          return 1;
        }
        ++v41;
        v40 += v31 >> 12;
        if ( *(_DWORD *)(v10 + 76) )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
          *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
        }
        v11 += *(_DWORD *)(v11 + 28) + 32;
        if ( v11 != a2[10] )
        {
          if ( *(_DWORD *)(v10 + 76) )
          {
            *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
            if ( *(_BYTE *)(v11 + 3) != (*(_BYTE *)v11 ^ (unsigned __int8)(*(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2))) )
              RtlpAnalyzeHeapFailure(Entry);
          }
          if ( *(_WORD *)(v10 + 84) != *(_WORD *)(v11 + 4) )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ");
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "Heap block at %p has corrupted PreviousSize (%lx)\n",
              v11,
              *(unsigned __int16 *)(v10 + 84) ^ *(unsigned __int16 *)(v11 + 4));
            goto LABEL_116;
          }
          if ( *(_DWORD *)(v10 + 76) )
          {
            *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
            *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
          }
        }
        v42 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v10 + 76) )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
          *(_DWORD *)v11 ^= *(_DWORD *)(v10 + 80);
        }
        v11 += v33;
      }
LABEL_87:
      if ( v11 >= a2[10] )
      {
        v8 = v41;
        goto LABEL_89;
      }
    }
    if ( a7 )
    {
      if ( (v13 & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer((_BYTE *)v11);
        v14 = v38;
        LOWORD(ExtraStuffPointer) = *((_WORD *)ExtraStuffPointer + 1);
      }
      else
      {
        LOWORD(ExtraStuffPointer) = *(unsigned __int8 *)(v11 + 3);
      }
      if ( (_WORD)ExtraStuffPointer )
      {
        if ( (__int16)ExtraStuffPointer >= 0 )
        {
          if ( ((unsigned __int16)ExtraStuffPointer & 0x800) == 0
            && (unsigned __int16)ExtraStuffPointer < *(_WORD *)(v10 + 132) )
          {
            v16 = a7;
            ExtraStuffPointer = (_BYTE *)(unsigned __int16)ExtraStuffPointer;
            goto LABEL_18;
          }
        }
        else
        {
          ExtraStuffPointer = (_BYTE *)((unsigned __int16)ExtraStuffPointer & 0x7FFF);
          if ( (unsigned __int16)ExtraStuffPointer < 0x81u )
          {
            v16 = a8;
LABEL_18:
            *(_DWORD *)(v16 + 4 * (_DWORD)ExtraStuffPointer) += v14;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v11 + 2) & 4) != 0 && !RtlpCheckBusyBlockTail(v10, v11) )
      goto LABEL_116;
    goto LABEL_68;
  }
LABEL_89:
  if ( a2[11] == v40 )
  {
    if ( a2[12] == v8 )
      return 1;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n", a2, a2[12], v41);
  }
  else
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n", a2, a2[11], v40);
  }
  return 0;
}
