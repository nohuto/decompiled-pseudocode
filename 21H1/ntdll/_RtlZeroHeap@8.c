/*
 * XREFs of _RtlZeroHeap@8 @ 0x4B35D0F0
 * Callers:
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 * Callees:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapAddListEntry@24 @ 0x4B2B1B1D (_RtlpHeapAddListEntry@24.c)
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v2; // edi
  ULONG v4; // ecx
  char *v5; // ecx
  char *v6; // eax
  unsigned __int16 *v7; // ecx
  unsigned __int8 v8; // dl
  int *v9; // edi
  _DWORD *v10; // edx
  int v11; // eax
  _DWORD *v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // edi
  _DWORD *Entry; // ecx
  int v18; // edx
  _DWORD *v19; // edx
  _DWORD *v20; // eax
  _DWORD *v21; // edx
  int v22; // eax
  void *v23; // ecx
  SIZE_T v24; // [esp-8h] [ebp-64h]
  ULONG v25; // [esp+0h] [ebp-5Ch]
  _DWORD *v26; // [esp+14h] [ebp-48h]
  unsigned int v27; // [esp+14h] [ebp-48h]
  int v28; // [esp+1Ch] [ebp-40h]
  unsigned __int16 *v29; // [esp+28h] [ebp-34h]
  char *v30; // [esp+2Ch] [ebp-30h]
  unsigned __int16 *v31; // [esp+30h] [ebp-2Ch]
  int v32; // [esp+34h] [ebp-28h]
  int i; // [esp+34h] [ebp-28h]
  unsigned __int16 *v34; // [esp+3Ch] [ebp-20h]
  char v35; // [esp+43h] [ebp-19h]

  v2 = 0;
  v35 = 0;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
    return 0;
  v4 = *((_DWORD *)HeapHandle + 17) | Flags;
  if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle, v4);
  if ( (v4 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
    v35 = 1;
  }
  v5 = (char *)HeapHandle + 164;
  v6 = (char *)*((_DWORD *)HeapHandle + 41);
LABEL_8:
  v30 = v6;
  if ( v6 != v5 )
  {
    v7 = (unsigned __int16 *)*((_DWORD *)v6 + 5);
    v34 = v7;
    v31 = v7;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= *((_DWORD *)v6 + 6) )
      {
        v6 = *(char **)v6;
        v5 = (char *)HeapHandle + 164;
        goto LABEL_8;
      }
      if ( v2 )
      {
        if ( !*((_DWORD *)HeapHandle + 19) )
          goto LABEL_17;
        v2[3] = *v2 ^ v2[1] ^ v2[2];
        *(_DWORD *)v2 ^= *((_DWORD *)HeapHandle + 20);
      }
      if ( *((_DWORD *)HeapHandle + 19) )
      {
        *(_DWORD *)v7 ^= *((_DWORD *)HeapHandle + 20);
        if ( *((_BYTE *)v7 + 3) != (*(_BYTE *)v7 ^ (unsigned __int8)(*((_BYTE *)v7 + 1) ^ *((_BYTE *)v7 + 2))) )
        {
          RtlpAnalyzeHeapFailure(v7);
          v7 = v34;
        }
      }
LABEL_17:
      v2 = v7;
      v32 = *v7;
      v8 = *((_BYTE *)v7 + 2);
      if ( (v8 & 1) != 0 )
        goto LABEL_61;
      v29 = v7;
      if ( (v8 & 8) == 0 )
      {
        v23 = v7 + 8;
        if ( ((v8 >> 2) & ((*((_BYTE *)HeapHandle + 64) & 0x40) != 0)) != 0 )
          HIDWORD(v24) = -17891602;
        else
          HIDWORD(v24) = 0;
        LODWORD(v24) = 8 * v32 - 16;
        RtlFillMemoryUlong(v23, v24, v25);
        v7 = v34;
LABEL_61:
        if ( *((_BYTE *)v7 + 7) == 3 )
          v7 = (unsigned __int16 *)((char *)v7 + *((_DWORD *)v7 + 7) + 32);
        else
          v7 += 4 * *v7;
        v34 = v7;
        v31 = v7;
        goto LABEL_56;
      }
      v9 = (int *)(v7 + 4);
      v28 = *((_DWORD *)v7 + 2);
      v10 = (_DWORD *)*((_DWORD *)v7 + 3);
      v26 = v10;
      v11 = *(_DWORD *)(v28 + 4);
      if ( *v10 == v11 && (int *)*v10 == v9 )
      {
        *((_DWORD *)HeapHandle + 29) -= v32;
        v12 = (_DWORD *)*((_DWORD *)HeapHandle + 45);
        if ( v12 )
        {
          v13 = *v7;
          for ( i = v13; ; v13 = i )
          {
            v14 = v12[1];
            if ( v13 < v14 )
              break;
            if ( !*v12 )
            {
              v13 = v14 - 1;
              break;
            }
            v12 = (_DWORD *)*v12;
          }
          RtlpHeapRemoveListEntry((int)HeapHandle, v12, 1, v9, v13, i);
        }
        *v26 = v28;
        *(_DWORD *)(v28 + 4) = v26;
        if ( (v29[1] & 8) == 0 || RtlpCommitBlock(HeapHandle, (int)v29) )
        {
          v15 = *v29;
          v27 = v15;
          *((_BYTE *)v29 + 2) = 0;
          *((_BYTE *)v29 + 7) = 0;
          v16 = (char *)HeapHandle + 192;
          if ( *((_DWORD *)HeapHandle + 45) )
            Entry = (_DWORD *)RtlpFindEntry((int)HeapHandle, v15);
          else
            Entry = (_DWORD *)*v16;
          while ( v16 != Entry )
          {
            if ( *((_DWORD *)HeapHandle + 19) )
            {
              v18 = *(Entry - 2);
              if ( (v18 & *((_DWORD *)HeapHandle + 19)) != 0 )
                v18 ^= *((_DWORD *)HeapHandle + 20);
              v34 = v31;
            }
            else
            {
              LOWORD(v18) = *((_WORD *)Entry - 4);
            }
            if ( v27 <= (unsigned __int16)v18 )
              break;
            Entry = (_DWORD *)*Entry;
          }
          v19 = v29 + 4;
          v20 = (_DWORD *)Entry[1];
          if ( (_DWORD *)*v20 == Entry )
          {
            *v19 = Entry;
            *((_DWORD *)v29 + 3) = v20;
            *v20 = v19;
            Entry[1] = v19;
          }
          else
          {
            RtlpLogHeapFailure(Entry, 0, *v20, 0);
          }
          *((_DWORD *)HeapHandle + 29) += *v29;
          v21 = (_DWORD *)*((_DWORD *)HeapHandle + 45);
          if ( v21 )
          {
            while ( 1 )
            {
              if ( (unsigned int)*v29 < v21[1] )
              {
                v22 = *v29;
                goto LABEL_50;
              }
              if ( !*v21 )
                break;
              v21 = (_DWORD *)*v21;
            }
            v22 = v21[1] - 1;
LABEL_50:
            RtlpHeapAddListEntry((int)HeapHandle, v21, 1, (int)(v29 + 4), v22, *v29);
          }
          if ( *((_DWORD *)HeapHandle + 19) )
          {
            *((_BYTE *)v29 + 3) = *(_BYTE *)v29 ^ *((_BYTE *)v29 + 1) ^ *((_BYTE *)v29 + 2);
            *(_DWORD *)v29 ^= *((_DWORD *)HeapHandle + 20);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(HeapHandle, (int)v29, *v29, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(v7 + 4, v11, *v10, 0);
      }
      v2 = 0;
      v7 = v34;
LABEL_56:
      v6 = v30;
    }
  }
  if ( v2 && *((_DWORD *)HeapHandle + 19) )
  {
    v2[3] = *v2 ^ v2[1] ^ v2[2];
    *(_DWORD *)v2 ^= *((_DWORD *)HeapHandle + 20);
  }
  if ( v35 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
  return 0;
}
