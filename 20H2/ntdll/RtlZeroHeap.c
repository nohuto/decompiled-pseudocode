/*
 * XREFs of RtlZeroHeap @ 0x1800F6670
 * Callers:
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010E204 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlZeroHeap(unsigned __int64 a1, unsigned int a2, __int64 Entry)
{
  _BYTE *v4; // r14
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // r12
  __int64 *v21; // r14
  int v22; // ecx
  unsigned __int16 v23; // ax
  __int64 *v24; // r14
  __int64 *v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  char v30; // [rsp+30h] [rbp-98h]
  unsigned __int64 v31; // [rsp+40h] [rbp-88h]
  unsigned __int64 v32; // [rsp+60h] [rbp-68h]
  int v33; // [rsp+88h] [rbp-40h]

  v4 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(a1);
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v30 = 1;
  }
  v7 = (_QWORD *)(a1 + 288);
  v8 = *(_QWORD **)(a1 + 288);
LABEL_8:
  if ( v8 != v7 )
  {
    v9 = v8[5];
    v31 = v9;
    while ( 1 )
    {
      if ( v9 >= v8[6] )
      {
        v8 = (_QWORD *)*v8;
        v7 = (_QWORD *)(a1 + 288);
        goto LABEL_8;
      }
      if ( !v4 )
        goto LABEL_14;
      if ( *(_DWORD *)(a1 + 124) )
        break;
LABEL_17:
      v4 = (_BYTE *)v9;
      Entry = *(unsigned __int16 *)(v9 + 8);
      v6 = 16 * Entry;
      v10 = *(_BYTE *)(v9 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_71;
      v11 = v9;
      v32 = v9;
      if ( (v10 & 8) != 0 )
      {
        v12 = *(_QWORD *)(v9 + 16);
        v13 = *(__int64 **)(v9 + 24);
        v14 = *v13;
        v15 = *(_QWORD *)(v12 + 8);
        if ( *v13 == v15 && v14 == v9 + 16 )
        {
          *(_QWORD *)(a1 + 192) -= Entry;
          v16 = *(_QWORD *)(a1 + 312);
          if ( v16 )
          {
            v17 = *(unsigned __int16 *)(v9 + 8);
            while ( 1 )
            {
              v18 = *(unsigned int *)(v16 + 8);
              if ( v17 < v18 )
              {
                v19 = *(unsigned __int16 *)(v9 + 8);
                goto LABEL_27;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v16 = *(_QWORD *)v16;
            }
            v19 = v18 - 1;
LABEL_27:
            RtlpHeapRemoveListEntry(a1, v16, 1, (__int64 *)(v9 + 16), v19, v17);
          }
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          if ( (*(_BYTE *)(v9 + 10) & 8) == 0 || RtlpCommitBlock(a1, v9) )
          {
            v20 = *(unsigned __int16 *)(v9 + 8);
            *(_BYTE *)(v9 + 10) = 0;
            *(_BYTE *)(v9 + 15) = 0;
            v21 = (__int64 *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              Entry = RtlpFindEntry(a1, (unsigned int)v20);
            else
              Entry = *v21;
            while ( v21 != (__int64 *)Entry )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v22 = *(_DWORD *)(Entry - 8);
                LOWORD(v33) = v22;
                if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
                  v33 = v22 ^ *(_DWORD *)(a1 + 136);
                v23 = v33;
                v9 = v31;
                v11 = v32;
              }
              else
              {
                v23 = *(_WORD *)(Entry - 8);
              }
              if ( v20 <= v23 )
                break;
              Entry = *(_QWORD *)Entry;
            }
            v24 = (__int64 *)(v11 + 16);
            v25 = *(__int64 **)(Entry + 8);
            if ( *v25 == Entry )
            {
              *v24 = Entry;
              *(_QWORD *)(v11 + 24) = v25;
              *v25 = (__int64)v24;
              *(_QWORD *)(Entry + 8) = v24;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, Entry, 0, *v25, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v11 + 8);
            v6 = *(_QWORD *)(a1 + 312);
            if ( v6 )
            {
              v26 = *(unsigned __int16 *)(v11 + 8);
              while ( 1 )
              {
                v27 = *(unsigned int *)(v6 + 8);
                if ( v26 < v27 )
                {
                  v28 = *(unsigned __int16 *)(v11 + 8);
                  goto LABEL_52;
                }
                if ( !*(_QWORD *)v6 )
                  break;
                v6 = *(_QWORD *)v6;
              }
              v28 = v27 - 1;
LABEL_52:
              RtlpHeapAddListEntry(a1, v6, 1, v11 + 16, v28, v26);
            }
            if ( *(_DWORD *)(a1 + 124) )
            {
              *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
              *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            RtlpDeCommitFreeBlock(a1, v9, *(unsigned __int16 *)(v9 + 8), 1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, a1, v9 + 16, v15, v14, 0LL);
        }
        v4 = 0LL;
      }
      else
      {
        v29 = v6 - 32;
        Entry = v9 + 32;
        if ( ((v10 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
        {
          v6 = v29 >> 2;
          if ( !v6 )
            goto LABEL_71;
          if ( (Entry & 4) != 0 )
          {
            *(_DWORD *)Entry = -17891602;
            if ( !--v6 )
              goto LABEL_71;
            Entry = v9 + 36;
          }
          memset64((void *)Entry, 0xFEEEFEEEFEEEFEEEuLL, v6 >> 1);
          if ( (v6 & 1) != 0 )
            *(_DWORD *)(Entry + 4 * v6 - 4) = -17891602;
        }
        else
        {
          v6 = v29 >> 2;
          if ( !v6 )
            goto LABEL_71;
          if ( (Entry & 4) != 0 )
          {
            *(_DWORD *)Entry = 0;
            if ( !--v6 )
              goto LABEL_71;
            Entry = v9 + 36;
          }
          memset((void *)Entry, 0, 8 * (v6 >> 1));
          if ( (v6 & 1) != 0 )
            *(_DWORD *)(Entry + 4 * v6 - 4) = 0;
        }
LABEL_71:
        if ( *(_BYTE *)(v9 + 15) == 3 )
          v9 += *(_QWORD *)(v9 + 56) + 64LL;
        else
          v9 += 16LL * *(unsigned __int16 *)(v9 + 8);
        v31 = v9;
      }
    }
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
LABEL_14:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v9);
    }
    goto LABEL_17;
  }
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    v6 = *(unsigned int *)(a1 + 136);
    *((_DWORD *)v4 + 2) ^= v6;
  }
  if ( v30 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352), v6, Entry);
  return 0LL;
}
