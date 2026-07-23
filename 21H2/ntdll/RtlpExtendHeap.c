/*
 * XREFs of RtlpExtendHeap @ 0x18000E348
 * Callers:
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     RtlpCoalesceHeap @ 0x1800F365C (RtlpCoalesceHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x18010841C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180109F48 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x18010A1DC (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdi
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  ULONG_PTR v10; // rax
  ULONG Protect; // r15d
  NTSTATUS v12; // ecx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  ULONG_PTR v26; // rax
  __int64 v27; // rax
  ULONG_PTR v28[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR v31; // [rsp+A8h] [rbp+58h] BYREF

  v31 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  if ( RtlpFindAndCommitPages(a1, &v31) )
  {
    v31 >>= 4;
    v5 = RtlpCoalesceFreeBlocks(a1);
    RtlpInsertFreeBlock(a1, v5);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v5);
    }
    return v5;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_37;
  BaseAddress = 0LL;
  v7 = a2 + 0x2000;
  v8 = a2 + 0x2000;
  if ( a2 + 0x2000 <= *(_QWORD *)(a1 + 160) )
    v8 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v9 = *(_QWORD *)(a1 + 408);
  else
    v9 = 0LL;
  if ( !v9 && v8 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v10 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v10 >= 0xFD0000 )
    v10 = 16580608LL;
  RegionSize = v10;
  Protect = RtlpGetHeapProtection(a1, 1LL);
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect);
  if ( v12 < 0 )
  {
    while ( 1 )
    {
      v13 = RegionSize;
      if ( RegionSize == v7 )
        break;
      v26 = RegionSize >> 1;
      if ( RegionSize >> 1 < v7 )
        v26 = a2 + 0x2000;
      RegionSize = v26;
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, Protect);
      if ( v12 >= 0 )
      {
        v13 = RegionSize;
        break;
      }
    }
    if ( v12 < 0 )
    {
      ++*(_DWORD *)(a1 + 632);
      goto LABEL_37;
    }
  }
  else
  {
    v13 = RegionSize;
  }
  *(_QWORD *)(a1 + 160) += v13;
  v14 = a2 + 4096;
  if ( a2 + 4096 <= *(_QWORD *)(a1 + 168) )
    v14 = *(_QWORD *)(a1 + 168);
  v15 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
  v28[0] = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (unsigned int)RtlpHpHeapCheckCommitLimit(v28[0], v15, a1, (unsigned __int64 *)(a1 + 376)) )
  {
    v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v28, 0x1000u, Protect);
    if ( v17 >= 0 )
    {
      v19 = RtlpInitializeHeapSegment(
              a1,
              (__int64)BaseAddress,
              112LL,
              v18,
              2,
              (__int64)BaseAddress,
              (char *)BaseAddress + v28[0],
              (unsigned __int64)BaseAddress + RegionSize - 4096);
      v16 = 3221225495LL;
      if ( !v19 )
        v17 = -1073741801;
      if ( v17 >= 0 )
      {
        v20 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v21 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v21 = 2147353472LL;
        if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapCommit(a1, BaseAddress, v28[0], 4LL);
          if ( RtlGetCurrentServiceSessionId() )
            v20 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(
            a1,
            *((_QWORD *)BaseAddress + 8),
            v28[0],
            16 * *(_QWORD *)(a1 + 192),
            (HANDLE)*(unsigned __int8 *)v20);
        }
        v22 = 2147353482LL;
        if ( RtlGetCurrentServiceSessionId() )
          v23 = (__int64)NtCurrentPeb()->SharedData + 560;
        else
          v23 = 2147353482LL;
        if ( *(_BYTE *)v23 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v22 = (__int64)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(
            a1,
            *((_QWORD *)BaseAddress + 8),
            v28[0],
            16 * *(_QWORD *)(a1 + 192),
            (HANDLE)*(unsigned __int8 *)v22);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v24 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v24 = 2147353480LL;
        if ( *(_BYTE *)v24 )
          RtlpHeapLogRangeReserve(a1, BaseAddress, RegionSize);
        v25 = *((_QWORD *)BaseAddress + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v25 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v25 + 11) != (*(_BYTE *)(v25 + 8) ^ (unsigned __int8)(*(_BYTE *)(v25 + 9) ^ *(_BYTE *)(v25 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v25);
        }
        return *((_QWORD *)BaseAddress + 8);
      }
    }
  }
  RtlpSecMemFreeVirtualMemory(v16, &BaseAddress, &RegionSize, 0x8000u);
LABEL_37:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v27 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v27;
    if ( v27 )
    {
      if ( *(unsigned __int16 *)(v27 + 8) >= a2 )
        return v27;
    }
  }
  v5 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v5;
}
