/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A22BC (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00D5E64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D8E24 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C009FB10 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A2EA0 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchSignalPagingFences @ 0x1C00AB498 (VidSchSignalPagingFences.c)
 *     VidSchiResumeFlipQueues @ 0x1C00ABA3C (VidSchiResumeFlipQueues.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00D9E78 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C00F5BEC (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  bool v6; // r15
  unsigned int v8; // edi
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rcx
  _QWORD **v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rbp
  _QWORD *v22; // rcx
  unsigned int v23; // ecx
  bool *v24; // [rsp+20h] [rbp-38h]
  bool v25; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v25 = 0;
  v8 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  if ( a2 == -1 )
  {
    if ( *((_DWORD *)this + 1754) )
    {
      do
      {
        v12 = 0;
        v13 = 1584LL * v8;
        if ( *(_DWORD *)(*((_QWORD *)this + 5028) + v13 + 24) )
        {
          do
          {
            v14 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v12 + *(_DWORD *)(*((_QWORD *)this + 5028) + v13 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 152LL))(v14);
            ++v12;
          }
          while ( v12 < *(_DWORD *)(*((_QWORD *)this + 5028) + v13 + 24) );
        }
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v8++);
      }
      while ( v8 < *((_DWORD *)this + 1754) );
    }
  }
  else
  {
    v16 = 1584LL * a2;
    v17 = v16 + *((_QWORD *)this + 5028);
    if ( *(_DWORD *)(v17 + 24) )
    {
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v8 + *(_DWORD *)(v17 + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 152LL))(v18);
        ++v8;
        v17 = v16 + *((_QWORD *)this + 5028);
      }
      while ( v8 < *(_DWORD *)(v17 + 24) );
    }
    if ( a4 )
    {
      VIDMM_GLOBAL::SignalMonitoredFence(this, a2, a6, a5, &v25);
      v6 = v25;
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, a2);
  }
  v15 = (_QWORD **)((char *)this + 44680);
  if ( *v15 != v15 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    v19 = *v15;
    while ( v19 != v15 )
    {
      v20 = (_QWORD *)*v19;
      v21 = v19 - 38;
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (v22 = (_QWORD *)v19[1], (_QWORD *)*v22 != v19) )
        __fastfail(3u);
      *v22 = v20;
      v20[1] = v22;
      *v19 = 0LL;
      v19 = v20;
      if ( (*((_DWORD *)v21 + 15) & 7) != 0 )
        WdLogSingleEntry5(0LL, 270LL, 63LL, v21, v21[4], 0LL);
      VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v21);
    }
  }
  if ( *((_BYTE *)this + 44696) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), 0xFFFFFFFFLL);
    *((_BYTE *)this + 44696) = 0;
  }
  if ( !a4 || v6 )
  {
    if ( a3 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
      KeSetEvent(a3, 0, 0);
    }
  }
  else
  {
    LODWORD(v24) = a2;
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 632LL), &a6, &a5);
    if ( a2 == -1 )
    {
      v23 = *((_DWORD *)this + 1754);
      if ( v23 > 1 )
        VidSchWaitForPagingFence(
          *(_QWORD *)(*((_QWORD *)this + 2) + 632LL),
          a6,
          a5,
          (unsigned int)((1 << v23) - 1),
          v24);
    }
  }
  *((_QWORD *)this + 879) = 0LL;
  *((_QWORD *)this + 880) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
