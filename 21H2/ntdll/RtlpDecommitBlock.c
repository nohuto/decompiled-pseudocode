/*
 * XREFs of RtlpDecommitBlock @ 0x1800208E8
 * Callers:
 *     RtlpCollectFreeBlocks @ 0x18001F2D8 (RtlpCollectFreeBlocks.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18001F398 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpLogHeapContractEvent @ 0x180109FF8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x18010A12C (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDecommitBlock(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  ULONG_PTR v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdx
  ULONG_PTR v16; // [rsp+60h] [rbp+20h] BYREF
  PVOID v17; // [rsp+68h] [rbp+28h] BYREF

  v3 = a1;
  v4 = *(unsigned __int16 *)(a2 + 8);
  v16 = v4;
  *(_BYTE *)(a2 + 10) &= 0xF8u;
  *(_BYTE *)(a2 + 15) = 0;
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v13 = (_DWORD *)(a2 + 32);
    v14 = (16 * v4 - 32) >> 2;
    if ( v14 )
    {
      if ( ((unsigned __int8)v13 & 4) != 0 )
      {
        --v14;
        *v13 = -17891602;
        v13 = (_DWORD *)(a2 + 36);
      }
      memset64(v13, 0xFEEEFEEEFEEEFEEEuLL, v14 >> 1);
      a1 = 0LL;
      if ( (v14 & 1) != 0 )
        v13[v14 - 1] = -17891602;
    }
    *(_BYTE *)(a2 + 10) |= 4u;
  }
  v5 = RtlpHeapKey ^ *(_QWORD *)(v3 + 360);
  if ( !v5 )
  {
    LOBYTE(v5) = RtlpGetFreeBlockInsidePageBoundaries(a1, a2, (unsigned __int64 *)&v17, &v16);
    if ( (_BYTE)v5 )
    {
      v7 = RtlpSecMemFreeVirtualMemory(v6, &v17, &v16, 0x4000u);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOBYTE(v5) = DbgPrint(
                       "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                       v7,
                       (const void *)v3,
                       v17,
                       v16);
      }
      else
      {
        v8 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v9 = 2147353472LL;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v3, v17, v16, 7LL);
        *(_QWORD *)(v3 + 664) += v16;
        ++*(_DWORD *)(v3 + 628);
        ++*(_DWORD *)(v3 + 660);
        ++*(_DWORD *)(v3 + 644);
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v10 = 2147353472LL;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            v3,
            (int)v17,
            v16,
            16 * *(_QWORD *)(v3 + 192),
            0,
            0LL,
            (HANDLE)*(unsigned __int8 *)v8);
        }
        LODWORD(v5) = RtlGetCurrentServiceSessionId();
        v11 = 2147353482LL;
        if ( (_DWORD)v5 )
        {
          v5 = (__int64)NtCurrentPeb();
          v12 = *(_QWORD *)(v5 + 144) + 560LL;
        }
        else
        {
          v12 = 2147353482LL;
        }
        if ( *(_BYTE *)v12 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v11 = (__int64)NtCurrentPeb()->SharedData + 560;
          LOBYTE(v5) = RtlpLogHeapContractEvent(
                         v3,
                         (int)v17,
                         v16,
                         16 * (unsigned int)*(_QWORD *)(v3 + 192),
                         0,
                         0LL,
                         (HANDLE)*(unsigned __int8 *)v11);
        }
        *(_BYTE *)(a2 + 10) &= 0x13u;
        *(_BYTE *)(a2 + 10) |= 8u;
      }
    }
  }
  if ( *(_DWORD *)(v3 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    LODWORD(v5) = *(_DWORD *)(v3 + 136);
    *(_DWORD *)(a2 + 8) ^= v5;
  }
  return v5;
}
