/*
 * XREFs of @RtlpCommitBlock@8 @ 0x4B2AF586
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
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     @RtlpGetFreeBlockInsidePageBoundaries@16 @ 0x4B2AF817 (@RtlpGetFreeBlockInsidePageBoundaries@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

char __fastcall RtlpCommitBlock(_DWORD *a1, int a2)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char v12; // al
  struct _PEB *v14; // eax
  int v15; // [esp+Ch] [ebp-24h] BYREF
  const void *v16; // [esp+10h] [ebp-20h] BYREF
  _DWORD *v17; // [esp+14h] [ebp-1Ch] BYREF
  int v18; // [esp+18h] [ebp-18h]

  RtlpGetFreeBlockInsidePageBoundaries(&v16, &v15);
  if ( !RtlpHpHeapCheckCommitLimit(a1, a1 + 53) )
  {
    v5 = -1073741523;
    goto LABEL_18;
  }
  if ( (a1[16] & 0x40000) == 0 )
    goto LABEL_3;
  v4 = 64;
  if ( (int)NtQueryVirtualMemory(-1, a1, 3, &v17, 28, 0) < 0 || (v18 & 0x60) == 0 || v17 != a1 )
  {
    RtlpLogHeapFailure(1, v18, 0, 0);
LABEL_3:
    v4 = 4;
  }
  v5 = NtAllocateVirtualMemory(-1, &v16, 0, &v15, 4096, v4);
  if ( v5 < 0 )
  {
LABEL_18:
    v14 = NtCurrentPeb();
    ++a1[138];
    if ( v14->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, a1, v16, v15);
    return 0;
  }
  v6 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(v15, 8);
  v8 = v15;
  --a1[144];
  a1[145] -= v8;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(v15, 8 * a1[29], *(unsigned __int8 *)v6);
  }
  v10 = 2147353482;
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (int)NtCurrentPeb()->SharedData + 560;
  else
    v11 = 2147353482;
  if ( *(_BYTE *)v11 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (int)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(v15, 8 * a1[29], *(unsigned __int8 *)v10);
  }
  ++a1[135];
  v12 = *(_BYTE *)(a2 + 2);
  if ( (v12 & 4) != 0 )
  {
    RtlFillMemoryUlong(v16, v15, -17891602);
    v12 = *(_BYTE *)(a2 + 2);
  }
  *(_BYTE *)(a2 + 2) = v12 & 0x17;
  return 1;
}
