/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x180003888
 * Callers:
 *     RtlpFlushHeap @ 0x180007180 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlockToHeap @ 0x180004484 (RtlpFreeUserBlockToHeap.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpIsSubSegmentReuseable @ 0x180023574 (RtlpIsSubSegmentReuseable.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     ZwProtectVirtualMemory @ 0x18009E040 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1250 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A1290 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A2C8 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A650 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A700 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpGetReservedBlockSize @ 0x18010B9E0 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 */

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  struct _PEB *result; // rax
  struct _PEB *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  signed __int32 *v15; // rdi
  _QWORD *v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // r8d
  signed __int32 v27; // ebx
  __int64 v28; // r8
  signed __int32 v29; // eax
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rdx
  __int64 v34; // rcx
  _QWORD **v35; // rdx
  _QWORD *v36; // rax
  unsigned int v37; // edx
  __int64 v38; // r9
  signed __int64 v39; // rdx
  __int64 *v40; // rsi
  _DWORD *v41; // rbx
  signed __int32 v42; // eax
  __int64 v43; // rcx
  signed __int32 v44; // eax
  struct _PEB *v45; // rbp
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  _DWORD *v52; // rdx
  __int64 v53; // rax
  __int64 *v54; // rsi
  __int64 v55; // rbx
  int v56; // edx
  signed __int64 v57; // rax
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v59; // rcx
  unsigned int HeapProtection; // eax
  signed __int32 v61; // ett
  __int64 v62; // [rsp+30h] [rbp-68h]
  signed __int64 v63; // [rsp+38h] [rbp-60h]
  unsigned __int64 v64; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v65[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v66; // [rsp+A0h] [rbp+8h]
  __int64 v67; // [rsp+A0h] [rbp+8h]
  unsigned int v68; // [rsp+A8h] [rbp+10h]
  __int64 v69; // [rsp+A8h] [rbp+10h]
  unsigned int v70; // [rsp+B0h] [rbp+18h]
  char v71; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v70 = 0;
  v62 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v68 = 1;
    }
    else
    {
      v68 = RtlpAffinityState;
      if ( !(_DWORD)RtlpAffinityState )
        goto LABEL_11;
    }
    v5 = 0;
    v66 = 0;
    do
    {
      if ( v5 )
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v5 - 192);
      else
        v6 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( v6 && v6[41] == 1 )
      {
        v12 = RtlpLocalInfoAllocFromCache(v6, v5);
        v13 = v12;
        if ( v12 )
        {
          *(_DWORD *)(*(_QWORD *)v6 + 36LL) = 0;
          v14 = *(_QWORD *)(a1 + 24);
          if ( (unsigned __int16)v14 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
            || (v15 = *(signed __int32 **)(v12
                                         - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, v14, v12, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v15);
            v16 = (_QWORD *)*((_QWORD *)v15 + 1);
            v17 = 0;
            v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
            v19 = *(_QWORD *)(**(_QWORD **)v15 + 24LL);
            v20 = (unsigned int)v16 ^ RtlpLFHKey ^ v19 ^ *((_DWORD *)v16 + 6);
            v21 = (unsigned __int16)v20;
            v22 = (unsigned int)v18 * HIWORD(v20);
            v23 = (char *)v16 + v22 + v21;
            if ( v23 == (char *)v12 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, v23) )
                v24 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v24 = 2147353472LL;
              if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 24), v13 + 16, 2LL, 0LL);
              v25 = 0LL;
              v26 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( 1 )
              {
                v27 = v15[8];
                if ( v27 >= 0 && v27 == _InterlockedCompareExchange(v15 + 8, v27 | 0x80000000, v27) )
                  break;
                v25 = (unsigned int)(v25 + 1);
                if ( (unsigned int)v25 > v26 )
                {
                  v27 = -1;
                  break;
                }
              }
              *(_BYTE *)(v13 + 15) = 0x80;
              if ( v27 == -1 )
              {
                RtlpInterlockedPushEntrySList(v15 + 4, v13 + 16);
              }
              else
              {
                _bittestandreset64((signed __int64 *)v16[5], v18);
                if ( *((_WORD *)v15 + 8) )
                {
                  v36 = (_QWORD *)RtlpInterlockedFlushSList(v15 + 4, v25);
                  while ( v36 )
                  {
                    v37 = *((_DWORD *)v36 - 1);
                    ++v17;
                    v36 = (_QWORD *)*v36;
                    v18 = (unsigned __int16)(v37 >> 8);
                    _bittestandreset64((signed __int64 *)v16[5], v18);
                  }
                }
                v28 = *(_QWORD *)v15;
                if ( (_WORD)v17 + (_WORD)v27 + 1 != *((_WORD *)v15 + 20)
                  || (v38 = *(unsigned int *)(v28 + 168),
                      v39 = *(unsigned int *)(*(_QWORD *)v28 + 32LL),
                      *(_DWORD *)(v28 + 164) == 1)
                  && (unsigned int)v39 >= (unsigned int)v38
                  && (v39 = (unsigned int)(v39 - v38), (unsigned int)v39 < *(_DWORD *)(*(_QWORD *)v28 + 36LL)) )
                {
                  v15[8] = ((_DWORD)v18 << 16) | (v17 + (unsigned __int16)v27 + 1);
                  if ( (v15[11] & 2) == 0 && (unsigned __int8)RtlpIsSubSegmentReuseable(v28, v15) )
                  {
                    while ( 1 )
                    {
                      v29 = v15[11];
                      if ( !v29 || (v29 & 2) != 0 )
                        break;
                      if ( v29 == _InterlockedCompareExchange(v15 + 11, v29 | 2, v29) )
                      {
                        v30 = *(_QWORD *)v15;
                        v31 = 0;
                        while ( 1 )
                        {
                          v32 = ((_BYTE)v31 + (unsigned __int8)*(_WORD *)(v30 + 174)) & 0xF;
                          v33 = *(volatile signed __int32 **)(v30 + 8 * v32 + 16);
                          if ( v33 )
                          {
                            if ( (v33[11] & 1) == 0
                              && v33 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)(v30 + 8 * v32 + 16),
                                                                     (signed __int64)v15,
                                                                     (signed __int64)v33) )
                            {
                              _m_prefetchw((const void *)(v33 + 11));
                              if ( _InterlockedAnd(v33 + 11, 0xFFFFFFFD) != 2 )
                                goto LABEL_24;
                              v34 = **(_QWORD **)v33;
                              *(_QWORD *)v33 = 0LL;
                              v35 = (_QWORD **)(v33 + 12);
                              goto LABEL_93;
                            }
                          }
                          else if ( !_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)(v30 + 8 * v32 + 16),
                                       (signed __int64)v15,
                                       0LL) )
                          {
                            goto LABEL_24;
                          }
                          if ( (unsigned int)++v31 >= 0x10 )
                          {
                            v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                                            + 1192)
                                + 144LL;
                            goto LABEL_92;
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v40 = *(__int64 **)v15;
                  v41 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
                  if ( !v41 )
                    goto LABEL_86;
                  _m_prefetchw(v41 + 11);
                  if ( _InterlockedAnd(v41 + 11, 0xFFFFFFF9) != 6 )
                  {
                    if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v40, v41) )
                      goto LABEL_86;
                    do
                    {
                      v42 = v41[11];
                      if ( !v42 || (v42 & 2) != 0 )
                        goto LABEL_86;
                    }
                    while ( v42 != _InterlockedCompareExchange(v41 + 11, v42 | 2, v42) );
                    v28 = *(_QWORD *)v41;
                    v38 = 0LL;
                    while ( 1 )
                    {
                      v43 = ((_BYTE)v38 + (unsigned __int8)*(_WORD *)(v28 + 174)) & 0xF;
                      v39 = *(_QWORD *)(v28 + 8 * v43 + 16);
                      if ( v39 )
                      {
                        if ( (*(_DWORD *)(v39 + 44) & 1) == 0
                          && v39 == _InterlockedCompareExchange64(
                                      (volatile signed __int64 *)(v28 + 8 * v43 + 16),
                                      (signed __int64)v41,
                                      v39) )
                        {
                          _m_prefetchw((const void *)(v39 + 44));
                          v44 = *(_DWORD *)(v39 + 44);
                          do
                          {
                            v61 = v44;
                            v44 = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(v39 + 44),
                                    v44 & 0xFFFFFFFD,
                                    v44);
                          }
                          while ( v61 != v44 );
                          if ( v44 == 2 )
                          {
                            v51 = **(_QWORD **)v39;
                            *(_QWORD *)v39 = 0LL;
                            v52 = (_DWORD *)(v39 + 48);
                            goto LABEL_85;
                          }
                          goto LABEL_86;
                        }
                      }
                      else if ( !_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v28 + 8 * v43 + 16),
                                   (signed __int64)v41,
                                   0LL) )
                      {
                        goto LABEL_86;
                      }
                      v38 = (unsigned int)(v38 + 1);
                      if ( (unsigned int)v38 >= 0x10 )
                      {
                        v51 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v41 + 24LL)
                                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v41 + 172LL)
                                        + 1192)
                            + 144LL;
                        goto LABEL_84;
                      }
                    }
                  }
                  v51 = **(_QWORD **)v41;
                  *(_QWORD *)v41 = 0LL;
