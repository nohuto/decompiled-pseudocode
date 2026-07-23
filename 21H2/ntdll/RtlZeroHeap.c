/*
 * XREFs of RtlZeroHeap @ 0x1800F64C0
 * Callers:
 *     RtlDebugZeroHeap @ 0x1800FA488 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x18001E1AC (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18001E25C (RtlpFindEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlDebugZeroHeap @ 0x1800FA488 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010E064 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rax
  char *v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  _QWORD *v20; // r14
  _QWORD *Entry; // r8
  int v22; // ecx
  unsigned __int16 v23; // ax
  _QWORD *v24; // r14
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // [rsp+30h] [rbp-98h]
  unsigned __int64 v35; // [rsp+40h] [rbp-88h]
  unsigned __int64 v36; // [rsp+60h] [rbp-68h]
  int v37; // [rsp+88h] [rbp-40h]

  v3 = 0LL;
  v34 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v34 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  if ( v7 != v6 )
  {
    v8 = *((_QWORD *)v7 + 5);
    v35 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 6) )
      {
        v7 = *(char **)v7;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( !v3 )
        goto LABEL_14;
      if ( *((_DWORD *)HeapHandle + 31) )
        break;
LABEL_17:
      v3 = (_BYTE *)v8;
      v9 = *(_BYTE *)(v8 + 10);
      if ( (v9 & 1) != 0 )
        goto LABEL_71;
      v10 = v8;
      v36 = v8;
      if ( (v9 & 8) != 0 )
      {
        v11 = *(_QWORD *)(v8 + 16);
        v12 = *(__int64 **)(v8 + 24);
        v13 = *v12;
        v14 = *(_QWORD *)(v11 + 8);
        if ( *v12 == v14 && v13 == v8 + 16 )
        {
          *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
          v15 = *((_QWORD *)HeapHandle + 39);
          if ( v15 )
          {
            v16 = *(unsigned __int16 *)(v8 + 8);
            while ( 1 )
            {
              v17 = *(unsigned int *)(v15 + 8);
              if ( v16 < v17 )
              {
                v18 = *(unsigned __int16 *)(v8 + 8);
                goto LABEL_27;
              }
              if ( !*(_QWORD *)v15 )
                break;
              v15 = *(_QWORD *)v15;
            }
            v18 = v17 - 1;
LABEL_27:
            RtlpHeapRemoveListEntry((__int64)HeapHandle, v15, 1, (__int64 *)(v8 + 16), v18, v16);
          }
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((__int64)HeapHandle, v8) )
          {
            v19 = *(unsigned __int16 *)(v8 + 8);
            *(_BYTE *)(v8 + 10) = 0;
            *(_BYTE *)(v8 + 15) = 0;
            v20 = (char *)HeapHandle + 336;
            if ( *((_QWORD *)HeapHandle + 39) )
              Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
            else
              Entry = (_QWORD *)*v20;
            while ( v20 != Entry )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v22 = *((_DWORD *)Entry - 2);
                LOWORD(v37) = v22;
                if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v37 = v22 ^ *((_DWORD *)HeapHandle + 34);
                v23 = v37;
                v8 = v35;
                v10 = v36;
              }
              else
              {
                v23 = *((_WORD *)Entry - 4);
              }
              if ( v19 <= v23 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            v24 = (_QWORD *)(v10 + 16);
            v25 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v25 == Entry )
            {
              *v24 = Entry;
              *(_QWORD *)(v10 + 24) = v25;
              *v25 = (__int64)v24;
              Entry[1] = v24;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v25, 0LL);
            }
            *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v10 + 8);
            v26 = *((_QWORD *)HeapHandle + 39);
            if ( v26 )
            {
              v27 = *(unsigned __int16 *)(v10 + 8);
              while ( 1 )
              {
                v28 = *(unsigned int *)(v26 + 8);
                if ( v27 < v28 )
                {
                  v29 = *(unsigned __int16 *)(v10 + 8);
                  goto LABEL_52;
                }
                if ( !*(_QWORD *)v26 )
                  break;
                v26 = *(_QWORD *)v26;
              }
              v29 = v28 - 1;
LABEL_52:
              RtlpHeapAddListEntry((__int64)HeapHandle, v26, 1, v10 + 16, v29, v27);
            }
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
              *(_DWORD *)(v10 + 8) ^= *((_DWORD *)HeapHandle + 34);
            }
          }
          else
          {
            RtlpDeCommitFreeBlock((unsigned __int64)HeapHandle, v8, *(unsigned __int16 *)(v8 + 8), 1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (_DWORD)HeapHandle, v8 + 16, v14, v13, 0LL);
        }
        v3 = 0LL;
      }
      else
      {
        v30 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v31 = (_DWORD *)(v8 + 32);
        if ( ((v9 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v32 = v30 >> 2;
          if ( !v32 )
            goto LABEL_71;
          if ( ((unsigned __int8)v31 & 4) != 0 )
          {
            *v31 = -17891602;
            if ( !--v32 )
              goto LABEL_71;
            v31 = (_DWORD *)(v8 + 36);
          }
          memset64(v31, 0xFEEEFEEEFEEEFEEEuLL, v32 >> 1);
          if ( (v32 & 1) != 0 )
            v31[v32 - 1] = -17891602;
        }
        else
        {
          v33 = v30 >> 2;
          if ( !v33 )
            goto LABEL_71;
          if ( ((unsigned __int8)v31 & 4) != 0 )
          {
            *v31 = 0;
            if ( !--v33 )
              goto LABEL_71;
            v31 = (_DWORD *)(v8 + 36);
          }
          memset(v31, 0, 8 * (v33 >> 1));
          if ( (v33 & 1) != 0 )
            v31[v33 - 1] = 0;
        }
LABEL_71:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v35 = v8;
      }
    }
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
LABEL_14:
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
      if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
        RtlpAnalyzeHeapFailure(HeapHandle, v8);
    }
    goto LABEL_17;
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v34 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
