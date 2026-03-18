/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD870
 * Callers:
 *     DxgkPresent @ 0x1C0100C00 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C026D850 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C027B800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009998 (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C000A3A0 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000A670 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000AA18 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000CD10 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F20C (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0011DB0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0016E28 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C0016FC8 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017124 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00171B8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017204 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0017238 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C00174DC (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C00178AC (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C001A894 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C001B804 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C001B978 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001B994 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C001B9B8 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0025BF4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C003DEEC (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C004644C (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00466E8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x1C004689C (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C004695C (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00DD24C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FEE50 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FEEA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01132F0 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0114590 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0145B60 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0146A60 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0147E84 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0149040 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C0149188 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01499A4 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C014A54C (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C015B830 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015D374 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C015D510 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C015D668 (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C015D688 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C015D6A8 (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C015F354 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C020FB34 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0241E94 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0245110 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0249148 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C0279FB8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C027B1C4 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C027BF68 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C027C118 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C027CFBC (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C027D404 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0297684 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  int v15; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v17; // zf
  int v18; // ecx
  UINT Width; // r13d
  UINT Height; // esi
  __int64 v21; // rcx
  __int64 Format; // r8
  D3DKMT_HANDLE v23; // ebx
  D3DKMT_HANDLE v24; // ebx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGALLOCATION **v31; // rax
  struct DXGALLOCATION *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGALLOCATION *v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  D3DKMT_HANDLE v41; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r9d
  int v43; // r9d
  __int64 v44; // rcx
  unsigned int VidPnSourceId; // esi
  __int64 v46; // rdx
  __int64 v47; // rdx
  DXGADAPTER *v48; // rcx
  int v49; // ecx
  UINT v50; // ecx
  int v51; // ecx
  UINT v52; // ecx
  UINT v53; // ecx
  UINT v54; // edx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  int v60; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  int v63; // r8d
  __int64 v64; // rdx
  int v65; // r13d
  int v66; // eax
  __int64 v67; // rdx
  struct DXGALLOCATION *v68; // r14
  __int64 v69; // rdx
  __int64 v70; // r8
  DXGDEVICE *v71; // rcx
  COREDEVICEACCESS *v72; // rbx
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 *v78; // rbx
  __int64 v79; // rax
  UINT v80; // ebx
  __int64 v81; // rcx
  struct VIDMM_GLOBAL *v82; // r14
  VIDMM_EXPORT *v83; // r13
  struct DXGCONTEXT **v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r8
  struct _EX_RUNDOWN_REF *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  _QWORD *v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rdx
  D3DKMT_PRESENT_MODEL Model; // eax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v98; // rsi
  const RECT *pSrcSubRects; // rax
  UINT v100; // edx
  DXGPRESENT *v101; // rcx
  DXGPRESENT *v102; // rcx
  DXGADAPTER *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned int v106; // ebx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  BOOL v112; // ebx
  __int64 v113; // rcx
  int v114; // eax
  int v115; // esi
  HANDLE CurrentThreadId; // rax
  HANDLE v117; // r13
  __int64 v118; // rcx
  __int64 v119; // rdx
  int v120; // esi
  CWin32kLocks *v121; // rbx
  __int64 v122; // rdx
  HDC v123; // rcx
  int v124; // eax
  __int64 v125; // rcx
  HDC v126; // rbx
  HDEV v127; // rsi
  __int64 v128; // rcx
  __int64 v129; // rax
  int v130; // ecx
  __int64 v131; // rcx
  HDC v132; // rsi
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v134; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v135; // rbx
  COREDEVICEACCESS *v136; // r13
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v138; // rcx
  struct tagRECT *DdiSubRectList; // rax
  __int64 BroadcastContextCount; // rcx
  __int64 v141; // rax
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // rbx
  unsigned int i; // r13d
  unsigned int v146; // ecx
  unsigned int v147; // eax
  const RECT *v148; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v149; // ecx
  UINT v150; // ebx
  __int64 v151; // r9
  __int128 *v152; // r8
  RECT *v153; // rdx
  struct _VIDMM_DMA_BUFFER **v154; // rax
  __int64 v155; // rax
  struct VIDMM_GLOBAL *v156; // rsi
  VIDMM_EXPORT *v157; // r14
  __int64 v158; // r11
  __int64 v159; // r14
  unsigned int v160; // esi
  unsigned int v161; // ebx
  unsigned int v162; // edx
  unsigned int v163; // r10d
  __int64 v164; // r11
  __int64 v165; // r8
  unsigned int v166; // r9d
  __int64 v167; // rcx
  int v168; // eax
  __int64 SubRectCnt; // rdx
  const RECT *pDstSubRects; // rcx
  signed __int64 v171; // r8
  __int64 v172; // rax
  __int128 v173; // xmm0
  __int64 v174; // rax
  __int64 v175; // rsi
  __int64 v176; // rax
  __int64 v177; // r8
  int v178; // ecx
  __int64 v179; // rdx
  __int64 v180; // rcx
  struct DXGALLOCATION **v181; // rax
  struct DXGALLOCATION *v182; // rdx
  __int64 v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // rcx
  __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rdx
  CWin32kLocks *v192; // r12
  struct _VIDMM_DMA_BUFFER *v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rax
  int v196; // eax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r14
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // r9d
  __int64 v205; // rax
  _QWORD *v206; // rax
  int v207; // r14d
  _QWORD *v208; // rax
  struct DXGALLOCATION *v209; // rcx
  _QWORD *v210; // rax
  struct DXGALLOCATION *v211; // rcx
  int v212; // r9d
  __int64 v213; // rax
  __int64 v214; // rcx
  unsigned int v215; // esi
  DXGADAPTER *v216; // rcx
  __int64 v217; // rax
  struct DXGALLOCATION *v218; // rdx
  __int64 v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v223; // eax
  __int64 v224; // rcx
  unsigned int v225; // eax
  __int64 v226; // rdx
  LONG v227; // eax
  __int64 v228; // r8
  unsigned int v229; // r9d
  unsigned int v230; // eax
  unsigned int v231; // ebx
  __int64 v232; // r14
  const struct tagRECT *v233; // rdx
  __int64 v234; // rdx
  __int64 v235; // rcx
  LONG v236; // eax
  LONG v237; // r9d
  __int64 v238; // rcx
  const RECT *v239; // rax
  unsigned int v240; // r10d
  int v241; // r8d
  int v242; // r9d
  __int64 v243; // rdx
  RECT SrcRect; // xmm0
  _QWORD *v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rbx
  unsigned int v249; // r14d
  UINT v250; // r8d
  RECT v251; // xmm0
  _QWORD *v252; // rax
  LONG v253; // eax
  int v254; // eax
  unsigned int v255; // ebx
  __int64 v256; // r14
  const struct tagRECT *v257; // rdx
  __int64 v258; // rdx
  __int64 v259; // rcx
  UINT Color; // eax
  _QWORD *v261; // rax
  __int64 v262; // rdx
  __int64 v263; // rcx
  _QWORD *v264; // rax
  __int64 v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rax
  _QWORD *v268; // rax
  DXGADAPTER *v269; // rcx
  __int64 v270; // rax
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  __int64 v274; // rax
  __int64 v275; // rdx
  __int64 v276; // rdx
  _QWORD *v277; // rax
  __int64 v278; // rcx
  __int64 v279; // rax
  bool IsFullWDDMDevice; // al
  struct _KTHREAD **v281; // rcx
  unsigned int v282; // edx
  int v283; // ebx
  int v284; // eax
  UINT v285; // ecx
  __int64 v286; // rdx
  int v287; // eax
  __int64 v288; // rdx
  __int64 v289; // rcx
  __int64 v290; // rdx
  __int64 v291; // rax
  __int64 v292; // rdx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v294; // rdx
  int v295; // eax
  __int64 v296; // rdx
  _QWORD *v297; // rax
  struct DXGALLOCATION *v298; // rcx
  __int64 v299; // rax
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // rax
  bool v303; // al
  _QWORD *v304; // rax
  int v305; // eax
  int v306; // ecx
  __int64 v307; // r10
  __int64 v308; // r13
  unsigned int v309; // r14d
  unsigned int v310; // ebx
  __int64 v311; // r11
  unsigned int v312; // edx
  unsigned int v313; // r10d
  __int64 v314; // r8
  unsigned int v315; // r9d
  __int64 v316; // rcx
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v320; // eax
  __int64 v321; // rdx
  _QWORD *v322; // rax
  __int128 v323; // xmm0
  __int64 v324; // rax
  int v325; // eax
  __int64 v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // rbx
  _QWORD *v329; // rax
  __int64 v330; // rcx
  UINT v331; // eax
  enum _D3DDDIFORMAT v332; // ebx
  _QWORD *v333; // rax
  __int64 v334; // rax
  _QWORD *v335; // rax
  __int64 v336; // rax
  __int64 v337; // rax
  __int64 v338; // rax
  int v339; // eax
  __int64 v340; // rax
  COREDEVICEACCESS *v341; // rbx
  __int64 v342; // rdx
  int v343; // eax
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // rax
  int v347; // eax
  unsigned __int8 v348; // r9
  struct _VIDMM_DMA_BUFFER *v349; // rdx
  __int64 v350; // rax
  __int64 v351; // rdx
  int v352; // eax
  __int64 v353; // rcx
  __int64 v354; // r13
  __int64 v355; // rax
  int v356; // r13d
  char v357; // si
  int v358; // ebx
  __int64 v359; // rax
  __int64 v360; // rcx
  __int64 v361; // rax
  __int64 v362; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v363; // r8d
  struct _EX_RUNDOWN_REF *v364; // r13
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  __int64 v369; // rax
  __int64 v370; // rax
  struct tagRECT *v371; // rax
  int v372; // ebx
  __int64 v373; // rcx
  __int64 v374; // rdx
  __int64 v375; // rcx
  __int64 v376; // r8
  unsigned int v377; // ebx
  struct DXGPROCESS *v378; // r14
  int v379; // r9d
  __int64 v380; // rax
  __int64 v381; // r8
  int v382; // ecx
  __int64 v383; // rcx
  __int64 v384; // rax
  struct DXGALLOCATION *v385; // rdx
  __int64 v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // rax
  __int64 v389; // rbx
  struct DXGPROCESS *v390; // rax
  int v391; // ebx
  __int64 v392; // rdx
  __int64 v393; // rax
  UINT v394; // r13d
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF v395; // ebx
  __int64 v396; // rcx
  struct VIDMM_GLOBAL *v397; // rsi
  VIDMM_EXPORT *v398; // r14
  __int64 v399; // r11
  __int64 v400; // rsi
  UINT v401; // ebx
  __int64 v402; // r11
  unsigned int v403; // edx
  unsigned int v404; // r10d
  __int64 v405; // r8
  unsigned int v406; // r9d
  __int64 v407; // rcx
  DXGDEVICE *v408; // rbx
  int v409; // r12d
  char v410; // bl
  __int64 v411; // rdx
  __int64 v412; // rcx
  COREDEVICEACCESS *v413; // rcx
  struct DXGDEVICE *v414; // rsi
  __int64 v415; // rbx
  struct DXGPROCESS *v416; // rax
  unsigned int v417; // eax
  __int64 v418; // rax
  DXGDEVICE *v419; // rcx
  __int64 v420; // rdx
  __int64 v421; // rcx
  __int64 v422; // rax
  __int64 v423; // rax
  int v424; // eax
  int v425; // ecx
  bool v426; // bl
  int v427; // esi
  HDC v428; // rax
  __int64 v429; // rdx
  __int64 v430; // rcx
  __int64 v431; // rax
  struct DXGDEVICE *v432; // rsi
  __int64 v433; // rbx
  struct DXGPROCESS *v434; // rax
  __int64 v435; // rax
  DXGDEVICE *v436; // rbx
  char v437; // bl
  __int64 v438; // rdx
  __int64 v439; // rcx
  __int64 v440; // rax
  __int64 v441; // rbx
  int v442; // eax
  int v443; // ecx
  HDC v444; // rax
  __int64 v445; // rdx
  __int64 v446; // rcx
  __int64 v447; // rax
  int v448; // eax
  __int64 v449; // rax
  __int64 v450; // rax
  D3DKMT_HANDLE *BroadcastContext; // rdx
  __int64 v452; // r8
  __int64 v453; // rcx
  int CurrentOrientation; // eax
  int v455; // ecx
  __int64 v456; // rbx
  struct DXGPROCESS *v457; // rax
  RECT DstRect; // xmm0
  __int64 v459; // rcx
  __int64 v460; // rax
  __int64 v461; // rax
  unsigned int v462; // r9d
  __int64 v463; // r10
  int v464; // edx
  D3DKMT_HANDLE *v465; // rcx
  _OWORD *v466; // rdx
  __int128 v467; // xmm1
  __int128 v468; // xmm0
  __int128 v469; // xmm1
  __int128 v470; // xmm0
  __int128 v471; // xmm1
  __int128 v472; // xmm0
  __int128 v473; // xmm1
  __int64 v474; // rcx
  int v475; // eax
  __int64 v476; // rax
  __int64 v477; // rax
  struct _DXGKARG_PRESENT *v478; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v479; // [rsp+20h] [rbp-100h]
  struct tagRECT *v480; // [rsp+28h] [rbp-F8h]
  struct tagRECT *Src; // [rsp+40h] [rbp-E0h]
  int Srca; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v485; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v486; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v487[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v488; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v489; // [rsp+68h] [rbp-B8h]
  __int64 v490; // [rsp+70h] [rbp-B0h]
  __int64 v491; // [rsp+78h] [rbp-A8h]
  __int64 v492; // [rsp+80h] [rbp-A0h]
  __int64 v493; // [rsp+88h] [rbp-98h]
  __int64 v494; // [rsp+90h] [rbp-90h]
  __int64 v495; // [rsp+98h] [rbp-88h]
  struct DXGALLOCATION *v497; // [rsp+A8h] [rbp-78h] BYREF
  CWin32kLocks *v498; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v499; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v500; // [rsp+BCh] [rbp-64h]
  unsigned int v501; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v502; // [rsp+C8h] [rbp-58h] BYREF
  char v503; // [rsp+D0h] [rbp-50h]
  DXGADAPTERSTOPRESETLOCKSHARED *v504; // [rsp+D8h] [rbp-48h]
  unsigned int hSource; // [rsp+E0h] [rbp-40h]
  struct DXGALLOCATION *v506; // [rsp+E8h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v507; // [rsp+F0h] [rbp-30h] BYREF
  struct DXGCONTEXT **v508; // [rsp+F8h] [rbp-28h]
  unsigned int v509; // [rsp+100h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v510; // [rsp+108h] [rbp-18h] BYREF
  struct _DXGKARG_PRESENT v511; // [rsp+110h] [rbp-10h] BYREF
  struct tagRECT Source1; // [rsp+1C0h] [rbp+A0h] BYREF
  __int128 v513; // [rsp+1D0h] [rbp+B0h] BYREF
  _D3DKMT_LOCK2 v514; // [rsp+1E0h] [rbp+C0h] BYREF
  unsigned int v515[6]; // [rsp+1F8h] [rbp+D8h] BYREF
  _OWORD v516[35]; // [rsp+210h] [rbp+F0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v517; // [rsp+440h] [rbp+320h] BYREF
  int v518; // [rsp+47Ch] [rbp+35Ch]
  _DXGKARG_DESCRIBEALLOCATION v519; // [rsp+480h] [rbp+360h] BYREF
  _BYTE v521[64]; // [rsp+4C0h] [rbp+3A0h] BYREF
  _BYTE v522[64]; // [rsp+500h] [rbp+3E0h] BYREF
  _BYTE v523[64]; // [rsp+540h] [rbp+420h] BYREF

  v8 = a7;
  v498 = a5;
  v508 = a6;
  v10 = *((_QWORD *)this + 2);
  v504 = a4;
  *(_QWORD *)&v514.hDevice = a7;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v10 + 16)) )
  {
    v202 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v202 + 24) = 3706LL;
    WdLogEvent5_WdAssertion(v202);
  }
  if ( *((_QWORD *)this + 47) )
  {
    v203 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v203 + 24) = 3707LL;
    WdLogEvent5_WdAssertion(v203);
  }
  if ( (a2->Flags.Value & 0x4000) != 0
    || (Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL)),
        v12 = a2->Flags.Value & 0x12000,
        *(_QWORD *)&v513 = Win32kInterface,
        (_DWORD)v12 == 73728) )
  {
    v174 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    LODWORD(v68) = -1073741811;
    *(_QWORD *)(v174 + 24) = this;
    *(_QWORD *)(v174 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v174);
    return (unsigned int)v68;
  }
  memset(&v511, 0, sizeof(v511));
  v15 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v15;
  v17 = (a2->Flags.Value & 0x10000) == 0;
  v499 = hDestination;
  if ( v17 )
    v15 |= 1u;
  v18 = v15 | 0x100;
  *(_DWORD *)a7 = v18;
  *(_DWORD *)a7 = v18 ^ (v18 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v501 = 0;
  v500 = 0;
  LODWORD(v507) = 0;
  Width = 0;
  LODWORD(v502) = 0;
  Height = 0;
  v515[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v497, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v506, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v510, 0LL);
  v23 = a2->hDestination;
  v509 = 0;
  if ( !v23 )
    goto LABEL_14;
  v175 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v175 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v204 = *(_DWORD *)(v175 + 232);
      if ( v204 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v204);
    }
    ExAcquirePushLockSharedEx(v175 + 208, 0LL);
  }
  v176 = (v23 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v176 >= *(_DWORD *)(v175 + 256) )
    goto LABEL_223;
  v177 = *(_QWORD *)(v175 + 240);
  v178 = *(_DWORD *)(v177 + 16 * v176 + 8);
  if ( ((v23 >> 25) & 0x60) != (*(_BYTE *)(v177 + 16 * v176 + 8) & 0x60) || (v178 & 0x2000) != 0 || (v178 & 0x1F) == 0 )
    goto LABEL_223;
  v179 = 2LL * (unsigned int)v176;
  v180 = v178 & 0x1F;
  v181 = (struct DXGALLOCATION **)(v177 + 16LL * (unsigned int)v176);
  if ( (_BYTE)v180 != 5 )
  {
    v205 = WdLogNewEntry5_WdError(v180, v179);
    *(_QWORD *)(v205 + 24) = 267LL;
    WdLogEvent5_WdError(v205);
LABEL_223:
    v182 = 0LL;
    goto LABEL_208;
  }
  v182 = *v181;
LABEL_208:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v502, v182);
  ExReleasePushLockSharedEx(v175 + 208, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v506, &v502);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v502, v183);
  if ( !v506 )
  {
    v206 = (_QWORD *)WdLogNewEntry5_WdWarning(v185, v184, v186);
    v207 = -1073741811;
    v206[3] = -1073741811LL;
    v206[4] = this;
    v206[5] = a2->hDestination;
    goto LABEL_335;
  }
  v187 = *((_QWORD *)this + 2);
  v188 = *(_QWORD *)(v187 + 16);
  v189 = *(_QWORD *)(v188 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v506 + 1) + 16LL) + 16LL) != v189 )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v188, v189);
    v208[3] = *((_QWORD *)this + 2);
    v209 = v506;
    goto LABEL_257;
  }
  memset(&v519.Width, 0, 40);
  v519.hAllocation = *(HANDLE *)(*((_QWORD *)v506 + 6) + 16LL);
  v190 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v187 + 16), &v519);
  v40 = v190;
  if ( v190 < 0 )
  {
    v210 = (_QWORD *)WdLogNewEntry5_WdError(v21, v191);
    v210[3] = v40;
    v210[4] = this;
    v210[5] = *(_QWORD *)(*((_QWORD *)v506 + 6) + 16LL);
    v211 = v506;
    goto LABEL_261;
  }
  Width = v519.Width;
  Height = v519.Height;
  LODWORD(v502) = v519.Width;
  v515[0] = v519.Height;
