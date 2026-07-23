/*
 * XREFs of RtlpInsertFreeBlock @ 0x18001E940
 * Callers:
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800F365C (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180108240 (RtlpHeapHandleError.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpInsertFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int16 v3; // di
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // al
  _QWORD *v10; // r14
  unsigned __int16 v11; // r15
  char v12; // cl
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  _QWORD *Entry; // r8
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 *v18; // rax
  _QWORD *v19; // r14
  __int64 v20; // rdx
  unsigned __int64 i; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  _DWORD *v25; // r8
  unsigned __int64 v26; // rdx
  int v27; // [rsp+38h] [rbp-30h]
  char v28; // [rsp+80h] [rbp+18h]

  if ( a3 )
  {
    v3 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    v4 = a3;
    v5 = a2;
    if ( !v3
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, a3, 0LL);
      else
        DbgPrint("HEAP: ", a2, a3, 0LL);
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      RtlpHeapHandleError(1LL);
    }
    v7 = *(unsigned __int8 *)(v5 + 14);
    if ( (_BYTE)v7 )
      v8 = (v5 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v5 + 10);
    v10 = (_QWORD *)(a1 + 336);
    v28 = v9;
    while ( 1 )
    {
      if ( v4 > 0xFF00 )
      {
        v11 = -272;
        if ( v4 != 65281 )
          v11 = -256;
      }
      else
      {
        v11 = v4;
      }
      v12 = 0;
      if ( v4 <= 0xFF00 )
        v12 = v9;
      *(_BYTE *)(v5 + 10) = v12;
      *(_WORD *)(v5 + 12) = v3 ^ *(_WORD *)(a1 + 140);
      v13 = *(_QWORD *)(v8 + 40);
      if ( v13 == v8 )
      {
        LOBYTE(v14) = 0;
      }
      else
      {
        v14 = ((v5 - v8) >> 16) + 1;
        if ( v14 >= 0xFE )
          RtlpLogHeapFailure(3, v13, v5, v8, 0LL, 0LL);
      }
      *(_BYTE *)(v5 + 10) &= 0xF0u;
      *(_BYTE *)(v5 + 14) = v14;
      *(_WORD *)(v5 + 8) = v11;
      *(_BYTE *)(v5 + 11) = 0;
      *(_BYTE *)(v5 + 15) = 0;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        v25 = (_DWORD *)(v5 + 32);
        v26 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v26 )
        {
          if ( ((unsigned __int8)v25 & 4) != 0 )
          {
            --v26;
            *v25 = -17891602;
            v25 = (_DWORD *)(v5 + 36);
          }
          memset64(v25, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
          if ( (v26 & 1) != 0 )
            v25[v26 - 1] = -17891602;
        }
        *(_BYTE *)(v5 + 10) |= 4u;
      }
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v11);
      else
        Entry = (_QWORD *)*v10;
      if ( v10 != Entry )
      {
        v16 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v16 )
          {
            v24 = *((_DWORD *)Entry - 2);
            v16 = *(_DWORD *)(a1 + 124);
            LOWORD(v27) = v24;
            if ( (v16 & v24) != 0 )
              v27 = *(_DWORD *)(a1 + 136) ^ v24;
            v17 = v27;
          }
          else
          {
            v17 = *((_WORD *)Entry - 4);
          }
          if ( v11 <= (unsigned __int64)v17 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        while ( v10 != Entry );
      }
      v18 = (__int64 *)Entry[1];
      v19 = (_QWORD *)(v5 + 16);
      if ( (_QWORD *)*v18 == Entry )
      {
        *v19 = Entry;
        *(_QWORD *)(v5 + 24) = v18;
        *v18 = (__int64)v19;
        Entry[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v18, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v5 + 8);
      v20 = *(_QWORD *)(a1 + 312);
      if ( v20 )
      {
        for ( i = *(unsigned int *)(v20 + 8); ; i = *(unsigned int *)(v22 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v23 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_29;
          }
          v22 = *(_QWORD *)v20;
          if ( !*(_QWORD *)v20 )
            break;
          v20 = *(_QWORD *)v20;
        }
        v23 = *(_DWORD *)(v20 + 8) - 1;
LABEL_29:
        RtlpHeapAddListEntry(a1, v20, 1, v5 + 16, v23, *(unsigned __int16 *)(v5 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
        *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v4 -= v11;
      v3 = v11;
      v5 += 16LL * v11;
      if ( v5 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v28;
      v10 = (_QWORD *)(a1 + 336);
      if ( !v4 )
      {
        *(_WORD *)(v5 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        return;
      }
    }
  }
}
