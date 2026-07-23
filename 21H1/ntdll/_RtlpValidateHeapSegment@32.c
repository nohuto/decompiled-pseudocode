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
        PVOID *BaseAddress,
        PVOID *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  char *v8; // eax
  PVOID *v10; // edi
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
  PVOID *v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // edx
  int v29; // eax
  unsigned __int8 v30; // al
  unsigned int v31; // eax
  ULONG v33; // [esp+0h] [ebp-28h]
  int v34; // [esp+10h] [ebp-18h]
  _DWORD *v35; // [esp+10h] [ebp-18h]
  unsigned int v36; // [esp+10h] [ebp-18h]
  int v37; // [esp+14h] [ebp-14h]
  int v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  int v40; // [esp+18h] [ebp-10h]
  char *v41; // [esp+1Ch] [ebp-Ch]
  char *v42; // [esp+20h] [ebp-8h]
  unsigned __int16 v43; // [esp+24h] [ebp-4h]

  v41 = 0;
  v8 = 0;
  v43 = 0;
  v42 = 0;
  v10 = BaseAddress;
  v11 = (unsigned int)a2;
  if ( v11 < *(_DWORD *)(v11 + 40) )
  {
    while ( 1 )
    {
      v12 = v10[19] == 0;
      *a6 = v11;
      if ( !v12 )
      {
        *(_DWORD *)v11 ^= (unsigned int)v10[20];
        if ( *(_BYTE *)(v11 + 3) != (*(_BYTE *)v11 ^ (unsigned __int8)(*(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2))) )
          RtlpAnalyzeHeapFailure(BaseAddress);
      }
      if ( v43 != (*((_WORD *)v10 + 42) ^ *(_WORD *)(v11 + 4)) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ");
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
          (const void *)v11,
          *((unsigned __int16 *)v10 + 42) ^ *(unsigned __int16 *)(v11 + 4),
          v43);
LABEL_116:
        if ( v10[19] )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
          *(_DWORD *)v11 ^= (unsigned int)v10[20];
        }
        return 0;
      }
      v13 = *(_BYTE *)(v11 + 2);
      v14 = *(unsigned __int16 *)v11;
      v43 = *(_WORD *)v11;
      v39 = v14;
      v34 = 8 * v14;
      if ( (v13 & 1) != 0 )
        break;
      if ( ((v13 >> 2) & (((_BYTE)v10[16] & 0x40) != 0)) != 0 )
      {
        v17 = v34 - 16;
        v37 = v34 - 16;
        if ( (v13 & 2) != 0 && v17 > 4 )
        {
          v17 = v34 - 20;
          v37 = v34 - 20;
        }
        if ( (v13 & 8) != 0 )
        {
          v18 = *(_DWORD **)(v11 + 12);
          v38 = *(_DWORD *)(v11 + 8);
          v35 = v18;
          v19 = *(_DWORD *)(v38 + 4);
          if ( *v18 == v19 && (v20 = *(_DWORD *)(v11 + 8), *v18 == v11 + 8) )
          {
            v10[29] = (char *)v10[29] - v39;
            v21 = v10[45];
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
              RtlpHeapRemoveListEntry((int)v10, v21, 1, (int *)(v11 + 8), v22, *(unsigned __int16 *)v11);
              v20 = v38;
            }
            *v35 = v20;
            *(_DWORD *)(v20 + 4) = v35;
            if ( (*(_BYTE *)(v11 + 2) & 8) == 0 || RtlpCommitBlock(v10, v11) )
            {
              v23 = *(unsigned __int16 *)v11;
              v24 = v10 + 48;
              v36 = v23;
              *(_BYTE *)(v11 + 2) = 0;
              *(_BYTE *)(v11 + 7) = 0;
              if ( v10[45] )
              {
                BaseAddress = (PVOID *)RtlpFindEntry((int)v10, v23);
                v24 = v10 + 48;
              }
              else
              {
                BaseAddress = (PVOID *)*v24;
              }
              if ( v24 != BaseAddress )
              {
                v25 = (unsigned int)v10[19];
                do
                {
                  if ( v25 )
                  {
                    v26 = (int)*(BaseAddress - 2);
                    v25 = (unsigned int)v10[19];
                    if ( (v26 & v25) != 0 )
                      v26 ^= (unsigned int)v10[20];
                  }
                  else
                  {
                    LOWORD(v26) = *((_WORD *)BaseAddress - 4);
                  }
                  if ( v36 <= (unsigned __int16)v26 )
                    break;
                  BaseAddress = (PVOID *)*BaseAddress;
                }
                while ( v10 + 48 != BaseAddress );
              }
              v27 = BaseAddress[1];
              if ( (PVOID *)*v27 == BaseAddress )
              {
                *(_DWORD *)(v11 + 8) = BaseAddress;
                *(_DWORD *)(v11 + 12) = v27;
                *v27 = v11 + 8;
                BaseAddress[1] = (PVOID)(v11 + 8);
              }
              else
              {
                RtlpLogHeapFailure(BaseAddress, 0, *v27, 0);
              }
              v10[29] = (char *)v10[29] + *(unsigned __int16 *)v11;
              v28 = v10[45];
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
                RtlpHeapAddListEntry((int)v10, v28, 1, v11 + 8, v29, *(unsigned __int16 *)v11);
              }
              if ( v10[19] )
              {
                *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
                *(_DWORD *)v11 ^= (unsigned int)v10[20];
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
        v40 = RtlCompareMemoryUlong((PVOID)(v11 + 16), v17 | 0xFEEEFEEE00000000uLL, v33);
        if ( v40 != v37 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ");
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", v11, v11 + v40 + 8);
          goto LABEL_116;
        }
      }
      ++*a4;
      *a5 += *(unsigned __int16 *)v11;
LABEL_68:
      v30 = *(_BYTE *)(v11 + 6);
      if ( v30 )
        BaseAddress = (PVOID *)((v11 & 0xFFFF0000) - (v30 << 16) + 0x10000);
      else
        BaseAddress = v10;
      if ( BaseAddress != a2 )
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
          if ( (PVOID)(v11 + 8 * *(unsigned __int16 *)v11) != a2[10] )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Heap block at %p is not last block in segment (%p)\n", v11, a2[10]);
            goto LABEL_116;
          }
          if ( v10[19] )
          {
            *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
            *(_DWORD *)v11 ^= (unsigned int)v10[20];
          }
          return 1;
        }
        ++v42;
        v41 += v31 >> 12;
        if ( v10[19] )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
          *(_DWORD *)v11 ^= (unsigned int)v10[20];
        }
        v11 += *(_DWORD *)(v11 + 28) + 32;
        if ( (PVOID)v11 != a2[10] )
        {
          if ( v10[19] )
          {
            *(_DWORD *)v11 ^= (unsigned int)v10[20];
            if ( *(_BYTE *)(v11 + 3) != (*(_BYTE *)v11 ^ (unsigned __int8)(*(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2))) )
              RtlpAnalyzeHeapFailure(BaseAddress);
          }
          if ( *((_WORD *)v10 + 42) != *(_WORD *)(v11 + 4) )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ");
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "Heap block at %p has corrupted PreviousSize (%lx)\n",
              v11,
              *((unsigned __int16 *)v10 + 42) ^ *(unsigned __int16 *)(v11 + 4));
            goto LABEL_116;
          }
          if ( v10[19] )
          {
            *(_BYTE *)(v11 + 3) = *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1) ^ *(_BYTE *)(v11 + 2);
            *(_DWORD *)v11 ^= (unsigned int)v10[20];
          }
        }
        v43 = 0;
      }
      else
      {
        if ( v10[19] )
        {
          *(_BYTE *)(v11 + 3) = *(_BYTE *)(v11 + 2) ^ *(_BYTE *)v11 ^ *(_BYTE *)(v11 + 1);
          *(_DWORD *)v11 ^= (unsigned int)v10[20];
        }
        v11 += v34;
      }
LABEL_87:
      if ( v11 >= (unsigned int)a2[10] )
      {
        v8 = v42;
        goto LABEL_89;
      }
    }
    if ( a7 )
    {
      if ( (v13 & 2) != 0 )
      {
        ExtraStuffPointer = RtlpGetExtraStuffPointer((_BYTE *)v11);
        v14 = v39;
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
            && (unsigned __int16)ExtraStuffPointer < *((_WORD *)v10 + 66) )
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
    if ( (*(_BYTE *)(v11 + 2) & 4) != 0 && !RtlpCheckBusyBlockTail((int)v10, v11) )
      goto LABEL_116;
    goto LABEL_68;
  }
LABEL_89:
  if ( a2[11] == v41 )
  {
    if ( a2[12] == v8 )
      return 1;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n", a2, a2[12], v42);
  }
  else
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n", a2, a2[11], v41);
  }
  return 0;
}
