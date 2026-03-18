/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8050
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004198 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019B40 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019E64 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001A440 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1C0026C10 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C0046208 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C00DC368 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02105B8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C027F7F4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C02A2AF4 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A3B70 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A410C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int *p_PresentPlaneCount; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  UINT ContextCount; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 VidPnSourceId; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 *v36; // rbx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r14
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v45; // rax
  UINT i; // r14d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r9
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct DXGCONTEXT *v53; // rcx
  struct DXGCONTEXT *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  bool v68; // zf
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rdx
  const struct DXGDEVICE *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct DXGPROCESS *v89; // rax
  __int64 v90; // rax
  int v91; // [rsp+50h] [rbp-268h] BYREF
  int v92; // [rsp+58h] [rbp-260h] BYREF
  __int64 v93; // [rsp+60h] [rbp-258h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v94; // [rsp+68h] [rbp-250h]
  int *v95; // [rsp+70h] [rbp-248h]
  enum _D3DDDI_HDR_METADATA_TYPE v96; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v97; // [rsp+7Ch] [rbp-23Ch] BYREF
  _BYTE v98[16]; // [rsp+80h] [rbp-238h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v99; // [rsp+90h] [rbp-228h] BYREF
  _BYTE v100[16]; // [rsp+E0h] [rbp-1D8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v101[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  struct tagRECT **v102[2]; // [rsp+100h] [rbp-1B8h] BYREF
  unsigned int *v103[2]; // [rsp+110h] [rbp-1A8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v104[2]; // [rsp+120h] [rbp-198h] BYREF
  int v105; // [rsp+130h] [rbp-188h]
  struct DXGCONTEXT **v106; // [rsp+140h] [rbp-178h] BYREF
  _BYTE v107[32]; // [rsp+148h] [rbp-170h] BYREF
  unsigned int v108; // [rsp+168h] [rbp-150h]
  unsigned __int8 *v109; // [rsp+170h] [rbp-148h] BYREF
  struct DXGCONTEXT *v110; // [rsp+178h] [rbp-140h] BYREF
  _BYTE v111[8]; // [rsp+180h] [rbp-138h] BYREF
  __int64 v112; // [rsp+188h] [rbp-130h]
  char v113; // [rsp+190h] [rbp-128h]
  int v114; // [rsp+198h] [rbp-120h]
  _QWORD v115[6]; // [rsp+1A0h] [rbp-118h] BYREF
  char v116; // [rsp+1D0h] [rbp-E8h]
  _BYTE v117[24]; // [rsp+1D8h] [rbp-E0h] BYREF
  char *v118[20]; // [rsp+1F0h] [rbp-C8h] BYREF

  v91 = -1073741811;
  memset(&v99, 0, sizeof(v99));
  v93 = 0LL;
  v92 = 2164;
  v94 = &v99;
  v95 = &v91;
  if ( (qword_1C00B09B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 2164LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !a1 )
  {
    v91 = -1073741811;
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v91;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v9);
    v13 = v91;
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v12);
    if ( (qword_1C00B09B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v14,
          v16,
          0,
          v94->VidPnSourceId,
          v94->PresentCount,
          1,
          v94->Flags.Value,
          v94->PresentPlaneCount,
          *v95);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v92);
    }
    return v13;
  }
  p_PresentPlaneCount = (int *)&a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (int *)MmUserProbeAddress;
  v114 = *p_PresentPlaneCount;
  *(_OWORD *)v101 = 0LL;
  *(_OWORD *)v102 = 0LL;
  *(_OWORD *)v103 = 0LL;
  *(_OWORD *)v104 = 0LL;
  v105 = v114;
  v91 = CapturePresentMultiPlaneOverlayArgs3(
          a1,
          &v99,
          v101,
          (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v101[1],
          (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v102,
          &v102[1],
          v103,
          &v103[1],
          (unsigned __int8 **)v104,
          &v104[1]);
  if ( v91 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = v91;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess(v23, v22);
    v24 = v21;
LABEL_16:
    WdLogEvent5_WdError(v24);
    v13 = v91;
LABEL_17:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v101);
    goto LABEL_6;
  }
  PresentPlaneCount = v99.PresentPlaneCount;
  if ( !v99.PresentPlaneCount )
  {
    v26 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v26 + 24) = 2693LL;
    WdLogEvent5_WdAssertion(v26);
    PresentPlaneCount = v99.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v27 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v27 + 24) = 2694LL;
    WdLogEvent5_WdAssertion(v27);
  }
  ContextCount = v99.ContextCount;
  if ( !v99.ContextCount )
  {
    v29 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v29 + 24) = 2695LL;
    WdLogEvent5_WdAssertion(v29);
    ContextCount = v99.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v30 + 24) = 2696LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v99.VidPnSourceId >= 0x10 )
  {
    v91 = -1073741811;
    v24 = WdLogNewEntry5_WdError(v20, v19);
    VidPnSourceId = v99.VidPnSourceId;
LABEL_28:
    *(_QWORD *)(v24 + 24) = VidPnSourceId;
    *(_QWORD *)(v24 + 32) = v91;
    goto LABEL_16;
  }
  if ( v99.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_NONE && !v99.pHDRMetaData )
  {
    v97 = 0;
    v96 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v109 = 0LL;
    if ( !(unsigned int)PopulateHDRMetadataFromDisplay(&v99, &v109, &v96, &v97) )
    {
      v99.pHDRMetaData = v109;
      v99.HDRMetaDataType = v96;
      v99.HDRMetaDataSize = v97;
      v99.Flags.Value |= 0x80u;
    }
  }
  if ( v99.HDRMetaDataType )
  {
    v32 = (unsigned int)(v99.HDRMetaDataType - 1);
    if ( v99.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      if ( v99.HDRMetaDataSize && v99.HDRMetaDataSize != 28 )
        goto LABEL_46;
    }
    else
    {
      if ( v99.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v91 = -1073741811;
        v24 = WdLogNewEntry5_WdError(v32, v19);
        VidPnSourceId = v99.HDRMetaDataType;
        goto LABEL_28;
      }
      if ( v99.HDRMetaDataSize && v99.HDRMetaDataSize != 72 )
        goto LABEL_46;
    }
    if ( v99.pHDRMetaData )
    {
      if ( v99.HDRMetaDataSize )
        goto LABEL_49;
    }
    else if ( !v99.HDRMetaDataSize )
    {
      goto LABEL_49;
    }
LABEL_46:
    v91 = -1073741811;
    v24 = WdLogNewEntry5_WdError(v32, v19);
    VidPnSourceId = v99.HDRMetaDataSize;
    goto LABEL_28;
  }
  if ( v99.HDRMetaDataSize || v99.pHDRMetaData )
  {
    v91 = -1073741811;
    v90 = WdLogNewEntry5_WdError((unsigned int)v99.HDRMetaDataType, v19);
    *(_QWORD *)(v90 + 24) = v91;
    v24 = v90;
    goto LABEL_16;
  }
