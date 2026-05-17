/*
 * XREFs of RtlpCreateSplitBlock @ 0x18001DD64
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A1A90 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800FA75C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // r8
  int v14; // ecx
  unsigned __int16 v15; // ax
  __int64 *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 k; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int64 v25; // r15
  _QWORD *v26; // rdi
  _QWORD *v27; // r8
  int v28; // ecx
  unsigned __int16 v29; // ax
  __int64 *v30; // rax
  _QWORD *v31; // rdi
  __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 j; // rax
  __int64 *v35; // rax
  int v36; // r8d
  int v38; // eax
  __int64 *v39; // rax
  unsigned __int64 m; // rax
  __int64 *v41; // rax
  int v42; // eax
  __int64 v43; // r9
  char v44; // al
  unsigned __int64 v45; // rbp
  __int64 v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 n; // rax
  __int64 *v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *Entry; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 i; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+20h] [rbp-48h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]
  int v75; // [rsp+38h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v10 >= 0xFE )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  v11 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v57 = (_DWORD *)(a3 + 32);
          v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v58 )
          {
            if ( ((unsigned __int8)v57 & 4) != 0 )
            {
              --v58;
              *v57 = -17891602;
              v57 = (_DWORD *)(a3 + 36);
            }
            memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
            if ( (v58 & 1) != 0 )
              v57[v58 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v59 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v59;
        if ( v59 != Entry )
        {
          v61 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)Entry - 2);
              v61 = *(_DWORD *)(a1 + 124);
              LOWORD(v75) = v62;
              if ( (v61 & v62) != 0 )
                v75 = *(_DWORD *)(a1 + 136) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v59 != Entry );
        }
        v64 = (__int64 *)Entry[1];
        v65 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v64 == Entry )
        {
          *v65 = Entry;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          Entry[1] = v65;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v64, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v66 = *(__int64 **)(a1 + 312);
        if ( v66 )
        {
          for ( i = *((unsigned int *)v66 + 2); ; i = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_146;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_146:
          v71 = v69;
          LOBYTE(v69) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) = 0;
      v12 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v13 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
      else
        v13 = (_QWORD *)*v12;
      if ( v12 != v13 )
      {
        v14 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v14 )
          {
            v38 = *((_DWORD *)v13 - 2);
            v14 = *(_DWORD *)(a1 + 124);
            LOWORD(v72) = v38;
            if ( (v14 & v38) != 0 )
              v72 = *(_DWORD *)(a1 + 136) ^ v38;
            v15 = v72;
          }
          else
          {
            v15 = *((_WORD *)v13 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned __int64)v15 )
            break;
          v13 = (_QWORD *)*v13;
        }
        while ( v12 != v13 );
      }
      v30 = (__int64 *)v13[1];
      v31 = (_QWORD *)(a3 + 16);
      if ( (_QWORD *)*v30 == v13 )
      {
        *v31 = v13;
        *(_QWORD *)(a3 + 24) = v30;
        *v30 = (__int64)v31;
        v13[1] = v31;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v13, 0, *v30, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
      v32 = *(__int64 **)(a1 + 312);
      if ( !v32 )
        goto LABEL_47;
      v33 = *(unsigned __int16 *)(a3 + 8);
      for ( j = *((unsigned int *)v32 + 2); v33 >= j; j = *((unsigned int *)v35 + 2) )
      {
        v35 = (__int64 *)*v32;
        if ( !*v32 )
          goto LABEL_63;
        v32 = (__int64 *)*v32;
      }
      goto LABEL_45;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v16 = *(__int64 **)(v11 + 24);
    v17 = v11 + 16;
    v18 = *(_QWORD *)(v11 + 16);
    v19 = *v16;
    v20 = *(_QWORD *)(v18 + 8);
    if ( *v16 == v20 && v19 == v17 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v21 = *(_QWORD *)(a1 + 312);
      if ( v21 )
      {
        for ( k = *(unsigned int *)(v21 + 8); ; k = *(unsigned int *)(v23 + 8) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v24 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_25;
          }
          v23 = *(_QWORD *)v21;
          if ( !*(_QWORD *)v21 )
            break;
          v21 = *(_QWORD *)v21;
        }
        v24 = *(_DWORD *)(v21 + 8) - 1;
LABEL_25:
        RtlpHeapRemoveListEntry(a1, v21, 1, (__int64 *)(v11 + 16), v24, *(unsigned __int16 *)(v11 + 8));
      }
      *v16 = v18;
      *(_QWORD *)(v18 + 8) = v16;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || RtlpCommitBlock(a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong(v11 + 32, v45, 4277075694LL);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v25 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v25 > 0xFF00 )
        {
          RtlpInsertFreeBlock(a1, a3);
          return 1;
        }
        *(_WORD *)(a3 + 8) = v25;
        *(_WORD *)(a3 + 16 * v25 + 12) = *(_WORD *)(a1 + 140) ^ v25;
        *(_BYTE *)(a3 + 15) = 0;
        if ( !a5 )
        {
          *(_BYTE *)(a3 + 10) = 0;
          v26 = (_QWORD *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v27 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v25);
          else
            v27 = (_QWORD *)*v26;
          if ( v26 != v27 )
          {
            v28 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v28 )
              {
                v42 = *((_DWORD *)v27 - 2);
                v28 = *(_DWORD *)(a1 + 124);
                LOWORD(v73) = v42;
                if ( (v28 & v42) != 0 )
                  v73 = *(_DWORD *)(a1 + 136) ^ v42;
                v29 = v73;
              }
              else
              {
                v29 = *((_WORD *)v27 - 4);
              }
              if ( (unsigned __int16)v25 <= (unsigned __int64)v29 )
                break;
              v27 = (_QWORD *)*v27;
            }
            while ( v26 != v27 );
          }
          v39 = (__int64 *)v27[1];
          v31 = (_QWORD *)(a3 + 16);
          if ( (_QWORD *)*v39 == v27 )
          {
            *v31 = v27;
            *(_QWORD *)(a3 + 24) = v39;
            *v39 = (__int64)v31;
            v27[1] = v31;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)v27, 0, *v39, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
          v32 = *(__int64 **)(a1 + 312);
          if ( v32 )
          {
            v33 = *(unsigned __int16 *)(a3 + 8);
            for ( m = *((unsigned int *)v32 + 2); v33 >= m; m = *((unsigned int *)v41 + 2) )
            {
              v41 = (__int64 *)*v32;
              if ( !*v32 )
                goto LABEL_63;
              v32 = (__int64 *)*v32;
            }
            goto LABEL_45;
          }
LABEL_47:
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
            *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          return 1;
        }
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v47 = (_DWORD *)(a3 + 32);
          v48 = (16 * (unsigned __int64)(unsigned __int16)v25 - 32) >> 2;
          if ( v48 )
          {
            if ( ((unsigned __int8)v47 & 4) != 0 )
            {
              --v48;
              *v47 = -17891602;
              v47 = (_DWORD *)(a3 + 36);
            }
            memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
            if ( (v48 & 1) != 0 )
              v47[v48 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v49 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v50 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v25);
        else
          v50 = (_QWORD *)*v49;
        if ( v49 != v50 )
        {
          v51 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v51 )
            {
              v52 = *((_DWORD *)v50 - 2);
              v51 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v52;
              if ( (v52 & v51) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v52;
              v53 = v74;
            }
            else
            {
              v53 = *((_WORD *)v50 - 4);
            }
            if ( (unsigned __int16)v25 <= (unsigned __int64)v53 )
              break;
            v50 = (_QWORD *)*v50;
          }
          while ( v49 != v50 );
        }
        v54 = (__int64 *)v50[1];
        v31 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v54 == v50 )
        {
          *v31 = v50;
          *(_QWORD *)(a3 + 24) = v54;
          *v54 = (__int64)v31;
          v50[1] = v31;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v50, 0, *v54, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v32 = *(__int64 **)(a1 + 312);
        if ( !v32 )
          goto LABEL_47;
        v33 = *(unsigned __int16 *)(a3 + 8);
        for ( n = *((unsigned int *)v32 + 2); v33 >= n; n = *((unsigned int *)v56 + 2) )
        {
          v56 = (__int64 *)*v32;
          if ( !*v32 )
          {
LABEL_63:
            v36 = *((_DWORD *)v32 + 2) - 1;
            goto LABEL_46;
          }
          v32 = (__int64 *)*v32;
        }
LABEL_45:
        v36 = v33;
LABEL_46:
        v70 = v36;
        LOBYTE(v36) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v32, v36, (_DWORD)v31, v70, v33);
        goto LABEL_47;
      }
      LOBYTE(v43) = 1;
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), v43);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v17, v20, v19, 0LL);
    }
    if ( v7 )
      return 0;
    v7 = 1;
  }
}
