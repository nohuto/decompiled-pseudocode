/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0063AF4
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00639D4 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00177C8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00177EC (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024BB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00618F0 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0063698 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0065B1C (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  enum _LOCK_OPERATION v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  char v21; // [rsp+40h] [rbp-18h]

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v9 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( !(_DWORD)v9 )
    {
      ++*((_DWORD *)this + 23);
      return 0LL;
    }
    if ( (_DWORD)v9 == 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v9, this);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
      return 0LL;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2);
    v17[7] = 0LL;
    v17[3] = 270LL;
    v17[4] = 52LL;
    v17[5] = 2LL;
    v17[6] = v4;
    WdLogEvent5_WdCriticalError(v17);
    return 3221225473LL;
  }
  else
  {
    v19 = -1;
    v20 = 0LL;
    if ( (qword_1C0051010 & 2) != 0 )
    {
      v21 = 1;
      v19 = 8000;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerEnter, a3, 8000);
    }
    else
    {
      v21 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v14 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
            (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
            a2,
            v11,
            a4,
            *((_BYTE **)this + 4),
            *((_BYTE **)this + 5));
    if ( v14 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12);
      v18[3] = this;
      v18[4] = a2;
      v18[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v18);
    }
    else
    {
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
    }
    return (unsigned int)v14;
  }
}
