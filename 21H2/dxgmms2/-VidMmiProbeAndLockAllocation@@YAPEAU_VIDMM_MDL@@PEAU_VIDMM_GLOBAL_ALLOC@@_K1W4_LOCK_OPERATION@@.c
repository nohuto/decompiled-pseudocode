/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007BE50
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0085D80 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00A5300 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB5A0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00D6598 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00F21D0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C007C090 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C007C150 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C007C1D4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00817B0 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v8; // rsi
  char v9; // r12
  char v10; // r14
  struct _VIDMM_MDL *v11; // rax
  struct _VIDMM_MDL *v12; // rdi
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _MDL *Mdl; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v22; // rcx
  void *v23; // rcx
  void *v24[3]; // [rsp+58h] [rbp-60h] BYREF
  int v25; // [rsp+70h] [rbp-48h] BYREF
  __int64 v26; // [rsp+78h] [rbp-40h]
  char v27; // [rsp+80h] [rbp-38h]

  v8 = a6;
  if ( !a6 )
    v8 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 11);
  v24[1] = v8;
  v9 = 0;
  v10 = 0;
  v11 = (struct _VIDMM_MDL *)operator new(24LL, 0x35336956u, 256LL);
  v12 = v11;
  v24[2] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C006E804);
    WdLogSingleEntry1(6LL, 1222LL);
LABEL_14:
    DxgkLogInternalTriageEvent(v22, 262145LL);
    goto LABEL_15;
  }
  *((_QWORD *)v11 + 1) = 0LL;
  v24[0] = 0LL;
  v13 = VidMmMapViewOfAllocation(v8, a2, a3, v24, 0);
  if ( !v13 )
  {
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventPerformanceWarning, v15, 14);
    _InterlockedIncrement(&dword_1C006E834);
    WdLogSingleEntry1(6LL, 1237LL);
    goto LABEL_14;
  }
  v9 = 1;
  *(_DWORD *)v12 = 0;
  Mdl = VidMmiAllocateMdl(v13, a3);
  *((_QWORD *)v12 + 1) = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 1251LL);
    goto LABEL_14;
  }
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v27 = 1;
    v25 = 8000;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerEnter, v18, 8000);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmProbeAndLockPages(*((PMDL *)v12 + 1), 0, a4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && byte_1C006E941 < 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v25);
  v10 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, v12, v20, a1) )
  {
    VidMmUnmapViewOfAllocation(v8, v24[0]);
    return v12;
  }
LABEL_15:
  if ( v10 )
    MmUnlockPages(*((PMDL *)v12 + 1));
  if ( v12 )
  {
    v23 = (void *)*((_QWORD *)v12 + 1);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    operator delete(v12);
  }
  if ( v9 )
    VidMmUnmapViewOfAllocation(v8, v24[0]);
  return 0LL;
}