LABEL_14:
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v24 = a2->hSource;
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v212 = *(_DWORD *)(v25 + 232);
        if ( v212 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v212);
      }
      ExAcquirePushLockSharedEx(v25 + 208, 0LL);
    }
    v26 = (v24 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *(_DWORD *)(v25 + 256) )
    {
      v27 = *(_QWORD *)(v25 + 240);
      v28 = *(_DWORD *)(v27 + 16 * v26 + 8);
      if ( ((v24 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60) && (v28 & 0x2000) == 0 && (v28 & 0x1F) != 0 )
      {
        v29 = 2LL * (unsigned int)v26;
        v30 = v28 & 0x1F;
        v31 = (struct DXGALLOCATION **)(v27 + 16LL * (unsigned int)v26);
        if ( (_BYTE)v30 == 5 )
        {
          v32 = *v31;
LABEL_22:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v507, v32);
          ExReleasePushLockSharedEx(v25 + 208, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign(&v497, &v507);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v507, v33);
          v35 = v497;
          if ( !v497 )
          {
            v206 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, 0LL, Format);
            v207 = -1073741811;
            v206[3] = -1073741811LL;
            v206[4] = this;
            v206[5] = a2->hSource;
            goto LABEL_335;
          }
          v17 = (a2->Flags.Value & 0x10000000) == 0;
          memset(&v519.Width, 0, 40);
          v21 = *(_QWORD *)(*((_QWORD *)v497 + 6) + 16LL);
          v519.hAllocation = (HANDLE)v21;
          if ( !v17 )
          {
            v501 = a2[1].hSource;
            v500 = a2[1].hDestination;
            LODWORD(v507) = a2[1].Color;
            goto LABEL_27;
          }
          v36 = *(_QWORD *)(*((_QWORD *)v497 + 1) + 16LL);
          if ( *(_QWORD *)(v36 + 16) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
          {
            v37 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v519);
            v40 = v37;
            if ( v37 >= 0 )
            {
              Format = (unsigned int)v519.Format;
              v21 = v519.Width;
              v35 = v497;
              LODWORD(v507) = v519.Format;
              v500 = v519.Height;
              v501 = v519.Width;
LABEL_27:
              Height = v515[0];
              goto LABEL_28;
            }
            v210 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
            v210[3] = v40;
            v210[4] = this;
            v210[5] = *(_QWORD *)(*((_QWORD *)v497 + 6) + 16LL);
            v211 = v497;
LABEL_261:
            v210[6] = v211;
            WdLogEvent5_WdError(v210);
            v207 = v40;
            goto LABEL_336;
          }
          v208 = (_QWORD *)WdLogNewEntry5_WdError(v36, v497);
          v208[3] = *((_QWORD *)this + 2);
          v209 = v497;
LABEL_257:
          v207 = -1073741811;
          v208[4] = v209;
          v208[5] = -1073741811LL;
LABEL_259:
          WdLogEvent5_WdError(v208);
LABEL_336:
          v254 = v207;
          goto LABEL_337;
        }
        v213 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v213 + 24) = 267LL;
        WdLogEvent5_WdError(v213);
      }
    }
    v32 = 0LL;
    goto LABEL_22;
  }
  v35 = v497;
