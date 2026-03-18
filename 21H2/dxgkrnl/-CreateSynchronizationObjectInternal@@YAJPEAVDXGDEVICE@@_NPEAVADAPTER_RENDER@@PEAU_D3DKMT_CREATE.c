/*
 * XREFs of ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01996EC
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1C0199960 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1C0344A64 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C0349CC4 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C03627DC (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C03BC8A4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0199294 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C03411C8 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C03650E0 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAUDXGKVMB_COMMAND_CREATESYNCOBJECT_RETURN@@@Z @ 0x1C0375D8C (-VmBusSendCreateSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATESYNCHRONIZATIONO.c)
 */

__int64 __fastcall CreateSynchronizationObjectInternal(
        __int64 a1,
        bool a2,
        struct ADAPTER_RENDER *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        DXGSYNCOBJECT **a7,
        struct DXGDEVICESYNCOBJECT **a8,
        struct DXGADAPTERSYNCOBJECT **a9)
{
  unsigned int v9; // edi
  __int64 v13; // rcx
  DXGSYNCOBJECT **v14; // r12
  int v15; // edx
  int v16; // r8d
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v18; // rbx
  struct DXGGLOBAL *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  DXGSYNCOBJECT *v26; // rdi
  __int64 v27; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v30; // r15
  DXGPROCESS *v31; // rcx
  struct ADAPTER_RENDER *v32; // r15
  int v34; // ecx
  struct DXGTHREAD *Current; // rax
  unsigned int v36; // eax
  unsigned int HostProcess; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  int SyncObject; // eax
  struct DXGDEVICESYNCOBJECT *v41; // r8
  __int64 v42; // rax
  __int64 *v43; // rbx
  int v44; // eax
  __int64 v45; // rax
  struct DXGGLOBAL *v46; // [rsp+68h] [rbp-29h]
  char v47; // [rsp+70h] [rbp-21h]
  unsigned int v48[4]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v49[8]; // [rsp+88h] [rbp-9h]
  DXGSYNCOBJECT *v50; // [rsp+D8h] [rbp+47h] BYREF
  bool v51; // [rsp+E0h] [rbp+4Fh]
  struct ADAPTER_RENDER *v52; // [rsp+E8h] [rbp+57h]

