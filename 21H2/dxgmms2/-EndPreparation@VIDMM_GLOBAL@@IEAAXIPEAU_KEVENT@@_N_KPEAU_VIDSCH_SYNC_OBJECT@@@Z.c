/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0063FD0
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F0 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0061EF0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0065C20 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006BD00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008EC90 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00AEC0C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2430 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C006118C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00668AC (VidSchSignalPagingFences.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0066934 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0084D48 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00B3D54 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00D0490 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00D31D0 (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        PRKEVENT Event,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  bool v6; // r12
  unsigned int v8; // ebx
  char v9; // r15
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD **v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  bool v27; // [rsp+78h] [rbp+10h] BYREF
  char v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v6 = 0;
  v27 = 0;
  v8 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v9 = a4;
  if ( a2 == -1 )
  {
    if ( *((_DWORD *)this + 1750) )
    {
      do
      {
        v12 = 0;
        v13 = 1584LL * v8;
        if ( *(_DWORD *)(*((_QWORD *)this + 5027) + v13 + 24) )
        {
          do
          {
            v14 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v12 + *(_DWORD *)(*((_QWORD *)this + 5027) + v13 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 160LL))(v14);
            ++v12;
          }
          while ( v12 < *(_DWORD *)(*((_QWORD *)this + 5027) + v13 + 24) );
        }
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v8++);
      }
      while ( v8 < *((_DWORD *)this + 1750) );
    }
  }
  else
  {
    v16 = 1584LL * a2;
    v17 = v16 + *((_QWORD *)this + 5027);
    if ( *(_DWORD *)(v17 + 24) )
    {
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v8 + *(_DWORD *)(v17 + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 160LL))(v18);
        ++v8;
        v17 = v16 + *((_QWORD *)this + 5027);
      }
      while ( v8 < *(_DWORD *)(v17 + 24) );
    }
    if ( v9 )
    {
      VIDMM_GLOBAL::SignalMonitoredFence(this, a2, a6, a5, &v27);
      v6 = v27;
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, a2);
  }
  v15 = (_QWORD **)((char *)this + 44672);
  if ( *v15 != v15 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    v20 = *v15;
    if ( *v15 != v15 )
    {
      do
      {
        v21 = (_QWORD *)*v20;
        v22 = v20 - 37;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v23 = (_QWORD *)v20[1], (_QWORD *)*v23 != v20) )
          __fastfail(3u);
        *v23 = v21;
        v21[1] = v23;
        *v20 = 0LL;
        v20 = v21;
        if ( (*((_DWORD *)v22 + 13) & 7) != 0 )
        {
          v24 = v22[4];
          v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v19);
          v25[7] = 0LL;
          v25[3] = 270LL;
          v25[4] = 63LL;
          v25[5] = v22;
          v25[6] = v24;
          WdLogEvent5_WdCriticalError(v25);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v22);
      }
      while ( v20 != v15 );
      v9 = v28;
    }
  }
  if ( *((_BYTE *)this + 44688) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), 0xFFFFFFFFLL);
    *((_BYTE *)this + 44688) = 0;
  }
  if ( !v9 || v6 )
  {
    if ( Event )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
      KeSetEvent(Event, 0, 0);
    }
  }
  else
  {
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), &a6, &a5);
    if ( a2 == -1 )
    {
      v26 = *((_DWORD *)this + 1750);
      if ( v26 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL), a6, a5, (unsigned int)((1 << v26) - 1));
    }
  }
  *((_QWORD *)this + 878) = 0LL;
  *((_QWORD *)this + 879) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