LABEL_28:
  v41 = a2->hDestination;
  if ( !v41
    || (Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
        (*(_DWORD *)&Value & 0x10000) != 0) )
  {
    Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&Value & 4) == 0 )
    {
      if ( (*(_BYTE *)&Value & 3) == 0 )
      {
        if ( (*(_WORD *)&Value & 0x8000) == 0 )
        {
          v335 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
          LODWORD(v68) = -1073741811;
          v335[3] = -1073741811LL;
          v335[4] = this;
          v335[5] = a2->pSrcSubRects;
          v335[6] = a2->SubRectCnt;
          v335[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v335);
          goto LABEL_96;
        }
        if ( (*(_WORD *)&Value & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( (unsigned int)Model <= D3DKMT_PM_FLIPMANAGER )
          {
            v21 = 644LL;
            if ( _bittest((const int *)&v21, Model) )
            {
              if ( Model != D3DKMT_PM_REDIRECTED_FLIP
                || a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              {
                v98 = v504;
                LODWORD(v68) = SubmitPresentHistoryTokenPreparation(
                                 v504,
                                 a3,
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                 &a2->PresentHistoryToken,
                                 a2->PresentLimitSemaphore,
                                 (a2->Flags.Value & 0x10) != 0);
                if ( (int)v68 < 0 )
                  goto LABEL_100;
                TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD(
                  (TOKEN_BINDING_GUARD *)&v517,
                  &a2->PresentHistoryToken,
                  v98,
                  a3);
                LODWORD(v517.hAllocation) = SubmitPresentHistoryToken(
                                              &a2->PresentHistoryToken,
                                              a3,
                                              v504,
                                              v498,
                                              1,
                                              0LL,
                                              (struct DXGK_PRESENT_PARAMS *)a2,
                                              a7,
                                              this,
                                              0LL,
                                              0LL);
                LODWORD(v68) = v517.hAllocation;
                TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v517);
                v72 = a3;
                v84 = v508;
                goto LABEL_91;
              }
            }
          }
        }
        v297 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
        LODWORD(v68) = -1073741811;
        v297[3] = this;
        v297[4] = a2->Flags.Value;
        v297[5] = -1073741811LL;
LABEL_447:
        WdLogEvent5_WdWarning(v297);
        goto LABEL_100;
      }
      if ( (*(_WORD *)&Value & 0x100) != 0 )
      {
        v21 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v21 + 1848) )
        {
          v297 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
          LODWORD(v68) = -1073741811;
          v297[3] = *((_QWORD *)this + 2);
          v297[4] = -1073741811LL;
          goto LABEL_447;
        }
        if ( *(_DWORD *)(v21 + 1856) <= a2->VidPnSourceId )
        {
          v336 = WdLogNewEntry5_WdWarning(v21, v35, Format);
          *(_QWORD *)(v336 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v336 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 1856LL);
          WdLogEvent5_WdWarning(v336);
          LODWORD(v68) = -1073741811;
          goto LABEL_100;
        }
      }
      pSrcSubRects = a2->pSrcSubRects;
      if ( (*(_BYTE *)&Value & 2) != 0 )
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || (*(_WORD *)&Value & 0x86BD) != 0 )
          goto LABEL_445;
        hSource = 0;
      }
      else
      {
        if ( !pSrcSubRects || !a2->SubRectCnt || !v501 || !v500 || (*(_WORD *)&Value & 0x802E) != 0 )
          goto LABEL_445;
        v21 = (*(unsigned int *)&Value >> 9) & 1;
        if ( ((*(unsigned int *)&Value >> 9) & 1) != 0 || (*(_WORD *)&Value & 0x400) != 0 )
        {
          if ( (_DWORD)v21 == ((*(unsigned int *)&Value >> 10) & 1) )
          {
            v297 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
            LODWORD(v68) = -1073741811;
            v297[3] = -1073741811LL;
            v297[4] = this;
            v297[5] = a2->pSrcSubRects;
            v297[6] = a2->SubRectCnt;
            v297[7] = a2->Flags.Value;
            goto LABEL_447;
          }
          if ( (*(_WORD *)&Value & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
                  *((const struct DXGDEVICE **)this + 2),
                  a2->VidPnSourceId) )
          {
LABEL_445:
            v297 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
            LODWORD(v68) = -1073741811;
            v297[3] = this;
            v297[4] = a2->pSrcSubRects;
            v297[5] = a2->SubRectCnt;
            v298 = (struct DXGALLOCATION *)a2->Flags.Value;
            v297[7] = -1073741811LL;
LABEL_446:
            v297[6] = v298;
            goto LABEL_447;
          }
        }
      }
      v100 = a2->Flags.Value & 3 | v511.Flags.Value & 0xFFFFFF8C | (a2->Flags.Value >> 5) & 0x70;
      v511.Color = a2->Color;
      v101 = (DXGPRESENT *)*((_QWORD *)this + 19);
      v511.Flags.Value = v100;
      LODWORD(v68) = DXGPRESENT::CheckInput(v101, a2, v501, v500);
      if ( (int)v68 < 0 )
        goto LABEL_96;
      v102 = (DXGPRESENT *)*((_QWORD *)this + 19);
      if ( (*((_DWORD *)v102 + 1) & 4) != 0 )
        goto LABEL_644;
      DXGPRESENT::CheckOutput(v102, Width, Height);
      v103 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
      if ( !v103 || DXGADAPTER::IsDisplayOnlyAdapter(v103) )
      {
        v339 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (a2->Flags.Value & 0x10) == 0, a3);
        v68 = (struct DXGALLOCATION *)v339;
        if ( v339 < 0 )
          goto LABEL_448;
      }
      else
      {
        v104 = *((_QWORD *)this + 2);
        v105 = *(_QWORD *)(*(_QWORD *)(v104 + 16) + 16LL);
        if ( *(_QWORD *)(v104 + 1848) != v105 )
        {
          v337 = WdLogNewEntry5_WdAssertion(v105, v104);
          *(_QWORD *)(v337 + 24) = 4930LL;
          WdLogEvent5_WdAssertion(v337);
          v104 = *((_QWORD *)this + 2);
        }
        v106 = 0;
        if ( *(_DWORD *)(v104 + 1856) )
        {
          while ( 1 )
          {
            v107 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v106, (a2->Flags.Value & 0x10) == 0, a3);
            v68 = (struct DXGALLOCATION *)v107;
            if ( v107 < 0 )
              break;
            if ( ++v106 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL) )
              goto LABEL_131;
          }
LABEL_448:
          v338 = WdLogNewEntry5_WdEvent(v109, v108);
          *(_QWORD *)(v338 + 24) = v68;
          *(_QWORD *)(v338 + 32) = this;
          WdLogEvent5_WdEvent(v338);
          goto LABEL_100;
        }
      }
LABEL_131:
      v92 = (_QWORD *)((char *)this + 376);
      LODWORD(v68) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 47, a3, 0);
      if ( (int)v68 < 0 )
        goto LABEL_97;
      if ( !*v92 && !*((_BYTE *)this + 457) )
      {
        v340 = WdLogNewEntry5_WdAssertion(v111, v110);
        *(_QWORD *)(v340 + 24) = 4968LL;
        WdLogEvent5_WdAssertion(v340);
      }
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      v112 = 0;
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        if ( a2->hDestination )
        {
          v113 = *((_QWORD *)v506 + 6);
          v114 = *(_DWORD *)(v113 + 4);
          *(_DWORD *)(v113 + 4) = v114 | 0x400;
          v112 = (v114 & 0x400) == 0;
        }
      }
      else
      {
        v341 = a3;
        COREDEVICEACCESS::Release(a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v517, v342);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
        v343 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
        v68 = (struct DXGALLOCATION *)v343;
        if ( v343 < 0 )
        {
          v346 = WdLogNewEntry5_WdEvent(v345, v344);
          *(_QWORD *)(v346 + 24) = v68;
          *(_QWORD *)(v346 + 32) = this;
          WdLogEvent5_WdEvent(v346);
          goto LABEL_469;
        }
        v112 = 0;
      }
      v115 = (*(__int64 (**)(void))(v513 + 8))();
      LODWORD(v502) = v115;
      CurrentThreadId = PsGetCurrentThreadId();
      v17 = *((_BYTE *)this + 457) == 0;
      v117 = CurrentThreadId;
      *(_QWORD *)&Source1.left = CurrentThreadId;
      if ( v17 )
        VIDSCH_EXPORT::VidSchGetMonitorPowerState(
          *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
          *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL));
      v118 = *((_QWORD *)this + 19);
      v119 = -1071775738LL;
      if ( *(_DWORD *)(v118 + 8) == v115
        && *(HANDLE *)(v118 + 56) == v117
        && *(HWND *)(v118 + 48) == a2->hWindow
        && !*(_DWORD *)(v118 + 64)
        && !v112 )
      {
        v347 = *(_DWORD *)(v118 + 4);
        if ( (v347 & 0x108) == 0 )
        {
          if ( (v347 & 1) != 0 )
          {
            LODWORD(v68) = -1071775738;
            goto LABEL_149;
          }
          if ( (a2->Flags.Value & 0x10000) != 0 || (v347 & 0x10) != 0 )
            goto LABEL_149;
          v348 = 0;
          goto LABEL_466;
        }
      }
      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, -1071775738LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
      COREDEVICEACCESS::Release(a3);
      v120 = 0;
      v121 = v498;
      LODWORD(v68) = CWin32kLocks::Lock(v498, a2->hWindow, HIWORD(a2->Flags.Value) & 1, 1, 0);
      if ( (a2->Flags.Value & 0x10000) == 0
        || (v123 = *(HDC *)v121,
            *(_QWORD *)v515 = 0LL,
            (*(void (__fastcall **)(HDC, unsigned int *))(v513 + 232))(v123, v515),
            *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = *(_QWORD *)v515,
            (a2->Flags.Value & 0x10000) == 0) )
      {
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v517, v122);
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
      v124 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      if ( v124 >= 0 )
      {
        if ( (int)v68 < 0 )
          goto LABEL_150;
        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
        {
          v350 = WdLogNewEntry5_WdEvent(v125, v119);
          *(_QWORD *)(v350 + 24) = 0LL;
          *(_QWORD *)(v350 + 32) = this;
          WdLogEvent5_WdEvent(v350);
          v349 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
          if ( v349 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
              v349,
              0LL);
            *((_QWORD *)this + 47) = 0LL;
          }
          LODWORD(v68) = 0;
          goto LABEL_617;
        }
        v126 = *(HDC *)v121;
        v127 = (HDEV)*((_QWORD *)v498 + 2);
        LODWORD(v68) = DXGPRESENT::CheckVisRgn(
                         *((DXGPRESENT **)this + 19),
                         a2,
                         v126,
                         v127,
                         *((const struct DXGDEVICE **)this + 2),
                         v501,
                         v500,
                         (enum _D3DDDIFORMAT)v507,
                         1);
        if ( (_DWORD)v68 != 261 )
          goto LABEL_147;
        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, v119);
        COREDEVICEACCESS::Release(a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
        if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
          LODWORD(v68) = -1071775738;
        if ( (a2->Flags.Value & 0x10000) == 0 )
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v517, v351);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
        v352 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
        v354 = v352;
        if ( v352 >= 0 )
        {
          if ( (_DWORD)v68 != -1071775738 )
            LODWORD(v68) = DXGPRESENT::CheckVisRgn(
                             *((DXGPRESENT **)this + 19),
                             a2,
                             v126,
                             v127,
                             *((const struct DXGDEVICE **)this + 2),
                             v501,
                             v500,
                             (enum _D3DDDIFORMAT)v507,
                             0);
          v117 = *(HANDLE *)&Source1.left;
LABEL_147:
          v128 = *((_QWORD *)this + 19);
          if ( (int)v68 < 0 )
          {
            if ( (*(_BYTE *)(v128 + 4) & 1) != 0 )
            {
              *(_QWORD *)(v128 + 56) = v117;
              *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v502;
            }
            goto LABEL_149;
          }
          *(_QWORD *)(v128 + 56) = v117;
          if ( (a2->Flags.Value & 0x10000) != 0 )
          {
LABEL_149:
            v121 = v498;
            v120 = 0;
LABEL_150:
            v129 = *((_QWORD *)this + 19);
            v503 = 0;
            v130 = *(_DWORD *)(v129 + 4);
            if ( (v130 & 0x10) == 0 )
            {
              if ( (int)v68 >= 0 )
              {
                if ( (v130 & 2) != 0 )
                {
                  v192 = v498;
                  v136 = a3;
                  goto LABEL_216;
                }
                if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v513 + 224))(0LL, 0LL, 0LL) )
                {
                  if ( (a2->Flags.Value & 0x12100) == 0x10000 )
                    goto LABEL_155;
                  v450 = WdLogNewEntry5_WdAssertion(v131, v119);
                  *(_QWORD *)(v450 + 24) = 5596LL;
                }
                else
                {
                  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) || (a2->Flags.Value & 0x4000000) != 0 )
                    goto LABEL_155;
                  v450 = WdLogNewEntry5_WdAssertion(v131, v119);
                  *(_QWORD *)(v450 + 24) = 5601LL;
                }
                WdLogEvent5_WdAssertion(v450);
