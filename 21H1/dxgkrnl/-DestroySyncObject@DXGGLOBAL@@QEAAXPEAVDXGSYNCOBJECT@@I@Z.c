/*
 * XREFs of ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0
 * Callers:
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0046E68 (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0118FCC (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C011B820 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0122010 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C01229C0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C01247E0 (DxgkShareObjectsInternal.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01586B0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C015E058 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0211650 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0212D6C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0234A68 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0236A1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A980 (-VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024ABC0 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateProtectedSession @ 0x1C0284230 (DxgkCreateProtectedSession.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02941AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A5E28 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1C02A5EBC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C010E240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C01162AC (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0243B58 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C028C16C (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C028C3F4 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
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
  __int64 v43; // rdx
  struct DXGTHREAD *Current; // rax
  struct DXGTHREAD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  struct DXGSYNCOBJECT *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v57; // ebx
  struct DXGGLOBAL *v58; // rax
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  PERESOURCE *v63; // [rsp+50h] [rbp-20h] BYREF
  char v64; // [rsp+58h] [rbp-18h]
  _BYTE v65[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v66; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v67; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( !a2 )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v46 + 24) = 2577LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( ExIsResourceAcquiredExclusiveLite(this[51]) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v47 + 24) = 2578LL;
    WdLogEvent5_WdAssertion(v47);
  }
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v63 = (PERESOURCE *)Global;
  v64 = 0;
  if ( !Global )
  {
    v48 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v48 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v48);
    Global = (struct DXGGLOBAL *)v63;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v49 + 24) = 2410LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v64 )
  {
    v50 = WdLogNewEntry5_WdCriticalError(v12, v11);
    *(_QWORD *)(v50 + 40) = &v63;
    *(_QWORD *)(v50 + 24) = 275LL;
    *(_QWORD *)(v50 + 32) = 4LL;
    *(_OWORD *)(v50 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v50);
  }
  v13 = v63;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v13[51], 1u);
  v16 = *((_DWORD *)a2 + 49) >> 2;
  v64 = 1;
  if ( (v16 & 1) != 0 && (unsigned int)(*((_DWORD *)a2 + 48) - 5) > 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v65, (struct DXGSYNCOBJECT *)((char *)a2 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
    v15 = (char *)a2 + 296;
    v51 = (struct DXGSYNCOBJECT *)*((_QWORD *)a2 + 37);
    v14 = (__int64)v51 - 40;
    if ( v51 == (struct DXGSYNCOBJECT *)((char *)a2 + 296) )
      v14 = 0LL;
    if ( v14 )
    {
      v67 = *(_QWORD *)(v14 + 32);
      if ( v67 )
      {
        v52 = *(_QWORD *)(v14 + 16);
        v66 = -1LL;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v52 + 616) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v67,
          0,
          &v66);
      }
    }
    if ( v65[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65, v14);
  }
  v17 = DXGGLOBAL::GetGlobal((__int64)v15, v14);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v17 + 51)) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v53 + 24) = 2314LL;
    WdLogEvent5_WdAssertion(v53);
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
        v57 = *(_DWORD *)(v26 + 424);
        v58 = DXGGLOBAL::GetGlobal(v55, v54);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v58 + 183), v57, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(a2, v3);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v26 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v59 = *(_DWORD *)(v26 + 232);
        if ( v59 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, v59);
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
    v60 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v60 + 24) = 2340LL;
    WdLogEvent5_WdAssertion(v60);
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
  v29[3] = a2;
  v29[4] = v3;
  v32 = PsGetCurrentProcess(v31, v30);
  v33 = PsGetProcessDxgProcess(v32);
  v36 = v33;
  if ( v33 && (*(_BYTE *)(v33 + 347) & 0x10) == 0
    || (v45 = DXGTHREAD::GetCurrent(v35, v34)) == 0LL
    || (v37 = *((_QWORD *)v45 + 1)) == 0 )
  {
    v37 = v36;
  }
  v29[5] = v37;
  WdLogEvent5_WdEvent(v29);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 6, 0xFFFFFFFF) == 1 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 44));
    v39 = *(struct DXGSYNCOBJECT **)a2;
    if ( *(struct DXGSYNCOBJECT **)(*(_QWORD *)a2 + 8LL) != a2
      || (v40 = (struct DXGSYNCOBJECT **)*((_QWORD *)a2 + 1), *v40 != a2) )
    {
      __fastfail(3u);
    }
    *v40 = v39;
    *((_QWORD *)v39 + 1) = v40;
    if ( this[46] != (PERESOURCE)KeGetCurrentThread() )
    {
      v61 = WdLogNewEntry5_WdCriticalError(v39, v38);
      *(_QWORD *)(v61 + 24) = 275LL;
      *(_QWORD *)(v61 + 32) = 4LL;
      *(_QWORD *)(v61 + 40) = this + 44;
      *(_OWORD *)(v61 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    v41 = *((_DWORD *)this + 94);
    if ( v41 <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v62 + 24) = 703LL;
      WdLogEvent5_WdAssertion(v62);
      v41 = *((_DWORD *)this + 94);
    }
    v42 = v41 - 1;
    *((_DWORD *)this + 94) = v42;
    if ( !v42 )
    {
      this[46] = 0LL;
      ExReleasePushLockExclusiveEx(this + 44, 0LL);
    }
    KeLeaveCriticalRegion();
    DXGSYNCOBJECT::Destroy(a2, v43);
  }
  if ( v64 )
  {
    v64 = 0;
    ExReleaseResourceLite(v63[51]);
    KeLeaveCriticalRegion();
  }
}