  v52 = a3;
  v51 = a2;
  v9 = 0;
  if ( a1 )
  {
    v13 = *((_QWORD *)a3 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)) )
    {
      WdLogSingleEntry1(1LL, 36LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice == NULL || pAdapter->IsCoreResourceSharedOwner()",
        36LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v14 = a7;
  LODWORD(a7) = 0;
  v50 = 0LL;
  *v14 = 0LL;
  v15 = *(_DWORD *)(a4 + 12);
  if ( (v15 & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a4 + 8) == 4 )
    {
      if ( (v15 & 5) == 0 )
        goto LABEL_6;
      WdLogSingleEntry1(2LL, 53LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalByKmd cannot be used with CrossAdapter or Shared",
        53LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 48LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SignalByKmd can only be set for D3DDDI_CPU_NOTIFICATION objects",
        48LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return 3221225485LL;
  }
LABEL_6:
  v16 = *(_DWORD *)(a4 + 8);
  if ( v16 == 5 )
  {
    v9 = *(_DWORD *)(a4 + 40);
  }
  else
  {
    if ( v16 != 6 )
      goto LABEL_8;
    v9 = *(_DWORD *)(a4 + 48);
  }
  v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 288LL);
  if ( v34 == 1 )
  {
    v9 = 1;
  }
  else if ( v9 >= 1 << v34 )
  {
    v9 = (1 << v34) - 1;
  }
  if ( v16 == 6 )
    *(_DWORD *)(a4 + 12) = v15 | 0x17;
LABEL_8:
  Global = DXGGLOBAL_GetGlobal();
  v46 = Global;
  v47 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = v46;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v18 + 79), 1u);
  v47 = 1;
  v19 = DXGGLOBAL_GetGlobal();
  v20 = a5;
  LODWORD(v25) = DXGGLOBAL::CreateSyncObject(
                   (__int64)v19,
                   a3,
                   (struct DXGDEVICE *)a1,
                   v9,
                   a4 + 8,
                   a5,
                   v51,
                   0LL,
                   (__int64 *)&v50,
                   a8,
                   (unsigned int *)((unsigned __int64)&a7 & -(__int64)(a1 != 0)),
                   a9);
  if ( v47 )
  {
    v47 = 0;
    ExReleaseResourceLite(*((PERESOURCE *)v46 + 79));
    KeLeaveCriticalRegion();
  }
  if ( (int)v25 < 0 )
    return (unsigned int)v25;
  v26 = v50;
  *(_DWORD *)(a4 + 88) = (_DWORD)a7;
  *(_DWORD *)(a4 + 80) = *((_DWORD *)v26 + 20);
  *v14 = v26;
  if ( (*(_DWORD *)(a4 + 12) & 0x100) != 0 )
    *((_DWORD *)v26 + 51) |= 0x30u;
  v27 = *((_QWORD *)v26 + 11);
  CurrentProcess = PsGetCurrentProcess(v22, v21, v23, v24);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v30 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v31 = (DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
  {
    v31 = v30;
  }
  v32 = v52;
  if ( !*(_BYTE *)(*((_QWORD *)v52 + 2) + 209LL) )
    return (unsigned int)v25;
  v36 = a6;
  if ( a6 )
  {
    *((_DWORD *)v26 + 71) |= 8u;
    goto LABEL_64;
  }
  if ( !a1 )
  {
    HostProcess = 0;
    goto LABEL_44;
  }
  HostProcess = DXGPROCESS::GetHostProcess(v31);
  if ( HostProcess )
  {
LABEL_44:
    if ( v27 )
      *(_QWORD *)(a4 + 16) = v27;
    v38 = *((_QWORD *)v32 + 2) + 4344LL;
    *(_OWORD *)v48 = 0LL;
    *(_OWORD *)v49 = 0LL;
    if ( a1 )
      v39 = *(unsigned int *)(a1 + 440);
    else
      v39 = 0LL;
    SyncObject = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(v38, HostProcess, v39, a4, v20, v48);
    v25 = SyncObject;
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry2(2LL, SyncObject, 181LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateSyncObject failed, returning 0x%I64x",
        v25,
        181LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v25;
    }
    if ( (unsigned int)(*(_DWORD *)(a4 + 8) - 5) <= 1 )
    {
      v41 = *a8;
      *((_DWORD *)v41 + 11) = v48[0];
      v42 = *(_QWORD *)&v48[2];
      *((_QWORD *)v41 + 6) = *(_QWORD *)&v48[2];
      if ( *(_DWORD *)(a4 + 8) == 5 )
        *(_QWORD *)(a4 + 32) = v42;
      else
        *(_QWORD *)(a4 + 40) = v42;
      v43 = (__int64 *)((char *)v41 + 56);
      v44 = MapGuestFenceCpuVaToHost(v49[0], (void **)v41 + 7, (unsigned __int64 *)v41 + 10, (unsigned int *)v41 + 22);
      v25 = v44;
      if ( v44 >= 0 )
      {
        v45 = *v43;
        if ( *(_DWORD *)(a4 + 8) == 5 )
          *(_QWORD *)(a4 + 24) = v45;
        else
          *(_QWORD *)(a4 + 32) = v45;
      }
      else
      {
        WdLogSingleEntry2(2LL, v44, 206LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v25,
          206LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( v48[0] )
    {
      LODWORD(v25) = DXGSYNCOBJECT::SetHostHandle(v26, (unsigned int)a7, v48[0]);
    }
    if ( (*((_BYTE *)v26 + 204) & 1) == 0 )
      return (unsigned int)v25;
    v36 = v48[1];
    *((_DWORD *)v26 + 71) &= ~8u;
LABEL_64:
    *((_DWORD *)v26 + 21) = v36;
    return (unsigned int)v25;
  }
  WdLogSingleEntry1(2LL, -1073741823LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get host adapter process, returning 0x%I64x",
    -1073741823LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