LABEL_155:
                if ( (a2->Flags.Value & 0x10000) == 0 )
                  goto LABEL_164;
                v132 = *(HDC *)v121;
                Current = DXGPROCESS::GetCurrent();
                v134 = DXGPROCESS::GetWin32kInterface(Current);
                v135 = v134;
                if ( !v132 )
                  goto LABEL_164;
                if ( !v134 )
                  goto LABEL_164;
                v119 = *((_QWORD *)this + 19);
                if ( *(_DWORD *)(v119 + 440) != a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                  goto LABEL_164;
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
                v136 = a3;
                COREDEVICEACCESS::Release(a3);
                memset(v516, 0, 0x228uLL);
                DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                v138 = (DXGPRESENT *)*((_QWORD *)this + 19);
                LODWORD(v516[0]) = DdiSubRectCnt;
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(v138, 0);
                BroadcastContextCount = a2->BroadcastContextCount;
                *((_QWORD *)&v516[0] + 1) = DdiSubRectList;
                *((_QWORD *)&v516[1] + 1) = *((unsigned int *)this + 6);
                v141 = 1LL;
                LODWORD(v516[1]) = 1;
                if ( (_DWORD)BroadcastContextCount )
                {
                  BroadcastContext = a2->BroadcastContext;
                  v452 = BroadcastContextCount;
                  do
                  {
                    v453 = *BroadcastContext++;
                    *((_QWORD *)&v516[1] + v141 + 1) = v453;
                    v141 = (unsigned int)++LODWORD(v516[1]);
                    --v452;
                  }
                  while ( v452 );
                }
                if ( !*((_BYTE *)this + 457)
                  && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                     *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
                                     *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 768LL)) )
                {
                  v503 = 1;
                  LOBYTE(v516[34]) = 1;
                }
                (*((void (__fastcall **)(HDC, _OWORD *))v135 + 30))(v132, v516);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
                v142 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                v144 = v142;
                if ( v142 >= 0 )
                {
LABEL_164:
                  for ( i = 0; ; ++i )
                  {
                    v146 = (a2->Flags.Value & 0x10000) != 0 ? 1 : *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL);
                    if ( i >= v146 )
                      break;
                    v511.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
                    if ( v511.SubRectCnt )
                    {
                      if ( (a2->Flags.Value & 0x10000) != 0 )
                      {
                        v147 = v499;
                      }
                      else
                      {
                        v147 = DXGDEVICE::OpenCddPrimaryHandle(
                                 *((DXGDEVICE **)this + 2),
                                 i,
                                 *((_BYTE *)this + 456),
                                 *((_DWORD *)this + 104));
                        v499 = v147;
                      }
                      if ( v147 )
                      {
                        v148 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), i);
                        v149 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                        *(_QWORD *)&Source1.left = v148;
                        v511.pDstSubRects = v148;
                        if ( (*(_WORD *)&v149 & 0x2000) != 0 )
                        {
                          CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
                                                 i,
                                                 1LL);
                          v455 = 0;
                          if ( CurrentOrientation != 1 )
                            v455 = 128;
                          *(_QWORD *)&Source1.left = v511.pDstSubRects;
                          v150 = v455 | v511.Flags.Value & 0xFFFFFF7F;
                          v149 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                          v511.Flags.Value = v150;
                        }
                        else
                        {
                          v150 = v511.Flags.Value;
                        }
                        v151 = *((_QWORD *)this + 2);
                        v513 = 0LL;
                        if ( (*(_DWORD *)&v149 & 0x10000) != 0 )
                          v152 = &v513;
                        else
                          v152 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v151 + 1848) + 2672LL) + 112LL)
                                            + 628LL
                                            + 3968LL * i);
                        v153 = (RECT *)*((_QWORD *)this + 19);
                        v154 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                        v511.SrcRect = v153[9];
                        v511.DstRect.top = v153[8].top - *((_DWORD *)v152 + 1);
                        v511.DstRect.bottom = v153[8].bottom - *((_DWORD *)v152 + 1);
                        v511.DstRect.left = v153[8].left - *(_DWORD *)v152;
                        v511.DstRect.right = v153[8].right - *(_DWORD *)v152;
                        if ( bTracingEnabled && *v154 )
                        {
                          v155 = *(_QWORD *)(v151 + 16);
                          v156 = *(struct VIDMM_GLOBAL **)(v155 + 648);
                          v157 = *(VIDMM_EXPORT **)(v155 + 640);
                          LODWORD(v502) = v511.SubRectCnt;
                          *(_QWORD *)&v513 = VIDMM_EXPORT::VidMmETWAllocationHandle(v157, v156, v499);
                          v158 = VIDMM_EXPORT::VidMmETWAllocationHandle(v157, v156, hSource);
                          v154 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                          v159 = *((_QWORD *)this + 47);
                          v160 = (unsigned int)v502;
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          {
                            LODWORD(v495) = (_DWORD)v502;
                            LODWORD(v494) = v511.DstRect.bottom;
                            LODWORD(v493) = v511.DstRect.top;
                            LODWORD(v492) = v511.DstRect.right;
                            LODWORD(v491) = v511.DstRect.left;
                            LODWORD(v490) = v511.SrcRect.bottom;
                            LODWORD(v489) = v511.SrcRect.top;
                            v487[0] = (enum _D3DDDIFORMAT)v511.SrcRect.right;
                            LODWORD(v486) = v511.SrcRect.left;
                            LODWORD(v485) = v150;
                            LODWORD(Size) = 0;
                            LODWORD(Src) = 1;
                            McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlit,
                              0LL,
                              a2->hWindow,
                              v159,
                              0LL,
                              v158,
                              (_QWORD)v513,
                              Src,
                              Size,
                              v485,
                              v486,
                              *(_QWORD *)v487,
                              v489,
                              v490,
                              v491,
                              v492,
                              v493,
                              v494,
                              v495);
                            v154 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                          }
                          v161 = 0;
                          if ( v160 )
                          {
                            while ( 1 )
                            {
                              v162 = v160 - v161;
                              if ( v160 - v161 > 0x10 )
                                break;
                              v163 = v160 - v161;
                              if ( v162 )
                                goto LABEL_183;
LABEL_185:
                              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                              {
                                LODWORD(v480) = v163;
                                LODWORD(v478) = v162 <= 0x10;
                                McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                                  (__int64)&DxgkControlGuid_Context,
                                  (__int64)&EventBlitRect,
                                  0LL,
                                  v159,
                                  v478,
                                  v480,
                                  &v519,
                                  v521,
                                  v522,
                                  v523);
                              }
                              v161 += 16;
                              if ( v161 >= v160 )
                              {
                                v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v514.hDevice;
                                v154 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 376);
                                goto LABEL_189;
                              }
                            }
                            v163 = 16;
LABEL_183:
                            v164 = *(_QWORD *)&Source1.left;
                            v165 = 0LL;
                            v166 = 0;
                            do
                            {
                              v167 = v166 + v161;
                              ++v166;
                              v167 *= 2LL;
                              v165 += 4LL;
                              *(int *)((char *)&v518 + v165) = *(_DWORD *)(v164 + 8 * v167);
                              *(_DWORD *)&v521[v165 - 4] = *(_DWORD *)(v164 + 8 * v167 + 8);
                              *(_DWORD *)&v521[v165 + 60] = *(_DWORD *)(v164 + 8 * v167 + 4);
                              *(_DWORD *)&v522[v165 + 60] = *(_DWORD *)(v164 + 8 * v167 + 12);
                            }
                            while ( v166 < v163 );
                            goto LABEL_185;
                          }
                        }
LABEL_189:
                        if ( *((_BYTE *)this + 457) )
                        {
                          v456 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                          v457 = DXGPROCESS::GetCurrent();
                          LODWORD(Size) = v511.PrivateDriverDataSize;
                          v168 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v456 + 4208),
                                   v457,
                                   this,
                                   *((_DWORD *)v497 + 24),
                                   *((_DWORD *)v506 + 24),
                                   &v511.SrcRect,
                                   &v511.DstRect,
                                   v511.SubRectCnt,
                                   v511.pDstSubRects,
                                   Size,
                                   (unsigned __int8 *)v511.pPrivateDriverData);
                        }
                        else
                        {
                          v488 = (int)v507;
                          *((_DWORD *)v8 + 29) = i;
                          v168 = DXGCONTEXT::SubmitPresent(
                                   this,
                                   a2,
                                   (struct DXGHWQUEUE **)a2[1].hWindow,
                                   a2->BroadcastContextCount,
                                   v508,
                                   v497,
                                   hSource,
                                   v499,
                                   &v511,
                                   0LL,
                                   *v154,
                                   v8,
                                   v488,
                                   a3);
                        }
                        *((_QWORD *)this + 47) = 0LL;
                        LODWORD(v68) = v168;
                        if ( (a2->Flags.Value & 0x10000) != 0
                          && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                        {
                          SubRectCnt = v511.SubRectCnt;
                          a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                          a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                          if ( (unsigned int)SubRectCnt > 0x10 )
                          {
                            DstRect = v511.DstRect;
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                            a2->PresentHistoryToken.Token.Blt.DirtyRegions.Rects[0] = DstRect;
                          }
                          else
                          {
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = SubRectCnt;
                            if ( (_DWORD)SubRectCnt )
                            {
                              pDstSubRects = v511.pDstSubRects;
                              v171 = (char *)&a2->PresentHistoryToken - (char *)v511.pDstSubRects;
                              v172 = (unsigned int)SubRectCnt;
                              do
                              {
                                v173 = (__int128)*pDstSubRects++;
                                *(_OWORD *)((char *)&pDstSubRects[1].bottom + v171) = v173;
                                --v172;
                              }
                              while ( v172 );
                            }
                          }
                          a2->PresentHistoryToken.TokenSize = 16
                                                            * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, SubRectCnt);
                          LODWORD(v68) = SubmitPresentHistoryToken(
                                           &a2->PresentHistoryToken,
                                           a3,
                                           v504,
                                           v498,
                                           0,
                                           0LL,
                                           (struct DXGK_PRESENT_PARAMS *)a2,
                                           0LL,
                                           this,
                                           0LL,
                                           0LL);
                        }
                        if ( (int)v68 < 0 )
                          break;
                      }
                    }
                  }
                  v136 = a3;
                  goto LABEL_215;
                }
                goto LABEL_614;
              }
              goto LABEL_490;
            }
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, v119);
            if ( (int)v68 < 0 )
            {
LABEL_490:
              v136 = a3;
LABEL_215:
              v192 = v498;
LABEL_216:
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, v119);
              if ( v503 )
              {
                CWin32kLocks::Unlock(v192);
                COREDEVICEACCESS::Release(v136);
                DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 1u);
                LODWORD(v68) = COREDEVICEACCESS::AcquireShared(v136, 0LL);
              }
              v193 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
              if ( v193 )
              {
                if ( (int)v68 >= 0 )
                {
                  v459 = *(unsigned int *)(*((_QWORD *)this + 19) + 4LL);
                  LOBYTE(v459) = (v459 & 0x12) == 16;
                  if ( ((unsigned __int8)v459 & ((*(_BYTE *)&a2->Flags.0 & 2) == 0)) != 0 )
                  {
                    v460 = WdLogNewEntry5_WdAssertion(v459, v193);
                    *(_QWORD *)(v460 + 24) = 5836LL;
                    WdLogEvent5_WdAssertion(v460);
                    v193 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 47);
                  }
                }
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
                  v193,
                  0LL);
                *((_QWORD *)this + 47) = 0LL;
              }
              v194 = *((_QWORD *)this + 19);
              if ( (*(_DWORD *)(v194 + 4) & 0x80) != 0 )
              {
                if ( (unsigned int)((_DWORD)v68 + 1071775738) > 1 )
                {
                  v461 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v194 + 4) >> 7, v193);
                  *(_QWORD *)(v461 + 24) = 5844LL;
                  WdLogEvent5_WdAssertion(v461);
                }
                LODWORD(v68) = 0;
              }
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, (__int64)v193);
              v72 = a3;
              v84 = v508;
              goto LABEL_91;
            }
            v359 = *((_QWORD *)this + 19);
            v360 = *(_DWORD *)(v359 + 4) >> 1;
            LOBYTE(v360) = (*(_DWORD *)(v359 + 4) & 2) != 0;
            if ( (*(_DWORD *)(v359 + 4) & 2) == 0 && a2->BroadcastContextCount )
            {
              v361 = WdLogNewEntry5_WdError(v360, v119);
              *(_QWORD *)(v361 + 24) = 5249LL;
              WdLogEvent5_WdError(v361);
              LODWORD(v68) = -1071774910;
              goto LABEL_490;
            }
            if ( (*(_DWORD *)(v359 + 4) & 2) != 0 )
              goto LABEL_490;
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              v362 = WdLogNewEntry5_WdAssertion(v360, v119);
              *(_QWORD *)(v362 + 24) = 5255LL;
              WdLogEvent5_WdAssertion(v362);
            }
            *(_OWORD *)v515 = 0LL;
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
            v363 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_WORD *)&v363 & 0x100) != 0 )
            {
              v364 = (struct _EX_RUNDOWN_REF *)v515;
              v119 = 3968LL * a2->VidPnSourceId;
              v360 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL) + 112LL);
              *(_OWORD *)v515 = *(_OWORD *)(v119 + v360 + 628);
            }
            else
            {
              v364 = 0LL;
            }
            v502 = v364;
            if ( (*(_BYTE *)&v363 & 1) != 0 )
            {
              if ( *(_BYTE *)&v363 >= 0 )
              {
                v511.SrcRect.bottom = v500;
                right = v501;
                *(_QWORD *)&v511.SrcRect.left = 0LL;
              }
              else
              {
                top = a2->SrcRect.top;
                if ( top < 0 )
                  top = 0;
                v511.SrcRect.top = top;
                left = a2->SrcRect.left;
                if ( left < 0 )
                  left = 0;
                v511.SrcRect.left = left;
                bottom = a2->SrcRect.bottom;
                if ( (int)v500 < bottom )
                  bottom = v500;
                v511.SrcRect.bottom = bottom;
                right = a2->SrcRect.right;
                if ( (int)v501 < right )
                  right = v501;
              }
              v511.SrcRect.right = right;
              v17 = a2->SubRectCnt == 0;
              v511.DstRect = v511.SrcRect;
              v511.Flags.Value ^= (*(_WORD *)&v511.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v363 >> 9)) & 0x800;
              if ( v17 )
              {
                v369 = WdLogNewEntry5_WdAssertion(v360, v119);
                *(_QWORD *)(v369 + 24) = 5302LL;
                WdLogEvent5_WdAssertion(v369);
              }
              if ( !a2->pSrcSubRects )
              {
                v370 = WdLogNewEntry5_WdAssertion(v360, v119);
                *(_QWORD *)(v370 + 24) = 5303LL;
                WdLogEvent5_WdAssertion(v370);
              }
              LODWORD(v68) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
              if ( (int)v68 < 0 )
                goto LABEL_490;
              v371 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
              v17 = a2->SubRectCnt == 0;
              v372 = 0;
              v373 = 0LL;
              v511.SubRectCnt = 0;
              v511.pDstSubRects = v371;
              if ( v17 )
                goto LABEL_490;
              while ( 1 )
              {
                if ( DXGPRESENT::IntersectRect(&v371[v373], &a2->pSrcSubRects[v372], &v511.SrcRect) )
                  v373 = ++v511.SubRectCnt;
                else
                  v373 = v511.SubRectCnt;
                if ( ++v372 >= a2->SubRectCnt )
                  break;
                v371 = (struct tagRECT *)v511.pDstSubRects;
              }
              if ( !(_DWORD)v373 )
                goto LABEL_490;
              if ( DXGPRESENT::PrepareStagingBuffer(
                     *((DXGPRESENT **)this + 19),
                     *((struct DXGDEVICE **)this + 2),
                     a2->hSource,
                     a3,
                     &v499) < 0 )
                goto LABEL_596;
              if ( *((_BYTE *)this + 457) )
              {
                v377 = v499;
                v378 = DXGPROCESS::GetCurrent();
                KeEnterCriticalRegion();
                if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v378 + 208, 0LL) )
                {
                  if ( bTracingEnabled )
                  {
                    v379 = *((_DWORD *)v378 + 58);
                    if ( v379 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventBlockThread, 0LL, v379);
                  }
                  ExAcquirePushLockSharedEx((char *)v378 + 208, 0LL);
                }
                v380 = (v377 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v380 < *((_DWORD *)v378 + 64) )
                {
                  v381 = *((_QWORD *)v378 + 30);
                  v382 = *(_DWORD *)(v381 + 16 * v380 + 8);
                  if ( ((v377 >> 25) & 0x60) == (*(_BYTE *)(v381 + 16 * v380 + 8) & 0x60)
                    && (v382 & 0x2000) == 0
                    && (v382 & 0x1F) != 0 )
                  {
                    v383 = v382 & 0x1F;
                    if ( (_BYTE)v383 == 5 )
                    {
                      v385 = *(struct DXGALLOCATION **)(v381 + 16LL * (unsigned int)v380);
                      goto LABEL_540;
                    }
                    v384 = WdLogNewEntry5_WdError(v383, 2LL * (unsigned int)v380);
                    *(_QWORD *)(v384 + 24) = 267LL;
                    WdLogEvent5_WdError(v384);
                  }
                }
                v385 = 0LL;
