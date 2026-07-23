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

char __fastcall RtlpCommitBlock(_DWORD *BaseAddress, int a2)
{
  ULONG v4; // edi
  NTSTATUS v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  char v12; // al
  struct _PEB *v14; // eax
  ULONG_PTR v15; // [esp-10h] [ebp-40h]
  ULONG_PTR *v16; // [esp+0h] [ebp-30h]
  ULONG v17; // [esp+0h] [ebp-30h]
  int Length; // [esp+Ch] [ebp-24h] BYREF
  PVOID Length_4; // [esp+10h] [ebp-20h] BYREF
  _DWORD *MemoryInformation; // [esp+14h] [ebp-1Ch] BYREF
  int v21; // [esp+18h] [ebp-18h]

  RtlpGetFreeBlockInsidePageBoundaries(&Length_4, &Length);
  if ( !RtlpHpHeapCheckCommitLimit(BaseAddress, BaseAddress + 53) )
  {
    v5 = -1073741523;
    goto LABEL_18;
  }
  if ( (BaseAddress[16] & 0x40000) == 0 )
    goto LABEL_3;
  v4 = 64;
  if ( NtQueryVirtualMemory((HANDLE)0xFFFFFFFF, BaseAddress, MemoryRegionInformation, &MemoryInformation, 0x1CuLL, v16) < 0
    || (v21 & 0x60) == 0
    || MemoryInformation != BaseAddress )
  {
    RtlpLogHeapFailure(1, v21, 0, 0);
LABEL_3:
    v4 = 4;
  }
  HIDWORD(v15) = &Length;
  LODWORD(v15) = 0;
  v5 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &Length_4, v15, (PSIZE_T)0x1000, v4, (ULONG)v16);
  if ( v5 < 0 )
  {
LABEL_18:
    v14 = NtCurrentPeb();
    ++BaseAddress[138];
    if ( v14->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("ZwAllocateVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n", v5, BaseAddress, Length_4, Length);
    return 0;
  }
  v6 = 2147353472;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(Length, 8);
  v8 = Length;
  --BaseAddress[144];
  BaseAddress[145] -= v8;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(Length, 8 * BaseAddress[29], (HANDLE)*(unsigned __int8 *)v6);
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
    RtlpLogHeapExtendEvent(Length, 8 * BaseAddress[29], (HANDLE)*(unsigned __int8 *)v10);
  }
  ++BaseAddress[135];
  v12 = *(_BYTE *)(a2 + 2);
  if ( (v12 & 4) != 0 )
  {
    RtlFillMemoryUlong(Length_4, (unsigned int)Length | 0xFEEEFEEE00000000uLL, v17);
    v12 = *(_BYTE *)(a2 + 2);
  }
  *(_BYTE *)(a2 + 2) = v12 & 0x17;
  return 1;
}