LABEL_84:
                  v52 = v41 + 12;
LABEL_85:
                  RtlpInterlockedPushEntrySList(v51, v52);
LABEL_86:
                  v53 = *v40;
                  v54 = *(__int64 **)v15;
                  v55 = *(_QWORD *)(v53 + 24);
                  if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
                  {
                    v65[0] = (*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
                    ReservedBlockSize = RtlpGetReservedBlockSize(v15, v39, v28, v38);
                    v59 = *(_QWORD *)(v55 + 24);
                    v64 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
                    HeapProtection = RtlpGetHeapProtection(v59, 1LL);
                    ZwProtectVirtualMemory(-1LL, v65, &v64, HeapProtection, &v71);
                  }
                  *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
                  RtlpFreeUserBlock(v55, *((_QWORD *)v15 + 1), v28, v38);
                  v56 = -*((unsigned __int16 *)v15 + 20);
                  do
                  {
                    v57 = v54[20];
                    LODWORD(v63) = v57 + v56;
                    HIDWORD(v63) = HIDWORD(v57) - 1;
                  }
                  while ( v57 != _InterlockedCompareExchange64(v54 + 20, v63, v57) );
                  *((_QWORD *)v15 + 1) = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v55 + 60), 1u);
                  v15[8] = 0;
                  _m_prefetchw(v15 + 11);
                  if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v34 = **(_QWORD **)v15;
                    *(_QWORD *)v15 = 0LL;