LABEL_540:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v502, v385);
                ExReleasePushLockSharedEx((char *)v378 + 208, 0LL);
                KeLeaveCriticalRegion();
                if ( !v502 )
                {
                  v388 = WdLogNewEntry5_WdAssertion(v387, v386);
                  *(_QWORD *)(v388 + 24) = 5335LL;
                  WdLogEvent5_WdAssertion(v388);
                }
                v389 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                v390 = DXGPROCESS::GetCurrent();
                LODWORD(Size) = a2->PrivateDriverDataSize;
                v391 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v389 + 4208),
                         v390,
                         this,
                         *((_DWORD *)v497 + 24),
                         v502[12].Count,
                         &v511.SrcRect,
                         &v511.DstRect,
                         v511.SubRectCnt,
                         v511.pDstSubRects,
                         Size,
                         (unsigned __int8 *)a2->pPrivateDriverData);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v502, v392);
LABEL_561:
                if ( v391 >= 0 )
                {
                  v408 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v408 + 231) + 2672LL),
                         *((const struct DXGDEVICE **)this + 2),
                         a2->VidPnSourceId) )
                  {
                    v409 = 1;
                  }
                  else
                  {
                    v409 = 0;
                    if ( !DXGDEVICE::AllowLegacyPresent(v408, 0) )
                    {
                      v410 = 0;
LABEL_566:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
                      COREDEVICEACCESS::Release(a3);
                      if ( !v410 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                      {
                        v136 = a3;
                        COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                        LODWORD(v68) = -1071775738;
                        goto LABEL_215;
                      }
                      CWin32kLocks::Unlock(v498);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
                      LODWORD(v144) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                      if ( (int)v144 < 0 )
                      {
                        v413 = a3;
LABEL_616:
                        COREDEVICEACCESS::AcquireSharedUncheck(v413, 0LL);
                        LODWORD(v68) = v144;
                        goto LABEL_617;
                      }
                      v17 = *((_BYTE *)this + 457) == 0;
                      memset(&v519, 0, sizeof(v519));
                      if ( v17 )
                      {
                        v417 = v499;
                        if ( !v499 )
                        {
                          v418 = WdLogNewEntry5_WdAssertion(v412, v411);
                          *(_QWORD *)(v418 + 24) = 5424LL;
                          WdLogEvent5_WdAssertion(v418);
                          v417 = v499;
                        }
                        v419 = (DXGDEVICE *)*((_QWORD *)this + 2);
                        HIDWORD(v519.hAllocation) = v417;
                        LODWORD(v68) = DXGDEVICE::Lock(v419, (struct _D3DKMT_LOCK *)&v519, a3);
                      }
                      else
                      {
                        v414 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                        memset(&v514, 0, sizeof(v514));
                        v514.hAllocation = v499;
                        v415 = *(_QWORD *)(*((_QWORD *)v414 + 2) + 16LL);
                        v416 = DXGPROCESS::GetCurrent();
                        LODWORD(v68) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v415 + 4208),
                                         v416,
                                         v414,
                                         &v514,
                                         0,
                                         0,
                                         0);
                        *(_QWORD *)&v519.MultisampleMethod.NumQualityLevels = v514.pData;
                      }
                      if ( (int)v68 >= 0 )
                      {
                        DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
                        COREDEVICEACCESS::Release(a3);
                        if ( !*(_QWORD *)&v519.MultisampleMethod.NumQualityLevels )
                        {
                          v422 = WdLogNewEntry5_WdAssertion(v421, v420);
                          *(_QWORD *)(v422 + 24) = 5437LL;
                          WdLogEvent5_WdAssertion(v422);
                        }
                        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                        {
                          v423 = WdLogNewEntry5_WdAssertion(v421, v420);
                          *(_QWORD *)(v423 + 24) = 5438LL;
                          WdLogEvent5_WdAssertion(v423);
                        }
                        v424 = (*(__int64 (__fastcall **)(_QWORD))(v513 + 304))(0LL);
                        v425 = 0;
                        if ( v424 )
                          v425 = v409;
                        v192 = v498;
                        LODWORD(v68) = CWin32kLocks::Lock(v498, a2->hWindow, 0, 0, v425);
                        if ( (int)v68 >= 0 )
                        {
                          v426 = (a2->Flags.Value & 0x200) != 0;
                          v427 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                          v428 = CWin32kLocks::hDestDc(v192);
                          LOBYTE(Sizea) = v426;
                          LOBYTE(Srca) = 0;
                          if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, int, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v513 + 144))(
                                  a2,
                                  v428,
                                  v364,
                                  v511.pDstSubRects,
                                  *(_QWORD *)&v519.MultisampleMethod.NumQualityLevels,
                                  v427,
                                  v501,
                                  v500,
                                  Srca,
                                  Sizea,
                                  a2->Color,
                                  DXGPRESENT::XformRect,
                                  DXGPRESENT::ClipRects) )
                          {
                            v431 = WdLogNewEntry5_WdEvent(v430, v429);
                            *(_QWORD *)(v431 + 24) = -1071775737LL;
                            *(_QWORD *)(v431 + 32) = this;
                            WdLogEvent5_WdEvent(v431);
                            LODWORD(v68) = -1071775737;
                          }
                        }
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
                        v136 = a3;
                        LODWORD(v144) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                        if ( (int)v144 >= 0 )
                        {
                          v432 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                          if ( *((_BYTE *)this + 457) )
                          {
                            Source1.left = 0;
                            Source1.top = v499;
                            v433 = *(_QWORD *)(*((_QWORD *)v432 + 2) + 16LL);
                            v434 = DXGPROCESS::GetCurrent();
                            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v433 + 4208),
                              v434,
                              v432,
                              (struct _D3DKMT_UNLOCK2 *)&Source1,
                              0);
                          }
                          else
                          {
                            v514.hDevice = 0;
                            *(_QWORD *)&v514.Flags.0 = (char *)&v519.hAllocation + 4;
                            v514.hAllocation = 1;
                            DXGDEVICE::Unlock(v432, (const struct _D3DKMT_UNLOCK *)&v514, 0);
                          }
                          if ( (int)v68 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                          {
                            a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                            a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19)
                                                                                           + 440LL);
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                            a2->PresentHistoryToken.TokenSize = 48;
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v517, v119);
                            LODWORD(v68) = SubmitPresentHistoryToken(
                                             &a2->PresentHistoryToken,
                                             a3,
                                             v504,
                                             v192,
                                             0,
                                             0LL,
                                             (struct DXGK_PRESENT_PARAMS *)a2,
                                             0LL,
                                             this,
                                             0LL,
                                             0LL);
                          }
                          goto LABEL_216;
                        }
                        goto LABEL_615;
                      }
                      goto LABEL_490;
                    }
                  }
                  v410 = 1;
                  goto LABEL_566;
                }
LABEL_596:
                v435 = WdLogNewEntry5_WdWarning(v375, v374, v376);
                *(_QWORD *)(v435 + 24) = -1071775738LL;
                *(_QWORD *)(v435 + 32) = this;
                WdLogEvent5_WdWarning(v435);
                LODWORD(v68) = -1071775738;
                goto LABEL_490;
              }
              if ( !v499 )
              {
                v393 = WdLogNewEntry5_WdAssertion(v375, v374);
                *(_QWORD *)(v393 + 24) = 5349LL;
                WdLogEvent5_WdAssertion(v393);
              }
              if ( bTracingEnabled )
              {
                v394 = v511.SubRectCnt;
                v395 = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)v511.Flags.Value;
                v396 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                *(_QWORD *)&Source1.left = v511.pDstSubRects;
                v397 = *(struct VIDMM_GLOBAL **)(v396 + 648);
                v398 = *(VIDMM_EXPORT **)(v396 + 640);
                *(_QWORD *)&v514.hDevice = VIDMM_EXPORT::VidMmETWAllocationHandle(v398, v397, v499);
                v399 = VIDMM_EXPORT::VidMmETWAllocationHandle(v398, v397, hSource);
                v400 = *((_QWORD *)this + 47);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                {
                  LODWORD(Src) = 1;
                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    (__int64)&EventBlit,
                    0LL,
                    a2->hWindow,
                    v400,
                    0LL,
                    v399,
                    *(_QWORD *)&v514.hDevice,
                    Src,
                    0,
                    v395,
                    v511.SrcRect.left,
                    v511.SrcRect.right,
                    v511.SrcRect.top,
                    v511.SrcRect.bottom,
                    v511.DstRect.left,
                    v511.DstRect.right,
                    v511.DstRect.top,
                    v511.DstRect.bottom,
                    v394);
                }
                v401 = 0;
                if ( v394 )
                {
                  v402 = *(_QWORD *)&Source1.left;
                  while ( 1 )
                  {
                    v403 = v394 - v401;
                    if ( v394 - v401 > 0x10 )
                      break;
                    v404 = v394 - v401;
                    if ( v403 )
                      goto LABEL_554;
LABEL_556:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    {
                      LODWORD(v480) = v404;
                      LODWORD(v479) = v403 <= 0x10;
                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                        (__int64)&DxgkControlGuid_Context,
                        (__int64)&EventBlitRect,
                        0LL,
                        v400,
                        v479,
                        v480,
                        v523,
                        &v519,
                        v521,
                        v522);
                      v402 = *(_QWORD *)&Source1.left;
                    }
                    v401 += 16;
                    if ( v401 >= v394 )
                      goto LABEL_559;
                  }
                  v404 = 16;
LABEL_554:
                  v405 = 0LL;
                  v406 = 0;
                  do
                  {
                    v407 = v406 + v401;
                    ++v406;
                    v407 *= 2LL;
                    v405 += 4LL;
                    *(_DWORD *)&v522[v405 + 60] = *(_DWORD *)(v402 + 8 * v407);
                    *(int *)((char *)&v518 + v405) = *(_DWORD *)(v402 + 8 * v407 + 8);
                    *(_DWORD *)&v521[v405 - 4] = *(_DWORD *)(v402 + 8 * v407 + 4);
                    *(_DWORD *)&v521[v405 + 60] = *(_DWORD *)(v402 + 8 * v407 + 12);
                  }
                  while ( v406 < v404 );
                  goto LABEL_556;
                }
LABEL_559:
                v364 = v502;
              }
              v391 = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v508,
                       v497,
                       hSource,
                       v499,
                       &v511,
                       0LL,
                       *((struct _VIDMM_DMA_BUFFER **)this + 47),
                       a7,
                       (enum _D3DDDIFORMAT)v507,
                       a3);
              *((_QWORD *)this + 47) = 0LL;
              goto LABEL_561;
            }
            if ( (*(_BYTE *)&v363 & 2) == 0 )
              goto LABEL_490;
            v436 = (DXGDEVICE *)*((_QWORD *)this + 2);
            if ( (*(_WORD *)&v363 & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*((_QWORD *)v436 + 231) + 2672LL),
                   *((const struct DXGDEVICE **)this + 2),
                   a2->VidPnSourceId) )
            {
              v120 = 1;
            }
            else if ( !DXGDEVICE::AllowLegacyPresent(v436, 0) )
            {
              v437 = 0;
              v120 = 0;
              goto LABEL_602;
            }
            v437 = 1;
