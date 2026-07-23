/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x18001E2D8
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800F380C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F6670 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FAF20 (RtlpValidateHeapSegment.c)
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
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x1801083E0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x18010A198 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x18010A2CC (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

int __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
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
  struct _PEB *v13; // rax
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
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _BYTE *v29; // rdi
  unsigned __int64 v30; // r15
  bool v31; // cc
  __int64 v32; // rdx
  unsigned __int64 v33; // r15
  _QWORD *v34; // r8
  _QWORD *v35; // rcx
  unsigned __int64 v36; // r9
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _BYTE *v48; // rdi
  unsigned __int64 v49; // r15
  __int64 v50; // rdx
  unsigned __int64 v51; // r14
  __int64 v52; // rcx
  __int64 v53; // r15
  __int64 v54; // rdi
  __int64 v55; // rcx
  bool v56; // zf
  int v58[2]; // [rsp+48h] [rbp-29h] BYREF
  int v59[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v60; // [rsp+58h] [rbp-19h]
  __int64 v61; // [rsp+60h] [rbp-11h]
  __int64 *v62; // [rsp+68h] [rbp-9h]
  unsigned __int64 v63; // [rsp+70h] [rbp-1h]
  __int64 v64; // [rsp+78h] [rbp+7h] BYREF
  __int64 v65; // [rsp+80h] [rbp+Fh] BYREF
  char v66[64]; // [rsp+88h] [rbp+17h] BYREF
  char v67; // [rsp+D8h] [rbp+67h]
  __int64 v68; // [rsp+E8h] [rbp+77h] BYREF
  char v69; // [rsp+F0h] [rbp+7Fh]

  v69 = a4;
  v68 = a3;
  v61 = 0LL;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v67 = 0;
  v8 = a1;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    goto LABEL_12;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v66, &v64) )
        *(_QWORD *)(v8 + 664) -= v64;
    }
    v11 = v7;
  }
  else
  {
    if ( a3 < *(_QWORD *)(a1 + 176) )
    {
LABEL_12:
      LODWORD(v13) = RtlpInsertFreeBlock(a1, a2);
      return (int)v13;
    }
    v9 = a3 + *(_QWORD *)(a1 + 192);
    if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
    {
LABEL_11:
      a1 = v8;
      goto LABEL_12;
    }
    v10 = RtlpCoalesceFreeBlocks(a1);
    v6 = v68;
    v11 = v10;
    if ( (unsigned __int64)(v68 - 257) <= 0xFDFF )
    {
      RtlpInsertFreeBlock(v8, v10);
      v12 = *(_QWORD *)(v8 + 576) - 16LL * *(_QWORD *)(v8 + 192);
      v13 = (struct _PEB *)(*(_QWORD *)(v8 + 672) >> 4);
      if ( v12 < *(_QWORD *)(v8 + 672) - (_QWORD)v13 )
      {
        v13 = (struct _PEB *)(*(_QWORD *)(v8 + 680) >> 2);
        if ( v12 > *(_QWORD *)(v8 + 680) - (_QWORD)v13 )
        {
          LODWORD(v13) = RtlpCollectFreeBlocks(v8);
          *(_QWORD *)(v8 + 680) = v12;
          *(_QWORD *)(v8 + 672) = v12;
        }
      }
      return (int)v13;
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
    v61 = *(_QWORD *)(v16 + 48);
    v60 = v17;
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
    v5 = v69;
    v6 += (v18 >> 4) + 64;
    v67 = 1;
    v68 = v6;
    v4 = 1;
  }
  else
  {
    v60 = 0LL;
  }
  if ( *(_WORD *)(v8 + 140) != *(_WORD *)(v11 + 12) )
    goto LABEL_20;
  v34 = (_QWORD *)(v15 + 96);
  *(_QWORD *)v59 = v11;
  v35 = *(_QWORD **)(v15 + 96);
  v36 = v11;
  while ( v34 != v35 )
  {
    v37 = v35 - 2;
    v38 = v35[2] + v35[3];
    v62 = v35 - 2;
    if ( v38 == v11 )
      goto LABEL_55;
    v35 = (_QWORD *)*v35;
  }
  v37 = 0LL;
  v62 = 0LL;
LABEL_55:
  if ( v5 && !v37 )
  {
LABEL_20:
    v19 = (v11 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v59 = v19;
    if ( v19 == v11 + 80 )
    {
      v19 += 4096LL;
      *(_QWORD *)v59 = v19;
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
      *(_QWORD *)v58 = v23;
      if ( v69 || *(_BYTE *)(v16 + 15) == 3 || v23 && v23 >= *(_QWORD *)(v8 + 176) )
      {
        v24 = 2147353472LL;
        if ( v23 )
        {
          ++*(_DWORD *)(v8 + 612);
          if ( RtlpSecMemFreeVirtualMemory(v19, (PVOID *)v59, (ULONG_PTR *)v58, 0x4000u) < 0 )
          {
            ++*(_DWORD *)(v8 + 628);
            v56 = v67 == 0;
LABEL_105:
            if ( !v56 )
              RtlpCreateUCREntry(v8, v15, v61 - 48, v60, v11, &v68);
            goto LABEL_151;
          }
          if ( RtlGetCurrentServiceSessionId() )
            v25 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v25 = 2147353472LL;
          if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            RtlpLogHeapDecommit(v8, *(_QWORD *)v59, *(_QWORD *)v58, 6LL);
        }
        if ( !v67 )
        {
          v29 = (_BYTE *)(*(_QWORD *)v59 + *(_QWORD *)v58);
          *(_WORD *)(*(_QWORD *)v59 + *(_QWORD *)v58 + 12LL) = *(_WORD *)(v8 + 140);
          if ( v20 + v11 == *(_QWORD *)v58 + *(_QWORD *)v59 )
          {
            if ( *(_DWORD *)(v8 + 124) )
            {
              v29[11] = v29[8] ^ v29[9] ^ v29[10];
              *((_DWORD *)v29 + 2) ^= *(_DWORD *)(v8 + 136);
            }
          }
          else
          {
            v29[15] = 0;
            v29[10] = 0;
            v30 = (v11 + v20 - *(_QWORD *)v58 - *(_QWORD *)v59) >> 4;
            v31 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v29 + 4) = v30;
            if ( !v31 && (unsigned __int16)v30 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("(LONG)FreeEntry->Size > 1");
              RtlpHeapHandleError(1LL);
            }
            v29[11] = 0;
            v32 = *(_QWORD *)(v15 + 40);
            if ( v32 == v15 )
            {
              LOBYTE(v33) = 0;
            }
            else
            {
              v33 = ((unsigned __int64)&v29[-v15] >> 16) + 1;
              if ( v33 >= 0xFE )
                RtlpLogHeapFailure(3, v32, (_DWORD)v29, v15, 0LL, 0LL);
            }
            v29[14] = v33;
            RtlpInsertFreeBlock(v8, v29);
          }
        }
        RtlpCreateUCREntry(v8, v15, *(_QWORD *)v59 - 48LL, *(__int64 *)v58, v11, &v65);
        RtlpInsertFreeBlock(v8, v11);
        if ( RtlGetCurrentServiceSessionId() )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v24 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            v8,
            v59[0],
            v58[0],
            16 * *(_QWORD *)(v8 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v24);
        }
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        v27 = 2147353482LL;
        if ( (_DWORD)v13 )
        {
          v13 = NtCurrentPeb();
          v28 = (__int64)v13->SharedData + 560;
        }
        else
        {
          v28 = 2147353482LL;
        }
        if ( *(_BYTE *)v28 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v27 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v13) = RtlpLogHeapContractEvent(
                           v8,
                           v59[0],
                           v58[0],
                           16 * (unsigned int)*(_QWORD *)(v8 + 192),
                           0,
                           0LL,
                           (HANDLE)*(unsigned __int8 *)v27);
        }
        return (int)v13;
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
  v39 = (unsigned int)RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v37 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v34, v11);
    else
      DbgPrint("HEAP: ", 0LL, v34, v11);
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v36 = *(_QWORD *)v59;
    v39 = (unsigned int)RtlpHeapErrorHandlerThreshold;
    v6 = v68;
  }
  v40 = 16 * v6;
  if ( v4 )
  {
    v41 = v40 + v11;
    v63 = v40 + v11;
  }
  else
  {
    v63 = v40 + v11;
    v41 = v40 + v11 - 32;
  }
  *(_QWORD *)v58 = (v41 & 0xFFFFFFFFFFFFF000uLL) - v36;
  if ( !*(_QWORD *)v58 )
  {
    if ( (int)v39 < 1 || !v4 )
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
  if ( RtlpSecMemFreeVirtualMemory(v39, (PVOID *)v59, (ULONG_PTR *)v58, 0x4000u) < 0 )
  {
    ++*(_DWORD *)(v8 + 628);
    v56 = v4 == 0;
    goto LABEL_105;
  }
  v42 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v43 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v43 = 2147353472LL;
  if ( *(_BYTE *)v43 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v8, *(_QWORD *)v59, *(_QWORD *)v58, 5LL);
  ++*(_DWORD *)(v8 + 612);
  v44 = v62;
  v45 = v62[5];
  if ( v45 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) -= v45;
  RtlpRemoveUCRBlock(v8, v44);
  v44[5] += *(_QWORD *)v58;
  RtlpInsertUCRBlock(v8, v44);
  *(_DWORD *)(v15 + 80) += *(_QWORD *)v58 >> 12;
  *(_QWORD *)(v8 + 576) -= *(_QWORD *)v58;
  v47 = v44[5];
  if ( v47 >= 0xFF000 )
    *(_QWORD *)(v8 + 584) += v47;
  if ( !v67 )
  {
    v48 = (_BYTE *)(*(_QWORD *)v59 + *(_QWORD *)v58);
    *(_WORD *)(*(_QWORD *)v59 + *(_QWORD *)v58 + 12LL) = *(_WORD *)(v8 + 140);
    if ( v63 == *(_QWORD *)v58 + *(_QWORD *)v59 )
    {
      if ( *(_DWORD *)(v8 + 124) )
      {
        v48[11] = v48[8] ^ v48[9] ^ v48[10];
        *((_DWORD *)v48 + 2) ^= *(_DWORD *)(v8 + 136);
      }
    }
    else
    {
      v48[15] = 0;
      v48[10] = 0;
      v49 = (unsigned __int64)(v40 - *(_QWORD *)v58) >> 4;
      v31 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v48 + 4) = v49;
      if ( !v31 && (unsigned __int16)v49 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 0LL);
        else
          DbgPrint("HEAP: ", v46, 0LL);
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v48[11] = 0;
      v50 = *(_QWORD *)(v15 + 40);
      if ( v50 == v15 )
      {
        LOBYTE(v51) = 0;
      }
      else
      {
        v51 = ((unsigned __int64)&v48[-v15] >> 16) + 1;
        if ( v51 >= 0xFE )
          RtlpLogHeapFailure(3, v50, (_DWORD)v48, v15, 0LL, 0LL);
      }
      v48[14] = v51;
      RtlpInsertFreeBlock(v8, v48);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v52 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v52 = 2147353472LL;
  if ( *(_BYTE *)v52 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v42 = (__int64)NtCurrentPeb()->SharedData + 550;
    v53 = v60;
    RtlpLogHeapContractEvent(v8, v59[0], v58[0], 16 * *(_QWORD *)(v8 + 192), v67, v60, (HANDLE)*(unsigned __int8 *)v42);
  }
  else
  {
    v53 = v60;
  }
  LODWORD(v13) = RtlGetCurrentServiceSessionId();
  v54 = 2147353482LL;
  if ( (_DWORD)v13 )
  {
    v13 = NtCurrentPeb();
    v55 = (__int64)v13->SharedData + 560;
  }
  else
  {
    v55 = 2147353482LL;
  }
  if ( *(_BYTE *)v55 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v54 = (__int64)NtCurrentPeb()->SharedData + 560;
    LODWORD(v13) = RtlpLogHeapContractEvent(
                     v8,
                     v59[0],
                     v58[0],
                     16 * (unsigned int)*(_QWORD *)(v8 + 192),
                     v67,
                     v53,
                     (HANDLE)*(unsigned __int8 *)v54);
  }
  return (int)v13;
}
