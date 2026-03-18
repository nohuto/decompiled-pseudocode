/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0093640
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0092ED0 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0002E80 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C002EC0C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CDC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00A3CFC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00D7CA0 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7DE0 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00D7ED8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00D7F90 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        struct VIDMM_ALLOC *a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  void **v7; // rdi
  struct VIDMM_ALLOC *v8; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r14
  int v13; // r15d
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // eax
  void *v21; // rax
  int v23; // ecx
  __int64 v24; // rdi
  __int64 CurrentProcess; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-E8h]
  __int64 v41; // [rsp+28h] [rbp-E0h]
  __int64 v42; // [rsp+30h] [rbp-D8h]
  unsigned int v43; // [rsp+60h] [rbp-A8h]
  struct VIDMM_ALLOC **v44; // [rsp+68h] [rbp-A0h] BYREF
  void **v45; // [rsp+70h] [rbp-98h]
  struct VIDMM_ALLOC *v46; // [rsp+78h] [rbp-90h]
  struct _KAPC_STATE v47; // [rsp+80h] [rbp-88h] BYREF
  VIDMM_PROCESS *v48; // [rsp+B0h] [rbp-58h]

  v7 = a4;
  v8 = a3;
  v44 = a7;
  v11 = *((_QWORD *)this + 3);
  v45 = a4;
  v46 = a3;
  if ( !*(_BYTE *)(v11 + 2742) && !*(_BYTE *)(*((_QWORD *)this + 2) + 913LL) )
  {
    v12 = *(_QWORD **)a3;
    v13 = 0;
    v14 = 0;
    v15 = **(_QWORD **)a3;
    v48 = *(VIDMM_PROCESS **)(*(_QWORD *)a3 + 8LL);
    VIDMM_PROCESS::SafeAttach(v48, &v47);
    v19 = *(unsigned int *)a2;
    if ( (int)v19 < 2 )
      goto LABEL_4;
    v19 = (unsigned int)(v19 - 2);
    if ( (_DWORD)v19 )
    {
      v23 = v19 - 1;
      if ( v23 )
      {
        v19 = (unsigned int)(v23 - 1);
        if ( (_DWORD)v19 )
        {
          if ( (_DWORD)v19 != 1 )
            goto LABEL_4;
          v43 = **(_DWORD **)(v15 + 528);
          if ( (v43 & 0x20000000) != 0 )
          {
            v24 = *(_QWORD *)(v15 + 8);
            v44 = 0LL;
            CurrentProcess = PsGetCurrentProcess(v43, v16, v17, v18);
            v26 = *(_QWORD *)(v15 + 376);
            v27 = CurrentProcess;
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            v14 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, __int64, struct VIDMM_ALLOC ***, __int64, int, _DWORD, unsigned int))VirtualMemoryInterface
                   + 3))(
                    v26,
                    v27,
                    v12 + 2,
                    0LL,
                    v24,
                    &v44,
                    v15 + 8,
                    2,
                    0,
                    ~((_WORD)v43 << 8) & 0x400 | 4u);
            if ( v14 >= 0 )
            {
              v7 = v45;
              v8 = v46;
              goto LABEL_4;
            }
            goto LABEL_25;
          }
          v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v12[1] + 24LL) + 72LL))(
                  *(_QWORD *)(v12[1] + 24LL),
                  v12[3],
                  *(_QWORD *)(v15 + 8));
          v12[2] = v31;
          if ( !v31 )
          {
            v14 = -1073741801;
LABEL_25:
            _InterlockedIncrement(&dword_1C006E834);
            v32 = PsGetCurrentProcess(v19, v29, v17, v30);
            WdLogSingleEntry3(6LL, v15, v32, v14);
            PsGetCurrentProcess(v34, v33, v35, v36);
            DxgkLogInternalTriageEvent(v37, 262145LL);
LABEL_15:
            VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v19, &v47);
            return (unsigned int)v14;
          }
        }
        else
        {
          ExReleasePushLockExclusiveEx(v15 + 496, 0LL);
          KeLeaveCriticalRegion();
          v14 = VIDMM_GLOBAL::LockInAperture(this, v8, a6, v44);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v15 + 496, 0LL);
          if ( v14 < 0 )
            goto LABEL_15;
        }
LABEL_4:
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 360));
        ++*((_DWORD *)v12 + 19);
        v20 = *(_DWORD *)(v15 + 72);
        *(_BYTE *)(v15 + 80) = 1;
        if ( (v20 & 0x4000) != 0 )
        {
          v21 = *(void **)(v15 + 560);
        }
        else
        {
          if ( (v20 & 0x2000) != 0 )
          {
            v14 = LockParavirtualizedAllocationOnHost(v8, v7);
LABEL_9:
            if ( v14 >= 0 )
            {
              *(_BYTE *)(v15 + 82) = 1;
              if ( (byte_1C006E941 & 1) != 0 )
              {
                v39 = *(unsigned int *)a2;
                LODWORD(v42) = v39 == 4;
                LODWORD(v41) = *(_DWORD *)a2;
                LODWORD(v40) = a5;
                McTemplateK0pqqt_EtwWriteTransfer(v39, &EventLock2, v17, v8, v40, v41, v42);
              }
              if ( *(_DWORD *)a2 == 4 )
                v13 = 1;
              VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7184), a5, 0, v13);
            }
            goto LABEL_15;
          }
          v19 = **(unsigned int **)(v15 + 528);
          if ( (v19 & 8) != 0 )
            v21 = *(void **)(v15 + 384);
          else
            v21 = (void *)v12[2];
        }
        *v7 = v21;
        goto LABEL_9;
      }
      v38 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, v8);
    }
    else
    {
      if ( (v12[4] & 1) != 0 )
        goto LABEL_4;
      v38 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              v8,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(**(_QWORD **)v8 + 120LL) + 504LL));
    }
    v14 = v38;
    if ( v38 < 0 )
    {
      WdLogSingleEntry2(3LL, v8, v38);
      *(_DWORD *)a2 = 4;
      *((_BYTE *)a2 + 4) = 1;
      goto LABEL_15;
    }
    goto LABEL_4;
  }
  WdLogSingleEntry0(3LL);
  return 3221226166LL;
}