LABEL_602:
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
            COREDEVICEACCESS::Release(a3);
            if ( v437 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                v440 = WdLogNewEntry5_WdAssertion(v439, v438);
                *(_QWORD *)(v440 + 24) = 5558LL;
                WdLogEvent5_WdAssertion(v440);
              }
              v192 = v498;
              CWin32kLocks::Unlock(v498);
              v441 = v513;
              v442 = (*(__int64 (__fastcall **)(_QWORD))(v513 + 304))(0LL);
              v443 = 0;
              if ( v442 )
                v443 = v120;
              LODWORD(v68) = CWin32kLocks::Lock(v192, a2->hWindow, 0, 0, v443);
              v444 = CWin32kLocks::hDestDc(v192);
              if ( !(*(unsigned int (__fastcall **)(HDC, struct _EX_RUNDOWN_REF *, const RECT *, _QWORD, UINT))(v441 + 152))(
                      v444,
                      v364,
                      a2->pSrcSubRects,
                      a2->SubRectCnt,
                      a2->Color) )
              {
                v447 = WdLogNewEntry5_WdEvent(v446, v445);
                *(_QWORD *)(v447 + 24) = -1071775737LL;
                *(_QWORD *)(v447 + 32) = this;
                WdLogEvent5_WdEvent(v447);
                LODWORD(v68) = -1071775737;
              }
            }
            else
            {
              v192 = v498;
              LODWORD(v68) = -1071775738;
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
            v136 = a3;
            v448 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            v144 = v448;
            if ( v448 >= 0 )
              goto LABEL_216;
LABEL_614:
            v449 = WdLogNewEntry5_WdEvent(v143, v119);
            *(_QWORD *)(v449 + 24) = v144;
            *(_QWORD *)(v449 + 32) = this;
            WdLogEvent5_WdEvent(v449);
LABEL_615:
            v413 = v136;
            goto LABEL_616;
          }
          v356 = (int)v502;
          *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (_DWORD)v502;
          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
          v357 = 0;
          v358 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
          if ( v358 != (*(unsigned int (**)(void))(v513 + 8))() )
          {
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v356;
            ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3LL, 0xFFFFFFFFLL);
            v357 = 1;
          }
          v348 = v357;
LABEL_466:
          DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v517, v348);
          goto LABEL_149;
        }
        v355 = WdLogNewEntry5_WdEvent(v353, v119);
        *(_QWORD *)(v355 + 24) = v354;
        WdLogEvent5_WdEvent(v355);
        COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
        LODWORD(v68) = v354;
LABEL_617:
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, (__int64)v349);
        goto LABEL_100;
      }
      v341 = a3;
      LODWORD(v68) = v124;
LABEL_469:
      COREDEVICEACCESS::AcquireSharedUncheck(v341, 0LL);
      goto LABEL_617;
    }
  }
  if ( !v41 )
  {
    if ( (*(_DWORD *)&Value & 0x10A7C3) != 0 )
    {
      v277 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
      v277[3] = this;
      v278 = a2->Flags.Value;
      goto LABEL_430;
    }
    v43 = *(_DWORD *)&Value & 0x10000000;
    if ( v43 )
    {
      v266 = *((_QWORD *)v35 + 5);
      if ( !v266 || !*(_QWORD *)(v266 + 56) )
      {
        v267 = WdLogNewEntry5_WdError(v21, v35);
        *(_QWORD *)(v267 + 24) = 4209LL;
        goto LABEL_341;
      }
    }
    else
    {
      v44 = *(unsigned int *)(*((_QWORD *)v35 + 6) + 4LL);
      if ( (v44 & 2) == 0 && (v44 & 1) == 0 && (v44 & 0x2000) == 0 )
      {
LABEL_342:
        v268 = (_QWORD *)WdLogNewEntry5_WdError(v44, v35);
        LODWORD(v199) = -1073741811;
        v268[3] = -1073741811LL;
        v268[4] = this;
        v268[5] = v497;
        v268[6] = *((_QWORD *)v497 + 6);
        v268[7] = a2->hSource;
        WdLogEvent5_WdError(v268);
        goto LABEL_431;
      }
    }
    if ( v43 )
    {
      v269 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
      if ( !v269
        || !DXGADAPTER::IsDisplayAdapter(v269)
        || (VidPnSourceId = a2->VidPnSourceId,
            v269 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL),
            VidPnSourceId >= *(_DWORD *)(*((_QWORD *)v269 + 334) + 80LL)) )
      {
        v267 = WdLogNewEntry5_WdError(v269, v35);
        *(_QWORD *)(v267 + 24) = a2->VidPnSourceId;
        goto LABEL_341;
      }
      v35 = v497;
    }
    else
    {
      VidPnSourceId = (*(_DWORD *)(*((_QWORD *)v35 + 6) + 4LL) >> 6) & 0xF;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v498, v35);
    DXGALLOCATIONREFERENCE::MoveAssign(&v510, &v498);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v498, v46);
    v509 = a2->hSource;
    v48 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v48
      || !DXGADAPTER::IsDisplayAdapter(v48)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                         + 2672LL)) )
    {
      v270 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v270 + 24) = 4250LL;
      WdLogEvent5_WdAssertion(v270);
    }
    v44 = *((_QWORD *)v497 + 6);
    v35 = (struct DXGALLOCATION *)*(unsigned int *)(v44 + 4);
    if ( ((unsigned __int16)v35 & 0x2000) != 0 )
    {
      v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      if ( !*(_BYTE *)(v44 + 346) )
        goto LABEL_342;
    }
    if ( (a2->Flags.Value & 0x60000) == 0 )
      goto LABEL_42;
    if ( (a2->Flags.Value & 0x60000) == 0x60000 )
    {
      v267 = WdLogNewEntry5_WdError(v44, v35);
      *(_QWORD *)(v267 + 24) = 4269LL;
      goto LABEL_341;
    }
    if ( ((unsigned __int16)v35 & 0x1000) == 0 )
    {
      v267 = WdLogNewEntry5_WdError(v44, v35);
      *(_QWORD *)(v267 + 24) = 4275LL;
      goto LABEL_341;
    }
    v273 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
                               VidPnSourceId)
           + 10);
    if ( (v273 & 0x10) == 0 )
    {
      v274 = WdLogNewEntry5_WdWarning(v272, v271, v273);
      *(_QWORD *)(v274 + 24) = 4282LL;
LABEL_356:
      WdLogEvent5_WdWarning(v274);
      LODWORD(v199) = -1071775739;
      goto LABEL_431;
    }
    v275 = a2->Flags.Value;
    LOBYTE(v272) = (v275 & 0x40000) != 0;
    if ( ((unsigned __int8)v272 & ((v273 & 0x20) == 0)) != 0 )
    {
      v274 = WdLogNewEntry5_WdWarning(v272, v275, v273);
      *(_QWORD *)(v274 + 24) = 4288LL;
      goto LABEL_356;
    }
    v276 = v275 & 0xC0000;
    if ( (_DWORD)v276 != 786432 )
    {
LABEL_42:
      if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
        goto LABEL_60;
      v49 = *(_DWORD *)a7 ^ ((unsigned __int8)*(_DWORD *)a7 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 4;
      *(_DWORD *)a7 = v49;
      v50 = (a2->Flags.Value ^ v49) & 8 ^ v49;
      *(_DWORD *)a7 = v50;
      v51 = ((unsigned __int8)v50 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v50;
      *(_DWORD *)a7 = v51;
      v52 = (v51 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v51;
      *(_DWORD *)a7 = v52;
      v53 = (v52 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v52;
      *(_DWORD *)a7 = v53;
      v54 = v53 ^ (v53 ^ (4 * a2->Flags.Value)) & 0x200000;
      *(_DWORD *)a7 = v54;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)a7 + 36) = Duration;
      *(_DWORD *)a7 = v54 ^ (v54 ^ a2->Flags.Value) & 0x20000000;
      pPresentRegions = a2->pPresentRegions;
      v511.Flags.Value = v511.Flags.Value & 0xFFFFF8FB | a2->Flags.Value & 4 | (a2->Flags.Value >> 9) & 0x700;
      if ( pPresentRegions
        && !pPresentRegions->MoveRectCount
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 346LL) )
      {
        v511.SubRectCnt = pPresentRegions->DirtyRectCount;
        v511.pDstSubRects = pPresentRegions->pDirtyRects;
      }
      DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL),
                         *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                         VidPnSourceId,
                         (__int64)&a2->FlipInterval);
      *((_DWORD *)a7 + 30) = DeviceFlipMode;
      v60 = DeviceFlipMode;
      if ( DeviceFlipMode )
      {
        v17 = ((DeviceFlipMode - 1) & 0xFFFFFFFD) == 0;
        FlipInterval = a2->FlipInterval;
        if ( v17 )
        {
          v511.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
        }
        else
        {
          v511.FlipInterval = a2->FlipInterval;
          if ( v60 == 2 )
          {
LABEL_53:
            *((_DWORD *)a7 + 31) = FlipInterval;
            *((_DWORD *)a7 + 29) = VidPnSourceId;
            DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId);
            v63 = *(_DWORD *)(*((_QWORD *)v497 + 6) + 4LL) & 0x2000;
            if ( v63 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) == 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else if ( !v63 && DisplayedPrimary && (*(_DWORD *)(*((_QWORD *)DisplayedPrimary + 6) + 4LL) & 0x2000) != 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
            }
            else
            {
              *(_DWORD *)a7 &= ~0x400000u;
            }
            v64 = *((unsigned int *)a7 + 30);
            if ( (_DWORD)v64 )
            {
              if ( (_DWORD)v64 != *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) )
              {
                v195 = WdLogNewEntry5_WdEvent(VidPnSourceId, v64);
                *(_QWORD *)(v195 + 24) = *((_QWORD *)this + 2);
                WdLogEvent5_WdEvent(v195);
                COREDEVICEACCESS::Release(a3);
                DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
                v196 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                v199 = v196;
                if ( v196 < 0 )
                {
                  v279 = WdLogNewEntry5_WdEvent(v198, v197);
                  *(_QWORD *)(v279 + 24) = v199;
                  WdLogEvent5_WdEvent(v279);
                  COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
LABEL_431:
                  v65 = v199;
                  goto LABEL_432;
                }
              }
            }
LABEL_60:
            v65 = 0;
            goto LABEL_61;
          }
        }
        v511.Flags.Value |= 8u;
        goto LABEL_53;
      }
      v277 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v58, v59);
      v277[3] = this;
      v278 = a2->FlipInterval;
LABEL_430:
      v277[4] = v278;
      LODWORD(v199) = -1073741811;
      v277[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v277);
      goto LABEL_431;
    }
    v267 = WdLogNewEntry5_WdError(v272, v276);
    *(_QWORD *)(v267 + 24) = 4294LL;
LABEL_341:
    WdLogEvent5_WdError(v267);
    LODWORD(v199) = -1073741811;
    goto LABEL_431;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (*(_BYTE *)&Value & 3) == 0 || (*(_DWORD *)&Value & 0x100E803C) != 0 )
    goto LABEL_334;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    if ( !v501 || !v500 || (*(_BYTE *)&Value & 0x82) != 0x80 )
      goto LABEL_334;
    if ( (*(_WORD *)&Value & 0x600) != 0x600 )
      goto LABEL_268;
    v206 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
    v207 = -1073741811;
    v206[3] = -1073741811LL;
    v206[4] = this;
    v206[5] = a2->pSrcSubRects;
    v206[6] = a2->SubRectCnt;
    v206[7] = a2->Flags.Value;
LABEL_335:
    WdLogEvent5_WdWarning(v206);
    goto LABEL_336;
  }
  if ( (*(_DWORD *)&Value & 0x100681) != 0 )
  {
LABEL_334:
    v206 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v35, Format);
    v207 = -1073741811;
    v206[3] = this;
    v206[4] = a2->pSrcSubRects;
    v206[5] = a2->SubRectCnt;
    v265 = a2->Flags.Value;
    v206[7] = -1073741811LL;
    v206[6] = v265;
    goto LABEL_335;
  }
