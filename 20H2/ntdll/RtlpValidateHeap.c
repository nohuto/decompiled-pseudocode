/*
 * XREFs of RtlpValidateHeap @ 0x1800FA784
 * Callers:
 *     RtlValidateHeap @ 0x18005E190 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8B50 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8F0C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9354 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800F9498 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F955C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9850 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FA0C4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA290 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA5A8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F6BF8 (RtlpCheckBusyBlockTail.c)
 *     RtlpBreakPointHeap @ 0x1800FA75C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAD64 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapSegment @ 0x1800FAF20 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpValidateHeap(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  char *v4; // r12
  int v6; // r13d
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int16 v11; // ax
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 v18; // di
  __int64 v19; // rdi
  unsigned __int16 v20; // si
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v22 = a1;
  v3 = 0;
  v4 = 0LL;
  BaseAddress = 0LL;
  if ( !(unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
    goto LABEL_37;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v6 = 0;
    v7 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v7 )
    {
      v8 = (__int64)(v7 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v7 - 2);
      }
      v7 = (_QWORD *)*v7;
      RegionSize = *(unsigned __int16 *)(v8 + 8);
      v22 = v8;
      if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v8);
LABEL_35:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_37;
      }
      if ( *(_WORD *)(v8 + 8) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v8);
        goto LABEL_35;
      }
      v3 = *(_WORD *)(v8 + 8);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v8 + 11) = v3 ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
        *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      ++v6;
    }
    RegionSize = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
    if ( RtlpValidateHeapTagsEnable
      && *(_QWORD *)(a1 + 328)
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
    {
      v4 = (char *)BaseAddress + 1032;
    }
    v9 = 129LL;
    v10 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v10 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v10 + 59) != (*((_BYTE *)v10 + 56) ^ (unsigned __int8)(*((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58))) )
          {
            RtlpAnalyzeHeapFailure(a1, v10 + 6);
            v9 = 129LL;
          }
        }
        if ( v4 )
        {
          v11 = *((_WORD *)v10 + 9);
          if ( v11 )
          {
            if ( v11 >= 0 )
            {
              if ( (v11 & 0x800) == 0 && (unsigned __int16)v11 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)&v4[8 * *((unsigned __int16 *)v10 + 9)] += (unsigned __int64)v10[4] >> 4;
            }
            else
            {
              v12 = v11 & 0x7FFF;
              if ( v12 < 0x81u )
              {
                v9 = v12;
                *((_QWORD *)BaseAddress + v12) += (unsigned __int64)v10[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v10 + 58) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned __int64)(v10 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v10 = (__int64 *)*v10;
        if ( (__int64 *)(a1 + 272) == v10 )
          goto LABEL_51;
        v9 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
        *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_51:
    v15 = *(_QWORD **)(a1 + 288);
    v16 = 0LL;
    v21 = 0LL;
    if ( v15 == (_QWORD *)(a1 + 288) )
    {
LABEL_55:
      if ( v6 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v9);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v6);
      }
      else if ( *(_QWORD *)(a1 + 192) == v16 )
      {
        if ( !BaseAddress )
          return 1;
        v17 = *(_QWORD *)(a1 + 328);
        if ( v17 )
        {
          v18 = 1;
          while ( 1 )
          {
            v17 += 16LL;
            v16 = *(_QWORD *)(v17 + 8);
            if ( *((_QWORD *)BaseAddress + v18) != v16 )
              break;
            if ( ++v18 >= 0x81u )
              goto LABEL_70;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v18,
            *(_QWORD *)(v17 + 8),
            *((_QWORD *)BaseAddress + v18),
            (char *)BaseAddress + 8 * v18);
        }
        else
        {
LABEL_70:
          v19 = *(_QWORD *)(a1 + 232);
          if ( !v19 || (v16 = *(unsigned __int16 *)(a1 + 224), v20 = 1, (unsigned __int16)v16 <= 1u) )
          {
LABEL_74:
            RegionSize = 0LL;
            RtlpSecMemFreeVirtualMemory(v16, &BaseAddress, &RegionSize, 0x8000u);
            return 1;
          }
          while ( 1 )
          {
            v19 += 72LL;
            if ( *(_QWORD *)&v4[8 * v20] != *(_QWORD *)(v19 + 8) )
              break;
            if ( ++v20 >= (unsigned __int16)v16 )
              goto LABEL_74;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", 1LL);
          DbgPrint(
            "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
            v20,
            v19 + 20,
            *(_QWORD *)(v19 + 8),
            *(_QWORD *)&v4[8 * v20],
            &v4[8 * v20]);
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v9);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v21,
          *(_QWORD *)(a1 + 192));
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(
                                 a1,
                                 (__int64)&v21,
                                 (__int64)&v22,
                                 (__int64)v4,
                                 (__int64)BaseAddress) )
      {
        v15 = (_QWORD *)*v15;
        if ( v15 == (_QWORD *)(a1 + 288) )
        {
          v16 = v21;
          goto LABEL_55;
        }
      }
    }
LABEL_37:
    RtlpBreakPointHeap();
    if ( BaseAddress )
    {
      RegionSize = 0LL;
      RtlpSecMemFreeVirtualMemory(v13, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0;
  }
  return 1;
}