LABEL_92:
                    v35 = (_QWORD **)(v15 + 12);
LABEL_93:
                    RtlpInterlockedPushEntrySList(v34, v35);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
            }
LABEL_24:
            v5 = v66;
          }
        }
        v3 = v62;
      }
      v66 = ++v5;
    }
    while ( v5 < v68 );
    v2 = v70;
LABEL_11:
    ++v2;
    ++v3;
    v70 = v2;
    v62 = v3;
  }
  while ( v2 < 0x81 );
  v7 = a1 + 96;
  v8 = 12LL;
  v67 = a1 + 96;
  v69 = 12LL;
  do
  {
    v9 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v7, v3);
    v11 = result;
    if ( result )
    {
      do
      {
        v45 = v11;
        v11 = *(struct _PEB **)&v11->InheritedAddressSpace;
        v46 = 1LL << LOBYTE(v45->ImageBaseAddress);
        if ( v46 > 0xF0000 )
          v46 = 983040LL;
        v47 = v46 + WORD1(v45->ImageBaseAddress);
        v4 += v47;
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), v45);
        ++v9;
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v49, v48);
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v50 = (__int64)result->SharedData + 550;
        }
        else
        {
          v50 = 2147353472LL;
        }
        if ( *(_BYTE *)v50 )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
          }
        }
      }
      while ( v11 );
      v7 = v67;
      v8 = v69;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 16), -v9);
    }
    v7 += 48LL;
    --v8;
    v67 = v7;
    v69 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return result;
}
