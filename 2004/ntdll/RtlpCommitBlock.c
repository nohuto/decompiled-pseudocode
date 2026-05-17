/*
 * XREFs of RtlpCommitBlock @ 0x18000ED0C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800F32FC (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F6160 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FAA10 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18001F398 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x180109BD8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180109E6C (RtlpLogHeapExtendEvent.c)
 */

char __fastcall RtlpCommitBlock(__int64 a1, __int64 a2)
{
  int HeapProtection; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  char *v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+50h] [rbp+20h] BYREF
  char *v20; // [rsp+60h] [rbp+30h] BYREF

  RtlpGetFreeBlockInsidePageBoundaries(a1, a2, &v20, &v19);
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                       v19,
                       *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                       a1,
                       (unsigned __int64 *)(a1 + 376)) )
  {
    HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    v7 = ZwAllocateVirtualMemory(-1LL, &v20, 0LL, &v19, 4096, HeapProtection);
    if ( v7 >= 0 )
    {
      v9 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, v5) )
        v10 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v10 = 2147353472LL;
      if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(a1, v20, v19, 8LL);
      *(_QWORD *)(a1 + 664) -= v19;
      --*(_DWORD *)(a1 + 660);
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v8) )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11) )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v20, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v9);
      }
      v14 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11) )
        v15 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v15 = 2147353482LL;
      if ( *(_BYTE *)v15 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v13) )
          v14 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(a1, (_DWORD)v20, v19, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v14);
      }
      ++*(_DWORD *)(a1 + 624);
      if ( (*(_BYTE *)(a2 + 10) & 4) == 0 )
        goto LABEL_13;
      v17 = v20;
      v18 = v19 >> 2;
      if ( !(v19 >> 2) )
        goto LABEL_13;
      if ( ((unsigned __int8)v20 & 4) != 0 )
      {
        *(_DWORD *)v20 = -17891602;
        if ( !--v18 )
        {
LABEL_13:
          *(_BYTE *)(a2 + 10) &= 0x17u;
          return 1;
        }
        v17 += 4;
      }
      memset64(v17, 0xFEEEFEEEFEEEFEEEuLL, v18 >> 1);
      if ( (v18 & 1) != 0 )
        *(_DWORD *)&v17[4 * v18 - 4] = -17891602;
      goto LABEL_13;
    }
  }
  else
  {
    v7 = -1073741523;
  }
  ++*(_DWORD *)(a1 + 636);
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v7, (const void *)a1, v20, v19);
  return 0;
}
