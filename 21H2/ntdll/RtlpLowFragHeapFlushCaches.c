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
 *     ZwProtectVirtualMemory @ 0x18009E000 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A1210 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A1250 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x18010A288 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x18010A610 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x18010A6C0 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpGetReservedBlockSize @ 0x18010B9A0 (RtlpGetReservedBlockSize.c)
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  struct _PEB *v10; // rax
  struct _PEB *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD **v15; // rdi
  _QWORD *v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  signed __int32 v26; // ebx
  _WORD *v27; // r8
  unsigned __int16 *v28; // r8
  signed __int32 v29; // eax
  unsigned __int16 *v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rdx
  __int64 v34; // rcx
  _QWORD **v35; // rdx
  _QWORD *v36; // rax
  unsigned int v37; // edx
  signed __int64 v38; // rdx
  __int64 *v39; // rsi
  _DWORD *v40; // rbx
  signed __int32 v41; // eax
  __int64 v42; // rcx
  signed __int32 v43; // eax
  struct _PEB *v44; // rbp
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int16 *v51; // rsi
  __int64 v52; // rbx
  int v53; // edx
  signed __int64 v54; // rax
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v56; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v58; // ett
  __int64 v60; // [rsp+30h] [rbp-68h]
  signed __int64 v61; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp+8h]
  __int64 v65; // [rsp+A0h] [rbp+8h]
  unsigned int v66; // [rsp+A8h] [rbp+10h]
  __int64 v67; // [rsp+A8h] [rbp+10h]
  unsigned int v68; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v68 = 0;
  v60 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v66 = 1;
    }
    else
    {
      v66 = RtlpAffinityState;
      if ( !(_DWORD)RtlpAffinityState )
        goto LABEL_11;
    }
    v5 = 0;
    v64 = 0;
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
            || (v15 = *(_QWORD ***)(v12
                                  - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
          {
            RtlpLogHeapFailure(3, v14, v12, 0, 0LL, 0LL);
          }
          else
          {
            _m_prefetchw(v15);
            v16 = v15[1];
            v17 = 0;
            v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
            v19 = *(_QWORD *)(**v15 + 24LL);
            v20 = (unsigned int)v16 ^ RtlpLFHKey ^ v19 ^ *((_DWORD *)v16 + 6);
            if ( (_QWORD *)((char *)v16 + (unsigned int)v18 * HIWORD(v20) + (unsigned __int16)v20) == (_QWORD *)v12 )
            {
              CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
              v22 = 0LL;
              if ( CurrentServiceSessionId )
                v23 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v23 = 2147353472LL;
              if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              {
                RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 24), v13 + 16, 2LL, 0LL);
                v22 = 0LL;
              }
              v24 = 0LL;
              v25 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
              while ( 1 )
              {
                v26 = *((_DWORD *)v15 + 8);
                if ( v26 >= 0
                  && v26 == _InterlockedCompareExchange((volatile signed __int32 *)v15 + 8, v26 | 0x80000000, v26) )
                {
                  break;
                }
                v24 = (unsigned int)(v24 + 1);
                if ( (unsigned int)v24 > v25 )
                {
                  v26 = -1;
                  break;
                }
              }
              *(_BYTE *)(v13 + 15) = 0x80;
              v27 = v15 + 2;
              if ( v26 == -1 )
              {
                RtlpInterlockedPushEntrySList(v15 + 2, v13 + 16, v27, 0LL);
              }
              else
              {
                _bittestandreset64((signed __int64 *)v16[5], v18);
                if ( *v27 )
                {
                  v36 = (_QWORD *)RtlpInterlockedFlushSList(v15 + 2, v24);
                  while ( v36 )
                  {
                    v37 = *((_DWORD *)v36 - 1);
                    ++v17;
                    v36 = (_QWORD *)*v36;
                    v18 = (unsigned __int16)(v37 >> 8);
                    _bittestandreset64((signed __int64 *)v16[5], v18);
                  }
                }
                v28 = (unsigned __int16 *)*v15;
                if ( (_WORD)v17 + (_WORD)v26 + 1 != *((_WORD *)v15 + 20)
                  || (v22 = *((unsigned int *)v28 + 42),
                      v38 = *(unsigned int *)(*(_QWORD *)v28 + 32LL),
                      *((_DWORD *)v28 + 41) == 1)
                  && (unsigned int)v38 >= (unsigned int)v22
                  && (v38 = (unsigned int)(v38 - v22), (unsigned int)v38 < *(_DWORD *)(*(_QWORD *)v28 + 36LL)) )
                {
                  *((_DWORD *)v15 + 8) = ((_DWORD)v18 << 16) | (v17 + (unsigned __int16)v26 + 1);
                  if ( (*((_DWORD *)v15 + 11) & 2) == 0
                    && (unsigned __int8)RtlpIsSubSegmentReuseable(v28, v15, v28, v22) )
                  {
                    while ( 1 )
                    {
                      v29 = *((_DWORD *)v15 + 11);
                      if ( !v29 || (v29 & 2) != 0 )
                        break;
                      if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)v15 + 11, v29 | 2, v29) )
                      {
                        v30 = (unsigned __int16 *)*v15;
                        v31 = 0LL;
                        while ( 1 )
                        {
                          v32 = ((_BYTE)v31 + (unsigned __int8)v30[87]) & 0xF;
                          v33 = *(volatile signed __int32 **)&v30[4 * v32 + 8];
                          if ( v33 )
                          {
                            if ( (v33[11] & 1) == 0
                              && v33 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                                     (volatile signed __int64 *)&v30[4 * v32 + 8],
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
                                       (volatile signed __int64 *)&v30[4 * v32 + 8],
                                       (signed __int64)v15,
                                       0LL) )
                          {
                            goto LABEL_24;
                          }
                          v31 = (unsigned int)(v31 + 1);
                          if ( (unsigned int)v31 >= 0x10 )
                          {
                            v34 = *(_QWORD *)(*(_QWORD *)(**v15 + 24LL) + 8LL * *((unsigned __int16 *)*v15 + 86) + 1192)
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
                  v39 = *v15;
                  v40 = (_DWORD *)_InterlockedExchange64(*v15 + 1, 0LL);
                  if ( !v40 )
                    goto LABEL_86;
                  _m_prefetchw(v40 + 11);
                  if ( _InterlockedAnd(v40 + 11, 0xFFFFFFF9) != 6 )
                  {
                    if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v39, v40, v28, v22) )
                      goto LABEL_86;
                    do
                    {
                      v41 = v40[11];
                      if ( !v41 || (v41 & 2) != 0 )
                        goto LABEL_86;
                    }
                    while ( v41 != _InterlockedCompareExchange(v40 + 11, v41 | 2, v41) );
                    v28 = *(unsigned __int16 **)v40;
                    v22 = 0LL;
                    while ( 1 )
                    {
                      v42 = ((_BYTE)v22 + (unsigned __int8)v28[87]) & 0xF;
                      v38 = *(_QWORD *)&v28[4 * v42 + 8];
                      if ( v38 )
                      {
                        if ( (*(_DWORD *)(v38 + 44) & 1) == 0
                          && v38 == _InterlockedCompareExchange64(
                                      (volatile signed __int64 *)&v28[4 * v42 + 8],
                                      (signed __int64)v40,
                                      v38) )
                        {
                          _m_prefetchw((const void *)(v38 + 44));
                          v43 = *(_DWORD *)(v38 + 44);
                          do
                          {
                            v58 = v43;
                            v43 = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)(v38 + 44),
                                    v43 & 0xFFFFFFFD,
                                    v43);
                          }
                          while ( v58 != v43 );
                          if ( v43 == 2 )
                          {
                            v48 = **(_QWORD **)v38;
                            *(_QWORD *)v38 = 0LL;
                            v49 = (_DWORD *)(v38 + 48);
                            goto LABEL_85;
                          }
                          goto LABEL_86;
                        }
                      }
                      else if ( !_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)&v28[4 * v42 + 8],
                                   (signed __int64)v40,
                                   0LL) )
                      {
                        goto LABEL_86;
                      }
                      v22 = (unsigned int)(v22 + 1);
                      if ( (unsigned int)v22 >= 0x10 )
                      {
                        v48 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v40 + 24LL)
                                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v40 + 172LL)
                                        + 1192)
                            + 144LL;
                        goto LABEL_84;
                      }
                    }
                  }
                  v48 = **(_QWORD **)v40;
                  *(_QWORD *)v40 = 0LL;
