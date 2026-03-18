/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0258150
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02519E8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0251AF8 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C0251B80 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0251C08 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252ED8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v38; // rbx
  char *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  const void *v49; // rdx
  char *v50; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v52; // r8
  __int64 v53; // rax
  char *v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  char *v57; // rcx
  const void *v58; // rdx
  char *v59; // rcx
  unsigned int j; // edx
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  unsigned int v63; // r8d
  char *v64; // r9
  char *v65; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v66; // rcx
  unsigned int k; // edx
  __int64 v68; // rdx
  __int64 v69; // rcx
  DXGDEVICE *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int v84; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v85; // r9
  _DWORD *v86; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  bool v91; // [rsp+40h] [rbp-3E8h]
  int v92; // [rsp+48h] [rbp-3E0h] BYREF
  __int64 v93; // [rsp+50h] [rbp-3D8h]
  char v94; // [rsp+58h] [rbp-3D0h]
  PVOID v95; // [rsp+60h] [rbp-3C8h] BYREF
  _BYTE v96[24]; // [rsp+68h] [rbp-3C0h] BYREF
  int v97; // [rsp+80h] [rbp-3A8h]
  struct DXGDEVICE *v98; // [rsp+88h] [rbp-3A0h] BYREF
  int v99; // [rsp+90h] [rbp-398h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v100; // [rsp+94h] [rbp-394h] BYREF
  PVOID v101; // [rsp+98h] [rbp-390h] BYREF
  _BYTE v102[24]; // [rsp+A0h] [rbp-388h] BYREF
  int v103; // [rsp+B8h] [rbp-370h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v104; // [rsp+C0h] [rbp-368h]
  ULONG64 v105; // [rsp+C8h] [rbp-360h]
  unsigned int v106; // [rsp+D0h] [rbp-358h]
  unsigned int v107; // [rsp+D4h] [rbp-354h]
  char *v108; // [rsp+D8h] [rbp-350h]
  char *v109; // [rsp+E0h] [rbp-348h]
  struct DXGDEVICE *v110; // [rsp+E8h] [rbp-340h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v111; // [rsp+F0h] [rbp-338h]
  _QWORD v112[2]; // [rsp+F8h] [rbp-330h] BYREF
  struct DXGPROCESS *v113; // [rsp+108h] [rbp-320h]
  unsigned int v114[4]; // [rsp+110h] [rbp-318h]
  void *Src[2]; // [rsp+120h] [rbp-308h]
  void *v116[2]; // [rsp+130h] [rbp-2F8h]
  PVOID v117; // [rsp+140h] [rbp-2E8h] BYREF
  _BYTE v118[96]; // [rsp+148h] [rbp-2E0h] BYREF
  int v119; // [rsp+1A8h] [rbp-280h]
  PVOID P; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v121[132]; // [rsp+1B8h] [rbp-270h] BYREF
  int v122; // [rsp+23Ch] [rbp-1ECh]
  PVOID v123; // [rsp+240h] [rbp-1E8h] BYREF
  _BYTE v124[264]; // [rsp+248h] [rbp-1E0h] BYREF
  int v125; // [rsp+350h] [rbp-D8h]
  _BYTE v126[160]; // [rsp+360h] [rbp-C8h] BYREF

  v105 = a1;
  v92 = -1;
  v93 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v94 = 1;
    v92 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v94 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v113 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    v10 = v9;
LABEL_7:
    WdLogEvent5_WdError(v10);
LABEL_95:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v11);
    if ( v94 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v72, &EventProfilerExit, v73, v92);
    }
    return 3221225485LL;
  }
  v91 = *((_BYTE *)Current + 346) == 0;
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v114 = *v12;
  *(_OWORD *)Src = v12[1];
  *(_OWORD *)v116 = v12[2];
  v13 = v114[2];
  if ( !v114[2] )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
    v14[3] = 0LL;
