/*
 * XREFs of RtlpFindAndCommitPages @ 0x18000E618
 * Callers:
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpCreateUCREntry @ 0x18000E914 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18000EB94 (RtlpFindUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x18000EC28 (RtlpRemoveUCRBlock.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180108240 (RtlpHeapHandleError.c)
 *     RtlpLogHeapCommit @ 0x180109F48 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18010A1DC (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpFindAndCommitPages(unsigned __int64 a1, PSIZE_T RegionSize)
{
  __int64 UCREntry; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG Protect; // r15d
  NTSTATUS v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *RegionSize);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *RegionSize )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError(1LL);
  }
  v6 = v5 - 16;
  v7 = *(unsigned __int8 *)(v5 - 16 + 14);
  if ( (_BYTE)v7 )
    v8 = (v6 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
  else
    v8 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    v11 = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, PSIZE_T))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &BaseAddress,
            RegionSize);
  }
  else
  {
    v9 = *RegionSize;
    if ( *(_QWORD *)(v5 + 40) - *RegionSize <= 16LL * *(_QWORD *)(a1 + 176)
      && *(_QWORD *)(v5 + 40) < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v9 = *(_QWORD *)(v5 + 40);
    }
    *RegionSize = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = RtlpGetHeapProtection(a1, 1LL);
    if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                         *RegionSize,
                         *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                         a1,
                         (unsigned __int64 *)(a1 + 376)) )
      v11 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, Protect);
    else
      v11 = -1073741523;
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v11 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v12 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v13 = 2147353472LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(a1, BaseAddress, *RegionSize, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v5 - 16);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(a1, v5);
  --*(_DWORD *)(v8 + 84);
  *(_DWORD *)(v8 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v14 = *(_QWORD *)(v5 + 40);
  if ( v14 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 584) -= v14;
    v14 = *(_QWORD *)(v5 + 40);
  }
  v15 = *RegionSize;
  if ( v14 > *RegionSize || v14 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v8 + 72) )
  {
    RtlpCreateUCREntry(a1, v8, v15 - 48 + *(_QWORD *)(v5 + 32), v14 - v15, v5 - 16, (__int64)RegionSize);
    *RegionSize *= 16LL;
  }
  else
  {
    *RegionSize = v15 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v16 = *(_QWORD *)(v8 + 40);
  if ( v16 == v8 )
  {
    LOBYTE(v17) = 0;
  }
  else
  {
    v17 = ((v6 - v8) >> 16) + 1;
    if ( v17 >= 0xFE )
      RtlpLogHeapFailure(3, v16, v6, v8, 0LL, 0LL);
  }
  *(_BYTE *)(v6 + 14) = v17;
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapExtendEvent(a1, v6, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v12);
  }
  v19 = 2147353482LL;
  if ( RtlGetCurrentServiceSessionId() )
    v20 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v20 = 2147353482LL;
  if ( *(_BYTE *)v20 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 560;
    RtlpLogHeapExtendEvent(a1, v6, *RegionSize, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v19);
  }
  return v6;
}
