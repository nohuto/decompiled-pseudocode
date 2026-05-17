/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x18001E2D8
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800F369C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F6500 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FADB0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCreateUCREntry @ 0x18000E914 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x18000EA8C (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x18000EC28 (RtlpRemoveUCRBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCollectFreeBlocks @ 0x18001F2D8 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18001F398 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180108280 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x18010A038 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x18010A16C (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 */

struct _PEB *__fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r12
  char v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  struct _PEB *result; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rcx
  _BYTE *v35; // rdi
  unsigned __int64 v36; // r15
  bool v37; // cc
  __int64 v38; // rdx
  unsigned __int64 v39; // r15
  _QWORD *v40; // r8
  _QWORD *v41; // rcx
  unsigned __int64 v42; // r9
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  _BYTE *v57; // rdi
  unsigned __int64 v58; // r15
  __int64 v59; // rdx
  unsigned __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rcx
  bool v67; // zf
  unsigned __int64 v70; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v71; // [rsp+50h] [rbp-21h] BYREF
  __int64 v72; // [rsp+58h] [rbp-19h]
  __int64 v73; // [rsp+60h] [rbp-11h]
  __int64 *v74; // [rsp+68h] [rbp-9h]
  unsigned __int64 v75; // [rsp+70h] [rbp-1h]
  __int64 v76; // [rsp+78h] [rbp+7h] BYREF
  __int64 v77; // [rsp+80h] [rbp+Fh] BYREF
  char v78[64]; // [rsp+88h] [rbp+17h] BYREF
  char v79; // [rsp+D8h] [rbp+67h]
  __int64 v80; // [rsp+E8h] [rbp+77h] BYREF
  char v81; // [rsp+F0h] [rbp+7Fh]

  v81 = a4;
  v80 = a3;
  v73 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v79 = 0;
  v8 = a1;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    return (struct _PEB *)RtlpInsertFreeBlock(a1, a2);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v78, &v76) )
        *(_QWORD *)(v8 + 664) -= v76;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
      return (struct _PEB *)RtlpInsertFreeBlock(a1, a2);
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
    {
LABEL_11:
      a1 = v8;
      return (struct _PEB *)RtlpInsertFreeBlock(a1, a2);
    }
    v10 = RtlpCoalesceFreeBlocks(a1, a2, &v80, 0LL);
    v6 = v80;
    v11 = v10;
    if ( (unsigned __int64)(v80 - 257) <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      result = (struct _PEB *)(*(_QWORD *)(v8 + 672) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 672) - (_QWORD)result )
      {
        result = (struct _PEB *)(*(_QWORD *)(v8 + 680) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 680) - (_QWORD)result )
        {
          result = (struct _PEB *)RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 680) = v12;
          *(_QWORD *)(v8 + 672) = v12;
        }
      }
      return result;
    }
  }
  v14 = *(unsigned __int8 *)(v7 + 14);
  if ( (_BYTE)v14 )
    v15 = (v7 & 0xFFFFFFFFFFFF0000uLL) - (v14 << 16) + 0x10000;
  else
    v15 = v8;
  v16 = v11 + 16 * v6;
  if ( *(_BYTE *)(v16 + 15) == 3 )
  {
    RtlpRemoveUCRBlock(v8, (__int64 *)(v16 + 16));
    v17 = *(_QWORD *)(v16 + 56);
    v73 = *(_QWORD *)(v16 + 48);
    v72 = v17;
    --*(_DWORD *)(v15 + 84);
    *(_DWORD *)(v15 + 80) -= *(_QWORD *)(v16 + 56) >> 12;
    *(_QWORD *)(v8 + 576) += *(_QWORD *)(v16 + 56);
    --*(_DWORD *)(v8 + 604);
    v18 = *(_QWORD *)(v16 + 56);
    if ( v18 >= 0xFF000 )
    {
      *(_QWORD *)(v8 + 584) -= v18;
      v18 = *(_QWORD *)(v16 + 56);
    }
    v5 = v81;
    v6 += (v18 >> 4) + 64;
    v79 = 1;
    v80 = v6;
    v4 = 1;
  }
  else
  {
    v72 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v40 = (_QWORD *)(v15 + 96);
  v71 = v11;
  v41 = *(_QWORD **)(v15 + 96);
  v42 = v11;
  while ( v40 != v41 )
  {
    v43 = v41 - 2;
    v44 = v41[2] + v41[3];
    v74 = v41 - 2;
    if ( v44 == v11 )
      goto LABEL_55;
    v41 = (_QWORD *)*v41;
  }
  v43 = 0LL;
  v74 = 0LL;
LABEL_55:
  if ( v5 && !v43 )
  {
LABEL_20:
    v19 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    v71 = v19;
    if ( v19 == v11 + 80 )
    {
      v19 += 4096LL;
      v71 = v19;
    }
    v20 = 16 * v6;
    if ( v4 )
      v21 = v20 + v11;
    else
      v21 = v20 + v11 - 32;
    v22 = v21 & 0xFFFFFFFFFFFFF000uLL;
    if ( v22 >= v19 )
    {
      v23 = v22 - v19;
      v70 = v23;
      if ( v81 || *(_BYTE *)(v16 + 15) == 3 || v23 && v23 >= *(_QWORD *)(v8 + 176) )
      {
        v24 = 2147353472LL;
        if ( v23 )
        {
          ++*(_DWORD *)(v8 + 612);
          if ( (int)RtlpSecMemFreeVirtualMemory(v19, &v71, &v70, 0x4000LL) < 0 )
          {
            ++*(_DWORD *)(v8 + 628);
            v67 = v79 == 0;
LABEL_105:
            if ( !v67 )
              RtlpCreateUCREntry(v8, v15, v73 - 48, v72, v11, &v80);
            goto LABEL_151;
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v25) )
            v27 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v27 = 2147353472LL;
          if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapDecommit(v8, v71, v70, 6LL);
        }
        if ( !v79 )
        {
          v35 = (_BYTE *)(v71 + v70);
          *(_WORD *)(v71 + v70 + 12) = *(_WORD *)(v8 + 140);
          if ( v20 + v11 == v70 + v71 )
          {
            if ( *(_DWORD *)(v8 + 124) )
            {
              v35[11] = v35[8] ^ v35[9] ^ v35[10];
              *((_DWORD *)v35 + 2) ^= *(_DWORD *)(v8 + 136);
            }
          }
          else
          {
            v35[15] = 0;
            v35[10] = 0;
            v36 = (v11 + v20 - v70 - v71) >> 4;
            v37 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v35 + 4) = v36;
            if ( !v37 && (unsigned __int16)v36 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v35[11] = 0;
            v38 = *(_QWORD *)(v15 + 40);
            if ( v38 == v15 )
            {
              LOBYTE(v39) = 0;
            }
            else
            {
              v39 = ((unsigned __int64)&v35[-v15] >> 16) + 1;
              if ( v39 >= 0xFE )
                RtlpLogHeapFailure(3, v38, (_DWORD)v35, v15, 0LL, 0LL);
            }
            v35[14] = v39;
            RtlpInsertFreeBlock(v8, v35);
          }
        }
        RtlpCreateUCREntry(v8, v15, v71 - 48, v70, v11, &v77);
        RtlpInsertFreeBlock(v8, v11);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28) )
          v31 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v31, v30) )
            v24 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(v8, v71, v70, 16 * *(_QWORD *)(v8 + 192), 0, 0LL, *(unsigned __int8 *)v24);
        }
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v31, v30);
        v33 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v34 = (__int64)result->SharedData + 560;
        }
        else
        {
          v34 = 2147353482LL;
        }
        if ( *(_BYTE *)v34 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v34, v32) )
            v33 = (__int64)NtCurrentPeb()->SharedData + 560;
          return (struct _PEB *)RtlpLogHeapContractEvent(
                                  v8,
                                  v71,
                                  v70,
                                  16 * (unsigned int)*(_QWORD *)(v8 + 192),
                                  0,
                                  0LL,
                                  *(unsigned __int8 *)v33);
        }
        return result;
      }