LABEL_49:
  v110 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98, *v99.pContextList, Current, &v110, 0);
  v36 = (__int64 *)v110;
  if ( !v110 )
  {
    v91 = -1073741811;
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
    v37[3] = v91;
    v37[4] = PsGetCurrentProcess(v39, v38);
    v37[5] = *v99.pContextList;
    WdLogEvent5_WdWarning(v37);
LABEL_51:
    v13 = v91;
LABEL_52:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v110 + 105) & 8) != 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v40 + 24) = 2804LL;
    WdLogEvent5_WdWarning(v40);
    goto LABEL_87;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v100,
    *((struct DXGDEVICE **)v110 + 2));
  v43 = v99.ContextCount;
  PoolWithTag = 0LL;
  v106 = 0LL;
  v108 = 0;
  if ( v99.ContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v107;
    v106 = (struct DXGCONTEXT **)v107;
  }
  else
  {
    v41 = 0xFFFFFFFFFFFFFFFFuLL % v99.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v99.ContextCount < 8 )
      goto LABEL_61;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v99.ContextCount, 0x4B677844u);
    v106 = PoolWithTag;
  }
  v108 = v43;
  if ( !PoolWithTag )
  {
LABEL_62:
    v45 = WdLogNewEntry5_WdWarning(PoolWithTag, v41, v42);
    *(_QWORD *)(v45 + 24) = 2814LL;
    WdLogEvent5_WdWarning(v45);
LABEL_78:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v106);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v101);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v59);
    if ( (qword_1C00B09B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v60,
          v62,
          0,
          v94->VidPnSourceId,
          v94->PresentCount,
          1,
          v94->Flags.Value,
          v94->PresentPlaneCount,
          *v95);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v92);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v43);
  PoolWithTag = v106;
