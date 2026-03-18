/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00EA600
 * Callers:
 *     DxgkCreateDeviceInternal @ 0x1C00D83B0 (DxgkCreateDeviceInternal.c)
 *     DxgkCreateDevice @ 0x1C00EA5E0 (DxgkCreateDevice.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239E90 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009A48 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0044E44 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00EABC0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FA130 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v10; // rdx
  struct _D3DKMT_CREATEDEVICE *v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct DXGADAPTER **v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // r15
  struct DXGADAPTER *i; // r13
  struct DXGADAPTER **v20; // rbx
  __int64 v21; // rdx
  struct DXGADAPTER **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGADAPTER *v25; // rax
  struct DXGADAPTER *v26; // rcx
  __int64 v27; // r13
  struct DXGADAPTER *v28; // rdx
  struct DXGADAPTER *v29; // r8
  int v30; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  struct DXGADAPTER *v35; // rbx
  _DWORD *v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGADAPTER **v42; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER **v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  struct DXGADAPTER *v58; // rcx
  __int64 v59; // rax
  struct _KEVENT *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  KSPIN_LOCK *Global; // rax
  _QWORD *v64; // rax
  int v65; // [rsp+28h] [rbp-1D0h]
  int v66; // [rsp+30h] [rbp-1C8h]
  struct DXGADAPTER *v68; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned __int64 v69; // [rsp+60h] [rbp-198h] BYREF
  int v70; // [rsp+68h] [rbp-190h] BYREF
  __int64 v71; // [rsp+70h] [rbp-188h]
  char v72; // [rsp+78h] [rbp-180h]
  struct DXGADAPTER *v73; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v74; // [rsp+88h] [rbp-170h] BYREF
  struct DXGADAPTER *v75; // [rsp+90h] [rbp-168h] BYREF
  struct DXGADAPTER *v76; // [rsp+98h] [rbp-160h] BYREF
  DXGADAPTER *v77; // [rsp+A0h] [rbp-158h] BYREF
  DXGADAPTER *v78; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v79; // [rsp+B8h] [rbp-140h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-130h]
  struct DXG_SET_GUEST_DATA **v81; // [rsp+D0h] [rbp-128h]
  struct DXGK_VIRTUAL_GPU_PARAV *v82; // [rsp+D8h] [rbp-120h]
  struct DXGPROCESS *v83; // [rsp+E0h] [rbp-118h]
  __int64 v84; // [rsp+E8h] [rbp-110h]
  unsigned int v85[4]; // [rsp+F0h] [rbp-108h]
  __int128 v86; // [rsp+100h] [rbp-F8h]
  __int128 v87; // [rsp+110h] [rbp-E8h]
  __int128 v88; // [rsp+120h] [rbp-D8h]
  _BYTE v89[144]; // [rsp+130h] [rbp-C8h] BYREF

  v81 = a3;
  v82 = (struct DXGK_VIRTUAL_GPU_PARAV *)a2;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v72 = 1;
    v70 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v70, 2009LL);
  Current = DXGPROCESS::GetCurrent();
  v83 = Current;
  if ( !Current )
  {
    v48 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v49);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v70);
    return 3221225485LL;
  }
  if ( a2 )
    v10 = a2[2];
  else
    v10 = 0LL;
  v76 = v10;
  if ( a4 )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v85 = *(_OWORD *)&v11->hAdapter;
    v86 = *(_OWORD *)&v11->pCommandBuffer;
    v12 = *(_OWORD *)&v11->pAllocationList;
    v13 = *(_OWORD *)&v11->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v85 = *(_OWORD *)&a1->hAdapter;
    v86 = *(_OWORD *)&a1->pCommandBuffer;
    v12 = *(_OWORD *)&a1->pAllocationList;
    v13 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v88 = v13;
  v87 = v12;
  v14 = &v76;
  if ( v10 )
    v14 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v77, v85[0], (struct _KTHREAD **)Current, v14, 1);
  v18 = v76;
  if ( !v76 )
  {
    v50 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v50 + 24) = v85[0];
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v50);
    if ( v77 )
      DXGADAPTER::ReleaseReferenceNoTracking(v77);
    goto LABEL_53;
  }
  for ( i = 0LL; ; i = v75 )
  {
    v68 = 0LL;
    v73 = 0LL;
    v20 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v73, v15);
    v22 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v68, v21);
    if ( (int)DxgkpGetPairingAdapters(v18, 0, v22, &v69, v20, &v74, 0) < 0 )
    {
      v42 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v68, v23);
      PairingAdapters = DxgkpGetPairingAdapters(v18, 0, v42, &v69, 0LL, 0LL, 0);
      v34 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v57 = WdLogNewEntry5_WdError(v24, v23);
        *(_QWORD *)(v57 + 24) = v85[0];
        *(_QWORD *)(v57 + 32) = v34;
        WdLogEvent5_WdError(v57);
        goto LABEL_37;
      }
    }
    v25 = v68;
    if ( !v68 || !*((_QWORD *)v68 + 335) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v53 + 24) = 2004LL;
      WdLogEvent5_WdAssertion(v53);
      v25 = v68;
    }
    v26 = v73;
    if ( v73 && !*((_QWORD *)v73 + 334) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v73, v23);
      *(_QWORD *)(v54 + 24) = 2005LL;
      WdLogEvent5_WdAssertion(v54);
      v25 = v68;
    }
    if ( i == v25 )
      break;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
    *((_QWORD *)Current + 23) = KeGetCurrentThread();
    v27 = *((_QWORD *)v68 + 335);
    v84 = v27;
    v80 = v27 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v27 + 24, 0LL);
    *(_QWORD *)(v27 + 32) = KeGetCurrentThread();
    v28 = v68;
    v29 = v73;
    if ( v68 == v73 )
      goto LABEL_23;
    v78 = 0LL;
    v44 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v78, (__int64)v68);
    v18 = v76;
    LODWORD(v34) = DxgkpGetPairingAdapters(v76, 0, v44, &v79, 0LL, 0LL, 0);
    if ( (int)v34 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v78, 0LL);
      goto LABEL_36;
    }
    v75 = v68;
    if ( v78 == v68 )
    {
      DXGADAPTER_REFERENCE::Assign(&v78, 0LL);
      v28 = v68;
      v29 = v73;
LABEL_23:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v89, v28, v29);
      v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89, 0LL);
      v34 = v30;
      if ( v30 < 0 )
      {
        if ( v68 != v73 )
        {
          v58 = (struct DXGADAPTER *)*((unsigned int *)v68 + 50);
          if ( (_DWORD)v58 != 1 || (v58 = v68, *((_BYTE *)v68 + 2585)) )
          {
            v59 = WdLogNewEntry5_WdWarning(v58, p_hDevice, v33);
            *(_QWORD *)(v59 + 24) = v68;
            *(_QWORD *)(v59 + 32) = v34;
            WdLogEvent5_WdWarning(v59);
          }
        }
      }
      else
      {
        if ( !*((_BYTE *)v68 + 209) )
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v32, (__int64)p_hDevice) + 649) )
          {
            v35 = v68;
            LODWORD(v36) = DXGADAPTER::GetAdapterType(v68);
            if ( (*v36 & 0x10) != 0 )
            {
              v60 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 335)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 904LL))(*(_QWORD *)(*((_QWORD *)v35 + 335)
                                                                                            + 624LL));
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v62, v61);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v60);
              *((_BYTE *)v68 + 206) = 1;
            }
          }
        }
        v75 = 0LL;
        if ( v68 == v73 )
          v37 = (v85[2] >> 1) & 1;
        else
          LOBYTE(v37) = 0;
        LOBYTE(v66) = (v85[2] & 4) != 0;
        LOBYTE(v65) = v37;
        LODWORD(v34) = ADAPTER_RENDER::CreateDevice(
                         *((_QWORD *)v68 + 335),
                         &v75,
                         v85[2],
                         (v85[2] & 1) == 0,
                         v73,
                         v65,
                         v66,
                         0,
                         v82,
                         v81);
        if ( (int)v34 >= 0 )
        {
          p_hDevice = &a1->hDevice;
          if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
            p_hDevice = (_DWORD *)MmUserProbeAddress;
          *p_hDevice = *((_DWORD *)v75 + 109);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89, (__int64)p_hDevice);
LABEL_36:
      *(_QWORD *)(v27 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v27 + 24, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_37;
    }
    v55 = WdLogNewEntry5_WdWarning(v46, v45, v47);
    *(_QWORD *)(v55 + 24) = v68;
    WdLogEvent5_WdWarning(v55);
    DXGADAPTER_REFERENCE::Assign(&v78, 0LL);
    v56 = v80;
    *(_QWORD *)(v80 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v56, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v23);
  v64[3] = v68;
  v64[4] = v18;
  LODWORD(v34) = -1073741275;
  v64[5] = -1073741275LL;
  WdLogEvent5_WdAssertion(v64);
LABEL_37:
  DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v68, 0LL);
  if ( v77 )
    DXGADAPTER::ReleaseReferenceNoTracking(v77);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v38);
  if ( v72 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v70);
  }
  return (unsigned int)v34;
}