LABEL_151:
      a2 = v11;
      goto LABEL_11;
    }
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_151;
    if ( !NtCurrentPeb()->Ldr )
      goto LABEL_149;
    goto LABEL_148;
  }
  v45 = (unsigned int)RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v43 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v40, v11);
    else
      DbgPrint("HEAP: ", 0LL, v40, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v42 = v71;
    v45 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v80;
  }
  v46 = 16 * v6;
  if ( v4 )
  {
    v47 = v46 + v11;
    v75 = v46 + v11;
  }
  else
  {
    v75 = v46 + v11;
    v47 = v46 + v11 - 32;
  }
  v70 = (v47 & 0xFFFFFFFFFFFFF000uLL) - v42;
  if ( !v70 )
  {
    if ( (int)v45 < 1 || !v4 )
      goto LABEL_151;
    if ( !NtCurrentPeb()->Ldr )
    {
LABEL_149:
      DbgPrint("HEAP: ");
      goto LABEL_150;
    }
LABEL_148:
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_150:
    DbgPrint("(!TrailingUCR)");
    RtlpHeapHandleError(1LL);
    goto LABEL_151;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v45, &v71, &v70, 0x4000LL) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
    v67 = v4 == 0;
    goto LABEL_105;
  }
  v50 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v49, v48) )
    v51 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v51 = 2147353472LL;
  if ( *(_BYTE *)v51 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, v71, v70, 5LL);
  ++*(_DWORD *)(v8 + 612);
  v52 = v74;
  v53 = v74[5];
  if ( v53 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) -= v53;
  RtlpRemoveUCRBlock(v8, v52);
  v52[5] += v70;
  RtlpInsertUCRBlock(v8, v52);
  *(_DWORD *)(v15 + 80) += v70 >> 12;
  *(_QWORD *)(v8 + 576) -= v70;
  v56 = v52[5];
  if ( v56 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v56;
  if ( !v79 )
  {
    v57 = (_BYTE *)(v71 + v70);
    *(_WORD *)(v71 + v70 + 12) = *(_WORD *)(v8 + 140);
    v55 = v70 + v71;
    if ( v75 == v70 + v71 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v57[11] = v57[8] ^ v57[9] ^ v57[10];
        *((_DWORD *)v57 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v57[15] = 0;
      v57[10] = 0;
      v58 = (v46 - v70) >> 4;
      v37 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v57 + 4) = v58;
      if ( !v37 && (unsigned __int16)v58 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v54, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v57[11] = 0;
      v59 = *(_QWORD *)(v15 + 40);
      if ( v59 == v15 )
      {
        LOBYTE(v60) = 0;
      }
      else
      {
        v60 = ((unsigned __int64)&v57[-v15] >> 16) + 1;
        if ( v60 >= 0xFE )
          RtlpLogHeapFailure(3, v59, (_DWORD)v57, v15, 0LL, 0LL);
      }
      v57[14] = v60;
      RtlpInsertFreeBlock(v8, v57);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v55, v54) )
    v62 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v62 = 2147353472LL;
  if ( *(_BYTE *)v62 && (v62 = 1LL, (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v61) )
      v50 = (__int64)NtCurrentPeb()->SharedData + 550;
    v63 = v72;
    RtlpLogHeapContractEvent(v8, v71, v70, 16 * *(_QWORD *)(v8 + 192), v79, v72, *(unsigned __int8 *)v50);
  }
  else
  {
    v63 = v72;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v62, v61);
  v65 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v66 = (__int64)result->SharedData + 560;
  }
  else
  {
    v66 = 2147353482LL;
  }
  if ( *(_BYTE *)v66 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v66, v64) )
      v65 = (__int64)NtCurrentPeb()->SharedData + 560;
    return (struct _PEB *)RtlpLogHeapContractEvent(
                            v8,
                            v71,
                            v70,
                            16 * (unsigned int)*(_QWORD *)(v8 + 192),
                            v79,
                            v63,
                            *(unsigned __int8 *)v65);
  }
  return result;
}