LABEL_12:
    v17 = v14;
    v14[4] = -1073741811LL;
    v14[5] = PsGetCurrentProcess(v16, v15);
    v10 = (__int64)v17;
    goto LABEL_7;
  }
  v18 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v7);
    v14[3] = v18;
    goto LABEL_12;
  }
  v95 = 0LL;
  v97 = 0;
  v104 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                              &v95,
                                                              v114[2]);
  if ( !v104 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = -1073741801LL;
    *(_QWORD *)(v22 + 32) = PsGetCurrentProcess(v24, v23);
    WdLogEvent5_WdWarning(v22);
LABEL_39:
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v25);
    if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v92);
    return 3221225495LL;
  }
  v117 = 0LL;
  v119 = 0;
  v109 = (char *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v117, v13);
  if ( !v109 )
  {
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    *(_QWORD *)(v29 + 32) = PsGetCurrentProcess(v31, v30);
    WdLogEvent5_WdWarning(v29);
LABEL_35:
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v119 = 0;
    v117 = 0LL;
    goto LABEL_39;
  }
  v123 = 0LL;
  v125 = 0;
  v108 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(&v123, v13);
  if ( !v108 )
  {
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    *(_QWORD *)(v35 + 32) = PsGetCurrentProcess(v37, v36);
    WdLogEvent5_WdWarning(v35);
LABEL_31:
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
    goto LABEL_35;
  }
  v101 = 0LL;
  v103 = 0;
  P = 0LL;
  v122 = 0;
  v38 = 0LL;
  v111 = 0LL;
  v39 = 0LL;
  if ( (_DWORD)v18 )
  {
    v38 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                               &v101,
                                                                               v18);
    v111 = v38;
    if ( !v38
      || (v39 = (char *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                          &P,
                          v18)) == 0LL )
    {
      v43 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      *(_QWORD *)(v43 + 24) = -1073741801LL;
      *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v45, v44);
      WdLogEvent5_WdWarning(v43);
      if ( P != v121 && P )
        ExFreePoolWithTag(P, 0);
      v122 = 0;
      P = 0LL;
      if ( v101 != v102 && v101 )
        ExFreePoolWithTag(v101, 0);
      v103 = 0;
      v101 = 0LL;
      goto LABEL_31;
    }
  }
  v49 = Src[0];
  v50 = (char *)Src[0] + 8 * v13;
  if ( v50 < Src[0] || (unsigned __int64)v50 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v104, v49, 8 * v13);
  for ( i = 0; ; ++i )
  {
    v106 = i;
    if ( i >= (unsigned int)v13 )
      break;
    v52 = v104[i];
    if ( &v52[1] < v52 || (unsigned __int64)&v52[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v53 = 32LL * i;
    v54 = v109;
    *(_OWORD *)&v109[v53] = *(_OWORD *)&v52->LayerIndex;
    *(_OWORD *)&v54[v53 + 16] = *(_OWORD *)&v52->VidPnSourceId;
    v55 = *(_QWORD *)&v54[v53 + 24];
    if ( v55 + 88 < v55 || v55 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v56 = 88LL * i;
    v57 = v108;
    *(_OWORD *)&v108[v56] = *(_OWORD *)v55;
    *(_OWORD *)&v57[v56 + 16] = *(_OWORD *)(v55 + 16);
    *(_OWORD *)&v57[v56 + 32] = *(_OWORD *)(v55 + 32);
    *(_OWORD *)&v57[v56 + 48] = *(_OWORD *)(v55 + 48);
    *(_OWORD *)&v57[v56 + 64] = *(_OWORD *)(v55 + 64);
    *(_QWORD *)&v57[v56 + 80] = *(_QWORD *)(v55 + 80);
  }
  if ( (_DWORD)v18 )
  {
    v58 = v116[0];
    v59 = (char *)v116[0] + 8 * v18;
    if ( v59 < v116[0] || (unsigned __int64)v59 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v38, v58, 8 * v18);
  }
  for ( j = 0; ; ++j )
  {
    v107 = j;
    if ( j >= (unsigned int)v18 )
      break;
    v61 = (unsigned __int64)v38[j];
    if ( v61 + 44 < v61 || v61 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v62 = 44LL * j;
    *(_OWORD *)&v39[v62] = *(_OWORD *)v61;
    *(_OWORD *)&v39[v62 + 16] = *(_OWORD *)(v61 + 16);
    *(_QWORD *)&v39[v62 + 32] = *(_QWORD *)(v61 + 32);
    *(_DWORD *)&v39[v62 + 40] = *(_DWORD *)(v61 + 40);
  }
  v63 = 0;
  v64 = v108;
  v65 = v109;
  while ( v63 < (unsigned int)v13 )
  {
    v66 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v65[32 * v63];
    v104[v63] = v66;
    v66->pPlaneAttributes = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)&v64[88 * v63++];
  }
  for ( k = 0; k < (unsigned int)v18; ++k )
    v38[k] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)&v39[44 * k];
  v110 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v98, v114[1], (struct _KTHREAD **)v113, &v110);
  v70 = v110;
  if ( !v110 )
  {
    v71 = WdLogNewEntry5_WdError(v69, v68);
    *(_QWORD *)(v71 + 24) = v114[1];
    *(_QWORD *)(v71 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v71);
    if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v122 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    goto LABEL_95;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112, v110);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v126, (__int64)v70, 2, v74, 0);
  v75 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v126, 0LL);
  v79 = v75;
  if ( v75 >= 0 )
  {
    v99 = 0;
    v100.0 = 0;
    v84 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v70, v13, v104, v18, v111, v91, &v99, &v100);
    if ( v84 >= 0 )
    {
      v85 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v105;
      v86 = (_DWORD *)(v105 + 40);
      if ( v105 + 40 >= MmUserProbeAddress )
        v86 = (_DWORD *)MmUserProbeAddress;
      *v86 = v99;
      v87 = v85 + 11;
      if ( (unsigned __int64)&v85[11] >= MmUserProbeAddress )
        v87 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v87->0 = v100.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v122 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v88);
    if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v92);
    return (unsigned int)v84;
  }
  else
  {
    v80 = WdLogNewEntry5_WdWarning(v77, v76, v78);
    *(_QWORD *)(v80 + 24) = v70;
    *(_QWORD *)(v80 + 32) = v79;
    WdLogEvent5_WdWarning(v80);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v126);
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    if ( v98 && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
    if ( P != v121 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v122 = 0;
    if ( v101 != v102 && v101 )
      ExFreePoolWithTag(v101, 0);
    v101 = 0LL;
    v103 = 0;
    if ( v123 != v124 && v123 )
      ExFreePoolWithTag(v123, 0);
    v123 = 0LL;
    v125 = 0;
    if ( v117 != v118 && v117 )
      ExFreePoolWithTag(v117, 0);
    v117 = 0LL;
    v119 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v81);
    if ( v94 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v82, &EventProfilerExit, v83, v92);
    return (unsigned int)v79;
  }
}