LABEL_268:
  v214 = *((_QWORD *)v506 + 6);
  v215 = *(_DWORD *)(v214 + 4);
  if ( (v215 & 2) == 0 && (v215 & 1) == 0 )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v214, v35);
    v207 = -1073741811;
    v208[3] = -1073741811LL;
    v208[4] = this;
    v208[5] = v506;
    v208[6] = *((_QWORD *)v506 + 6);
    v208[7] = a2->hDestination;
    goto LABEL_259;
  }
  VidPnSourceId = (v215 >> 6) & 0xF;
  v216 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
  if ( !v216
    || !DXGADAPTER::IsDisplayAdapter(v216)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                       + 2672LL)) )
  {
    v217 = WdLogNewEntry5_WdAssertion(v216, v35);
    *(_QWORD *)(v217 + 24) = 3958LL;
    WdLogEvent5_WdAssertion(v217);
  }
  v218 = v506;
  *((_DWORD *)a7 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v498, v218);
  DXGALLOCATIONREFERENCE::MoveAssign(&v510, &v498);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v498, v219);
  v509 = a2->hDestination;
  v223 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&v223 & 1) == 0 )
  {
    v511.DstRect.bottom = v515[0];
    v511.DstRect.right = Width;
    if ( (*(_BYTE *)&v223 & 0x40) != 0 )
    {
      v253 = a2->DstRect.right;
      if ( v253 <= a2->DstRect.left
        || (v221 = (unsigned int)a2->DstRect.bottom, (int)v221 <= a2->DstRect.top)
        || v253 <= 0
        || (int)v221 <= 0 )
      {
LABEL_312:
        v206 = (_QWORD *)WdLogNewEntry5_WdWarning(v221, v220, v222);
        v207 = -1073741811;
        v206[3] = -1073741811LL;
        v206[4] = a2->DstRect.left;
        v206[5] = a2->DstRect.top;
        v206[6] = a2->DstRect.right;
        v206[7] = a2->DstRect.bottom;
        goto LABEL_335;
      }
      if ( !DXGPRESENT::IntersectRect(&v511.DstRect, &a2->DstRect, &v511.DstRect) )
      {
        v254 = 0;
LABEL_337:
        LODWORD(v199) = v254;
        goto LABEL_431;
      }
    }
    LODWORD(v221) = a2->SubRectCnt;
    v65 = 0;
    v255 = 0;
    if ( !(_DWORD)v221 )
    {
LABEL_331:
      v251 = v511.DstRect;
      LODWORD(v220) = a2->Flags.0;
      v250 = v511.Flags.Value;
      v511.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_332;
    }
    while ( 1 )
    {
      v256 = v255;
      v257 = &a2->pSrcSubRects[v256];
      Source1 = 0LL;
      if ( !DXGPRESENT::IntersectRect(&Source1, v257, &v511.DstRect)
        || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v256], 0x10uLL) != 16 )
      {
        break;
      }
      LODWORD(v221) = a2->SubRectCnt;
      if ( ++v255 >= (unsigned int)v221 )
      {
        v65 = 0;
        goto LABEL_331;
      }
    }
    v261 = (_QWORD *)WdLogNewEntry5_WdError(v259, v258);
    LODWORD(v199) = -1073741811;
    v261[3] = -1073741811LL;
    v261[4] = a2->DstRect.left;
    v261[5] = a2->DstRect.top;
    v261[6] = a2->DstRect.right;
    v261[7] = a2->DstRect.bottom;
    WdLogEvent5_WdError(v261);
    v264 = (_QWORD *)WdLogNewEntry5_WdError(v263, v262);
    v264[3] = v255;
    v264[4] = a2->pSrcSubRects[v255].left;
    v264[5] = a2->pSrcSubRects[v255].top;
    v264[6] = a2->pSrcSubRects[v255].right;
    v264[7] = a2->pSrcSubRects[v255].bottom;
    WdLogEvent5_WdError(v264);
    goto LABEL_431;
  }
  if ( v506 == v497 )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v221, v220);
    v207 = -1073741811;
    v208[3] = -1073741811LL;
    v208[4] = this;
    v208[5] = v497;
    v208[6] = a2->hSource;
    v208[7] = a2->hDestination;
    goto LABEL_259;
  }
  v224 = *((_QWORD *)v497 + 6);
  v225 = *(_DWORD *)(v224 + 4);
  if ( ((v225 & 2) != 0 || (v225 & 1) != 0) && ((v225 >> 6) & 0xF) != VidPnSourceId )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v224, v220);
    v207 = -1073741811;
    v208[3] = -1073741811LL;
    v208[4] = this;
    v208[5] = v497;
    v208[6] = (*(_DWORD *)(*((_QWORD *)v497 + 6) + 4LL) >> 6) & 0xF;
    v208[7] = VidPnSourceId;
    goto LABEL_259;
  }
  v226 = (unsigned int)a2->SrcRect.right;
  v227 = a2->SrcRect.left;
  if ( (int)v226 <= v227
    || (v228 = (unsigned int)a2->SrcRect.bottom, v224 = (unsigned int)a2->SrcRect.top, (int)v228 <= (int)v224)
    || (v229 = v501, v227 >= (int)v501)
    || (v230 = v500, (int)v224 >= (int)v500)
    || (int)v226 <= 0
    || (int)v228 <= 0 )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v224, v226);
    v207 = -1073741811;
    v208[3] = -1073741811LL;
    v208[4] = a2->SrcRect.left;
    v208[5] = a2->SrcRect.top;
    v208[6] = a2->SrcRect.right;
    v208[7] = a2->SrcRect.bottom;
    goto LABEL_259;
  }
  v221 = a2->SubRectCnt;
  v231 = 0;
  if ( !(_DWORD)v221 )
    goto LABEL_298;
  do
  {
    v232 = v231;
    v233 = &a2->pSrcSubRects[v232];
    Source1 = 0LL;
    if ( !DXGPRESENT::IntersectRect(&Source1, v233, &a2->SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v232], 0x10uLL) != 16 )
    {
      v245 = (_QWORD *)WdLogNewEntry5_WdError(v235, v234);
      v207 = -1073741811;
      v245[3] = -1073741811LL;
      v245[4] = a2->SrcRect.left;
      v245[5] = a2->SrcRect.top;
      v245[6] = a2->SrcRect.right;
      v245[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v245);
      v208 = (_QWORD *)WdLogNewEntry5_WdError(v247, v246);
      v208[3] = v231;
      v208[4] = a2->pSrcSubRects[v231].left;
      v208[5] = a2->pSrcSubRects[v231].top;
      v208[6] = a2->pSrcSubRects[v231].right;
      v208[7] = a2->pSrcSubRects[v231].bottom;
      goto LABEL_259;
    }
    v221 = a2->SubRectCnt;
    ++v231;
  }
  while ( v231 < (unsigned int)v221 );
  v230 = v500;
  v229 = v501;
LABEL_298:
  v220 = a2->Flags.Value;
  if ( (v220 & 0x40) == 0 )
  {
    v248 = (unsigned int)v502;
    v249 = v515[0];
    if ( (_DWORD)v502 == v229 && v515[0] == v230 )
    {
      SrcRect = a2->SrcRect;
      v511.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_316;
    }
    v252 = (_QWORD *)WdLogNewEntry5_WdWarning(v221, v220, v228);
    v252[5] = v249;
    v252[6] = v501;
    v252[7] = v500;
    v252[3] = this;
    v252[4] = v248;
    WdLogEvent5_WdWarning(v252);
    v207 = -1073741811;
    goto LABEL_336;
  }
  v222 = (unsigned int)a2->DstRect.right;
  v236 = a2->DstRect.left;
  if ( (int)v222 <= v236 )
    goto LABEL_312;
  v220 = (unsigned int)a2->DstRect.bottom;
  v237 = a2->DstRect.top;
  if ( (int)v220 <= v237 || v236 >= (int)v502 || v237 >= (int)v515[0] || (int)v222 <= 0 || (int)v220 <= 0 )
    goto LABEL_312;
  v238 = (unsigned int)(a2->SrcRect.right - a2->SrcRect.left);
  if ( (_DWORD)v238 != (_DWORD)v222 - v236
    || (v220 = (unsigned int)(v220 - v237),
        v238 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top),
        (_DWORD)v238 != (_DWORD)v220) )
  {
    v208 = (_QWORD *)WdLogNewEntry5_WdError(v238, v220);
    v207 = -1073741811;
    v208[3] = -1073741811LL;
    v208[4] = this;
    v208[5] = a2->Flags.Value;
    v208[6] = v506;
    v208[7] = VidPnSourceId;
    goto LABEL_259;
  }
  v207 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
  if ( v207 < 0 )
    goto LABEL_336;
  v239 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  v240 = 0;
  v241 = a2->DstRect.left - a2->SrcRect.left;
  v242 = a2->DstRect.top - a2->SrcRect.top;
  for ( LODWORD(v221) = a2->SubRectCnt; v240 < (unsigned int)v221; LODWORD(v221) = a2->SubRectCnt )
  {
    v243 = v240++;
    v243 *= 2LL;
    *(&v239->left + 2 * v243) = v241 + *(&a2->pSrcSubRects->left + 2 * v243);
    *(&v239->right + 2 * v243) = v241 + *(&a2->pSrcSubRects->right + 2 * v243);
    *(&v239->top + 2 * v243) = v242 + *(&a2->pSrcSubRects->top + 2 * v243);
    *(&v239->bottom + 2 * v243) = v242 + *(&a2->pSrcSubRects->bottom + 2 * v243);
  }
  SrcRect = a2->DstRect;
  LODWORD(v220) = a2->Flags.0;
  v511.pDstSubRects = v239;
LABEL_316:
  v250 = (*(_WORD *)&v511.Flags.0 ^ (unsigned __int16)((unsigned int)v220 >> 9)) & 0x800 ^ v511.Flags.Value;
  v511.DstRect = SrcRect;
  v65 = 0;
  v251 = a2->SrcRect;
LABEL_332:
  Color = a2->Color;
  v511.SubRectCnt = v221;
  v511.Color = Color;
  v511.Flags.Value = v250 & 0xFFFFF78C | v220 & 3 | ((unsigned __int64)(v220 & 0xE00 | ((unsigned int)v220 >> 4) & 0x10000) >> 5);
  v511.SrcRect = v251;
LABEL_61:
  v66 = DXGCONTEXT::CheckDevicePresentSettings(
          this,
          (a2->Flags.Value >> 2) & 1,
          (a2->Flags.Value >> 28) & 1,
          VidPnSourceId);
  LODWORD(v68) = v66;
  if ( v66 < 0 )
  {
    if ( v66 != -1071774920 )
      goto LABEL_100;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_432;
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v281 = (struct _KTHREAD **)*((_QWORD *)this + 2);
    v282 = VidPnSourceId;
    if ( !IsFullWDDMDevice )
    {
      DXGDEVICE::SetDisplayedPrimary(v281, VidPnSourceId, v497, 0, 1u);
LABEL_432:
      LODWORD(v68) = v65;
      goto LABEL_100;
    }
LABEL_365:
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe((DXGDEVICE *)v281, v282);
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v497, *((_DWORD *)a7 + 34), 1u);
    v67 = VidPnSourceId;
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)a7 + 30);
    goto LABEL_432;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v68) = DXGCONTEXT::ValidatePresentRegions(this, a2, v501, v500);
      if ( (int)v68 < 0 )
        goto LABEL_100;
    }
  }
  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
         VidPnSourceId,
         0) )
  {
    v283 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v284 = (*(__int64 (**)(void))(v513 + 8))();
    v285 = a2->Flags.Value & 4;
    if ( v283 != v284 )
    {
      if ( v285 )
      {
        v72 = a3;
LABEL_372:
        *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (*(__int64 (**)(void))(v513 + 8))();
        CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
                         VidPnSourceId);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
        goto LABEL_377;
      }
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
      v72 = a3;
      COREDEVICEACCESS::Release(a3);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v517, v286);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
      v287 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v68 = (struct DXGALLOCATION *)v287;
      if ( v287 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v517, 1u);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, v290);
        goto LABEL_372;
      }
LABEL_370:
      v291 = WdLogNewEntry5_WdEvent(v289, v288);
      *(_QWORD *)(v291 + 24) = v68;
      *(_QWORD *)(v291 + 32) = this;
      WdLogEvent5_WdEvent(v291);
      COREDEVICEACCESS::AcquireSharedUncheck(v72, 0LL);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, v292);
      goto LABEL_100;
    }
    v72 = a3;
    if ( !v285 )
    {
      COREDEVICEACCESS::Release(a3);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v504);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v517, v294);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v504);
      v295 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v68 = (struct DXGALLOCATION *)v295;
      if ( v295 < 0 )
        goto LABEL_370;
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v517, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v517, v296);
    }
LABEL_377:
    v71 = (DXGDEVICE *)*((_QWORD *)this + 2);
    goto LABEL_68;
  }
  v71 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v71 + VidPnSourceId + 302) & 0x200) == 0 && (a2->Flags.Value & 0x10000000) == 0 )
  {
    v297 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v69, v70);
    LODWORD(v68) = -1071775739;
    v297[3] = -1071775739LL;
    v297[4] = this;
    v297[5] = a2->hSource;
    v298 = v497;
    v297[7] = VidPnSourceId;
    goto LABEL_446;
  }
  v72 = a3;
LABEL_68:
  if ( DXGDEVICE::IsFullWDDMDevice(v71) )
  {
    v74 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 0x10) == 0, v72);
    v77 = v74;
    if ( v74 < 0 )
    {
      v299 = WdLogNewEntry5_WdEvent(v76, v75);
      *(_QWORD *)(v299 + 24) = v77;
      *(_QWORD *)(v299 + 32) = this;
      WdLogEvent5_WdEvent(v299);
      LODWORD(v68) = v77;
      goto LABEL_100;
    }
    v78 = (__int64 *)((char *)this + 376);
    if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) == 0 )
      goto LABEL_71;
    LODWORD(v68) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 47, a3, 0);
    if ( (int)v68 < 0 )
      goto LABEL_96;
    if ( !*v78 )
    {
      v302 = WdLogNewEntry5_WdAssertion(v301, v300);
      *(_QWORD *)(v302 + 24) = 4572LL;
      WdLogEvent5_WdAssertion(v302);
    }
