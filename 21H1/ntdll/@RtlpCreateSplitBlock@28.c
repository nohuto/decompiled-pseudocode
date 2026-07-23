/*
 * XREFs of @RtlpCreateSplitBlock@28 @ 0x4B2B16CC
 * Callers:
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char __fastcall RtlpCreateSplitBlock(
        _DWORD *BaseAddress,
        int a2,
        unsigned __int16 *a3,
        char a4,
        char a5,
        __int16 a6,
        int a7)
{
  unsigned __int16 *v7; // esi
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned __int16 *v11; // ebx
  _DWORD *v12; // edx
  _DWORD *v13; // ecx
  int v14; // esi
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ebx
  _DWORD *v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  _DWORD *v22; // edx
  int v23; // eax
  _DWORD *v24; // edx
  int v25; // eax
  unsigned int v26; // edx
  _DWORD *v27; // ebx
  int v28; // eax
  _DWORD *v29; // ecx
  int v30; // esi
  int v31; // eax
  _DWORD *v32; // eax
  char v33; // cl
  unsigned int v34; // eax
  _DWORD *v35; // ebx
  _DWORD *v36; // ecx
  int v37; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // edx
  _DWORD *Entry; // ecx
  int v42; // esi
  int v43; // eax
  _DWORD *v44; // eax
  _DWORD *v45; // ebx
  _DWORD *v46; // edx
  int v47; // eax
  SIZE_T v48; // [esp-8h] [ebp-24h]
  SIZE_T v49; // [esp-8h] [ebp-24h]
  ULONG v50; // [esp+0h] [ebp-1Ch]
  _DWORD *v51; // [esp+10h] [ebp-Ch]
  int v52; // [esp+10h] [ebp-Ch]
  int v53; // [esp+14h] [ebp-8h]
  int v54; // [esp+18h] [ebp-4h]
  unsigned int v55; // [esp+18h] [ebp-4h]
  unsigned int v56; // [esp+18h] [ebp-4h]

  v7 = a3;
  v54 = 0;
  *((_BYTE *)a3 + 2) = a4;
  *((_BYTE *)a3 + 7) = 0;
  a3[2] = a6 ^ *((_WORD *)BaseAddress + 42);
  if ( *(_DWORD *)(a2 + 24) == a2 )
  {
    LOBYTE(v9) = 0;
  }
  else
  {
    v9 = (((unsigned int)a3 - a2) >> 16) + 1;
    if ( v9 >= 0xFE )
      RtlpLogHeapFailure(a3, a2, 0, 0);
  }
  *((_BYTE *)a3 + 3) = 0;
  v10 = (unsigned __int16)a7;
  *((_BYTE *)a3 + 6) = v9;
  v11 = &a3[4 * a7];
  *a3 = a7;
  while ( 1 )
  {
    if ( ((*((_BYTE *)v11 + 2) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 82) & (BaseAddress[19] >> 20))) & 1) != 0 )
    {
      v11[2] = a7 ^ *((_WORD *)BaseAddress + 42);
      *((_BYTE *)a3 + 7) = 0;
      if ( a5 )
      {
        *((_BYTE *)a3 + 2) &= 0xF0u;
        if ( (BaseAddress[16] & 0x40) != 0 )
        {
          HIDWORD(v49) = -17891602;
          LODWORD(v49) = 8 * (unsigned __int16)a7 - 16;
          RtlFillMemoryUlong(a3 + 8, v49, v50);
          *((_BYTE *)a3 + 2) |= 4u;
        }
        v40 = BaseAddress + 48;
        if ( BaseAddress[45] )
        {
          Entry = (_DWORD *)RtlpFindEntry(BaseAddress);
          v40 = BaseAddress + 48;
        }
        else
        {
          Entry = (_DWORD *)*v40;
        }
        if ( v40 != Entry )
        {
          v42 = BaseAddress[19];
          do
          {
            if ( v42 )
            {
              v43 = *(Entry - 2);
              v42 = BaseAddress[19];
              if ( (v42 & v43) != 0 )
                v43 ^= BaseAddress[20];
            }
            else
            {
              LOWORD(v43) = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned int)(unsigned __int16)v43 )
              break;
            Entry = (_DWORD *)*Entry;
          }
          while ( v40 != Entry );
          v7 = a3;
        }
        v44 = (_DWORD *)Entry[1];
        v45 = v7 + 4;
        if ( (_DWORD *)*v44 == Entry )
        {
          *v45 = Entry;
          *((_DWORD *)v7 + 3) = v44;
          *v44 = v45;
          Entry[1] = v45;
        }
        else
        {
          RtlpLogHeapFailure(Entry, 0, *v44, 0);
        }
        BaseAddress[29] += *v7;
        v46 = (_DWORD *)BaseAddress[45];
        if ( v46 )
        {
          while ( 1 )
          {
            if ( (unsigned int)*v7 < v46[1] )
            {
              v47 = *v7;
              goto LABEL_138;
            }
            if ( !*v46 )
              break;
            v46 = (_DWORD *)*v46;
          }
          v47 = v46[1] - 1;
LABEL_138:
          RtlpHeapAddListEntry(1, v7 + 4, v47, *v7);
        }
        if ( BaseAddress[19] )
        {
          *((_BYTE *)v7 + 3) = *((_BYTE *)v7 + 2) ^ *(_BYTE *)v7 ^ *((_BYTE *)v7 + 1);
          *(_DWORD *)v7 ^= BaseAddress[20];
        }
        return 1;
      }
      *((_BYTE *)a3 + 2) = 0;
      v12 = BaseAddress + 48;
      if ( BaseAddress[45] )
      {
        v13 = (_DWORD *)RtlpFindEntry(BaseAddress);
        v12 = BaseAddress + 48;
      }
      else
      {
        v13 = (_DWORD *)*v12;
      }
      if ( v12 != v13 )
      {
        v14 = BaseAddress[19];
        do
        {
          if ( v14 )
          {
            v15 = *(v13 - 2);
            v14 = BaseAddress[19];
            if ( (v14 & v15) != 0 )
              v15 ^= BaseAddress[20];
          }
          else
          {
            LOWORD(v15) = *((_WORD *)v13 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned int)(unsigned __int16)v15 )
            break;
          v13 = (_DWORD *)*v13;
        }
        while ( v12 != v13 );
        v7 = a3;
      }
      v16 = (_DWORD *)v13[1];
      v17 = v7 + 4;
      if ( (_DWORD *)*v16 == v13 )
      {
        *v17 = v13;
        *((_DWORD *)v7 + 3) = v16;
        *v16 = v17;
        v13[1] = v17;
      }
      else
      {
        RtlpLogHeapFailure(v13, 0, *v16, 0);
      }
      BaseAddress[29] += *v7;
      v18 = (_DWORD *)BaseAddress[45];
      if ( !v18 )
        goto LABEL_24;
      v19 = *v7;
      while ( v19 >= v18[1] )
      {
        if ( !*v18 )
          goto LABEL_63;
        v18 = (_DWORD *)*v18;
      }
      goto LABEL_22;
    }
    if ( BaseAddress[19] )
    {
      *(_DWORD *)v11 ^= BaseAddress[20];
      if ( *((_BYTE *)v11 + 3) != (*(_BYTE *)v11 ^ (unsigned __int8)(*((_BYTE *)v11 + 2) ^ *((_BYTE *)v11 + 1))) )
        RtlpAnalyzeHeapFailure(v10);
    }
    v22 = (_DWORD *)*((_DWORD *)v11 + 3);
    v53 = *((_DWORD *)v11 + 2);
    v51 = v22;
    v23 = *(_DWORD *)(v53 + 4);
    if ( *v22 == v23 && (unsigned __int16 *)*v22 == v11 + 4 )
    {
      BaseAddress[29] -= *v11;
      v24 = (_DWORD *)BaseAddress[45];
      if ( v24 )
      {
        while ( 1 )
        {
          if ( (unsigned int)*v11 < v24[1] )
          {
            v25 = *v11;
            goto LABEL_41;
          }
          if ( !*v24 )
            break;
          v24 = (_DWORD *)*v24;
        }
        v25 = v24[1] - 1;
LABEL_41:
        RtlpHeapRemoveListEntry(1, v11 + 4, v25, *v11);
      }
      *v51 = v53;
      *(_DWORD *)(v53 + 4) = v51;
      if ( (v11[1] & 8) == 0 || RtlpCommitBlock(BaseAddress, (int)v11) )
      {
        if ( a5 )
        {
          v33 = *((_BYTE *)v11 + 2);
          if ( (v33 & 4) != 0 )
          {
            v34 = 8 * *v11 - 16;
            v56 = v34;
            if ( (v33 & 2) != 0 && v34 > 4 )
            {
              v34 = 8 * *v11 - 20;
              v56 = v34;
            }
            v52 = RtlCompareMemoryUlong(v11 + 8, v34 | 0xFEEEFEEE00000000uLL, v50);
            if ( v52 != v56 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ");
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v11, (char *)v11 + v52 + 16);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
        }
        *((_BYTE *)a3 + 2) = *((_BYTE *)v11 + 2);
        v26 = *v11 + a7;
        if ( v26 > 0xFE00 )
        {
          RtlpInsertFreeBlock(BaseAddress, v26);
          return 1;
        }
        *a3 = v26;
        a3[4 * v26 + 2] = v26 ^ *((_WORD *)BaseAddress + 42);
        v26 = (unsigned __int16)v26;
        v55 = (unsigned __int16)v26;
        *((_BYTE *)a3 + 7) = 0;
        if ( !a5 )
        {
          *((_BYTE *)a3 + 2) = 0;
          v27 = BaseAddress + 48;
          if ( BaseAddress[45] )
          {
            v28 = RtlpFindEntry(BaseAddress);
            v26 = v55;
            v29 = (_DWORD *)v28;
          }
          else
          {
            v29 = (_DWORD *)*v27;
          }
          if ( v27 != v29 )
          {
            v30 = BaseAddress[19];
            do
            {
              if ( v30 )
              {
                v31 = *(v29 - 2);
                v30 = BaseAddress[19];
                if ( (v31 & v30) != 0 )
                  v31 ^= BaseAddress[20];
              }
              else
              {
                LOWORD(v31) = *((_WORD *)v29 - 4);
              }
              if ( v26 <= (unsigned __int16)v31 )
                break;
              v29 = (_DWORD *)*v29;
            }
            while ( v27 != v29 );
            v7 = a3;
          }
          v32 = (_DWORD *)v29[1];
          v17 = v7 + 4;
          if ( (_DWORD *)*v32 == v29 )
          {
            *v17 = v29;
            *((_DWORD *)v7 + 3) = v32;
            *v32 = v17;
            v29[1] = v17;
          }
          else
          {
            RtlpLogHeapFailure(v29, 0, *v32, 0);
          }
          BaseAddress[29] += *v7;
          v18 = (_DWORD *)BaseAddress[45];
          if ( v18 )
          {
            v19 = *v7;
            while ( v19 >= v18[1] )
            {
              if ( !*v18 )
                goto LABEL_63;
              v18 = (_DWORD *)*v18;
            }
            goto LABEL_22;
          }
LABEL_24:
          if ( BaseAddress[19] )
          {
            *((_BYTE *)v7 + 3) = *((_BYTE *)v7 + 2) ^ *(_BYTE *)v7 ^ *((_BYTE *)v7 + 1);
            *(_DWORD *)v7 ^= BaseAddress[20];
          }
          return 1;
        }
        *((_BYTE *)a3 + 2) &= 0xF0u;
        if ( (BaseAddress[16] & 0x40) != 0 )
        {
          HIDWORD(v48) = -17891602;
          LODWORD(v48) = 8 * (unsigned __int16)v26 - 16;
          RtlFillMemoryUlong(a3 + 8, v48, v50);
          *((_BYTE *)a3 + 2) |= 4u;
        }
        v35 = BaseAddress + 48;
        if ( BaseAddress[45] )
          v36 = (_DWORD *)RtlpFindEntry(BaseAddress);
        else
          v36 = (_DWORD *)*v35;
        if ( v35 != v36 )
        {
          v37 = BaseAddress[19];
          do
          {
            if ( v37 )
            {
              v38 = *(v36 - 2);
              v37 = BaseAddress[19];
              if ( (v38 & v37) != 0 )
                v38 ^= BaseAddress[20];
            }
            else
            {
              LOWORD(v38) = *((_WORD *)v36 - 4);
            }
            if ( v55 <= (unsigned __int16)v38 )
              break;
            v36 = (_DWORD *)*v36;
          }
          while ( v35 != v36 );
          v7 = a3;
        }
        v39 = (_DWORD *)v36[1];
        v17 = v7 + 4;
        if ( (_DWORD *)*v39 == v36 )
        {
          *v17 = v36;
          *((_DWORD *)v7 + 3) = v39;
          *v39 = v17;
          v36[1] = v17;
        }
        else
        {
          RtlpLogHeapFailure(v36, 0, *v39, 0);
        }
        BaseAddress[29] += *v7;
        v18 = (_DWORD *)BaseAddress[45];
        if ( !v18 )
          goto LABEL_24;
        v19 = *v7;
        while ( v19 >= v18[1] )
        {
          if ( !*v18 )
          {
LABEL_63:
            v20 = v18[1] - 1;
            goto LABEL_23;
          }
          v18 = (_DWORD *)*v18;
        }
LABEL_22:
        v20 = v19;
LABEL_23:
        RtlpHeapAddListEntry(1, v17, v20, v19);
        goto LABEL_24;
      }
      RtlpDeCommitFreeBlock(BaseAddress, (int)v11, *v11, 1);
    }
    else
    {
      RtlpLogHeapFailure(v11 + 4, v23, *v22, 0);
    }
    if ( v54 )
      return 0;
    v54 = 1;
  }
}
