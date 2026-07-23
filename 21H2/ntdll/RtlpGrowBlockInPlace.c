/*
 * XREFs of RtlpGrowBlockInPlace @ 0x18001F630
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpZeroBlockFromOffset @ 0x180076114 (RtlpZeroBlockFromOffset.c)
 *     RtlCompareMemoryUlong @ 0x1800A2030 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x1800F4CF0 (RtlpUpdateTagEntry.c)
 *     RtlpBreakPointHeap @ 0x1800FA5AC (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 i; // rax
  __int64 v19; // rax
  unsigned int v20; // r9d
  char v21; // al
  SIZE_T v22; // rbp
  SIZE_T v23; // r14
  char v24; // r9
  unsigned __int16 v25; // dx
  char v26; // cl
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  char result; // al
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // [rsp+48h] [rbp-40h]
  char v43; // [rsp+90h] [rbp+8h]
  unsigned __int64 v44; // [rsp+A0h] [rbp+18h]
  char v45; // [rsp+B0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v43 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v44 = v11 + *(unsigned __int16 *)(a3 + 8);
  if ( v44 < a5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v12 = *(__int64 **)(v10 + 24);
  v13 = v10 + 16;
  v14 = *(_QWORD *)(v10 + 16);
  v15 = *v12;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *v12 != v16 || v15 != v13 )
  {
    RtlpLogHeapFailure(13, a1, v13, v16, v15, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v11;
  v17 = *(_QWORD *)(a1 + 312);
  if ( v17 )
  {
    for ( i = *(unsigned int *)(v17 + 8); ; i = *(unsigned int *)(v19 + 8) )
    {
      if ( *(unsigned __int16 *)(v10 + 8) < i )
      {
        v20 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_15;
      }
      v19 = *(_QWORD *)v17;
      if ( !*(_QWORD *)v17 )
        break;
      v17 = *(_QWORD *)v17;
    }
    v20 = *(_DWORD *)(v17 + 8) - 1;
LABEL_15:
    RtlpHeapRemoveListEntry(a1, v17, 1, (__int64 *)(v10 + 16), v20, *(unsigned __int16 *)(v10 + 8));
  }
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !RtlpCommitBlock(a1, v10) )
  {
    RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    return 0;
  }
  v21 = *(_BYTE *)(v10 + 10);
  if ( (v21 & 4) != 0 )
  {
    v22 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v21 & 2) != 0 && v22 > 4 )
      v22 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v23 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v22, 0xFEEEFEEE);
    if ( v23 != v22 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v23 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v24 = *(_BYTE *)(v10 + 10);
  v25 = *(_WORD *)(a3 + 8);
  v26 = *(_BYTE *)(a3 + 15);
  v45 = v24;
  if ( v26 == 5 )
  {
    v27 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v26 & 0x40) != 0 )
  {
    v27 = *(unsigned __int16 *)(a3 + 16LL * (v26 & 0x3F) + 12);
  }
  else if ( (v26 & 0x3F) == 0x3F )
  {
    if ( v26 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v38 = *(_DWORD *)(a3 + 8);
        LOWORD(v42) = v38;
        if ( (v38 & *(_DWORD *)(a1 + 124)) != 0 )
          v42 = *(_DWORD *)(a1 + 136) ^ v38;
        v25 = v42;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ (a3 >> 4)) )
        v37 = 0LL;
      else
        v37 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)(a3 >> 4)) >> 12));
      v25 = *(_WORD *)(v37 + 36);
    }
    v27 = *(_QWORD *)(a3 + 16LL * v25);
  }
  else
  {
    v27 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v28 = 16LL * *(unsigned __int16 *)(a3 + 8) - v27;
  v29 = v44 - v6;
  if ( v44 - v6 <= 2 )
    v6 = v44;
  v30 = 0LL;
  if ( v29 > 2 )
    v30 = v29;
  if ( (v43 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_34;
    *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                      a1,
                                      *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                      *(unsigned __int16 *)(a3 + 8),
                                      v6,
                                      4);
  }
  else
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_34;
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v6, 4);
  }
  v24 = v45;
LABEL_34:
  *(_WORD *)(a3 + 8) = v6;
  v31 = 16 * v6;
  v32 = 16 * v6 - a4;
  if ( v30 )
  {
    v33 = (unsigned __int64 *)(a3 + v31);
    if ( v32 >= 0x3F )
    {
      *v33 = v32;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v32;
    }
    v34 = *(unsigned __int8 *)(a3 + 14);
    if ( (_BYTE)v34 )
      v35 = (a3 & 0xFFFFFFFFFFFF0000uLL) - (v34 << 16) + 0x10000;
    else
      v35 = a1;
    RtlpCreateSplitBlock(a1, v35, (__int64)v33, v24, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v30);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v24;
    if ( v32 >= 0x3F )
    {
      *(_QWORD *)(v31 + a3) = v32;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v32;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *(_WORD *)(a1 + 140);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v28 )
      v28 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v28);
    goto LABEL_42;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v39 = 4 - (v28 & 3);
    if ( (v28 & 3) == 0 )
      v39 = v28 & 3;
    if ( a4 > v39 + v28 && ((a4 - v39 - v28) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v40 = ((a4 - v39 - v28) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v41 = v39 + v28 + a3 + 16;
      if ( v40 )
      {
        if ( (v41 & 4) == 0 )
          goto LABEL_86;
        *(_DWORD *)v41 = -1163005939;
        if ( --v40 )
        {
          v41 += 4LL;
LABEL_86:
          memset64((void *)v41, 0xBAADF00DBAADF00DuLL, v40 >> 1);
          if ( (v40 & 1) != 0 )
            *(_DWORD *)(v41 + 4 * v40 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_42:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (a2 >> 4) & 0xE0;
  return result;
}