LABEL_71:
    LODWORD(v68) = DXGCONTEXT::CheckDevicePresentSettings(
                     this,
                     (a2->Flags.Value >> 2) & 1,
                     (a2->Flags.Value >> 28) & 1,
                     VidPnSourceId);
    if ( (int)v68 >= 0 )
    {
      if ( (a2->Flags.Value & 4) != 0 )
      {
        if ( v497 )
        {
          v79 = *((_QWORD *)v497 + 6);
          if ( v79 )
          {
            if ( (*(_DWORD *)(v79 + 4) & 0x2000) != 0
              && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v497) )
            {
              v304 = (_QWORD *)WdLogNewEntry5_WdEvent(v201, v200);
              LODWORD(v68) = -1071775739;
              v304[3] = -1071775739LL;
              v304[4] = this;
              v304[5] = v497;
              WdLogEvent5_WdEvent(v304);
              v67 = *v78;
              if ( *v78 )
              {
                VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                  *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
                  (struct _VIDMM_DMA_BUFFER *)v67,
                  0LL);
                *v78 = 0LL;
              }
              goto LABEL_100;
            }
          }
        }
      }
      if ( (a2->Flags.Value & 0x2000) != 0 )
      {
        v305 = ADAPTER_DISPLAY::GetCurrentOrientation(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL),
                 VidPnSourceId,
                 1LL);
        v306 = 0;
        if ( v305 != 1 )
          v306 = 128;
        v80 = v306 | v511.Flags.Value & 0xFFFFFF7F;
        v511.Flags.Value = v80;
      }
      else
      {
        v80 = v511.Flags.Value;
      }
      if ( bTracingEnabled )
      {
        v81 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        v82 = *(struct VIDMM_GLOBAL **)(v81 + 648);
        v83 = *(VIDMM_EXPORT **)(v81 + 640);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          LODWORD(v502) = v511.FlipInterval;
          VIDMM_EXPORT::VidMmETWAllocationHandle(v83, v82, hSource);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
          goto LABEL_82;
        }
        *(_QWORD *)&v513 = v511.pDstSubRects;
        LODWORD(v502) = v511.SubRectCnt;
        *(_QWORD *)&Source1.left = VIDMM_EXPORT::VidMmETWAllocationHandle(v83, v82, v499);
        v307 = VIDMM_EXPORT::VidMmETWAllocationHandle(v83, v82, hSource);
        v308 = *((_QWORD *)this + 47);
        v309 = (unsigned int)v502;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&EventBlit,
            0LL,
            a2->hWindow,
            v308,
            0LL,
            v307,
            *(_QWORD *)&Source1.left,
            1,
            0,
            v80,
            v511.SrcRect.left,
            v511.SrcRect.right,
            v511.SrcRect.top,
            v511.SrcRect.bottom,
            v511.DstRect.left,
            v511.DstRect.right,
            v511.DstRect.top,
            v511.DstRect.bottom,
            (_DWORD)v502);
        v310 = 0;
        if ( v309 )
        {
          v311 = v513;
          while ( 1 )
          {
            v312 = v309 - v310;
            if ( v309 - v310 > 0x10 )
              break;
            v313 = v309 - v310;
            if ( v312 )
              goto LABEL_402;
LABEL_404:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v480) = v313;
              LODWORD(v478) = v312 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventBlitRect,
                0LL,
                v308,
                v478,
                v480,
                v522,
                v521,
                &v517,
                &v519);
              v311 = v513;
            }
            v310 += 16;
            if ( v310 >= v309 )
            {
              v8 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v514.hDevice;
              goto LABEL_82;
            }
          }
          v313 = 16;
LABEL_402:
          v314 = 0LL;
          v315 = 0;
          do
          {
            v316 = v315 + v310;
            ++v315;
            v316 *= 2LL;
            v314 += 4LL;
            *(_DWORD *)&v521[v314 + 60] = *(_DWORD *)(v311 + 8 * v316);
            *(_DWORD *)&v521[v314 - 4] = *(_DWORD *)(v311 + 8 * v316 + 8);
            *(_DWORD *)((char *)&v516[34] + v314 + 12) = *(_DWORD *)(v311 + 8 * v316 + 4);
            *(int *)((char *)&v518 + v314) = *(_DWORD *)(v311 + 8 * v316 + 12);
          }
          while ( v315 < v313 );
          goto LABEL_404;
        }
      }
LABEL_82:
      v84 = v508;
      LODWORD(v68) = DXGCONTEXT::SubmitPresent(
                       this,
                       a2,
                       (struct DXGHWQUEUE **)a2[1].hWindow,
                       a2->BroadcastContextCount,
                       v508,
                       v497,
                       hSource,
                       v499,
                       &v511,
                       a2->pPresentRegions,
                       *((struct _VIDMM_DMA_BUFFER **)this + 47),
                       v8,
                       (enum _D3DDDIFORMAT)v507,
                       a3);
      if ( (int)v68 >= 0 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL);
        v86 = 3968LL * VidPnSourceId;
        if ( *(_DWORD *)(*(_QWORD *)(v85 + 112) + v86 + 1068) == -1 )
        {
          v317 = WdLogNewEntry5_WdAssertion(v86, v85);
          *(_QWORD *)(v317 + 24) = 4686LL;
          WdLogEvent5_WdAssertion(v317);
        }
      }
      *((_QWORD *)this + 47) = 0LL;
      if ( (int)v68 < 0 )
        goto LABEL_96;
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v87 = *((_QWORD *)this + 2);
        v88 = *(_QWORD *)(v87 + 1848);
        if ( v88 == *(_QWORD *)(*(_QWORD *)(v87 + 16) + 16LL) )
        {
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v88 + 2672), VidPnSourceId);
          v87 = *((_QWORD *)this + 2);
        }
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v87, VidPnSourceId, v497, *((_DWORD *)v8 + 34), 1u);
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)v8 + 30);
        UpdatePostComposition(
          VidPnSourceId,
          0,
          0,
          0,
          *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL));
      }
      goto LABEL_90;
    }
    v67 = *v78;
    if ( *v78 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL),
        (struct _VIDMM_DMA_BUFFER *)v67,
        0LL);
      *v78 = 0LL;
    }
    if ( (_DWORD)v68 == -1071774920 )
    {
      if ( (a2->Flags.Value & 4) == 0 )
        goto LABEL_432;
      v303 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
      v281 = (struct _KTHREAD **)*((_QWORD *)this + 2);
      v282 = VidPnSourceId;
      if ( !v303 )
      {
        DXGDEVICE::SetDisplayedPrimary(v281, VidPnSourceId, v497, 0, 1u);
        LODWORD(v68) = 0;
        goto LABEL_100;
      }
      goto LABEL_365;
    }
LABEL_644:
    v84 = v508;
LABEL_90:
    v72 = a3;
LABEL_91:
    if ( (int)v68 >= 0 )
    {
      v89 = v510;
      if ( v510 )
      {
        if ( (a2->Flags.Value & 0x10000000) == 0 )
        {
          v90 = *((_QWORD *)this + 2);
          v91 = *(_QWORD *)(v90 + 1848);
          if ( v91 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(v90 + 40) + 346LL) )
            {
              v462 = v509;
              HIDWORD(v516[0]) = 0;
              *(_QWORD *)((char *)&v516[17] + 4) = 0LL;
              v463 = 2LL;
              HIDWORD(v516[17]) = 0;
              DWORD1(v516[19]) = 0;
              LODWORD(v516[0]) = a2->hDevice;
              *(_OWORD *)((char *)&v516[18] + 4) = 0LL;
              DWORD1(v516[0]) = v509;
              v464 = (*(_DWORD *)(v510[6].Count + 4) >> 6) & 0xF;
              HIDWORD(v516[0]) = a2->BroadcastContextCount;
              DWORD2(v516[0]) = v464;
              v465 = a2->BroadcastContext;
              v466 = &v516[1];
              do
              {
                v467 = *((_OWORD *)v465 + 1);
                *v466 = *(_OWORD *)v465;
                v468 = *((_OWORD *)v465 + 2);
                v466[1] = v467;
                v469 = *((_OWORD *)v465 + 3);
                v466[2] = v468;
                v470 = *((_OWORD *)v465 + 4);
                v466[3] = v469;
                v471 = *((_OWORD *)v465 + 5);
                v466[4] = v470;
                v472 = *((_OWORD *)v465 + 6);
                v466[5] = v471;
                v473 = *((_OWORD *)v465 + 7);
                v465 += 32;
                v466[6] = v472;
                v466 += 8;
                *(v466 - 1) = v473;
                --v463;
              }
              while ( v463 );
              v474 = *(_QWORD *)(v91 + 2672);
              LODWORD(v516[17]) = 0;
              LODWORD(v516[18]) = 0;
              LODWORD(v516[19]) = 4;
              v475 = OUTPUTDUPL_MGR::ProcessPresent(
                       *(OUTPUTDUPL_MGR **)(v474 + 104),
                       this,
                       (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                       v462,
                       HIDWORD(v516[0]),
                       (struct _D3DKMT_PRESENT_RGNS *)&v516[17],
                       (const struct DXGK_PRESENT_PARAMS *)a2,
                       (*(_DWORD *)(v89[6].Count + 4) >> 6) & 0xF,
                       v84,
                       v72);
              if ( v475 == 259 )
                v475 = 0;
              LODWORD(v68) = v475;
            }
          }
        }
      }
    }
    goto LABEL_96;
  }
  v318 = *((_QWORD *)this + 2);
  v319 = *(_QWORD *)(v318 + 1848);
  if ( !v319 )
  {
    v334 = WdLogNewEntry5_WdAssertion(v318, v73);
    *(_QWORD *)(v334 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v334 + 32) = -1073741822LL;
    WdLogEvent5_WdAssertion(v334);
    LODWORD(v68) = -1073741811;
    goto LABEL_100;
  }
  v320 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  *(_QWORD *)&v514.hDevice = 0LL;
  if ( (*(_DWORD *)&v320 & 0x10000000) == 0 )
  {
    v68 = v506;
    if ( (*(_BYTE *)&v320 & 4) != 0 )
      v68 = v497;
    v321 = *(unsigned int *)(*((_QWORD *)v68 + 6) + 4LL);
    if ( (v321 & 0x10) != 0 )
    {
      v322 = (_QWORD *)WdLogNewEntry5_WdEvent(v318, v321);
      v322[3] = -1071775482LL;
      v322[4] = this;
      v322[5] = v68;
      WdLogEvent5_WdEvent(v322);
      LODWORD(v68) = -1071775482;
      goto LABEL_100;
    }
    v323 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(ADAPTER_DISPLAY **)(v319 + 2672),
                        ((unsigned int)v321 >> 6) & 0xF);
    v517.Flags.Value = 1;
    v517.Rotation = -1;
    *(_OWORD *)&v519.hAllocation = v323;
    memset(&v517.Width, 0, 32);
    v324 = *((_QWORD *)this + 2);
    v517.hAllocation = *(HANDLE *)(*((_QWORD *)v68 + 6) + 16LL);
    v325 = ADAPTER_RENDER::DdiDescribeAllocation(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v324 + 16) + 16LL) + 2680LL),
             &v517);
    v328 = v325;
    if ( v325 < 0 )
    {
      v329 = (_QWORD *)WdLogNewEntry5_WdError(v327, v326);
      v329[3] = v328;
      v329[4] = this;
      v329[5] = *((unsigned int *)v68 + 4);
      v329[6] = v68;
      v329[7] = (*(_DWORD *)(*((_QWORD *)v68 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v329);
      LODWORD(v68) = -1073741811;
      goto LABEL_100;
    }
    v330 = v517.Width;
    if ( v517.Width == LODWORD(v519.hAllocation) )
    {
      v331 = v517.Height;
      if ( v517.Height == HIDWORD(v519.hAllocation) )
      {
        if ( *((_BYTE *)this + 457) )
        {
LABEL_421:
          v72 = a3;
          v514.Flags.Value = v330;
          v318 = *((_QWORD *)this + 2);
          goto LABEL_424;
        }
        v332 = RemoveAlphaChannel((enum _D3DDDIFORMAT)v519.Width);
        if ( RemoveAlphaChannel(v517.Format) == v332 )
        {
          v331 = v517.Height;
          LODWORD(v330) = v517.Width;
          goto LABEL_421;
        }
      }
    }
    v333 = (_QWORD *)WdLogNewEntry5_WdEvent(v330, v326);
    v333[3] = -1071775482LL;
    v333[4] = this;
    v333[5] = v68;
    WdLogEvent5_WdEvent(v333);
    LODWORD(v68) = -1071775739;
    goto LABEL_100;
  }
  v514.Flags.Value = a2[1].hSource;
  v331 = a2[1].hDestination;
LABEL_424:
  *((_DWORD *)&v514.Flags + 1) = v331;
  LODWORD(v68) = ADAPTER_DISPLAY::PresentDisplayOnly(
                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(v318 + 1848) + 2672LL),
                   this,
                   VidPnSourceId,
                   a2,
                   &v511,
                   v72,
                   (struct tagRECT *)&v514);
  if ( (int)v68 >= 0 )
  {
    if ( (a2->Flags.Value & 4) != 0 )
    {
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), VidPnSourceId);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v497, 0, 1u);
      UpdatePostComposition(
        VidPnSourceId,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2672LL));
    }
    v84 = v508;
    goto LABEL_91;
  }
LABEL_96:
  v92 = (_QWORD *)((char *)this + 376);
LABEL_97:
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    && (_DWORD)v68 != -1073741130 )
  {
    v476 = WdLogNewEntry5_WdAssertion(v93, v67);
    *(_QWORD *)(v476 + 24) = 5955LL;
    WdLogEvent5_WdAssertion(v476);
  }
  if ( *v92 )
  {
    v477 = WdLogNewEntry5_WdAssertion(v93, v67);
    *(_QWORD *)(v477 + 24) = 5956LL;
    WdLogEvent5_WdAssertion(v477);
  }
LABEL_100:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v510, v67);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v506, v94);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v497, v95);
  return (unsigned int)v68;
}
