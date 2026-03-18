/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0167C20
 * Callers:
 *     DxgkCreateDevice @ 0x1C0167C00 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C01E9ECC (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0369690 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0054060 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  struct DXGPROCESS *Current; // r15
  struct DXGADAPTER *v8; // rdx
  struct _D3DKMT_CREATEDEVICE *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  struct DXGADAPTER **v12; // r9
  struct DXGADAPTER *v13; // r13
  struct DXGADAPTER **v14; // rbx
  struct DXGADAPTER **v15; // rax
  struct DXGADAPTER *v16; // rdx
  __int64 v17; // r13
  struct DXGADAPTER *v18; // rdx
  struct DXGADAPTER *v19; // r8
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER **v27; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER **v29; // rax
  bool v30; // sf
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // rbx
  _DWORD *v37; // rax
  struct _KEVENT *v38; // rbx
  KSPIN_LOCK *Global; // rax
  int v40; // [rsp+28h] [rbp-1E0h]
  int v41; // [rsp+30h] [rbp-1D8h]
  int v42; // [rsp+38h] [rbp-1D0h]
  struct DXGADAPTER *v44; // [rsp+68h] [rbp-1A0h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-198h] BYREF
  int v46; // [rsp+78h] [rbp-190h] BYREF
  __int64 v47; // [rsp+80h] [rbp-188h]
  char v48; // [rsp+88h] [rbp-180h]
  struct DXGADAPTER *v49; // [rsp+90h] [rbp-178h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-170h] BYREF
  struct DXGADAPTER *v51; // [rsp+A0h] [rbp-168h] BYREF
  struct DXGADAPTER *v52; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-158h]
  DXGADAPTER *v54; // [rsp+B8h] [rbp-150h] BYREF
  DXGADAPTER *v55; // [rsp+C8h] [rbp-140h] BYREF
  unsigned __int64 v56; // [rsp+D0h] [rbp-138h] BYREF
  struct DXG_SET_GUEST_DATA **v57; // [rsp+D8h] [rbp-130h]
  struct DXGK_VIRTUAL_GPU_PARAV *v58; // [rsp+E0h] [rbp-128h]
  struct _D3DKMT_CREATEDEVICE *v59; // [rsp+E8h] [rbp-120h]
  struct DXGPROCESS *v60; // [rsp+F0h] [rbp-118h]
  __int64 v61; // [rsp+F8h] [rbp-110h]
  unsigned int v62[4]; // [rsp+100h] [rbp-108h]
  __int128 v63; // [rsp+110h] [rbp-F8h]
  __int128 v64; // [rsp+120h] [rbp-E8h]
  __int128 v65; // [rsp+130h] [rbp-D8h]
  _BYTE v66[144]; // [rsp+140h] [rbp-C8h] BYREF

  v57 = a3;
  v58 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v59 = a1;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2009);
  Current = DXGPROCESS::GetCurrent();
  v60 = Current;
  if ( !Current )
  {
    v21 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  if ( a2 )
    v8 = a2[2];
  else
    v8 = 0LL;
  v51 = v8;
  if ( a4 )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v62 = *(_OWORD *)&v9->hAdapter;
    v63 = *(_OWORD *)&v9->pCommandBuffer;
    v10 = *(_OWORD *)&v9->pAllocationList;
    v11 = *(_OWORD *)&v9->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v62 = *(_OWORD *)&a1->hAdapter;
    v63 = *(_OWORD *)&a1->pCommandBuffer;
    v10 = *(_OWORD *)&a1->pAllocationList;
    v11 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v65 = v11;
  v64 = v10;
  v12 = &v51;
  if ( v8 )
    v12 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v54, v62[0], (struct _KTHREAD **)Current, v12, 1);
  v13 = v51;
  if ( !v51 )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, v62[0], -1073741811LL);
