/*
 * XREFs of ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C012B98C
 * Callers:
 *     DxgkCreateDevice @ 0x1C012BF50 (DxgkCreateDevice.c)
 *     DxgkCreateDeviceInternal @ 0x1C0151220 (DxgkCreateDeviceInternal.c)
 *     ?VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E140 (-VmBusCreateDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0045E64 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F71B0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C012B300 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateDeviceImpl(
        struct _D3DKMT_CREATEDEVICE *a1,
        struct DXGADAPTER **a2,
        struct DXG_SET_GUEST_DATA **a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGADAPTER *v12; // rdx
  struct _D3DKMT_CREATEDEVICE *v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  struct DXGADAPTER **v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // r15
  struct DXGADAPTER *i; // r13
  struct DXGADAPTER **v22; // rbx
  __int64 v23; // rdx
  struct DXGADAPTER **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGADAPTER *v27; // rax
  struct DXGADAPTER *v28; // rcx
  __int64 v29; // r13
  struct DXGADAPTER *v30; // rdx
  struct DXGADAPTER *v31; // r8
  int v32; // eax
  _DWORD *p_hDevice; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rbx
  struct DXGADAPTER *v37; // rbx
  unsigned int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGADAPTER **v43; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  struct DXGADAPTER *v59; // rcx
  __int64 v60; // rax
  struct _KEVENT *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  KSPIN_LOCK *Global; // rax
  _QWORD *v65; // rax
  struct DXGADAPTER *v67; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned __int64 v68; // [rsp+60h] [rbp-198h] BYREF
  int v69; // [rsp+68h] [rbp-190h] BYREF
  __int64 v70; // [rsp+70h] [rbp-188h]
  char v71; // [rsp+78h] [rbp-180h]
  struct DXGADAPTER *v72; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v73; // [rsp+88h] [rbp-170h] BYREF
  struct DXGADAPTER *v74; // [rsp+90h] [rbp-168h] BYREF
  struct DXGADAPTER *v75; // [rsp+98h] [rbp-160h] BYREF
  DXGADAPTER *v76; // [rsp+A0h] [rbp-158h] BYREF
  DXGADAPTER *v77; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v78; // [rsp+B8h] [rbp-140h] BYREF
  int v79; // [rsp+C0h] [rbp-138h] BYREF
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
  v69 = -1;
  v70 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2009);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2009LL);
  Current = DXGPROCESS::GetCurrent(v8, v7);
  v83 = Current;
  if ( !Current )
  {
    v49 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v49 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v49);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v50);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v69);
    return 3221225485LL;
  }
  if ( a2 )
    v12 = a2[2];
  else
    v12 = 0LL;
  v75 = v12;
  if ( a4 )
  {
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_CREATEDEVICE *)MmUserProbeAddress;
    *(_OWORD *)v85 = *(_OWORD *)&v13->hAdapter;
    v86 = *(_OWORD *)&v13->pCommandBuffer;
    v14 = *(_OWORD *)&v13->pAllocationList;
    v15 = *(_OWORD *)&v13->pPatchLocationList;
  }
  else
  {
    *(_OWORD *)v85 = *(_OWORD *)&a1->hAdapter;
    v86 = *(_OWORD *)&a1->pCommandBuffer;
    v14 = *(_OWORD *)&a1->pAllocationList;
    v15 = *(_OWORD *)&a1->pPatchLocationList;
  }
  v88 = v15;
  v87 = v14;
  v16 = &v75;
  if ( v12 )
    v16 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v76, v85[0], (struct _KTHREAD **)Current, v16, 1);
  v20 = v75;
  if ( !v75 )
  {
    v51 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v51 + 24) = v85[0];
    *(_QWORD *)(v51 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v51);
    if ( v76 )
      DXGADAPTER::ReleaseReference(v76);
    goto LABEL_53;
  }
  for ( i = 0LL; ; i = v74 )
  {
    v67 = 0LL;
    v72 = 0LL;
    v22 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v72, v17);
    v24 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v67, v23);
    if ( (int)DxgkpGetPairingAdapters(v20, 0LL, v24, &v68, v22, &v73, 0) < 0 )
    {
      v43 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v67, v25);
      PairingAdapters = DxgkpGetPairingAdapters(v20, 0LL, v43, &v68, 0LL, 0LL, 0);
      v36 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v58 + 24) = v85[0];
        *(_QWORD *)(v58 + 32) = v36;
        WdLogEvent5_WdError(v58);
        goto LABEL_37;
      }
    }
    v27 = v67;
    if ( !v67 || !*((_QWORD *)v67 + 338) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v54 + 24) = 2004LL;
      WdLogEvent5_WdAssertion(v54);
      v27 = v67;
    }
    v28 = v72;
    if ( v72 && !*((_QWORD *)v72 + 337) )
    {
      v55 = WdLogNewEntry5_WdAssertion(v72, v25);
      *(_QWORD *)(v55 + 24) = 2005LL;
      WdLogEvent5_WdAssertion(v55);
      v27 = v67;
    }
    if ( i == v27 )
      break;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
    *((_QWORD *)Current + 23) = KeGetCurrentThread();
    v29 = *((_QWORD *)v67 + 338);
    v84 = v29;
    v80 = v29 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v29 + 24, 0LL);
    *(_QWORD *)(v29 + 32) = KeGetCurrentThread();
    v30 = v67;
    v31 = v72;
    if ( v67 == v72 )
      goto LABEL_23;
    v77 = 0LL;
    v45 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v77, (__int64)v67);
    v20 = v75;
    LODWORD(v36) = DxgkpGetPairingAdapters(v75, 0LL, v45, &v78, 0LL, 0LL, 0);
    if ( (int)v36 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
      goto LABEL_36;
    }
    v74 = v67;
    if ( v77 == v67 )
    {
      DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
      v30 = v67;
      v31 = v72;
LABEL_23:
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v89, v30, v31);
      v32 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v89, 0LL);
      v36 = v32;
      if ( v32 < 0 )
      {
        if ( v67 != v72 )
        {
          v59 = (struct DXGADAPTER *)*((unsigned int *)v67 + 50);
          if ( (_DWORD)v59 != 1 || (v59 = v67, *((_BYTE *)v67 + 2609)) )
          {
            v60 = WdLogNewEntry5_WdWarning(v59, p_hDevice, v35);
            *(_QWORD *)(v60 + 24) = v67;
            *(_QWORD *)(v60 + 32) = v36;
            WdLogEvent5_WdWarning(v60);
          }
        }
      }
      else
      {
        if ( !*((_BYTE *)v67 + 209) )
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v34, (__int64)p_hDevice) + 761) )
          {
            v37 = v67;
            if ( (*DXGADAPTER::GetAdapterType(v67, &v79) & 0x10) != 0 )
            {
              v61 = (struct _KEVENT *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 338)
                                                                                                + 616LL)
                                                                                    + 8LL)
                                                                        + 904LL))(*(_QWORD *)(*((_QWORD *)v37 + 338)
                                                                                            + 624LL));
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v63, v62);
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v61);
              *((_BYTE *)v67 + 206) = 1;
            }
          }
        }
        v74 = 0LL;
        if ( v67 == v72 )
          v38 = (v85[2] >> 1) & 1;
        else
          LOBYTE(v38) = 0;
        LODWORD(v36) = ADAPTER_RENDER::CreateDevice(
                         *((DXGADAPTER ***)v67 + 338),
                         (__int64 *)&v74,
                         v85[2],
                         (v85[2] & 1) == 0,
                         v72,
                         v38,
                         (v85[2] & 4) != 0,
                         0,
                         (__int64)v82,
                         (__int64)v81);
        if ( (int)v36 >= 0 )
        {
          p_hDevice = &a1->hDevice;
          if ( a4 && (unsigned __int64)p_hDevice >= MmUserProbeAddress )
            p_hDevice = (_DWORD *)MmUserProbeAddress;
          *p_hDevice = *((_DWORD *)v74 + 109);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v89, (__int64)p_hDevice);
LABEL_36:
      *(_QWORD *)(v29 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v29 + 24, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)Current + 23) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_37;
    }
    v56 = WdLogNewEntry5_WdWarning(v47, v46, v48);
    *(_QWORD *)(v56 + 24) = v67;
    WdLogEvent5_WdWarning(v56);
    DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
    v57 = v80;
    *(_QWORD *)(v80 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v57, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v72, 0LL);
    DXGADAPTER_REFERENCE::Assign(&v67, 0LL);
  }
  v65 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v25);
  v65[3] = v67;
  v65[4] = v20;
  LODWORD(v36) = -1073741275;
  v65[5] = -1073741275LL;
  WdLogEvent5_WdAssertion(v65);
LABEL_37:
  DXGADAPTER_REFERENCE::Assign(&v72, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v67, 0LL);
  if ( v76 )
    DXGADAPTER::ReleaseReference(v76);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v39);
  if ( v71 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v69);
  }
  return (unsigned int)v36;
}
