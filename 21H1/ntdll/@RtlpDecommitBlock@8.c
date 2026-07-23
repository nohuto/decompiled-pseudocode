/*
 * XREFs of @RtlpDecommitBlock@8 @ 0x4B2AF71A
 * Callers:
 *     @RtlpCollectFreeBlocks@4 @ 0x4B2AF680 (@RtlpCollectFreeBlocks@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     @RtlpGetFreeBlockInsidePageBoundaries@16 @ 0x4B2AF817 (@RtlpGetFreeBlockInsidePageBoundaries@16.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 *     _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8 (_RtlpLogHeapContractEvent@28.c)
 *     _RtlpLogHeapDecommit@16 @ 0x4B36EF8E (_RtlpLogHeapDecommit@16.c)
 */

char __fastcall RtlpDecommitBlock(int a1, _BYTE *a2)
{
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  SIZE_T v15; // [esp-8h] [ebp-20h]
  ULONG v16; // [esp+0h] [ebp-18h]
  const void *v17; // [esp+10h] [ebp-8h] BYREF
  int v18; // [esp+14h] [ebp-4h] BYREF

  v4 = *(unsigned __int16 *)a2;
  a2[2] &= 0xF8u;
  a2[7] = 0;
  v5 = (*(_BYTE *)(a1 + 64) & 0x40) == 0;
  v18 = v4;
  if ( !v5 )
  {
    HIDWORD(v15) = -17891602;
    LODWORD(v15) = 8 * v4 - 16;
    RtlFillMemoryUlong(a2 + 16, v15, v16);
    a2[2] |= 4u;
  }
  v6 = RtlpHeapKey ^ *(_DWORD *)(a1 + 204);
  if ( !v6 )
  {
    LOBYTE(v6) = RtlpGetFreeBlockInsidePageBoundaries(&v17, &v18);
    if ( (_BYTE)v6 )
    {
      v7 = RtlpSecMemFreeVirtualMemory(&v18, 0x4000);
      if ( v7 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        LOBYTE(v6) = DbgPrint(
                       "RtlpHeapFreeVirtualMemory failed %lx for heap %p (base %p, size %Ix)\n",
                       v7,
                       (const void *)a1,
                       v17,
                       v18);
      }
      else
      {
        v8 = 2147353472;
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v9 = 2147353472;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v18, 7);
        ++*(_DWORD *)(a1 + 544);
        v10 = v18;
        ++*(_DWORD *)(a1 + 576);
        *(_DWORD *)(a1 + 580) += v10;
        ++*(_DWORD *)(a1 + 560);
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v11 = 2147353472;
        if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (int)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(v18, 8 * *(_DWORD *)(a1 + 116), 0, 0, (HANDLE)*(unsigned __int8 *)v8);
        }
        v12 = 2147353482;
        if ( RtlGetCurrentServiceSessionId() )
          v13 = (int)NtCurrentPeb()->SharedData + 560;
        else
          v13 = 2147353482;
        if ( *(_BYTE *)v13 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v12 = (int)NtCurrentPeb()->SharedData + 560;
          RtlpLogHeapContractEvent(v18, 8 * *(_DWORD *)(a1 + 116), 0, 0, (HANDLE)*(unsigned __int8 *)v12);
        }
        LOBYTE(v6) = a2[2] & 0x13 | 8;
        a2[2] = v6;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    a2[3] = *a2 ^ a2[2] ^ a2[1];
    v6 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)a2 ^= v6;
  }
  return v6;
}