LABEL_55:
    if ( v54 )
      DXGADAPTER::ReleaseReference(v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( !v48 )
      return (unsigned int)v21;
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_59;
  }
  v52 = 0LL;
  while ( 1 )
  {
    v44 = 0LL;
    v49 = 0LL;
    v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v49);
    v15 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v44);
    if ( (int)DxgkpGetPairingAdapters(v13, 0, v15, &v45, v14, &v50, 0) < 0 )
    {
      v27 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v44);
      PairingAdapters = DxgkpGetPairingAdapters(v13, 0, v27, &v45, 0LL, 0LL, 0);
      LODWORD(v53) = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v32 = PairingAdapters;
        v33 = v62[0];
        WdLogSingleEntry2(2LL, v62[0], PairingAdapters);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get bound render adapter from hAdapter 0x%I64x (ntStatus = 0x%I64x).",
          v33,
          v32,
          0LL,
          0LL,
          0LL);
        DXGADAPTER_REFERENCE::Assign(&v49, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
        if ( v54 )
          DXGADAPTER::ReleaseReference(v54);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v46);
        return (unsigned int)v53;
      }
    }
    v16 = v44;
    if ( !v44 || !*((_QWORD *)v44 + 350) )
    {
      WdLogSingleEntry1(1LL, 2056LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RenderAdapterRef && RenderAdapterRef->IsRenderAdapter()",
        2056LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v44;
    }
    if ( v49 && !*((_QWORD *)v49 + 349) )
    {
      WdLogSingleEntry1(1LL, 2057LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!DisplayAdapterRef || DisplayAdapterRef->IsDisplayAdapter()",
        2057LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v44;
    }
    if ( v52 == v16 )
    {
      v21 = -1073741275;
      WdLogSingleEntry3(1LL, v16, v13, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v44,
        (__int64)v13,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign(&v49, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
      goto LABEL_55;
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
    *((_QWORD *)Current + 28) = KeGetCurrentThread();
    v17 = *((_QWORD *)v44 + 350);
    v61 = v17;
    v53 = v17 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17 + 24, 0LL);
    *(_QWORD *)(v17 + 32) = KeGetCurrentThread();
    v18 = v44;
    v19 = v49;
    if ( v44 == v49 )
      goto LABEL_23;
    v55 = 0LL;
    v29 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v55);
    v21 = DxgkpGetPairingAdapters(v51, 0, v29, &v56, 0LL, 0LL, 0);
    if ( v21 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
LABEL_72:
      *(_QWORD *)(v17 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 24, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v49, 0LL);
      DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
      goto LABEL_38;
    }
    v52 = v44;
    if ( v55 == v44 )
      break;
    WdLogSingleEntry1(3LL, v44);
    DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
    v31 = v53;
    *(_QWORD *)(v53 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v31, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v49, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
    v13 = v51;
  }
  DXGADAPTER_REFERENCE::Assign(&v55, 0LL);
  v18 = v44;
  v19 = v49;
LABEL_23:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v18, v19);
  v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    if ( v44 != v49 && (*((_DWORD *)v44 + 50) != 1 || *((_BYTE *)v44 + 2705)) )
      WdLogSingleEntry2(3LL, v44, v20);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    goto LABEL_72;
  }
  if ( !*((_BYTE *)v44 + 209) )
  {
    if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 921) )
    {
      v36 = v44;
      LODWORD(v37) = DXGADAPTER::GetAdapterType(v44);
      if ( (*v37 & 0x10) != 0 )
      {
        v38 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 350)
                                                                                          + 624LL)
                                                                              + 8LL)
                                                                  + 904LL))(*(_QWORD *)(*((_QWORD *)v36 + 350) + 632LL));
        Global = (KSPIN_LOCK *)DXGGLOBAL_GetGlobal();
        DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v38);
        *((_BYTE *)v44 + 206) = 1;
      }
    }
  }
  v52 = 0LL;
  if ( v44 == v49 )
    v22 = (v62[2] >> 1) & 1;
  else
    LOBYTE(v22) = 0;
  LOBYTE(v42) = 0;
  LOBYTE(v41) = (v62[2] & 4) != 0;
  LOBYTE(v40) = v22;
  v21 = ADAPTER_RENDER::CreateDevice(
          *((_QWORD *)v44 + 350),
          &v52,
          v62[2],
          (v62[2] & 1) == 0,
          v49,
          v40,
          v41,
          v42,
          v58,
          v57,
          0);
  if ( v21 >= 0 )
  {
    p_hDevice = &v59->hDevice;
    if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
      p_hDevice = (_DWORD *)MmUserProbeAddress;
    *p_hDevice = *((_DWORD *)v52 + 109);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  *(_QWORD *)(v17 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v17 + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
  KeLeaveCriticalRegion();
  if ( v49 )
    DXGADAPTER::ReleaseReference(v49);
  v49 = 0LL;
  if ( v44 )
    DXGADAPTER::ReleaseReference(v44);
  v44 = 0LL;
LABEL_38:
  if ( v54 )
    DXGADAPTER::ReleaseReference(v54);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 )
  {
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_59:
    if ( v30 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v46);
  }
  return (unsigned int)v21;
}
