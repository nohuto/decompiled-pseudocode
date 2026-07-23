/*
 * XREFs of _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2
 * Callers:
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 * Callees:
 *     @RtlpRemoveUCRBlock@8 @ 0x4B2A9E29 (@RtlpRemoveUCRBlock@8.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     @RtlpInsertUCRBlock@8 @ 0x4B2AB9B6 (@RtlpInsertUCRBlock@8.c)
 *     @RtlpSearchUCRBlock@8 @ 0x4B2ABF52 (@RtlpSearchUCRBlock@8.c)
 *     @RtlpCollectFreeBlocks@4 @ 0x4B2AF680 (@RtlpCollectFreeBlocks@4.c)
 *     @RtlpGetFreeBlockInsidePageBoundaries@16 @ 0x4B2AF817 (@RtlpGetFreeBlockInsidePageBoundaries@16.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8 (_RtlpLogHeapContractEvent@28.c)
 *     _RtlpLogHeapDecommit@16 @ 0x4B36EF8E (_RtlpLogHeapDecommit@16.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpDeCommitFreeBlock(_DWORD *BaseAddress, int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edi
  int result; // eax
  unsigned __int8 v11; // al
  char *v12; // edi
  _DWORD *v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edi
  unsigned __int16 *v24; // ecx
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned __int16 v27; // dx
  unsigned int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // eax
  _DWORD *v33; // eax
  unsigned int v34; // ecx
  int *v35; // edx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // edi
  bool v39; // zf
  unsigned __int16 *v40; // edx
  unsigned __int16 v41; // ax
  unsigned int v42; // eax
  char v43; // bl
  unsigned __int16 v44; // cx
  _DWORD *v45; // eax
  int v46; // [esp-4h] [ebp-44h]
  int v47; // [esp+10h] [ebp-30h] BYREF
  unsigned int v48; // [esp+14h] [ebp-2Ch]
  int v49; // [esp+18h] [ebp-28h]
  char v50[4]; // [esp+1Ch] [ebp-24h]
  int v51; // [esp+20h] [ebp-20h]
  _DWORD *v52; // [esp+24h] [ebp-1Ch]
  int v53; // [esp+28h] [ebp-18h]
  int v54; // [esp+2Ch] [ebp-14h]
  unsigned int v55; // [esp+30h] [ebp-10h]
  _DWORD *v56; // [esp+34h] [ebp-Ch] BYREF
  _BYTE *v57; // [esp+38h] [ebp-8h] BYREF
  int v58; // [esp+3Ch] [ebp-4h] BYREF

  v4 = BaseAddress;
  v53 = 0;
  v39 = RtlpHeapKey == BaseAddress[51];
  v50[0] = 0;
  if ( !v39 )
    return RtlpInsertFreeBlock(BaseAddress, a3);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
    {
      --BaseAddress[144];
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(&v57, &v56) )
        v4[145] -= v56;
    }
    v6 = a3;
    v8 = a2;
    v49 = a2;
  }
  else
  {
    v6 = a3;
    if ( a3 < BaseAddress[27] )
      return RtlpInsertFreeBlock(BaseAddress, v6);
    v55 = a3 + BaseAddress[29];
    if ( v55 < BaseAddress[28] || v55 < BaseAddress[126] >> (*((_BYTE *)BaseAddress + 592) + 3) )
      goto LABEL_9;
    v7 = RtlpCoalesceFreeBlocks(BaseAddress, (int)&a3, 0);
    v6 = a3;
    v8 = v7;
    v49 = v7;
    if ( a3 - 513 <= 0xFBFF )
    {
      RtlpInsertFreeBlock(v4, a3);
      v9 = v4[126] - 8 * v4[29];
      result = v4[146] >> 4;
      if ( v9 < v4[146] - result )
      {
        result = v4[147] >> 2;
        if ( v9 > v4[147] - result )
        {
          result = RtlpCollectFreeBlocks(v4);
          v4[147] = v9;
          v4[146] = v9;
        }
      }
      return result;
    }
  }
  v11 = *(_BYTE *)(a2 + 6);
  if ( v11 )
    v12 = (char *)((a2 & 0xFFFF0000) - (v11 << 16) + 0x10000);
  else
    v12 = (char *)v4;
  v57 = (_BYTE *)(v8 + 8 * v6 + 7);
  if ( *v57 == 3 )
  {
    v56 = (_DWORD *)(v8 + 8 * v6 + 8);
    RtlpRemoveUCRBlock((int)v4, v56);
    v13 = v56;
    v53 = v56[4];
    v14 = v56[5];
    --*((_DWORD *)v12 + 12);
    v51 = v14;
    *((_DWORD *)v12 + 11) -= v13[5] >> 12;
    v4[126] += v13[5];
    --v4[130];
    v15 = v13[5];
    if ( v15 >= 0x7F000 )
    {
      v4[127] -= v15;
      v15 = v13[5];
    }
    v8 = v49;
    v6 += (v15 >> 3) + 32;
    a3 = v6;
    v50[0] = 1;
  }
  else
  {
    v51 = 0;
  }
  if ( *((_WORD *)v4 + 42) == *(_WORD *)(v8 + 4) )
  {
    v48 = v8;
    v29 = RtlpSearchUCRBlock((int)v12, v8);
    v52 = v29;
    if ( !a4 || v29 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 && !v29 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(UCRBlock != NULL)");
        if ( !byte_4B3A5DA8 )
          RtlpReportHeapFailure(1);
        v8 = v49;
        v6 = a3;
      }
      v55 = 8 * v6;
      v30 = v8 + 8 * v6;
      v54 = v30;
      if ( !v50[0] )
        v30 -= 16;
      v47 = (v30 & 0xFFFFF000) - v48;
      if ( v47 )
      {
        if ( RtlpSecMemFreeVirtualMemory(&v47, 0x4000) >= 0 )
        {
          v31 = 2147353472;
          if ( RtlGetCurrentServiceSessionId() )
            v32 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v32 = 2147353472;
          if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapDecommit(v47, 5);
          v33 = v52;
          ++v4[132];
          v34 = v33[5];
          if ( v34 >= 0x7F000 )
            v4[127] -= v34;
          RtlpRemoveUCRBlock((int)v4, v33);
          v35 = v52;
          v52[5] += v47;
          RtlpInsertUCRBlock((unsigned int)v4, v35);
          *((_DWORD *)v12 + 11) += (unsigned int)v47 >> 12;
          v4[126] -= v47;
          v36 = v52[5];
          if ( v36 >= 0x7F000 )
            v4[127] += v36;
          if ( !v50[0] )
          {
            v40 = (unsigned __int16 *)(v48 + v47);
            v41 = *((_WORD *)v4 + 42);
            v52 = v40;
            v40[2] = v41;
            if ( v54 == v48 + v47 )
            {
              if ( v4[19] )
              {
                *((_BYTE *)v40 + 3) = *(_BYTE *)v40 ^ *((_BYTE *)v40 + 1) ^ *((_BYTE *)v40 + 2);
                *(_DWORD *)v40 ^= v4[20];
              }
            }
            else
            {
              v42 = v55;
              v43 = 0;
              *((_BYTE *)v40 + 7) = 0;
              *((_BYTE *)v40 + 2) = 0;
              v44 = (v42 - v47) >> 3;
              *v40 = v44;
              if ( RtlpHeapErrorHandlerThreshold >= 1 && v44 <= 1u )
              {
                if ( NtCurrentPeb()->Ldr )
                  DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                else
                  DbgPrint("HEAP: ");
                DbgPrint("((LONG)FreeEntry->Size > 1)");
                if ( !byte_4B3A5DA8 )
                  RtlpReportHeapFailure(1);
                v40 = (unsigned __int16 *)v52;
              }
              *((_BYTE *)v40 + 3) = 0;
              if ( *((char **)v12 + 6) != v12 )
              {
                v45 = (_DWORD *)(((unsigned int)((char *)v40 - v12) >> 16) + 1);
                v56 = v45;
                if ( (unsigned int)v45 >= 0xFE )
                {
                  RtlpLogHeapFailure(v40, v12, 0, 0);
                  v40 = (unsigned __int16 *)v52;
                  LOBYTE(v45) = (_BYTE)v56;
                }
                v43 = (char)v45;
              }
              v46 = *v40;
              *((_BYTE *)v40 + 6) = v43;
              RtlpInsertFreeBlock(v4, v46);
              v31 = 2147353472;
            }
          }
          if ( RtlGetCurrentServiceSessionId() )
            v37 = (int)NtCurrentPeb()->SharedData + 550;
          else
            v37 = 2147353472;
          if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v31 = (int)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapContractEvent(v47, 8 * v4[29], v50[0], v51, (HANDLE)*(unsigned __int8 *)v31);
          }
          v38 = 2147353482;
          if ( RtlGetCurrentServiceSessionId() )
            result = (int)NtCurrentPeb()->SharedData + 560;
          else
            result = 2147353482;
          if ( *(_BYTE *)result )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v38 = (int)NtCurrentPeb()->SharedData + 560;
            return RtlpLogHeapContractEvent(v47, 8 * v4[29], v50[0], v51, (HANDLE)*(unsigned __int8 *)v38);
          }
          return result;
        }
LABEL_91:
        ++v4[136];
        if ( v50[0] )
        {
          RtlpCreateUCREntry(v53 - 24, v51, v49, &a3);
LABEL_150:
          v6 = a3;
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      if ( RtlpHeapErrorHandlerThreshold < 1 )
        goto LABEL_9;
      v39 = v50[0] == 0;
LABEL_144:
      if ( !v39 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(!TrailingUCR)");
        if ( !byte_4B3A5DA8 )
          RtlpReportHeapFailure(1);
        goto LABEL_150;
      }
LABEL_9:
      BaseAddress = v4;
      return RtlpInsertFreeBlock(BaseAddress, v6);
    }
  }
  v16 = (v8 + 4127) & 0xFFFFF000;
  v48 = v16;
  if ( v16 == v8 + 40 )
  {
    v16 += 4096;
    v48 = v16;
  }
  v54 = 8 * v6;
  v17 = v8 + 8 * v6;
  v55 = v17;
  if ( !v50[0] )
    v17 -= 16;
  v18 = v17 & 0xFFFFF000;
  if ( v18 < v16 )
  {
    if ( RtlpHeapErrorHandlerThreshold < 1 )
      goto LABEL_9;
    v39 = v50[0] == 0;
    goto LABEL_144;
  }
  v19 = v18 - v16;
  v47 = v19;
  if ( !a4 && *v57 != 3 && (!v19 || v19 < v4[27]) )
    goto LABEL_9;
  if ( v19 )
  {
    ++v4[132];
    if ( RtlpSecMemFreeVirtualMemory(&v47, 0x4000) < 0 )
      goto LABEL_91;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v20 = 2147353472;
    if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(v47, 6);
    v8 = v49;
  }
  if ( !v50[0] )
  {
    v24 = (unsigned __int16 *)(v47 + v48);
    v25 = *((_WORD *)v4 + 42);
    v51 = (int)v24;
    v24[2] = v25;
    if ( v55 == v48 + v47 )
    {
      if ( v4[19] )
      {
        *((_BYTE *)v24 + 3) = *(_BYTE *)v24 ^ *((_BYTE *)v24 + 1) ^ *((_BYTE *)v24 + 2);
        *(_DWORD *)v24 ^= v4[20];
      }
    }
    else
    {
      v26 = v54;
      *((_BYTE *)v24 + 7) = 0;
      *((_BYTE *)v24 + 2) = 0;
      v27 = (v8 + v26 - v47 - v48) >> 3;
      *v24 = v27;
      if ( RtlpHeapErrorHandlerThreshold >= 1 && v27 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        if ( !byte_4B3A5DA8 )
          RtlpReportHeapFailure(1);
        v24 = (unsigned __int16 *)v51;
      }
      *((_BYTE *)v24 + 3) = 0;
      if ( *((char **)v12 + 6) == v12 )
      {
        LOBYTE(v28) = 0;
      }
      else
      {
        v28 = ((unsigned int)((char *)v24 - v12) >> 16) + 1;
        v57 = (_BYTE *)v28;
        if ( v28 >= 0xFE )
        {
          RtlpLogHeapFailure(v24, v12, 0, 0);
          v24 = (unsigned __int16 *)v51;
          LOBYTE(v28) = (_BYTE)v57;
        }
      }
      *((_BYTE *)v24 + 6) = v28;
      RtlpInsertFreeBlock(v4, *v24);
    }
  }
  RtlpCreateUCREntry(v48 - 24, v47, v49, &v58);
  RtlpInsertFreeBlock(v4, v58);
  v21 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    v22 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v22 = 2147353472;
  if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (int)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapContractEvent(v47, 8 * v4[29], 0, 0, (HANDLE)*(unsigned __int8 *)v21);
  }
  v23 = 2147353482;
  if ( RtlGetCurrentServiceSessionId() )
    result = (int)NtCurrentPeb()->SharedData + 560;
  else
    result = 2147353482;
  if ( *(_BYTE *)result )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v23 = (int)NtCurrentPeb()->SharedData + 560;
    return RtlpLogHeapContractEvent(v47, 8 * v4[29], 0, 0, (HANDLE)*(unsigned __int8 *)v23);
  }
  return result;
}