LABEL_84:
                  v49 = v40 + 12;
LABEL_85:
                  RtlpInterlockedPushEntrySList(v48, v49, v28, v22);
LABEL_86:
                  v50 = *v39;
                  v51 = (unsigned __int16 *)*v15;
                  v52 = *(_QWORD *)(v50 + 24);
                  if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
                  {
                    BaseAddress = (PVOID)(((unsigned __int64)v15[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                    ReservedBlockSize = RtlpGetReservedBlockSize(v15, v38, v28, v22);
                    v56 = *(_QWORD *)(v52 + 24);
                    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
                    HeapProtection = RtlpGetHeapProtection(v56, 1LL);
                    ZwProtectVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      &RegionSize,
                      HeapProtection,
                      &OldProtect);
                  }
                  *((_DWORD *)v15[1] + 5) = 0;
                  RtlpFreeUserBlock(v52, v15[1], v28, v22);
                  v53 = -*((unsigned __int16 *)v15 + 20);
                  do
                  {
                    v54 = *((_QWORD *)v51 + 20);
                    LODWORD(v61) = v54 + v53;
                    HIDWORD(v61) = HIDWORD(v54) - 1;
                  }
                  while ( v54 != _InterlockedCompareExchange64((volatile signed __int64 *)v51 + 20, v61, v54) );
                  v15[1] = 0LL;
                  _InterlockedAdd((volatile signed __int32 *)(v52 + 60), 1u);
                  *((_DWORD *)v15 + 8) = 0;
                  _m_prefetchw((char *)v15 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v15 + 11, 0xFFFFFFFE) == 1 )
                  {
                    v34 = **v15;
                    *v15 = 0LL;
LABEL_92:
                    v35 = v15 + 6;
LABEL_93:
                    RtlpInterlockedPushEntrySList(v34, v35, v30, v31);
                  }
                }
              }
            }
            else
            {
              RtlpLogHeapFailure(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
            }
LABEL_24:
            v5 = v64;
          }
        }
        v3 = v60;
      }
      v64 = ++v5;
    }
    while ( v5 < v66 );
    v2 = v68;
