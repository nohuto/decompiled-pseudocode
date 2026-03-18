/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010D508
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010C750 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0184458 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0238CF4 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A9D70 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02BC100 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02FDA5C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ @ 0x1C002590C (-IsWsl2Guest@DXGVIRTUALMACHINE@@QEBAEXZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010DA98 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C023A974 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0247728 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0291A40 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        POBJECT_HANDLE_INFORMATION a5,
        unsigned int a6,
        DXGSYNCOBJECT **a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int IsEnabled; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v24; // r12
  int v25; // r8d
  unsigned int v26; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  PERESOURCE *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct DXGGLOBAL *v38; // rax
  int v39; // ebx
  __int64 v40; // r14
  DXGSYNCOBJECT *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int HostProcess; // r13d
  __int64 v46; // rax
  PVOID v47; // rax
  void *v48; // rcx
  NTSTATUS v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  int SyncObject; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 *v61; // rbx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  DXGSYNCOBJECT *v67; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h] BYREF
  PERESOURCE *v69; // [rsp+70h] [rbp-29h] BYREF
  char v70; // [rsp+78h] [rbp-21h]
  unsigned int v71[4]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v72[8]; // [rsp+90h] [rbp-9h]
  unsigned int v73; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v74; // [rsp+F0h] [rbp+57h]

  v74 = a3;
  if ( a1 )
  {
    v13 = *(_QWORD *)(a3 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v16 + 24) = 36LL;
      WdLogEvent5_WdAssertion(v16);
    }
  }
  *a7 = 0LL;
  IsEnabled = Feature_WSL_Device_GPU__private_IsEnabled();
  v18 = *(unsigned int *)(a4 + 12);
  v19 = IsEnabled != 0;
  if ( IsEnabled )
  {
    if ( (v18 & 0x100) != 0 )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( (*((_BYTE *)Current + 347) & 0x20) == 0
        || !DXGVIRTUALMACHINE::IsWsl2Guest(*(DXGVIRTUALMACHINE **)(*((_QWORD *)Current + 62) + 496LL)) )
      {
        v22 = WdLogNewEntry5_WdError(v19, v21);
        *(_QWORD *)(v22 + 24) = 47LL;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(a4 + 8) != 4 )
      {
        v22 = WdLogNewEntry5_WdError(v19, v21);
        *(_QWORD *)(v22 + 24) = 52LL;
LABEL_14:
        WdLogEvent5_WdError(v22);
        return 3221225485LL;
      }
      v18 = *(unsigned int *)(a4 + 12);
      if ( (v18 & 5) != 0 )
      {
        v22 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v22 + 24) = 57LL;
        goto LABEL_14;
      }
    }
  }
  else
  {
    LODWORD(v18) = v18 & 0xFFFFFEFF;
    *(_DWORD *)(a4 + 12) = v18;
  }
  v24 = (_DWORD *)(a4 + 8);
  v73 = 0;
  v25 = *(_DWORD *)(a4 + 8);
  v26 = 0;
  v67 = 0LL;
  if ( v25 == 5 )
  {
    v26 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v25 != 6 )
      goto LABEL_26;
    v26 = *(_DWORD *)(a4 + 48);
  }
  v19 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 280LL);
  if ( (_DWORD)v19 == 1 )
    v26 = 1;
  if ( v26 >= 1 << v19 )
    v26 = (1 << v19) - 1;
  if ( v25 == 6 )
  {
    v18 = (unsigned int)v18 | 0x17;
    *(_DWORD *)(a4 + 12) = v18;
  }
