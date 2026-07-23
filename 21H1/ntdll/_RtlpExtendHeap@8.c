/*
 * XREFs of _RtlpExtendHeap@8 @ 0x4B2C0405
 * Callers:
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 * Callees:
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpFindAndCommitPages@8 @ 0x4B2C0640 (_RtlpFindAndCommitPages@8.c)
 *     _RtlpInsertFreeBlock@12 @ 0x4B2C0AD0 (_RtlpInsertFreeBlock@12.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpInitializeHeapSegment@32 @ 0x4B2E1EBD (_RtlpInitializeHeapSegment@32.c)
 *     _RtlpHpHeapCheckCommitLimit@16 @ 0x4B2E68BA (_RtlpHpHeapCheckCommitLimit@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlpCoalesceHeap@4 @ 0x4B35776F (_RtlpCoalesceHeap@4.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHeapLogRangeReserve@12 @ 0x4B36D8FF (_RtlpHeapLogRangeReserve@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 */

unsigned __int16 *__fastcall RtlpExtendHeap(char *BaseAddress, unsigned int a2)
{
  unsigned int v2; // edi
  _BYTE *v4; // ebx
  int v5; // edi
  int v6; // ecx
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  NTSTATUS v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx
  NTSTATUS v15; // edi
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  unsigned __int16 *v23; // eax
  ULONG_PTR v24; // [esp-10h] [ebp-38h]
  ULONG_PTR v25; // [esp-10h] [ebp-38h]
  ULONG_PTR v26; // [esp-10h] [ebp-38h]
  ULONG v27; // [esp+0h] [ebp-28h]
  ULONG v28; // [esp+0h] [ebp-28h]
  int AllocationType; // [esp+10h] [ebp-18h]
  int v31; // [esp+18h] [ebp-10h] BYREF
  int v32; // [esp+1Ch] [ebp-Ch] BYREF
  PVOID BaseAddressa; // [esp+20h] [ebp-8h] BYREF
  unsigned int v34; // [esp+24h] [ebp-4h] BYREF

  v2 = a2;
  v4 = 0;
  v32 = (a2 + 4095) & 0xFFFFF000;
  if ( RtlpFindAndCommitPages(BaseAddress) )
  {
    v32 = (unsigned int)v32 >> 3;
    v5 = RtlpCoalesceFreeBlocks(BaseAddress, (int)&v32, 0);
    RtlpInsertFreeBlock(BaseAddress, v32);
    if ( *((_DWORD *)BaseAddress + 19) )
    {
      *(_DWORD *)v5 ^= *((_DWORD *)BaseAddress + 20);
      if ( *(_BYTE *)(v5 + 3) != (*(_BYTE *)v5 ^ (unsigned __int8)(*(_BYTE *)(v5 + 1) ^ *(_BYTE *)(v5 + 2))) )
        RtlpAnalyzeHeapFailure(v6);
    }
    return (unsigned __int16 *)v5;
  }
  if ( (BaseAddress[64] & 2) == 0 )
    goto LABEL_59;
  BaseAddressa = 0;
  v8 = v2 + 0x2000;
  v9 = *((_DWORD *)BaseAddress + 25);
  if ( v8 > v9 )
    v9 = v8;
  if ( BaseAddress[234] == 2 )
    v10 = *((_DWORD *)BaseAddress + 57);
  else
    v10 = 0;
  if ( !v10 && v9 >= 0x3F4000 )
    *((_DWORD *)BaseAddress + 18) |= 0x20000000u;
  v34 = (v9 + 0xFFFF) & 0xFFFF0000;
  if ( v34 >= 0xFD0000 )
    v34 = 16580608;
  AllocationType = RtlpGetHeapProtection(BaseAddress, 1);
  HIDWORD(v24) = &v34;
  LODWORD(v24) = 0;
  v11 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, v24, (PSIZE_T)0x2000, AllocationType, v27);
  if ( v11 < 0 )
  {
    while ( 1 )
    {
      v12 = v34;
      if ( v34 == v8 )
        break;
      v34 >>= 1;
      if ( v34 < v8 )
        v34 = v8;
      HIDWORD(v26) = &v34;
      LODWORD(v26) = 0;
      v11 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, v26, (PSIZE_T)0x2000, AllocationType, v28);
      if ( v11 >= 0 )
      {
        v12 = v34;
        break;
      }
    }
    if ( v11 < 0 )
    {
      ++*((_DWORD *)BaseAddress + 137);
      v2 = a2;
      goto LABEL_59;
    }
  }
  else
  {
    v12 = v34;
  }
  v2 = a2;
  *((_DWORD *)BaseAddress + 25) += v12;
  v13 = a2 + 4096;
  if ( a2 + 4096 <= *((_DWORD *)BaseAddress + 26) )
    v13 = *((_DWORD *)BaseAddress + 26);
  v31 = v13;
  if ( RtlpHpHeapCheckCommitLimit(BaseAddress, BaseAddress + 212) )
  {
    HIDWORD(v25) = &v31;
    LODWORD(v25) = 0;
    v15 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddressa, v25, (PSIZE_T)0x1000, AllocationType, v28);
    if ( v15 >= 0 )
    {
      if ( !(unsigned __int8)RtlpInitializeHeapSegment(
                               BaseAddress,
                               64,
                               v14,
                               2,
                               (int)BaseAddressa,
                               (char *)BaseAddressa + v31,
                               (int)BaseAddressa + v34 - 4096) )
        v15 = -1073741801;
      if ( v15 >= 0 )
      {
        v16 = 2147353472;
        if ( RtlGetCurrentServiceSessionId() )
          v17 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v17 = 2147353472;
        if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapCommit(v31, 4);
          if ( RtlGetCurrentServiceSessionId() )
            v16 = (int)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapExtendEvent(v31, 8 * *((_DWORD *)BaseAddress + 29), (HANDLE)*(unsigned __int8 *)v16);
        }
        v18 = 2147353482;
        if ( RtlGetCurrentServiceSessionId() )
          v19 = (int)NtCurrentPeb()->SharedData + 560;
        else
          v19 = 2147353482;
        if ( *(_BYTE *)v19 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v18 = (int)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapExtendEvent(v31, 8 * *((_DWORD *)BaseAddress + 29), (HANDLE)*(unsigned __int8 *)v18);
        }
        if ( RtlGetCurrentServiceSessionId() )
          v21 = (int)NtCurrentPeb()->SharedData + 558;
        else
          v21 = 2147353480;
        if ( *(_BYTE *)v21 )
          RtlpHeapLogRangeReserve(v34);
        v22 = *((_DWORD *)BaseAddressa + 9);
        if ( *((_DWORD *)BaseAddress + 19) )
        {
          *(_DWORD *)v22 ^= *((_DWORD *)BaseAddress + 20);
          if ( *(_BYTE *)(v22 + 3) != (*(_BYTE *)v22 ^ (unsigned __int8)(*(_BYTE *)(v22 + 1) ^ *(_BYTE *)(v22 + 2))) )
            RtlpAnalyzeHeapFailure(v20);
        }
        return (unsigned __int16 *)*((_DWORD *)BaseAddressa + 9);
      }
    }
    v2 = a2;
  }
  RtlpSecMemFreeVirtualMemory(v14, &BaseAddressa, (ULONG_PTR *)&v34, 0x8000u);
LABEL_59:
  if ( BaseAddress[64] < 0 )
  {
    v23 = (unsigned __int16 *)RtlpCoalesceHeap(BaseAddress);
    v4 = v23;
    if ( v23 )
    {
      if ( *v23 >= v2 )
        return v23;
    }
  }
  v5 = 0;
  if ( v4 && *((_DWORD *)BaseAddress + 19) )
  {
    v4[3] = *v4 ^ v4[1] ^ v4[2];
    *(_DWORD *)v4 ^= *((_DWORD *)BaseAddress + 20);
  }
  return (unsigned __int16 *)v5;
}
