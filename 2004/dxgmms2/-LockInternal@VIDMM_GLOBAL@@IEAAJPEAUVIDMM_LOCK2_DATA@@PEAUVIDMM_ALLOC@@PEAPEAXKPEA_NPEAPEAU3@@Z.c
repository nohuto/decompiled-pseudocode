/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0069F50
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0069420 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00018CC (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C0024AB8 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008535C (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C008537C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00B201C (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2148 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00B2244 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00B2300 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        __int64 **a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  int v16; // ebx
  __int64 CurrentProcess; // rax
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  void *v26; // rax
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+28h] [rbp-C0h]
  __int64 v32; // [rsp+30h] [rbp-B8h]
  struct VIDMM_ALLOC **v33; // [rsp+50h] [rbp-98h] BYREF
  bool *v34; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE v35; // [rsp+60h] [rbp-88h] BYREF
  VIDMM_PROCESS *v36; // [rsp+90h] [rbp-58h]

  v34 = a6;
  v33 = a7;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2622LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 889LL) )
  {
    LODWORD(v11) = 0;
    v12 = *a3;
    v13 = **a3;
    v36 = (VIDMM_PROCESS *)(*a3)[1];
    VIDMM_PROCESS::SafeAttach(v36, &v35);
    v15 = (unsigned int)(*(_DWORD *)a2 - 2);
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( (v12[4] & 1) != 0 )
        goto LABEL_20;
      v22 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              (struct VIDMM_ALLOC *)a3,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(**a3 + 128) + 488LL));
    }
    else
    {
      if ( *(_DWORD *)a2 != 3 )
      {
        v15 = (unsigned int)(*(_DWORD *)a2 - 4);
        if ( *(_DWORD *)a2 == 4 )
        {
          ExReleasePushLockExclusiveEx(v13 + 472, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v11) = VIDMM_GLOBAL::LockInAperture(this, (struct VIDMM_ALLOC *)a3, v34, v33);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v13 + 472, 0LL);
        }
        else
        {
          if ( *(_DWORD *)a2 != 5 )
            goto LABEL_20;
          v16 = **(_DWORD **)(v13 + 496);
          if ( (v16 & 0x20000000) != 0 )
          {
            v33 = 0LL;
            CurrentProcess = PsGetCurrentProcess(v15);
            LODWORD(v11) = MmMapViewOfSection(
                             *(_QWORD *)(v13 + 352),
                             CurrentProcess,
                             v12 + 2,
                             0LL,
                             *(_QWORD *)(v13 + 8),
                             &v33,
                             v13 + 8,
                             2,
                             0,
                             ~((_WORD)v16 << 8) & 0x400 | 4u);
            if ( (int)v11 >= 0 )
              goto LABEL_20;
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v12[1] + 24) + 72LL))(
                    *(_QWORD *)(v12[1] + 24),
                    v12[3],
                    *(_QWORD *)(v13 + 8));
            v12[2] = v18;
            if ( v18 )
              goto LABEL_20;
            LODWORD(v11) = -1073741801;
          }
          _InterlockedIncrement(&dword_1C0051774);
          v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
          v19[3] = v13;
          v21 = PsGetCurrentProcess(v20);
          v19[5] = (int)v11;
          v19[4] = v21;
          WdLogEvent5_WdLowResource(v19);
        }
        goto LABEL_19;
      }
      v22 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, (struct VIDMM_ALLOC *)a3);
    }
    v11 = v22;
    if ( v22 >= 0 )
      goto LABEL_20;
    v24 = WdLogNewEntry5_WdWarning(v15, v23);
    *(_QWORD *)(v24 + 24) = a3;
    *(_QWORD *)(v24 + 32) = v11;
    WdLogEvent5_WdWarning(v24);
    *((_BYTE *)a2 + 4) = 1;
    *(_DWORD *)a2 = 4;
LABEL_19:
    if ( (int)v11 < 0 )
    {
LABEL_32:
      VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v15, &v35);
      return (unsigned int)v11;
    }
LABEL_20:
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 336));
    ++*((_DWORD *)v12 + 19);
    *(_DWORD *)(v13 + 84) |= 0x20u;
    v25 = *(_DWORD *)(v13 + 80);
    if ( (v25 & 0x4000) != 0 )
    {
      v26 = *(void **)(v13 + 528);
    }
    else
    {
      if ( (v25 & 0x2000) != 0 )
      {
        LODWORD(v11) = LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a3, a4);
        goto LABEL_28;
      }
      v15 = **(unsigned int **)(v13 + 496);
      if ( (v15 & 8) != 0 )
        v26 = *(void **)(v13 + 360);
      else
        v26 = (void *)v12[2];
    }
    *a4 = v26;
LABEL_28:
    if ( (int)v11 >= 0 )
    {
      *(_BYTE *)(v13 + 89) = 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v27 = *(unsigned int *)a2;
        LODWORD(v32) = v27 == 4;
        LODWORD(v31) = *(_DWORD *)a2;
        LODWORD(v30) = a5;
        McTemplateK0pqqt_EtwWriteTransfer(v27, &EventLock2, v14, a3, v30, v31, v32);
      }
      VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7176), a5, 0, *(_DWORD *)a2 == 4);
    }
    goto LABEL_32;
  }
  v29 = WdLogNewEntry5_WdWarning(this, a2);
  WdLogEvent5_WdWarning(v29);
  return 3221226166LL;
}
