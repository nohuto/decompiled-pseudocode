/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0064610
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0061E80 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0063BF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065BA0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0001008 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001200 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023D70 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0027CA8 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006381C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C0064C04 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_BLOCK **this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  __int64 v4; // r13
  struct VIDMM_RECYCLE_RANGE *v5; // rbx
  VIDMM_RECYCLE_MULTIRANGE *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  struct VIDMM_RECYCLE_BLOCK *v12; // rdx
  struct VIDMM_RECYCLE_RANGE *v13; // r15
  struct VIDMM_RECYCLE_BLOCK *v14; // rax
  struct VIDMM_RECYCLE_BLOCK **v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  struct _SLIST_ENTRY *v21; // r8
  __int64 v22; // rbp
  _QWORD *v23; // rcx
  VIDMM_RECYCLE_BLOCK *v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rbp
  VIDMM_RECYCLE_BLOCK *v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rax
  PSLIST_ENTRY v33; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v35; // rax
  __int64 v36; // rdi
  _QWORD *v37; // rcx
  VIDMM_RECYCLE_BLOCK *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  struct _SLIST_ENTRY *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct _SLIST_ENTRY *v44; // rdx
  struct _SLIST_ENTRY *v45; // rax
  unsigned __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  char v55; // [rsp+60h] [rbp-98h]
  char v56; // [rsp+61h] [rbp-97h]
  char v57; // [rsp+62h] [rbp-96h]
  bool v58; // [rsp+63h] [rbp-95h]
  bool v59; // [rsp+64h] [rbp-94h]
  char v60; // [rsp+65h] [rbp-93h]
  unsigned int v61; // [rsp+68h] [rbp-90h]
  int v62; // [rsp+6Ch] [rbp-8Ch] BYREF
  int v63; // [rsp+70h] [rbp-88h]
  struct _SLIST_ENTRY *v64; // [rsp+78h] [rbp-80h]
  __int64 v65; // [rsp+80h] [rbp-78h]
  __int64 v66; // [rsp+88h] [rbp-70h]
  __int64 v67; // [rsp+90h] [rbp-68h]
  struct _SLIST_ENTRY *v68; // [rsp+98h] [rbp-60h]
  __int64 v69; // [rsp+A0h] [rbp-58h]
  bool v71; // [rsp+108h] [rbp+10h]
  bool v72; // [rsp+110h] [rbp+18h]
  bool v73; // [rsp+118h] [rbp+20h]

  v4 = *((_QWORD *)a2 + 17);
  v5 = a2;
  v64 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 4);
  v6 = (VIDMM_RECYCLE_MULTIRANGE *)this;
  v7 = *((_QWORD *)a3 + 5);
  v8 = *((unsigned int *)a2 + 16);
  v65 = v7;
  v63 = *((_DWORD *)a2 + 23);
  v61 = v8;
  v71 = 0;
  v56 = 0;
  if ( v4 )
  {
    v71 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v4 + 72) == a3 )
    {
      v56 = 1;
      v71 = *(_QWORD *)(v4 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 18);
  v72 = 0;
  v57 = 0;
  if ( v9 )
  {
    v72 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v57 = 1;
      v72 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 19);
  v66 = v10;
  v58 = 0;
  v59 = 0;
  if ( v10 )
  {
    v58 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    v59 = *(_QWORD *)(v10 + 72) == (_QWORD)a3;
  }
  v11 = *((_QWORD *)a2 + 20);
  v67 = v11;
  v73 = 0;
  v60 = 0;
  if ( v11 )
  {
    v73 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v11 + 72) == a3 )
    {
      v60 = 1;
      v73 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    }
  }
  v68 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 16);
  v69 = *((_QWORD *)a3 + 15);
  ++*(_QWORD *)this[10];
  v55 = 0;
  v62 = *((_DWORD *)a2 + 20);
  while ( 1 )
  {
    v12 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 15);
    v13 = 0LL;
    if ( v12 != (struct VIDMM_RECYCLE_BLOCK *)(*((_QWORD *)v5 + 9) + 72LL) )
      v13 = (struct VIDMM_RECYCLE_BLOCK *)((char *)v12 - 120);
    if ( (_DWORD)v8 == 5 || (unsigned int)(v8 - 3) <= 1 )
    {
      v12 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 13);
      v14 = (struct VIDMM_RECYCLE_RANGE *)((char *)v5 + 104);
      if ( *((struct VIDMM_RECYCLE_RANGE **)v12 + 1) != (struct VIDMM_RECYCLE_RANGE *)((char *)v5 + 104) )
        goto LABEL_87;
      v15 = (struct VIDMM_RECYCLE_BLOCK **)*((_QWORD *)v5 + 14);
      if ( *v15 != v14 )
        goto LABEL_87;
      *v15 = v12;
      *((_QWORD *)v12 + 1) = v15;
      *(_QWORD *)v14 = 0LL;
      v16 = *((_DWORD *)v5 + 16);
      *((_QWORD *)v5 + 14) = 0LL;
      *((_QWORD *)v5 + 12) = 0LL;
      if ( v16 == 5 )
      {
        v17 = *((_QWORD *)v5 + 4) - *((_QWORD *)v5 + 5);
        if ( (__int64)(v17 + _InterlockedExchangeAdd64(
                               &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                               v17)) < 0
          && g_IsInternalRelease )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v12);
          v47[3] = 270LL;
          v47[4] = 9LL;
          v47[5] = 0LL;
          v47[6] = 0LL;
          v47[7] = 0LL;
          WdLogEvent5_WdCriticalError(v47);
        }
      }
      else if ( (unsigned int)(v16 - 3) <= 1 )
      {
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v5 + 4) - *((_QWORD *)v5 + 5), v12);
      }
    }
    if ( v55 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v5, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v62);
    else
      v55 = 1;
    v18 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 32LL);
    v19 = *(_QWORD *)(v18 + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v18, &EventRecycleRangeDestroy, v8, v5);
    v20 = WdLogNewEntry5_WdEvent(v18, v12);
    *(_QWORD *)(v20 + 24) = v5;
    WdLogEvent5_WdEvent(v20);
    v22 = *((_QWORD *)v5 + 9);
    v23 = *(_QWORD **)(v22 + 136);
    if ( v23 )
    {
      v48 = *v23 + 144LL * v23[1];
      *(_DWORD *)v48 = 1;
      *(_QWORD *)(v48 + 8) = v5;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v48 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v22 + 136) + 8LL);
      v49 = *(_QWORD *)(v22 + 136);
      if ( *(_QWORD *)(v49 + 8) == *(_QWORD *)(v49 + 48) )
      {
        *(_QWORD *)(v49 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v22 + 136) + 16LL) = 1;
      }
    }
    v24 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 9);
    v25 = (*(_QWORD *)v24)-- == 1LL;
    if ( v25 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v24);
    *((_BYTE *)v5 + 168) = 1;
    v26 = *(unsigned int *)(v19 + 1608);
    v27 = *(_QWORD *)(v19 + 1312);
    if ( (unsigned int)v26 >= 4 )
    {
      ++*(_DWORD *)(v27 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v27) >= *(_WORD *)(v27 + 16) )
      {
        ++*(_DWORD *)(v27 + 32);
        (*(void (__fastcall **)(struct VIDMM_RECYCLE_RANGE *, __int64))(v27 + 56))(v5, v27);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v27, (PSLIST_ENTRY)v5);
      }
    }
    else
    {
      *(_QWORD *)(v19 + 8 * v26 + 1616) = v5;
      ++*(_DWORD *)(v19 + 1608);
    }
    v6 = (VIDMM_RECYCLE_MULTIRANGE *)this;
    if ( v5 == a3 )
      break;
    v8 = v61;
    v5 = v13;
  }
  v28 = this[10];
  v29 = *(_QWORD *)(*((_QWORD *)v28 + 4) + 8LL);
  v30 = *(_DWORD *)(v29 + 1608);
  v31 = *(_QWORD *)(v29 + 1312);
  if ( v30 )
  {
    v32 = (unsigned int)(v30 - 1);
    v33 = *(PSLIST_ENTRY *)(v29 + 8 * v32 + 1616);
    *(_QWORD *)(v29 + 8 * v32 + 1616) = 0LL;
    --*(_DWORD *)(v29 + 1608);
  }
  else
  {
    ++*(_DWORD *)(v31 + 20);
    v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v31);
    if ( !v33 )
    {
      ++*(_DWORD *)(v31 + 24);
      v33 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v31 + 48))(
                            *(unsigned int *)(v31 + 36),
                            *(unsigned int *)(v31 + 44),
                            *(unsigned int *)(v31 + 40),
                            v31);
    }
  }
  if ( v33 )
  {
    v33[2].Next = v64;
    *((_QWORD *)&v33[2].Next + 1) = v65;
    *((_DWORD *)&v33[1].Next + 2) = 0;
    *((_QWORD *)&v33[4].Next + 1) = v28;
    LODWORD(v33[4].Next) = 0;
    *((_QWORD *)&v33[5].Next + 1) = 3LL;
    v33[6].Next = 0LL;
    ++*(_QWORD *)v28;
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v33[2].Next);
    v35 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
    *((_QWORD *)&v33[3].Next + 1) = v35;
    v36 = *((_QWORD *)&v33[4].Next + 1);
    v33[3].Next = 0LL;
    LODWORD(v33[5].Next) = 0;
    *((_QWORD *)&v33[6].Next + 1) = 0LL;
    v33[7].Next = 0LL;
    *((_QWORD *)&v33[7].Next + 1) = 0LL;
    v33[8].Next = 0LL;
    *((_QWORD *)&v33[8].Next + 1) = 0LL;
    v33[9].Next = 0LL;
    *((_QWORD *)&v33[9].Next + 1) = 0LL;
    v33[10].Next = 0LL;
    *((_BYTE *)&v33[10].Next + 8) = 0;
    v37 = *(_QWORD **)(v36 + 136);
    if ( v37 )
    {
      v50 = *v37 + 144LL * v37[1];
      *(_DWORD *)v50 = 0;
      *(_QWORD *)(v50 + 8) = v33;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v50 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v36 + 136) + 8LL);
      v51 = *(_QWORD *)(v36 + 136);
      if ( *(_QWORD *)(v51 + 8) == *(_QWORD *)(v51 + 48) )
      {
        *(_QWORD *)(v51 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v36 + 136) + 16LL) = 1;
      }
    }
  }
  v38 = this[10];
  v25 = (*(_QWORD *)v38)-- == 1LL;
  if ( v25 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v38);
  v39 = v67;
  *((_DWORD *)&v33[5].Next + 3) = v63;
  LODWORD(v33[5].Next) = v62;
  v40 = v66;
  *((_QWORD *)&v33[9].Next + 1) = v66;
  LODWORD(v33[4].Next) = v61;
  *((_QWORD *)&v33[8].Next + 1) = v4;
  v33[9].Next = (struct _SLIST_ENTRY *)v9;
  v33[10].Next = (struct _SLIST_ENTRY *)v39;
  if ( v71 )
    *(_QWORD *)(v4 + 64) = v33;
  if ( v56 )
    *(_QWORD *)(v4 + 72) = v33;
  if ( v72 )
    *(_QWORD *)(v9 + 64) = v33;
  if ( v57 )
    *(_QWORD *)(v9 + 72) = v33;
  if ( v58 )
    *(_QWORD *)(v40 + 64) = v33;
  if ( v59 )
    *(_QWORD *)(v40 + 72) = v33;
  if ( v73 )
    *(_QWORD *)(v39 + 64) = v33;
  if ( v60 )
    *(_QWORD *)(v39 + 72) = v33;
  v41 = v68;
  v33[8].Next = v68;
  v41->Next = (PSLIST_ENTRY)((char *)v33 + 120);
  v42 = v69;
  *((_QWORD *)&v33[7].Next + 1) = v69;
  *(_QWORD *)(v42 + 8) = (char *)v33 + 120;
  if ( v61 == 5 )
  {
    v43 = *(_QWORD *)(*((_QWORD *)this[10] + 4) + 8LL);
    v44 = (struct _SLIST_ENTRY *)(v43 + 1552);
    v33[6].Next = (struct _SLIST_ENTRY *)(*(_QWORD *)(v43 + 1568) + (unsigned int)dword_1C00513D0);
    v45 = (PSLIST_ENTRY)((char *)v33 + 104);
    v21 = *(struct _SLIST_ENTRY **)(v43 + 1560);
    if ( v21->Next != (struct _SLIST_ENTRY *)(v43 + 1552) )
LABEL_87:
      __fastfail(3u);
    v45->Next = v44;
    v33[7].Next = v21;
    v21->Next = v45;
    *(_QWORD *)(v43 + 1560) = v45;
    if ( !_InterlockedExchange((volatile __int32 *)(v43 + 1528), 1) && !*(_DWORD *)(v43 + 1576) )
      KeSetTimer((PKTIMER)(v43 + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)(v43 + 1432));
    v46 = *((_QWORD *)&v33[2].Next + 1) - (unsigned __int64)v33[2].Next;
    if ( (__int64)(v46 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v46)) < 0
      && g_IsInternalRelease )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v44);
      v52[3] = 270LL;
      v52[4] = 9LL;
      v52[5] = 0LL;
      v52[6] = 0LL;
      v52[7] = 0LL;
      WdLogEvent5_WdCriticalError(v52);
    }
  }
  else if ( v61 - 3 <= 1 )
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this[10] + 4) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v33);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
  {
    v53 = (__int64)this[10];
    v54 = *(_QWORD *)(v53 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v54,
      v53,
      (__int64)v21,
      **(_QWORD **)(*(_QWORD *)(v54 + 8) + 8LL),
      v33,
      v53,
      *(_QWORD *)(v53 + 56),
      v54,
      v33[2].Next,
      *((_QWORD *)&v33[2].Next + 1),
      *(_DWORD *)v54,
      LODWORD(v33[4].Next));
  }
}