LABEL_11:
    ++v2;
    ++v3;
    v68 = v2;
    v60 = v3;
  }
  while ( v2 < 0x81 );
  v7 = a1 + 96;
  v8 = 12LL;
  v65 = a1 + 96;
  v67 = 12LL;
  do
  {
    v9 = 0;
    v10 = (struct _PEB *)RtlpInterlockedFlushSList(v7, v3);
    v11 = v10;
    if ( v10 )
    {
      do
      {
        v44 = v11;
        v11 = *(struct _PEB **)&v11->InheritedAddressSpace;
        v45 = 1LL << LOBYTE(v44->ImageBaseAddress);
        if ( v45 > 0xF0000 )
          v45 = 983040LL;
        v46 = v45 + WORD1(v44->ImageBaseAddress);
        v4 += v46;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v44);
        ++v9;
        LODWORD(v10) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v10 )
        {
          v10 = NtCurrentPeb();
          v47 = (__int64)v10->SharedData + 550;
        }
        else
        {
          v47 = 2147353472LL;
        }
        if ( *(_BYTE *)v47 )
        {
          v10 = NtCurrentPeb();
          if ( (v10->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
            LODWORD(v10) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
          }
        }
      }
      while ( v11 );
      v7 = v65;
      v8 = v67;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 16), -v9);
    }
    v7 += 48LL;
    --v8;
    v65 = v7;
    v67 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return (int)v10;
}