LABEL_26:
  Global = DXGGLOBAL::GetGlobal(v19, v18);
  v69 = (PERESOURCE *)Global;
  v70 = 0;
  if ( !Global )
  {
    v30 = WdLogNewEntry5_WdAssertion(v29, v28);
    *(_QWORD *)(v30 + 24) = 2423LL;
    WdLogEvent5_WdAssertion(v30);
    Global = (struct DXGGLOBAL *)v69;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 65)) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v32, v31);
    *(_QWORD *)(v33 + 24) = 2428LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( v70 )
  {
    v34 = WdLogNewEntry5_WdCriticalError(v32, v31);
    *(_QWORD *)(v34 + 40) = &v69;
    *(_QWORD *)(v34 + 24) = 275LL;
    *(_QWORD *)(v34 + 32) = 4LL;
    *(_OWORD *)(v34 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  v35 = v69;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v35[65], 1u);
  v70 = 1;
  v38 = DXGGLOBAL::GetGlobal(v37, v36);
  v39 = (int)a5;
  LODWORD(v40) = DXGGLOBAL::CreateSyncObject(
                   v38,
                   a3,
                   a1,
                   v26,
                   a4 + 8,
                   (_DWORD)a5,
                   a2,
                   0LL,
                   &v67,
                   a8,
                   (unsigned __int64)&v73 & -(__int64)(a1 != 0),
                   a9);
  if ( v70 )
  {
    v70 = 0;
    ExReleaseResourceLite(v69[65]);
    KeLeaveCriticalRegion();
  }
  if ( (int)v40 < 0 )
    return (unsigned int)v40;
  v41 = v67;
  *(_DWORD *)(a4 + 88) = v73;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v41 + 18);
  *a7 = v41;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() && (*(_DWORD *)(a4 + 12) & 0x100) != 0 )
    *((_DWORD *)v41 + 49) |= 0x30u;
  if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 209LL) )
    return (unsigned int)v40;
  v44 = a6;
  if ( a6 )
  {
    *((_BYTE *)v41 + 278) = 1;
LABEL_72:
    *((_DWORD *)v41 + 19) = v44;
    return (unsigned int)v40;
  }
  if ( a1 )
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(a1 + 40));
  else
    HostProcess = 0;
  if ( !HostProcess && a1 )
  {
    v46 = WdLogNewEntry5_WdError(v43, v42);
    *(_QWORD *)(v46 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v46);
    return 3221225473LL;
  }
  if ( *v24 == 4 )
  {
    if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    {
      v47 = (PVOID)*((_QWORD *)v41 + 10);
    }
    else
    {
      v48 = *(void **)(a4 + 16);
      Object = 0LL;
      v49 = ObReferenceObjectByHandle(v48, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v40 = v49;
      if ( v49 < 0 )
      {
        v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v53 + 24) = v40;
        WdLogEvent5_WdWarning(v53);
        return (unsigned int)v40;
      }
      v47 = Object;
      *((_QWORD *)v41 + 10) = Object;
    }
    *(_QWORD *)(a4 + 16) = v47;
  }
  *(_OWORD *)v71 = 0LL;
  *(_OWORD *)v72 = 0LL;
  if ( a1 )
    v54 = *(unsigned int *)(a1 + 440);
  else
    v54 = 0LL;
  SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                 *(_QWORD *)(v74 + 16) + 4240LL,
                 HostProcess,
                 v54,
                 a4,
                 v39,
                 v71);
  v40 = SyncObject;
  if ( SyncObject >= 0 )
  {
    if ( (unsigned int)(*v24 - 5) <= 1 )
    {
      v59 = *a8;
      *(_DWORD *)(v59 + 44) = v71[0];
      v60 = *(_QWORD *)&v71[2];
      *(_QWORD *)(v59 + 48) = *(_QWORD *)&v71[2];
      if ( *v24 == 5 )
        *(_QWORD *)(a4 + 32) = v60;
      else
        *(_QWORD *)(a4 + 40) = v60;
      v61 = (__int64 *)(v59 + 56);
      v62 = MapGuestFenceCpuVaToHost(
              v72[0],
              (void **)(v59 + 56),
              (unsigned __int64 *)(v59 + 80),
              (unsigned int *)(v59 + 88));
      v40 = v62;
      if ( v62 >= 0 )
      {
        v66 = *v61;
        if ( *v24 == 5 )
          *(_QWORD *)(a4 + 24) = v66;
        else
          *(_QWORD *)(a4 + 32) = v66;
      }
      else
      {
        v65 = WdLogNewEntry5_WdError(v64, v63);
        *(_QWORD *)(v65 + 24) = v40;
        *(_QWORD *)(v65 + 32) = 246LL;
        WdLogEvent5_WdError(v65);
      }
    }
    else if ( v71[0] )
    {
      LODWORD(v40) = DXGSYNCOBJECT::SetHostHandle(v41, v73, v71[0]);
    }
    if ( (*((_BYTE *)v41 + 196) & 1) == 0 )
      return (unsigned int)v40;
    v44 = v71[1];
    *((_BYTE *)v41 + 278) = 0;
    goto LABEL_72;
  }
  v58 = WdLogNewEntry5_WdError(v57, v56);
  *(_QWORD *)(v58 + 24) = v40;
  *(_QWORD *)(v58 + 32) = 221LL;
  WdLogEvent5_WdError(v58);
  return (unsigned int)v40;
}
