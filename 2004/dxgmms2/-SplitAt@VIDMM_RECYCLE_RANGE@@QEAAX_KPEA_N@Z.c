/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0079F80
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0079B80 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007AB24 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00C3A74 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0002474 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0024290 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0027EE8 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A96C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1E68 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2CBC (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  bool v4; // si
  __int64 v8; // rax
  bool v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r12d
  _QWORD *v13; // rbp
  __int64 v14; // r8
  struct _SLIST_ENTRY *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  PSLIST_ENTRY v19; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v21; // r8
  __int64 v22; // rax
  struct _SLIST_ENTRY *v23; // r12
  unsigned __int64 *v24; // rbp
  __int64 v25; // r13
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  struct _SLIST_ENTRY *v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  struct VIDMM_RECYCLE_BLOCK *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  struct _SLIST_ENTRY *v45; // [rsp+68h] [rbp-50h]
  bool v46; // [rsp+C0h] [rbp+8h]
  bool v48; // [rsp+D0h] [rbp+18h]
  __int64 v49; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 17);
  v4 = 0;
  *a3 = 1;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72) == (_QWORD)this;
  v8 = *((_QWORD *)this + 18);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 72) == (_QWORD)this;
  v10 = *((_QWORD *)this + 19);
  v46 = 0;
  if ( v10 )
    v46 = *(_QWORD *)(v10 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v48 = 0;
  if ( v11 )
    v48 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v12 = *((_DWORD *)this + 22);
  if ( v12 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v12, this);
  v13 = (_QWORD *)*((_QWORD *)this + 9);
  v14 = *((_QWORD *)this + 5);
  v15 = (struct _SLIST_ENTRY *)(a2 + *((_QWORD *)this + 4));
  v44 = v14;
  v45 = v15;
  v16 = *(_QWORD *)(v13[4] + 8LL);
  v17 = *(_QWORD *)(v16 + 1312);
  v18 = *(_DWORD *)(v16 + 1608);
  v49 = v17;
  if ( v18 )
  {
    v32 = (unsigned int)(v18 - 1);
    v19 = *(PSLIST_ENTRY *)(v16 + 8 * v32 + 1616);
    *(_QWORD *)(v16 + 8 * v32 + 1616) = 0LL;
    --*(_DWORD *)(v16 + 1608);
  }
  else
  {
    ++*(_DWORD *)(v17 + 20);
    v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
    if ( !v19 )
    {
      ++*(_DWORD *)(v49 + 24);
      v19 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v49 + 48))(
                            *(unsigned int *)(v49 + 36),
                            *(unsigned int *)(v49 + 44),
                            *(unsigned int *)(v49 + 40),
                            v49);
    }
    v14 = v44;
    v15 = v45;
  }
  if ( v19 )
  {
    v19[2].Next = v15;
    *((_DWORD *)&v19[1].Next + 2) = 0;
    LODWORD(v19[4].Next) = 0;
    v19[6].Next = 0LL;
    *((_QWORD *)&v19[4].Next + 1) = v13;
    *((_QWORD *)&v19[2].Next + 1) = v14;
    *((_QWORD *)&v19[5].Next + 1) = 3LL;
    ++*v13;
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v19[2].Next);
    if ( LeastSignificantBit < 0 )
      v22 = 0LL;
    else
      v22 = 1LL << LeastSignificantBit;
    *((_QWORD *)&v19[3].Next + 1) = v22;
    v23 = (PSLIST_ENTRY)((char *)v19 + 104);
    *((_QWORD *)&v19[6].Next + 1) = 0LL;
    v24 = (unsigned __int64 *)(&v19[7].Next + 1);
    *((_QWORD *)&v19[7].Next + 1) = 0LL;
    v19[3].Next = 0LL;
    LODWORD(v19[5].Next) = 0;
    v19[7].Next = 0LL;
    v19[8].Next = 0LL;
    *((_QWORD *)&v19[8].Next + 1) = 0LL;
    v19[9].Next = 0LL;
    *((_QWORD *)&v19[9].Next + 1) = 0LL;
    v19[10].Next = 0LL;
    *((_BYTE *)&v19[10].Next + 8) = 0;
    v25 = *((_QWORD *)&v19[4].Next + 1);
    v26 = *(_QWORD **)(v25 + 136);
    if ( v26 )
    {
      v34 = *v26 + 144LL * v26[1];
      *(_DWORD *)v34 = 0;
      *(_QWORD *)(v34 + 8) = v19;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v34 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v25 + 136) + 8LL);
      v35 = *(_QWORD *)(v25 + 136);
      if ( *(_QWORD *)(v35 + 8) == *(_QWORD *)(v35 + 48) )
      {
        *(_QWORD *)(v35 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v25 + 136) + 16LL) = 1;
      }
    }
    LODWORD(v19[4].Next) = *((_DWORD *)this + 16);
    *((_DWORD *)&v19[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v27 = *((_QWORD *)this + 15);
    *(_QWORD *)(v27 + 8) = v24;
    *((_QWORD *)this + 15) = v24;
    v19[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *v24 = v27;
    *((_QWORD *)&v19[8].Next + 1) = *((_QWORD *)this + 17);
    v19[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v19[9].Next + 1) = *((_QWORD *)this + 19);
    v19[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    LODWORD(v19[5].Next) = *((_DWORD *)this + 20);
    BYTE4(v19[5].Next) = *((_BYTE *)this + 84);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v19;
    if ( v9 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v19;
    if ( v46 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v19;
    if ( v48 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v19;
    v28 = *((_DWORD *)this + 16);
    if ( v28 == 5 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
      v19[6].Next = (struct _SLIST_ENTRY *)(*(_QWORD *)(v29 + 1568) + (unsigned int)dword_1C00513D0);
      v30 = *(struct _SLIST_ENTRY **)(v29 + 1560);
      if ( v30->Next != (struct _SLIST_ENTRY *)(v29 + 1552) )
        __fastfail(3u);
      v23->Next = (struct _SLIST_ENTRY *)(v29 + 1552);
      v19[7].Next = v30;
      v30->Next = v23;
      *(_QWORD *)(v29 + 1560) = v23;
      if ( !_InterlockedExchange((volatile __int32 *)(v29 + 1528), 1) && !*(_DWORD *)(v29 + 1576) )
        KeSetTimer((PKTIMER)(v29 + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)(v29 + 1432));
      v31 = *((_QWORD *)&v19[2].Next + 1) - (unsigned __int64)v19[2].Next;
      if ( (__int64)(v31 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v31)) < 0
        && g_IsInternalRelease )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
        v36[3] = 270LL;
        v36[4] = 9LL;
        v36[5] = 0LL;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      v27 = (unsigned __int64)v19[2].Next - *((_QWORD *)&v19[2].Next + 1);
      if ( (__int64)(v27 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v27)) < 0
        && g_IsInternalRelease )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v30);
        v37[3] = 270LL;
        v37[4] = 9LL;
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
    }
    else if ( v28 >= 3 && v28 <= 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v19);
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(
        (unsigned __int64)v19[2].Next - *((_QWORD *)&v19[2].Next + 1),
        v33);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v27, &EventRecycleRangeDestroy, v21, this);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      v38 = *((_QWORD *)this + 9);
      McTemplateK0pppppppqq_EtwWriteTransfer(
        *(_QWORD *)(v38 + 32),
        v38,
        v21,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v38 + 32) + 8LL) + 8LL),
        this,
        v38,
        *(_QWORD *)(v38 + 56),
        *(_QWORD *)(v38 + 32),
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5),
        **(_DWORD **)(v38 + 32),
        *((_DWORD *)this + 16));
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      v39 = *((_QWORD *)this + 9);
      v40 = *(_QWORD *)(v39 + 32);
      LODWORD(v43) = v19[4].Next;
      LODWORD(v42) = *(_DWORD *)v40;
      McTemplateK0pppppppqq_EtwWriteTransfer(
        v40,
        v39,
        v21,
        **(_QWORD **)(*(_QWORD *)(v40 + 8) + 8LL),
        v19,
        v39,
        *(_QWORD *)(v39 + 56),
        v40,
        v19[2].Next,
        *((_QWORD *)&v19[2].Next + 1),
        v42,
        v43);
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdWarning(v17, v16);
    *(_QWORD *)(v41 + 24) = this;
    *(_QWORD *)(v41 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
    WdLogEvent5_WdWarning(v41);
    if ( v12 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v12, this);
    *a3 = 0;
  }
}
