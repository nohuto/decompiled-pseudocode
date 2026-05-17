/*
 * XREFs of _RtlpGrowBlockInPlace@20 @ 0x4B2B1340
 * Callers:
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpZeroBlockFromOffset@12 @ 0x4B2AEA8C (_RtlpZeroBlockFromOffset@12.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpUpdateTagEntry@20 @ 0x4B35995E (_RtlpUpdateTagEntry@20.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int16 *v6; // edi
  int v7; // ecx
  int v8; // eax
  char result; // al
  _DWORD *v10; // edx
  int v11; // eax
  char v12; // cl
  int v13; // edx
  unsigned int v14; // eax
  char v15; // cl
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // edi
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned __int16 *v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned __int16 updated; // ax
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // [esp+Ch] [ebp-18h]
  int v33; // [esp+14h] [ebp-10h]
  int v34; // [esp+14h] [ebp-10h]
  char v35; // [esp+14h] [ebp-10h]
  _DWORD *v36; // [esp+18h] [ebp-Ch]
  unsigned int v37; // [esp+18h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-Ch]
  unsigned int v39; // [esp+1Ch] [ebp-8h]
  char v40; // [esp+23h] [ebp-1h]

  v39 = a5;
  if ( a5 > *(_DWORD *)(a1 + 92) )
    return 0;
  v40 = *(_BYTE *)(a3 + 2);
  v6 = (unsigned __int16 *)(a3 + 8 * *(unsigned __int16 *)a3);
  if ( ((*((_BYTE *)v6 + 2) ^ (unsigned __int8)(*(_BYTE *)(a1 + 82) & (*(_DWORD *)(a1 + 76) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    *(_DWORD *)v6 ^= *(_DWORD *)(a1 + 80);
    if ( *((_BYTE *)v6 + 3) != (*(_BYTE *)v6 ^ (unsigned __int8)(*((_BYTE *)v6 + 2) ^ *((_BYTE *)v6 + 1))) )
      RtlpAnalyzeHeapFailure(a1);
  }
  v7 = *v6;
  v31 = v7 + *(unsigned __int16 *)a3;
  if ( v31 < a5 )
  {
    if ( *(_DWORD *)(a1 + 76) )
    {
      *((_BYTE *)v6 + 3) = *(_BYTE *)v6 ^ *((_BYTE *)v6 + 2) ^ *((_BYTE *)v6 + 1);
      *(_DWORD *)v6 ^= *(_DWORD *)(a1 + 80);
    }
    return 0;
  }
  v33 = *((_DWORD *)v6 + 2);
  v36 = (_DWORD *)*((_DWORD *)v6 + 3);
  v8 = *(_DWORD *)(v33 + 4);
  if ( *v36 != v8 || (unsigned __int16 *)*v36 != v6 + 4 )
  {
    RtlpLogHeapFailure(v6 + 4, v8, *v36, 0);
    return 0;
  }
  *(_DWORD *)(a1 + 116) -= v7;
  v10 = *(_DWORD **)(a1 + 180);
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (unsigned int)*v6 < v10[1] )
      {
        v11 = *v6;
        goto LABEL_16;
      }
      if ( !*v10 )
        break;
      v10 = (_DWORD *)*v10;
    }
    v11 = v10[1] - 1;
LABEL_16:
    RtlpHeapRemoveListEntry(1, v6 + 4, v11, *v6);
  }
  *v36 = v33;
  *(_DWORD *)(v33 + 4) = v36;
  if ( (v6[1] & 8) != 0 && !RtlpCommitBlock((_DWORD *)a1, (int)v6) )
  {
    RtlpDeCommitFreeBlock(a1, (int)v6, *v6, 1);
    return 0;
  }
  v12 = *((_BYTE *)v6 + 2);
  v13 = 0;
  if ( (v12 & 4) != 0 )
  {
    v14 = 8 * *v6 - 16;
    v37 = v14;
    if ( (v12 & 2) != 0 && v14 > 4 )
    {
      v14 = 8 * *v6 - 20;
      v37 = v14;
    }
    v34 = RtlCompareMemoryUlong(v6 + 8, v14, -17891602);
    if ( v34 == v37 )
      goto LABEL_23;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ");
    else
      DbgPrint("HEAP: ");
    DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v6, (char *)v6 + v34 + 16);
    if ( !NtCurrentPeb()->BeingDebugged )
    {
LABEL_23:
      v13 = 0;
    }
    else
    {
      __debugbreak();
      v13 = 0;
      RtlpHeapInvalidBreakPoint = 0;
    }
  }
  v15 = *(_BYTE *)(a3 + 7);
  v35 = *((_BYTE *)v6 + 2);
  if ( v15 == 5 )
  {
    v16 = *(unsigned __int16 *)(a3 + 4) ^ *(unsigned __int16 *)(a1 + 84);
  }
  else if ( (v15 & 0x40) != 0 )
  {
    v16 = *(unsigned __int16 *)(a3 + 8 * (v15 & 0x3F) + 4);
  }
  else if ( (v15 & 0x3F) == 0x3F )
  {
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 76) )
      {
        v27 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & *(_DWORD *)(a1 + 76)) != 0 )
          v27 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v27) = *(_WORD *)a3;
      }
    }
    else
    {
      v26 = a1 ^ RtlpLFHKey ^ *(_DWORD *)a3 ^ (a3 >> 3);
      if ( !(_WORD)v26 )
        v13 = *(_DWORD *)(a3 - (v26 >> 13));
      LOWORD(v27) = *(_WORD *)(v13 + 20);
    }
    v16 = *(_DWORD *)(a3 + 8 * (unsigned __int16)v27 - 4);
  }
  else
  {
    v16 = v15 & 0x3F;
  }
  v17 = a5;
  v18 = 8 * *(unsigned __int16 *)a3 - v16;
  if ( v31 - a5 <= 2 )
  {
    v17 = v31;
    v39 = v31;
  }
  v38 = v31 - a5 > 2 ? v31 - a5 : 0;
  if ( (v40 & 2) == 0 )
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_BYTE *)(a3 + 3) = RtlpUpdateTagEntry(*(unsigned __int16 *)a3, v17, 4);
    goto LABEL_33;
  }
  v25 = *(unsigned __int16 *)a3;
  *(_DWORD *)(a3 + 8 * v17 - 8) = *(_DWORD *)(a3 + 8 * v25 - 8);
  *(_DWORD *)(a3 + 8 * v17 - 4) = *(_DWORD *)(a3 + 8 * v25 - 4);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
LABEL_33:
    v19 = v39;
    goto LABEL_34;
  }
  updated = RtlpUpdateTagEntry(*(unsigned __int16 *)a3, v17, 4);
  v19 = v39;
  *(_WORD *)(a3 + 8 * v39 - 6) = updated;
LABEL_34:
  v20 = 8 * v19;
  *(_WORD *)a3 = v19;
  v21 = 8 * v19 - a4;
  if ( v38 )
  {
    v22 = (unsigned __int16 *)(a3 + v20);
    if ( v21 >= 0x3F )
    {
      *((_DWORD *)v22 - 1) = v21;
      *(_BYTE *)(a3 + 7) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 7) = v21;
    }
    v23 = *(_DWORD *)(a1 + 64) & 0x40;
    if ( *(_BYTE *)(a3 + 6) )
      v23 = *(_DWORD *)(a1 + 64) & 0x40;
    RtlpCreateSplitBlock(v22, v35, v23 != 0, v19, v38);
  }
  else
  {
    *(_BYTE *)(a3 + 2) |= v35;
    if ( v21 >= 0x3F )
    {
      *(_DWORD *)(v20 + a3 - 4) = v21;
      *(_BYTE *)(a3 + 7) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 7) = v21;
    }
    *(_WORD *)(a3 + 8 * *(unsigned __int16 *)a3 + 4) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 84);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v18 )
      v18 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 8, v18);
  }
  else if ( (*(_BYTE *)(a1 + 64) & 0x40) != 0 )
  {
    v29 = v18 & 3;
    if ( (v18 & 3) != 0 )
      v29 = 4 - v29;
    v24 = a4;
    if ( a4 <= v29 + v18 )
      goto LABEL_43;
    v30 = (a4 - v29 - v18) & 0xFFFFFFFC;
    if ( v30 )
      RtlFillMemoryUlong(v29 + v18 + a3 + 8, v30, -1163005939);
  }
  v24 = a4;
LABEL_43:
  if ( (*(_BYTE *)(a1 + 64) & 0x20) != 0 )
  {
    *(_DWORD *)(a3 + v24 + 8) = -1414812757;
    *(_DWORD *)(a3 + v24 + 12) = -1414812757;
  }
  result = 1;
  *(_BYTE *)(a3 + 2) = (a2 >> 4) ^ (*(_BYTE *)(a3 + 2) ^ (a2 >> 4)) & 0x1F;
  return result;
}
