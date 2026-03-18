/*
 * XREFs of ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00798D0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F40 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0002474 (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0024A38 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0qpxp_EtwWriteTransfer @ 0x1C0028084 (McTemplateK0qpxp_EtwWriteTransfer.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0078CB0 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A758 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A96C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C007CC6C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Commit(VIDMM_RECYCLE_RANGE *this, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  struct VIDMM_RECYCLE_BLOCK *v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  int v15; // ecx
  void *v17; // r8
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v21; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG v25; // r9d
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // ecx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+20h] BYREF

  v3 = *((int *)this + 16);
  if ( (_DWORD)v3 == 5 )
  {
    v6 = (_QWORD *)((char *)this + 104);
    v7 = *((_QWORD *)this + 13);
    if ( *(_QWORD **)(v7 + 8) != v6 || (v8 = (struct VIDMM_RECYCLE_BLOCK *)v6[1], *(_QWORD **)v8 != v6) )
      __fastfail(3u);
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = 0LL;
    v9 = *((_DWORD *)this + 16);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    if ( v9 == 5 )
    {
      v7 = *((_QWORD *)this + 4) - *((_QWORD *)this + 5);
      if ( (__int64)(v7 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v7)) < 0
        && g_IsInternalRelease )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v8);
        v40[3] = 270LL;
        v40[4] = 9LL;
        v40[5] = 0LL;
        v40[6] = 0LL;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
      }
    }
    else if ( (unsigned int)(v9 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)this + 4) - *((_QWORD *)this + 5), v8);
    }
    if ( dword_1C00513E0 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v8);
      v41[3] = 270LL;
      v41[4] = 9LL;
      v41[5] = 0LL;
      v41[6] = 0LL;
      v41[7] = 0LL;
      WdLogEvent5_WdCriticalError(v41);
    }
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 16);
    v10[5] = 1LL;
    WdLogEvent5_WdEvent(v10);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v11, &EventRecycleRangeTransition, v12, this, *((_DWORD *)this + 16), 1);
    v13 = *((_QWORD *)this + 9);
    v14 = *(_QWORD **)(v13 + 136);
    if ( v14 )
    {
      v42 = *v14 + 144LL * v14[1];
      *(_DWORD *)v42 = 2;
      *(_QWORD *)(v42 + 8) = this;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v42 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v13 + 136) + 8LL);
      v43 = *(_QWORD *)(v13 + 136);
      if ( *(_QWORD *)(v43 + 8) == *(_QWORD *)(v43 + 48) )
      {
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v13 + 136) + 16LL) = 1;
      }
    }
    *((_DWORD *)this + 16) = 1;
    goto LABEL_12;
  }
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 4 )
    {
      v21 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 9) + 32LL);
      v22 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v21 + 1);
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v21, this);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v22, this);
      if ( dword_1C00513E0 && *((_DWORD *)this + 20) <= 1u && g_IsInternalRelease )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
        v36[3] = 270LL;
        v36[4] = 9LL;
        v36[5] = 0LL;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      VIDMM_RECYCLE_RANGE::Transition(this, 3LL);
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v35[3] = 270LL;
      v35[4] = 52LL;
      v35[5] = 0LL;
      v35[6] = v3;
      v35[7] = 0LL;
      WdLogEvent5_WdCriticalError(v35);
    }
    goto LABEL_12;
  }
  v17 = (void *)*((_QWORD *)this + 4);
  RegionSize = *((_QWORD *)this + 5) - (_QWORD)v17;
  v18 = *(unsigned int **)(*((_QWORD *)this + 9) + 32LL);
  v19 = *v18;
  if ( (unsigned int)(v19 - 9) <= 1 )
  {
    if ( !dword_1C00513E0 || *((_DWORD *)this + 20) || !g_IsInternalRelease )
      goto LABEL_38;
    goto LABEL_56;
  }
  if ( (unsigned int)(v19 - 3) > 3 )
  {
    if ( (_DWORD)v19 == 2 || (_DWORD)v19 == 8 )
      v25 = 4;
    else
      v25 = 1028;
    BaseAddress = v17;
    v26 = VidMmAllocateVirtualMemory(&BaseAddress, &RegionSize, 0x1000u, v25);
    v29 = v26;
    if ( v26 < 0 )
    {
      _InterlockedIncrement(&dword_1C0051750);
      v37 = WdLogNewEntry5_WdLowResource(v28);
      *(_QWORD *)(v37 + 24) = v29;
      WdLogEvent5_WdLowResource(v37);
      return (unsigned int)v29;
    }
    if ( dword_1C00513E0 && *((_DWORD *)this + 20) && g_IsInternalRelease )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
      v38[3] = 270LL;
      v38[4] = 9LL;
      v38[5] = 0LL;
      v38[6] = 0LL;
      v38[7] = 0LL;
      WdLogEvent5_WdCriticalError(v38);
    }
    if ( bTracingEnabled )
    {
      v30 = *((_QWORD *)this + 9);
      v31 = *(_QWORD *)(v30 + 32);
      v32 = (unsigned int)(*(_DWORD *)v31 - 3) <= 3 ? *(_QWORD *)(v30 + 56) : *((_QWORD *)this + 4);
      v33 = *(_QWORD *)(*(_QWORD *)(v31 + 8) + 8LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp_EtwWriteTransfer(
          v33,
          &EventCreateProcessAllocationDetails,
          v32,
          *(_QWORD *)(v33 + 8),
          (char)this,
          RegionSize,
          v32);
    }
    goto LABEL_38;
  }
  if ( dword_1C00513E0 && !*((_DWORD *)this + 20) && g_IsInternalRelease )
  {
LABEL_56:
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v19);
    v39[3] = 270LL;
    v39[4] = 9LL;
    v39[5] = 0LL;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
LABEL_38:
  VIDMM_RECYCLE_RANGE::Transition(this, 1LL);
LABEL_12:
  v15 = *((_DWORD *)this + 20);
  if ( v15 == 2 )
  {
    *((_DWORD *)this + 20) = 3;
LABEL_14:
    *((_BYTE *)this + 84) = *a3;
    return 0LL;
  }
  if ( !v15 )
  {
    *((_DWORD *)this + 20) = 1;
LABEL_27:
    *((_BYTE *)this + 84) = 0;
    return 0LL;
  }
  v34 = v15 - 1;
  if ( !v34 )
    goto LABEL_27;
  if ( v34 == 2 )
    goto LABEL_14;
  return 0LL;
}
