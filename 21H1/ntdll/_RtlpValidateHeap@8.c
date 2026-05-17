/*
 * XREFs of _RtlpValidateHeap@8 @ 0x4B360697
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlDebugDestroyHeap@4 @ 0x4B35F6BF (_RtlDebugDestroyHeap@4.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlDebugWalkHeap@8 @ 0x4B360528 (_RtlDebugWalkHeap@8.c)
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _RtlpCheckBusyBlockTail@8 @ 0x4B35D48C (_RtlpCheckBusyBlockTail@8.c)
 *     _RtlpValidateHeapHeaders@8 @ 0x4B360B86 (_RtlpValidateHeapHeaders@8.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 */

char __fastcall RtlpValidateHeap(int a1, char a2)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ebx
  _BYTE *v6; // esi
  char v7; // dl
  bool v8; // zf
  int *v9; // esi
  _DWORD *v10; // ebx
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // esi
  int v18; // esi
  unsigned __int16 v19; // cx
  int v20; // ebx
  int v21; // esi
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // cx
  int v24; // edi
  _DWORD *v25; // ebx
  int v26; // [esp+Ch] [ebp-1Ch] BYREF
  int v27; // [esp+10h] [ebp-18h] BYREF
  int v28; // [esp+14h] [ebp-14h]
  _BYTE *v29; // [esp+18h] [ebp-10h] BYREF
  int v30; // [esp+1Ch] [ebp-Ch]
  int v31; // [esp+20h] [ebp-8h] BYREF
  int v32; // [esp+24h] [ebp-4h] BYREF

  v29 = (_BYTE *)a1;
  v30 = 0;
  v32 = 0;
  if ( !(unsigned __int8)RtlpValidateHeapHeaders((void *)a1) )
    goto LABEL_57;
  if ( a2 || (*(_DWORD *)(a1 + 64) & 0x20000000) != 0 )
  {
    v4 = (_DWORD *)(a1 + 192);
    v28 = 0;
    v5 = *(_DWORD **)(a1 + 192);
    v26 = 0;
    while ( v4 != v5 )
    {
      v6 = v5 - 2;
      if ( *(_DWORD *)(a1 + 76) )
      {
        *(_DWORD *)v6 ^= *(_DWORD *)(a1 + 80);
        if ( v6[3] != (*v6 ^ (unsigned __int8)(v6[1] ^ v6[2])) )
        {
          RtlpAnalyzeHeapFailure(v4);
          v4 = (_DWORD *)(a1 + 192);
        }
      }
      v5 = (_DWORD *)*v5;
      v31 = *(unsigned __int16 *)v6;
      v7 = v6[2];
      v29 = v6;
      if ( (v7 & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v31, v6);
LABEL_31:
        if ( *(_DWORD *)(a1 + 76) )
        {
          v6[3] = *v6 ^ v6[1] ^ v6[2];
          *(_DWORD *)v6 ^= *(_DWORD *)(a1 + 80);
        }
        goto LABEL_57;
      }
      if ( *(_WORD *)v6 < (unsigned __int16)v26 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", v6);
        goto LABEL_31;
      }
      v8 = *(_DWORD *)(a1 + 76) == 0;
      v26 = *(unsigned __int16 *)v6;
      if ( !v8 )
      {
        v6[3] = *v6 ^ v7 ^ v6[1];
        *(_DWORD *)v6 ^= *(_DWORD *)(a1 + 80);
      }
      ++v28;
    }
    v31 = 4 * *(unsigned __int16 *)(a1 + 132) + 520;
    if ( RtlpValidateHeapTagsEnable
      && *(_DWORD *)(a1 + 188)
      && NtAllocateVirtualMemory(-1, (int)&v32, 0, (int)&v31, 4096, 4) >= 0 )
    {
      v30 = v32 + 516;
    }
    v9 = *(int **)(a1 + 156);
    if ( (int *)(a1 + 156) != v9 )
    {
      while ( 1 )
      {
        v10 = v9 + 6;
        if ( *(_DWORD *)(a1 + 76) )
        {
          *v10 ^= *(_DWORD *)(a1 + 80);
          if ( *((_BYTE *)v9 + 27) != (*((_BYTE *)v9 + 24) ^ (unsigned __int8)(*((_BYTE *)v9 + 25) ^ *((_BYTE *)v9 + 26))) )
            RtlpAnalyzeHeapFailure(129);
        }
        if ( v30 )
        {
          v11 = *((_WORD *)v9 + 5);
          if ( v11 )
          {
            if ( v11 >= 0 )
            {
              if ( (*((_WORD *)v9 + 5) & 0x800) == 0 && (unsigned __int16)v11 < *(_WORD *)(a1 + 132) )
                *(_DWORD *)(v30 + 4 * *((unsigned __int16 *)v9 + 5)) += (unsigned int)v9[4] >> 3;
            }
            else
            {
              v12 = v11 & 0x7FFF;
              if ( (unsigned __int16)v12 < 0x81u )
                *(_DWORD *)(v32 + 4 * v12) += (unsigned int)v9[4] >> 3;
            }
          }
        }
        if ( (*((_BYTE *)v9 + 26) & 4) != 0 && !RtlpCheckBusyBlockTail(a1, (unsigned int)(v9 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 76) )
        {
          *((_BYTE *)v9 + 27) = *((_BYTE *)v9 + 24) ^ *((_BYTE *)v9 + 25) ^ *((_BYTE *)v9 + 26);
          *v10 ^= *(_DWORD *)(a1 + 80);
        }
        v9 = (int *)*v9;
        if ( (int *)(a1 + 156) == v9 )
          goto LABEL_48;
      }
      if ( *(_DWORD *)(a1 + 76) )
      {
        *((_BYTE *)v9 + 27) = *((_BYTE *)v9 + 24) ^ *((_BYTE *)v9 + 25) ^ *((_BYTE *)v9 + 26);
        v9[6] ^= *(_DWORD *)(a1 + 80);
      }
      return 0;
    }
LABEL_48:
    v13 = 0;
    v14 = *(_DWORD **)(a1 + 164);
    v15 = 0;
    v27 = 0;
    v26 = 0;
    if ( v14 == (_DWORD *)(a1 + 164) )
    {
LABEL_52:
      v16 = v28;
      v29 = (_BYTE *)a1;
      if ( v28 == v13 )
      {
        if ( *(_DWORD *)(a1 + 116) == v15 )
        {
          if ( !v32 )
            return 1;
          v18 = *(_DWORD *)(a1 + 188);
          if ( v18 )
          {
            v19 = 1;
            while ( 1 )
            {
              v18 += 12;
              v20 = v19;
              if ( *(_DWORD *)(v32 + 4 * v19) != *(_DWORD *)(v18 + 8) )
                break;
              if ( ++v19 >= 0x81u )
                goto LABEL_72;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
              v20,
              *(_DWORD *)(v18 + 8),
              *(_DWORD *)(v32 + 4 * v20),
              (const void *)(v32 + 4 * v20));
          }
          else
          {
LABEL_72:
            v21 = *(_DWORD *)(a1 + 136);
            if ( !v21 || (v22 = *(_WORD *)(a1 + 132), v23 = 1, v22 <= 1u) )
            {
LABEL_76:
              v31 = 0;
              RtlpSecMemFreeVirtualMemory((int)&v31, &v32, &v31, 0x8000);
              return 1;
            }
            while ( 1 )
            {
              v21 += 64;
              v24 = v23;
              v25 = (_DWORD *)(v30 + 4 * v23);
              if ( *v25 != *(_DWORD *)(v21 + 8) )
                break;
              if ( ++v23 >= v22 )
                goto LABEL_76;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ");
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v24,
              v21 + 16,
              *(_DWORD *)(v21 + 8),
              *(_DWORD *)(v30 + 4 * v24),
              v25);
          }
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
            v26,
            *(_DWORD *)(a1 + 116));
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v27, v16);
      }
    }
    else
    {
      while ( (unsigned __int8)RtlpValidateHeapSegment(v15, &v27, &v26, &v29, v30, v32) )
      {
        v14 = (_DWORD *)*v14;
        if ( v14 == (_DWORD *)(a1 + 164) )
        {
          v13 = v27;
          v15 = v26;
          goto LABEL_52;
        }
      }
    }
LABEL_57:
    if ( NtCurrentPeb()->BeingDebugged )
    {
      __debugbreak();
      RtlpHeapInvalidBreakPoint = 0;
    }
    if ( v32 )
    {
      v31 = 0;
      RtlpSecMemFreeVirtualMemory(1, &v32, &v31, 0x8000);
    }
    return 0;
  }
  return 1;
}
