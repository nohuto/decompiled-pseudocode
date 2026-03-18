/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01117A8
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C01109F0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0234A68 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02A5880 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C02B7BC0 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02F954C (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01120E0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C02366E4 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0243458 (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C028D59C (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
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
  __int64 v12; // r15
  __int64 v13; // rdx
  _DWORD *v14; // r12
  unsigned int v15; // esi
  __int64 v16; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *v25; // rax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r14
  DXGSYNCOBJECT *v30; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // eax
  unsigned int HostProcess; // r13d
  __int64 v38; // rax
  void *v39; // rcx
  NTSTATUS v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  PVOID v45; // rax
  __int64 v46; // r8
  int SyncObject; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 *v53; // rbx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  PVOID Object; // [rsp+60h] [rbp-39h] BYREF
  PERESOURCE *v60; // [rsp+68h] [rbp-31h] BYREF
  char v61; // [rsp+70h] [rbp-29h]
  unsigned int v62[4]; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v63[9]; // [rsp+88h] [rbp-11h]
  unsigned int v64; // [rsp+E0h] [rbp+47h] BYREF
  __int64 v65; // [rsp+F0h] [rbp+57h]
  DXGSYNCOBJECT *v66; // [rsp+F8h] [rbp+5Fh] BYREF

  v65 = a3;
  v12 = a1;
  if ( a1 )
  {
    a1 = *(_QWORD *)(a3 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
    {
      v32 = WdLogNewEntry5_WdAssertion(a1, v13);
      *(_QWORD *)(v32 + 24) = 36LL;
      WdLogEvent5_WdAssertion(v32);
    }
  }
  v14 = (_DWORD *)(a4 + 8);
  v64 = 0;
  v15 = 0;
  v66 = 0LL;
  *a7 = 0LL;
  v16 = *(unsigned int *)(a4 + 8);
  if ( (_DWORD)v16 == 5 )
  {
    v15 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( (_DWORD)v16 != 6 )
      goto LABEL_7;
    v15 = *(_DWORD *)(a4 + 48);
  }
  a1 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) + 280LL);
  if ( (_DWORD)a1 == 1 )
    v15 = 1;
  if ( v15 >= 1 << a1 )
    v15 = (1 << a1) - 1;
  if ( (_DWORD)v16 == 6 )
    *(_DWORD *)(a4 + 12) |= 0x17u;
LABEL_7:
  Global = DXGGLOBAL::GetGlobal(a1, v16);
  v60 = (PERESOURCE *)Global;
  v61 = 0;
  if ( !Global )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v33 + 24) = 2405LL;
    WdLogEvent5_WdAssertion(v33);
    Global = (struct DXGGLOBAL *)v60;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 51)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v34 + 24) = 2410LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v61 )
  {
    v35 = WdLogNewEntry5_WdCriticalError(v21, v20);
    *(_QWORD *)(v35 + 40) = &v60;
    *(_QWORD *)(v35 + 24) = 275LL;
    *(_QWORD *)(v35 + 32) = 4LL;
    *(_OWORD *)(v35 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v35);
  }
  v22 = v60;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v22[51], 1u);
  v61 = 1;
  v25 = DXGGLOBAL::GetGlobal(v24, v23);
  v26 = (int)a5;
  LODWORD(v29) = DXGGLOBAL::CreateSyncObject(
                   v25,
                   a3,
                   v12,
                   v15,
                   a4 + 8,
                   (_DWORD)a5,
                   a2,
                   0LL,
                   &v66,
                   a8,
                   (unsigned __int64)&v64 & -(__int64)(v12 != 0),
                   a9);
  if ( v61 )
  {
    v61 = 0;
    ExReleaseResourceLite(v60[51]);
    KeLeaveCriticalRegion();
  }
  if ( (int)v29 < 0 )
    return (unsigned int)v29;
  v30 = v66;
  *(_DWORD *)(a4 + 88) = v64;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v30 + 18);
  *a7 = v30;
  if ( !*(_BYTE *)(*(_QWORD *)(a3 + 16) + 209LL) )
    return (unsigned int)v29;
  v36 = a6;
  if ( a6 )
  {
    *((_BYTE *)v30 + 278) = 1;
LABEL_56:
    *((_DWORD *)v30 + 19) = v36;
    return (unsigned int)v29;
  }
  if ( v12 )
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v12 + 40));
  else
    HostProcess = 0;
  if ( HostProcess || !v12 )
  {
    if ( *v14 == 4 )
    {
      v39 = *(void **)(a4 + 16);
      Object = 0LL;
      v40 = ObReferenceObjectByHandle(v39, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v29 = v40;
      if ( v40 < 0 )
      {
        v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v44 + 24) = v29;
        WdLogEvent5_WdWarning(v44);
        return (unsigned int)v29;
      }
      v45 = Object;
      *((_QWORD *)v30 + 10) = Object;
      *(_QWORD *)(a4 + 16) = v45;
    }
    *(_OWORD *)v62 = 0LL;
    *(_OWORD *)v63 = 0LL;
    if ( v12 )
      v46 = *(unsigned int *)(v12 + 440);
    else
      v46 = 0LL;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
                   *(_QWORD *)(v65 + 16) + 4208LL,
                   HostProcess,
                   v46,
                   a4,
                   v26,
                   v62);
    v29 = SyncObject;
    if ( SyncObject >= 0 )
    {
      if ( (unsigned int)(*v14 - 5) <= 1 )
      {
        v51 = *a8;
        *(_DWORD *)(v51 + 44) = v62[0];
        v52 = *(_QWORD *)&v62[2];
        *(_QWORD *)(v51 + 48) = *(_QWORD *)&v62[2];
        if ( *v14 == 5 )
          *(_QWORD *)(a4 + 32) = v52;
        else
          *(_QWORD *)(a4 + 40) = v52;
        v53 = (__int64 *)(v51 + 56);
        v54 = MapGuestFenceCpuVaToHost(
                v63[0],
                (void **)(v51 + 56),
                (unsigned __int64 *)(v51 + 80),
                (unsigned int *)(v51 + 88));
        v29 = v54;
        if ( v54 >= 0 )
        {
          v58 = *v53;
          if ( *v14 == 5 )
            *(_QWORD *)(a4 + 24) = v58;
          else
            *(_QWORD *)(a4 + 32) = v58;
        }
        else
        {
          v57 = WdLogNewEntry5_WdError(v56, v55);
          *(_QWORD *)(v57 + 24) = v29;
          *(_QWORD *)(v57 + 32) = 196LL;
          WdLogEvent5_WdError(v57);
        }
      }
      else if ( v62[0] )
      {
        LODWORD(v29) = DXGSYNCOBJECT::SetHostHandle(v30, v64, v62[0]);
      }
      if ( (*((_BYTE *)v30 + 196) & 1) == 0 )
        return (unsigned int)v29;
      v36 = v62[1];
      *((_BYTE *)v30 + 278) = 0;
      goto LABEL_56;
    }
    v50 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v50 + 24) = v29;
    *(_QWORD *)(v50 + 32) = 171LL;
    WdLogEvent5_WdError(v50);
    return (unsigned int)v29;
  }
  v38 = WdLogNewEntry5_WdError(v28, v27);
  *(_QWORD *)(v38 + 24) = -1073741823LL;
  WdLogEvent5_WdError(v38);
  return 3221225473LL;
}
