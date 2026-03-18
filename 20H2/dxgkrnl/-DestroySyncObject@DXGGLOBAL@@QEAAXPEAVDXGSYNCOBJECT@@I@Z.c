/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0047D78 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8B30 (-VmBusSignalFenceCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0111A1C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0112DF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0117DC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0118770 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011A590 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C0167090 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C016C908 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02146F0 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0215E0C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0237B44 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0239AFC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024DBC0 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024DE00 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C02876F0 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02976BC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A9338 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A93CC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0108DF0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C011221C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0246D88 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C028F62C (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C028F8B8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

void __fastcall DXGGLOBAL::DestroySyncObject(PERESOURCE *this, struct DXGSYNCOBJECT *a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  PERESOURCE *v13; // rbx
  __int64 v14; // rdx
  char *v15; // rcx
  int v16; // eax
  struct DXGGLOBAL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdx
  struct DXGSYNCOBJECT *v39; // rcx
  struct DXGSYNCOBJECT **v40; // rax
  int v41; // eax
  int v42; // eax
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGSYNCOBJECT *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v56; // ebx
  struct DXGGLOBAL *v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  PERESOURCE *v62; // [rsp+50h] [rbp-20h] BYREF
  char v63; // [rsp+58h] [rbp-18h]
  _BYTE v64[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v65; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v66; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v45 + 24) = 2716LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[65]) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v46 + 24) = 2717LL;
    WdLogEvent5_WdAssertion(v46);
  }
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v62 = (PERESOURCE *)Global;
  v63 = 0;
  if ( !Global )
  {
    v47 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v47 + 24) = 2423LL;
    WdLogEvent5_WdAssertion(v47);
    Global = (struct DXGGLOBAL *)v62;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v48 + 24) = 2428LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( v63 )
  {
    v49 = WdLogNewEntry5_WdCriticalError(v12, v11);
    *(_QWORD *)(v49 + 40) = &v62;
    *(_QWORD *)(v49 + 24) = 275LL;
    *(_QWORD *)(v49 + 32) = 4LL;
    *(_OWORD *)(v49 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  v13 = v62;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v13[65], 1u);
  v16 = *((_DWORD *)a2 + 49) >> 2;
  v63 = 1;
  if ( (v16 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 48) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v64, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v64);
    v15 = (char *)a2 + 296;
    v50 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v14 = (__int64)v50 - 48;
    if ( v50 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v14 = 0LL;
    if ( v14 )
    {
      v66 = *(_QWORD *)(v14 + 32);
      if ( v66 )
      {
        v51 = *(_QWORD *)(v14 + 16);
        v65 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v51 + 616) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v66,
          0,
          &v65);
      }
    }
    if ( v64[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v64, v14);
  }
  v17 = DXGGLOBAL::GetGlobal((__int64)v15, v14);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v17 + 65)) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v52 + 24) = 2453LL;
    WdLogEvent5_WdAssertion(v52);
  }
  CurrentProcess = PsGetCurrentProcess(v19, v18);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v25 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v23, v22)) == 0LL
    || (v26 = *((_QWORD *)Current + 1)) == 0 )
  {
    v26 = v25;
  }
  if ( (_DWORD)v3 )
  {
    if ( *((_BYTE *)a2 + 277) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(a2, v3, v24);
      if ( HostHandle )
      {
        v56 = *(_DWORD *)(v26 + 424);
        v57 = DXGGLOBAL::GetGlobal(v54, v53);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v57 + 197), v56, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(a2, v3);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v26 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v58 = *(_DWORD *)(v26 + 232);
        if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, v58);
      }
      ExAcquirePushLockExclusiveEx(v26 + 208, 0LL);
    }
    *(_QWORD *)(v26 + 216) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v26 + 240), (unsigned int)v3);
    *(_QWORD *)(v26 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)a2 + 6) )
  {
    v59 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v59 + 24) = 2479LL;
    WdLogEvent5_WdAssertion(v59);
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
  v29[3] = a2;
  v29[4] = v3;
  v32 = PsGetCurrentProcess(v31, v30);
  v33 = PsGetProcessDxgProcess(v32);
  v36 = v33;
  if ( v33 && (*(_BYTE *)(v33 + 347) & 0x10) == 0
    || (v44 = DXGTHREAD::GetCurrent(v35, v34)) == 0LL
    || (v37 = *((_QWORD *)v44 + 1)) == 0 )
  {
    v37 = v36;
  }
  v29[5] = v37;
  WdLogEvent5_WdEvent(v29);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 58));
    v39 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v40 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v40 != a2) )
    {
      __fastfail(3u);
    }
    *v40 = v39;
    *((_QWORD *)v39 + 1) = v40;
    if ( this[60] != (PERESOURCE)KeGetCurrentThread() )
    {
      v60 = WdLogNewEntry5_WdCriticalError(v39, v38);
      *(_QWORD *)(v60 + 24) = 275LL;
      *(_QWORD *)(v60 + 32) = 4LL;
      *(_QWORD *)(v60 + 40) = this + 58;
      *(_OWORD *)(v60 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    v41 = *((_DWORD *)this + 122);
    if ( v41 <= 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v61 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v61);
      v41 = *((_DWORD *)this + 122);
    }
    v42 = v41 - 1;
    *((_DWORD *)this + 122) = v42;
    if ( !v42 )
    {
      this[60] = 0LL;
      ExReleasePushLockExclusiveEx(this + 58, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2);
  }
  if ( v63 )
  {
    v63 = 0;
    ExReleaseResourceLite(v62[65]);
    KeLeaveCriticalRegion();
  }
}
