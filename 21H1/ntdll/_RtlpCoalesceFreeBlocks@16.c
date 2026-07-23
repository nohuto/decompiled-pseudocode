/*
 * XREFs of _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpCommitBlock@8 @ 0x4B2AF586 (@RtlpCommitBlock@8.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlCompareMemoryUlong@12 @ 0x4B307F80 (_RtlCompareMemoryUlong@12.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

_WORD *__fastcall RtlpCoalesceFreeBlocks(_DWORD *BaseAddress, _WORD *a2, _DWORD *a3, char a4)
{
  _WORD *v4; // ebx
  _BYTE *v5; // edi
  _DWORD *v6; // esi
  _DWORD *v7; // edx
  int v8; // eax
  _DWORD *v9; // edx
  _BYTE *v10; // edi
  _DWORD *v12; // edx
  unsigned int i; // eax
  char v14; // cl
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  _DWORD *v18; // edx
  int v19; // eax
  _DWORD *v20; // edx
  unsigned int v21; // eax
  char v22; // cl
  unsigned int v23; // eax
  _DWORD *v24; // edx
  int v25; // eax
  _DWORD *v26; // edx
  unsigned int v27; // eax
  char v28; // cl
  unsigned int v29; // eax
  _DWORD *v30; // edx
  int v31; // eax
  _DWORD *v32; // edx
  unsigned int v33; // eax
  char v34; // cl
  unsigned int v35; // eax
  ULONG v36; // [esp+0h] [ebp-28h]
  unsigned int v37; // [esp+10h] [ebp-18h]
  _DWORD *v38; // [esp+18h] [ebp-10h]
  int v39; // [esp+18h] [ebp-10h]
  int v40; // [esp+18h] [ebp-10h]
  int v41; // [esp+18h] [ebp-10h]
  int v42; // [esp+18h] [ebp-10h]
  int v43; // [esp+18h] [ebp-10h]
  _DWORD *v44; // [esp+1Ch] [ebp-Ch]
  int v45; // [esp+1Ch] [ebp-Ch]
  _DWORD *v46; // [esp+1Ch] [ebp-Ch]
  _DWORD *v47; // [esp+1Ch] [ebp-Ch]
  int v48; // [esp+20h] [ebp-8h]
  int v49; // [esp+20h] [ebp-8h]
  unsigned int v50; // [esp+20h] [ebp-8h]
  unsigned int v51; // [esp+20h] [ebp-8h]
  unsigned int v52; // [esp+20h] [ebp-8h]
  char v53; // [esp+27h] [ebp-1h]

  v4 = a2;
  v5 = &a2[-4 * (*((unsigned __int16 *)BaseAddress + 42) ^ (unsigned __int16)a2[2])];
  v6 = BaseAddress;
  if ( v5 == (_BYTE *)a2
    || ((v5[2] ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 82) & (BaseAddress[19] >> 20))) & 1) != 0 )
  {
    v53 = a4;
  }
  else
  {
    if ( BaseAddress[19] )
    {
      *(_DWORD *)v5 ^= BaseAddress[20];
      if ( v5[3] != (v5[2] ^ (unsigned __int8)(*v5 ^ v5[1])) )
        RtlpAnalyzeHeapFailure(BaseAddress);
    }
    v53 = a4;
    if ( a4 )
    {
      v18 = (_DWORD *)*((_DWORD *)v4 + 3);
      v49 = *((_DWORD *)v4 + 2);
      v44 = v18;
      v19 = *(_DWORD *)(v49 + 4);
      if ( *v18 == v19 && (_WORD *)*v18 == v4 + 4 )
      {
        v6[29] -= (unsigned __int16)*v4;
        v20 = (_DWORD *)v6[45];
        if ( v20 )
        {
          while ( 1 )
          {
            if ( (unsigned int)(unsigned __int16)*v4 < v20[1] )
            {
              v21 = (unsigned __int16)*v4;
              goto LABEL_47;
            }
            if ( !*v20 )
              break;
            v20 = (_DWORD *)*v20;
          }
          v21 = v20[1] - 1;
LABEL_47:
          RtlpHeapRemoveListEntry((int)v6, v20, 1, (int *)v4 + 2, v21, (unsigned __int16)*v4);
        }
        *v44 = v49;
        *(_DWORD *)(v49 + 4) = v44;
        if ( (v4[1] & 8) == 0 || RtlpCommitBlock(v6, (int)v4) )
        {
          v22 = *((_BYTE *)v4 + 2);
          if ( (v22 & 4) != 0 )
          {
            v23 = 8 * (unsigned __int16)*v4 - 16;
            v50 = v23;
            if ( (v22 & 2) != 0 && v23 > 4 )
            {
              v23 = 8 * (unsigned __int16)*v4 - 20;
              v50 = v23;
            }
            v45 = RtlCompareMemoryUlong(v4 + 8, v23 | 0xFEEEFEEE00000000uLL, v36);
            if ( v45 != v50 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ");
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v4, (char *)v4 + v45 + 16);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(v6, (int)v4, (unsigned __int16)*v4, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(v4 + 4, v19, *v18, 0);
      }
      v53 = 0;
    }
    v7 = (_DWORD *)*((_DWORD *)v5 + 3);
    v48 = *((_DWORD *)v5 + 2);
    v38 = v7;
    v8 = *(_DWORD *)(v48 + 4);
    if ( *v7 == v8 && (_BYTE *)*v7 == v5 + 8 )
    {
      v6[29] -= *(unsigned __int16 *)v5;
      v12 = (_DWORD *)v6[45];
      if ( v12 )
      {
        for ( i = *(unsigned __int16 *)v5; i >= v12[1]; i = *(unsigned __int16 *)v5 )
        {
          if ( !*v12 )
          {
            i = v12[1] - 1;
            break;
          }
          v12 = (_DWORD *)*v12;
        }
        RtlpHeapRemoveListEntry((int)v6, v12, 1, (int *)v5 + 2, i, *(unsigned __int16 *)v5);
      }
      HIWORD(BaseAddress) = HIWORD(v38);
      *v38 = v48;
      *(_DWORD *)(v48 + 4) = v38;
      if ( (v5[2] & 8) == 0 || RtlpCommitBlock(v6, (int)v5) )
      {
        v14 = v5[2];
        if ( (v14 & 4) != 0 )
        {
          v16 = *(unsigned __int16 *)v5;
          v17 = 8 * v16 - 16;
          if ( (v14 & 2) != 0 && v17 > 4 )
            v17 = 8 * v16 - 20;
          v39 = RtlCompareMemoryUlong(v5 + 16, v17 | 0xFEEEFEEE00000000uLL, v36);
          if ( v39 != v17 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ");
            else
              DbgPrint("HEAP: ");
            DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v5, &v5[v39 + 16]);
            if ( NtCurrentPeb()->BeingDebugged )
            {
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
        }
        v9 = a3;
        v4 = v5;
        v15 = *(unsigned __int16 *)v5;
        v5[2] = 0;
        v5[7] = 0;
        *a3 += v15;
        *(_WORD *)v5 = *(_WORD *)a3;
        LOWORD(BaseAddress) = *((_WORD *)v6 + 42) ^ *(_WORD *)a3;
        *(_WORD *)&v5[8 * *a3 + 4] = (_WORD)BaseAddress;
        goto LABEL_10;
      }
      RtlpDeCommitFreeBlock(v6, (int)v5, *(unsigned __int16 *)v5, 1);
    }
    else
    {
      RtlpLogHeapFailure(v5 + 8, v8, *v7, 0);
    }
  }
  v9 = a3;
LABEL_10:
  v10 = &v4[4 * *v9];
  if ( v6[19] )
  {
    v37 = *(_DWORD *)v10 ^ v6[20];
    BaseAddress = (_DWORD *)HIWORD(v37);
    LOBYTE(BaseAddress) = v37 ^ BYTE1(v37) ^ BYTE2(v37);
    if ( HIBYTE(v37) != (_BYTE)BaseAddress )
      RtlpLogHeapFailure(v10, 0, 0, 0);
  }
  while ( ((v10[2] ^ (unsigned __int8)(*((_BYTE *)v6 + 82) & (v6[19] >> 20))) & 1) == 0 )
  {
    if ( v6[19] )
    {
      *(_DWORD *)v10 ^= v6[20];
      if ( v10[3] != (v10[2] ^ (unsigned __int8)(*v10 ^ v10[1])) )
        RtlpAnalyzeHeapFailure(BaseAddress);
    }
    if ( v53 )
    {
      v24 = (_DWORD *)*((_DWORD *)v4 + 3);
      v40 = *((_DWORD *)v4 + 2);
      v46 = v24;
      v25 = *(_DWORD *)(v40 + 4);
      if ( *v24 == v25 && (_WORD *)*v24 == v4 + 4 )
      {
        v6[29] -= (unsigned __int16)*v4;
        v26 = (_DWORD *)v6[45];
        if ( v26 )
        {
          while ( 1 )
          {
            if ( (unsigned int)(unsigned __int16)*v4 < v26[1] )
            {
              v27 = (unsigned __int16)*v4;
              goto LABEL_77;
            }
            if ( !*v26 )
              break;
            v26 = (_DWORD *)*v26;
          }
          v27 = v26[1] - 1;
LABEL_77:
          RtlpHeapRemoveListEntry((int)v6, v26, 1, (int *)v4 + 2, v27, (unsigned __int16)*v4);
        }
        *v46 = v40;
        *(_DWORD *)(v40 + 4) = v46;
        if ( (v4[1] & 8) == 0 || RtlpCommitBlock(v6, (int)v4) )
        {
          v28 = *((_BYTE *)v4 + 2);
          if ( (v28 & 4) != 0 )
          {
            v29 = 8 * (unsigned __int16)*v4 - 16;
            v51 = v29;
            if ( (v28 & 2) != 0 && v29 > 4 )
            {
              v29 = 8 * (unsigned __int16)*v4 - 20;
              v51 = v29;
            }
            v41 = RtlCompareMemoryUlong(v4 + 8, v29 | 0xFEEEFEEE00000000uLL, v36);
            if ( v41 != v51 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ");
              else
                DbgPrint("HEAP: ");
              DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v4, (char *)v4 + v41 + 16);
              if ( NtCurrentPeb()->BeingDebugged )
              {
                __debugbreak();
                RtlpHeapInvalidBreakPoint = 0;
              }
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(v6, (int)v4, (unsigned __int16)*v4, 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(v4 + 4, v25, *v24, 0);
      }
      v53 = 0;
    }
    v30 = (_DWORD *)*((_DWORD *)v10 + 3);
    v42 = *((_DWORD *)v10 + 2);
    v47 = v30;
    v31 = *(_DWORD *)(v42 + 4);
    if ( *v30 == v31 && (_BYTE *)*v30 == v10 + 8 )
    {
      v6[29] -= *(unsigned __int16 *)v10;
      v32 = (_DWORD *)v6[45];
      if ( v32 )
      {
        while ( 1 )
        {
          if ( (unsigned int)*(unsigned __int16 *)v10 < v32[1] )
          {
            v33 = *(unsigned __int16 *)v10;
            goto LABEL_102;
          }
          if ( !*v32 )
            break;
          v32 = (_DWORD *)*v32;
        }
        v33 = v32[1] - 1;
LABEL_102:
        RtlpHeapRemoveListEntry((int)v6, v32, 1, (int *)v10 + 2, v33, *(unsigned __int16 *)v10);
      }
      *v47 = v42;
      *(_DWORD *)(v42 + 4) = v47;
      if ( (v10[2] & 8) == 0 || RtlpCommitBlock(v6, (int)v10) )
      {
        v34 = v10[2];
        if ( (v34 & 4) != 0 )
        {
          v35 = 8 * *(unsigned __int16 *)v10 - 16;
          v52 = v35;
          if ( (v34 & 2) != 0 && v35 > 4 )
          {
            v35 = 8 * *(unsigned __int16 *)v10 - 20;
            v52 = v35;
          }
          v43 = RtlCompareMemoryUlong(v10 + 16, v35 | 0xFEEEFEEE00000000uLL, v36);
          if ( v43 != v52 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ");
            else
              DbgPrint("HEAP: ");
            DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v10, &v10[v43 + 16]);
            if ( NtCurrentPeb()->BeingDebugged )
            {
              __debugbreak();
              RtlpHeapInvalidBreakPoint = 0;
            }
          }
        }
        *((_BYTE *)v4 + 2) = 0;
        *((_BYTE *)v4 + 7) = 0;
        *a3 += *(unsigned __int16 *)v10;
        *v4 = *(_WORD *)a3;
        v4[4 * *a3 + 2] = *((_WORD *)v6 + 42) ^ *(_WORD *)a3;
        return v4;
      }
      RtlpDeCommitFreeBlock(v6, (int)v10, *(unsigned __int16 *)v10, 1);
    }
    else
    {
      RtlpLogHeapFailure(v10 + 8, v31, *v30, 0);
    }
  }
  return v4;
}