LABEL_61:
  if ( !PoolWithTag )
    goto LABEL_62;
  *PoolWithTag = (struct DXGCONTEXT *)v36;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v117, (struct _KTHREAD **)Current);
  for ( i = 1; i < v99.ContextCount; ++i )
  {
    v47 = v99.pContextList[i];
    v48 = (v99.pContextList[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v48 < *((_DWORD *)Current + 64) )
    {
      v49 = *((_QWORD *)Current + 30);
      v50 = *(_DWORD *)(v49 + 16 * v48 + 8);
      v47 = ((unsigned int)v47 >> 25) & 0x60;
      if ( (_BYTE)v47 == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60) && (v50 & 0x2000) == 0 && (v50 & 0x1F) != 0 )
      {
        v51 = v50 & 0x1F;
        if ( (_BYTE)v51 == 7 )
        {
          v53 = *(struct DXGCONTEXT **)(v49 + 16LL * (unsigned int)v48);
          goto LABEL_71;
        }
        v52 = WdLogNewEntry5_WdError(v51, v47);
        *(_QWORD *)(v52 + 24) = 267LL;
        WdLogEvent5_WdError(v52);
      }
    }
    v53 = 0LL;
LABEL_71:
    v106[i] = v53;
    v54 = v106[i];
    if ( !v54 || (*((_DWORD *)v54 + 105) & 8) != 0 || *((_QWORD *)v54 + 2) != v36[2] )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v54, v47);
      v63[3] = v36;
      v63[4] = v99.pContextList[i];
      v63[5] = i;
      v63[6] = -1073741811LL;
      WdLogEvent5_WdError(v63);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v117);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v106);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v101);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v64);
      v68 = (qword_1C00B09B0 & 2) == 0;
      goto LABEL_88;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v117);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v115,
    v106,
    v108);
  if ( !v116 )
  {
    v112 = *(_QWORD *)(*(_QWORD *)(v36[2] + 16) + 16LL);
    v113 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v118, v36[2], 1, v71, 0);
    v91 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v118, 0LL);
    if ( v91 >= 0 )
    {
      v78 = (const struct DXGDEVICE *)v36[2];
      v79 = *((_QWORD *)v78 + 231);
      if ( v79 )
      {
        if ( *((_BYTE *)Current + 346)
          || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v79 + 2696), v78, v99.VidPnSourceId) )
        {
          v91 = DXGCONTEXT::PresentMultiPlaneOverlay3((DXGCONTEXT *)v36, &v99, (struct COREDEVICEACCESS *)v118, v106);
          if ( v91 == -1071775482 )
            DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v36[2], v118);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v115);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v106);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
          v89 = DXGPROCESS::GetCurrent(v88, v87);
          DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v89 + 8) + 88LL));
          goto LABEL_51;
        }
        v91 = -1073741790;
        v84 = WdLogNewEntry5_WdError(v83, v82);
        v85 = v91;
        *(_QWORD *)(v84 + 24) = v91;
        *(_QWORD *)(v84 + 32) = PsGetCurrentProcess(v85, v86);
        v81 = v84;
      }
      else
      {
        v91 = -1073741811;
        v80 = WdLogNewEntry5_WdError(0LL, v78);
        *(_QWORD *)(v80 + 24) = v91;
        v81 = v80;
      }
      WdLogEvent5_WdError(v81);
    }
    else
    {
      v75 = WdLogNewEntry5_WdWarning(v73, v72, v74);
      v76 = v91;
      *(_QWORD *)(v75 + 24) = v91;
      *(_QWORD *)(v75 + 32) = PsGetCurrentProcess(v76, v77);
      WdLogEvent5_WdWarning(v75);
    }
    v13 = v91;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v118);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v115);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v106);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
    goto LABEL_52;
  }
  if ( !v115[0] )
  {
    v58 = WdLogNewEntry5_WdWarning(v56, v55, v57);
    *(_QWORD *)(v58 + 24) = 2865LL;
    WdLogEvent5_WdWarning(v58);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v115);
    goto LABEL_78;
  }
  v69 = WdLogNewEntry5_WdWarning(v56, v55, v57);
  *(_QWORD *)(v69 + 24) = 2870LL;
  WdLogEvent5_WdWarning(v69);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v115);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v106);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v100);
LABEL_87:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v101);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92, v70);
  v68 = (qword_1C00B09B0 & 2) == 0;
LABEL_88:
  if ( !v68 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v65,
        v67,
        0,
        v94->VidPnSourceId,
        v94->PresentCount,
        1,
        v94->Flags.Value,
        v94->PresentPlaneCount,
        *v95);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v66, &EventProfilerExit, v67, v92);
  }
  return 3221225485LL;
}
