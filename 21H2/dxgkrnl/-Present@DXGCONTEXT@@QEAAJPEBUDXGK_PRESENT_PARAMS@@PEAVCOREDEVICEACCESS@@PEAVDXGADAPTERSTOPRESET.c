/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520
 * Callers:
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0001BC0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0001C18 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z @ 0x1C000B938 (-VidMmETWAllocationHandle@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@I@Z.c)
 *     ?GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ @ 0x1C000BA60 (-GetWin32kInterface@DXGPROCESS@@QEBAQEBU_DXGKWIN32KENG_INTERFACE@@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000BA70 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000C3E4 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?IsFullWDDMDevice@DXGDEVICE@@QEBA?BEI@Z @ 0x1C0014160 (-IsFullWDDMDevice@DXGDEVICE@@QEBA-BEI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00190E4 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C001A49C (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C001A78C (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001AC18 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?IsDisplayAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001B00C (-IsDisplayAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0020C00 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C0020D84 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0020DA0 (-VidSchGetMonitorPowerState@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0020DC4 (-VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT@@QEAAKPEAU_VIDSCH_DEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C002C6E4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z @ 0x1C002E938 (-ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE@@QEAAXI@Z.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z @ 0x1C002EC2A (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAU2@@Z.c)
 *     ?hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ @ 0x1C002F2F4 (-hDestDc@CWin32kLocks@@QEBAPEAUHDC__@@XZ.c)
 *     McTemplateK0pqpqtt_EtwWriteTransfer @ 0x1C002F6B8 (McTemplateK0pqpqtt_EtwWriteTransfer.c)
 *     McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer @ 0x1C002F776 (McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00574F4 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C015A224 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C015A36C (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0178780 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0179A80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C0195D50 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01962B0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01CE260 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01D11CC (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01D9004 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D9A30 (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x1C01DBB68 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C01EA970 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01EBE94 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z @ 0x1C01EC7CC (-GetDdiSubRectCnt@DXGPRESENT@@QEBAII@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C01EC7EC (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1C01EC80C (-CheckOutput@DXGPRESENT@@QEAAXII@Z.c)
 *     ?RemoveAlphaChannel@@YA?AW4_D3DDDIFORMAT@@W41@@Z @ 0x1C0224DB2 (-RemoveAlphaChannel@@YA-AW4_D3DDDIFORMAT@@W41@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C02C16C8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C032E6B0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C032FD6C (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C0330C24 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0330DCC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0331EE0 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0373D20 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0379004 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C037EA44 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
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
  struct VIDSCH_SUBMIT_DATA_BASE *v8; // r15
  __int64 v10; // rax
  int v11; // r14d
  const struct _DXGKWIN32KENG_INTERFACE *Win32kInterface; // rax
  UINT v13; // ecx
  int v14; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v16; // zf
  int v17; // ecx
  UINT Width; // esi
  UINT Height; // r12d
  D3DKMT_HANDLE v20; // edi
  D3DKMT_HANDLE v21; // edi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // ecx
  struct _EX_RUNDOWN_REF **v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdx
  struct _EX_RUNDOWN_REF *v28; // rdx
  __int64 v29; // r10
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rdi
  D3DKMT_HANDLE v33; // ecx
  __int64 Value; // r9
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v36; // r12
  ULONG_PTR v37; // rcx
  unsigned int v38; // eax
  unsigned int VidPnSourceId; // esi
  DXGADAPTER *v40; // rcx
  __int64 v41; // rdx
  int v42; // r8d
  UINT v43; // ecx
  UINT v44; // ecx
  int v45; // ecx
  UINT v46; // ecx
  UINT v47; // ecx
  UINT v48; // edx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int DeviceFlipMode; // eax
  int v52; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  const struct DXGALLOCATION *DisplayedPrimary; // rax
  __int64 v55; // rax
  int v56; // ecx
  __int64 v57; // rdx
  unsigned int v58; // edi
  int v59; // eax
  DXGDEVICE *v60; // rcx
  COREDEVICEACCESS *v61; // rdi
  int v62; // eax
  int v63; // edi
  struct _VIDMM_DMA_BUFFER **v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  struct VIDMM_GLOBAL *v67; // rdx
  VIDMM_EXPORT *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct _EX_RUNDOWN_REF *v71; // rax
  _QWORD *v72; // rdi
  char v74; // di
  __int64 v75; // rax
  __int64 v76; // rcx
  const RECT *pSrcSubRects; // r8
  __int64 SubRectCnt; // rdx
  unsigned int v79; // eax
  UINT v80; // edx
  DXGPRESENT *v81; // rcx
  DXGPRESENT *v82; // rcx
  DXGADAPTER *v83; // rcx
  __int64 v84; // rdx
  unsigned int v85; // edi
  int v86; // eax
  BOOL v87; // edi
  __int64 v88; // rcx
  int v89; // eax
  unsigned int v90; // esi
  HANDLE CurrentThreadId; // rax
  __int64 v92; // rcx
  COREDEVICEACCESS *v93; // rdi
  HDC *v94; // rsi
  HDC v95; // rcx
  int v96; // eax
  HDC v97; // rdi
  HDEV v98; // rsi
  __int64 v99; // rcx
  __int64 v100; // rax
  int v101; // ecx
  HDC v102; // rsi
  DXGPROCESS *Current; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v104; // rax
  const struct _DXGKWIN32KENG_INTERFACE *v105; // rdi
  unsigned int DdiSubRectCnt; // eax
  DXGPRESENT *v107; // rcx
  struct tagRECT *DdiSubRectList; // rax
  __int64 BroadcastContextCount; // rcx
  __int64 v110; // rax
  int v111; // eax
  int v112; // edi
  unsigned int i; // edi
  unsigned int v114; // ecx
  unsigned int v115; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v116; // eax
  __int64 v117; // r9
  __int128 *v118; // r8
  RECT *v119; // rdx
  struct _VIDMM_DMA_BUFFER **v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rdi
  __int64 v123; // r11
  struct _VIDMM_DMA_BUFFER *v124; // rax
  HWND hWindow; // r9
  const RECT *pDstSubRects; // r14
  UINT v127; // esi
  UINT v128; // edi
  __int64 v129; // r15
  unsigned int v130; // edx
  unsigned int v131; // r10d
  unsigned __int64 v132; // r8
  unsigned int v133; // r9d
  __int64 v134; // rcx
  int v135; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v136; // edx
  const RECT *v137; // rcx
  signed __int64 v138; // r8
  __int64 v139; // rax
  __int128 v140; // xmm0
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // r8
  int v147; // ecx
  struct _EX_RUNDOWN_REF **v148; // rax
  struct _EX_RUNDOWN_REF *v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // r8
  int v152; // eax
  struct _VIDMM_DMA_BUFFER *v153; // rdx
  int v154; // eax
  int v155; // r12d
  int v156; // r9d
  __int64 v157; // r9
  int v158; // r12d
  struct DXGALLOCATION *v159; // rax
  struct DXGALLOCATION *v160; // rcx
  int v161; // r9d
  const RECT *v162; // r8
  __int64 v163; // rdx
  signed int v164; // edi
  __int64 v165; // rdx
  unsigned int v166; // esi
  __int64 v167; // rax
  __int64 v168; // r9
  DXGADAPTER *v169; // rcx
  struct _EX_RUNDOWN_REF *v170; // rdx
  D3DKMT_HANDLE v171; // ecx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v172; // eax
  struct DXGALLOCATION *v173; // rax
  unsigned __int64 v174; // rdx
  LONG v175; // edx
  RECT *p_SrcRect; // r14
  __int64 v177; // rcx
  LONG v178; // r9d
  LONG v179; // r8d
  unsigned int v180; // r10d
  unsigned int v181; // ecx
  __int64 v182; // rdi
  const RECT *v183; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v184; // r8d
  LONG v185; // r9d
  __int64 v186; // r10
  LONG v187; // r11d
  LONG v188; // edi
  const RECT *v189; // rax
  unsigned int v190; // r10d
  int v191; // r8d
  int v192; // r9d
  __int64 v193; // rdx
  RECT v194; // xmm0
  __int64 v195; // r14
  UINT v196; // edx
  RECT v197; // xmm0
  __int64 v198; // r8
  __int64 v199; // rcx
  LONG v200; // eax
  __int64 v201; // rdi
  __int64 v202; // r12
  const struct tagRECT *v203; // rdx
  UINT v204; // eax
  __int64 v205; // r14
  ULONG_PTR Count; // rax
  DXGADAPTER *v207; // rcx
  int v208; // r8d
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v209; // edx
  __int64 v210; // r8
  bool IsFullWDDMDevice; // al
  struct _KTHREAD **v212; // rcx
  unsigned int v213; // edx
  int v214; // edi
  int v215; // eax
  UINT v216; // ecx
  int v217; // eax
  __int64 v218; // rdi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v220; // eax
  __int64 v221; // r9
  struct DXGALLOCATION *v222; // rax
  __int64 v223; // rdx
  bool v224; // al
  int v225; // eax
  int v226; // ecx
  __int64 v227; // rdi
  __int64 v228; // r10
  __int64 v229; // r12
  HWND v230; // r11
  UINT v231; // r14d
  UINT v232; // edi
  const RECT *v233; // r11
  unsigned int v234; // edx
  unsigned int v235; // r10d
  __int64 v236; // r8
  unsigned int v237; // r9d
  __int64 v238; // rcx
  __int64 v239; // rdx
  __int64 v240; // rcx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v241; // eax
  struct DXGALLOCATION *v242; // r14
  unsigned int v243; // edx
  __int128 v244; // xmm0
  __int64 v245; // rax
  __int64 v246; // r8
  int v247; // eax
  __int64 v248; // rbx
  UINT v249; // ecx
  D3DKMT_HANDLE v250; // eax
  enum _D3DDDIFORMAT v251; // edi
  int v252; // eax
  int v253; // eax
  int v254; // eax
  char v255; // r9
  struct _VIDMM_DMA_BUFFER *v256; // rdx
  int v257; // eax
  int v258; // r14d
  char v259; // si
  int v260; // edi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v261; // r8d
  __int128 v262; // xmm0
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  struct tagRECT *v267; // rax
  int v268; // edi
  __int64 v269; // rcx
  struct COREDEVICEACCESS *v270; // rdi
  struct DXGPROCESS *v271; // rax
  unsigned int v272; // edi
  struct DXGPROCESS *v273; // rsi
  int v274; // r9d
  __int64 v275; // rax
  __int64 v276; // r8
  int v277; // ecx
  struct _EX_RUNDOWN_REF *v278; // rdx
  __int64 v279; // rax
  unsigned int v280; // r12d
  unsigned __int8 *pPrivateDriverData; // rsi
  UINT PrivateDriverDataSize; // r14d
  unsigned int v283; // r15d
  __int64 v284; // rdi
  struct DXGPROCESS *v285; // rax
  int v286; // edi
  unsigned int v287; // r8d
  __int64 v288; // rdi
  __int64 v289; // r11
  __int64 v290; // r14
  const RECT *v291; // r12
  UINT v292; // esi
  UINT v293; // edi
  unsigned int v294; // edx
  unsigned int v295; // r10d
  unsigned __int64 v296; // r8
  unsigned int v297; // r9d
  __int64 v298; // rcx
  DXGDEVICE *v299; // rdi
  unsigned __int8 v300; // r14
  COREDEVICEACCESS *v301; // rdi
  COREDEVICEACCESS *v302; // rcx
  struct DXGDEVICE *v303; // rsi
  __int64 v304; // rdi
  struct DXGPROCESS *v305; // rax
  int v306; // eax
  COREDEVICEACCESS *v307; // r15
  unsigned int v308; // eax
  DXGDEVICE *v309; // rcx
  const RECT *v310; // rdi
  int v311; // eax
  unsigned int (__fastcall *v312)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, _QWORD, int, D3DKMT_HANDLE, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)); // r15
  int v313; // edi
  UINT Color; // esi
  bool v315; // r14
  HDC v316; // rax
  struct DXGDEVICE *v317; // rsi
  __int64 v318; // rdi
  struct DXGPROCESS *v319; // rax
  DXGDEVICE *v320; // rsi
  unsigned __int8 v321; // di
  CWin32kLocks *v322; // r15
  const RECT *v323; // rsi
  int v324; // eax
  int v325; // eax
  unsigned int (__fastcall *v326)(HDC, _QWORD, const RECT *, _QWORD, UINT); // r15
  UINT v327; // edi
  UINT v328; // esi
  const RECT *v329; // r14
  HDC v330; // rax
  int v331; // eax
  D3DKMT_HANDLE *v332; // rdx
  __int64 v333; // r8
  __int64 v334; // rcx
  int CurrentOrientation; // eax
  int v336; // ecx
  __int64 v337; // r14
  unsigned int v338; // esi
  unsigned int v339; // edi
  struct DXGPROCESS *v340; // rax
  RECT DstRect; // xmm0
  unsigned int v342; // r9d
  __int64 v343; // r10
  int v344; // edx
  D3DKMT_HANDLE *BroadcastContext; // rcx
  _OWORD *v346; // rdx
  __int128 v347; // xmm1
  __int128 v348; // xmm0
  __int128 v349; // xmm1
  __int128 v350; // xmm0
  __int128 v351; // xmm1
  __int128 v352; // xmm0
  __int128 v353; // xmm1
  __int64 v354; // rcx
  int v355; // eax
  struct _DXGKARG_PRESENT *v356; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v357; // [rsp+20h] [rbp-100h]
  struct tagRECT *v358; // [rsp+28h] [rbp-F8h]
  __int64 v359; // [rsp+28h] [rbp-F8h]
  struct tagRECT *v360; // [rsp+40h] [rbp-E0h]
  int v361; // [rsp+40h] [rbp-E0h]
  struct _D3DKMT_PRESENT_RGNS *v362; // [rsp+48h] [rbp-D8h]
  int v363; // [rsp+48h] [rbp-D8h]
  struct _VIDMM_DMA_BUFFER *v364; // [rsp+50h] [rbp-D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v365; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v366[2]; // [rsp+60h] [rbp-C0h]
  enum _D3DDDIFORMAT v367; // [rsp+60h] [rbp-C0h]
  struct COREDEVICEACCESS *v368; // [rsp+68h] [rbp-B8h]
  __int64 v369; // [rsp+70h] [rbp-B0h]
  __int64 v370; // [rsp+78h] [rbp-A8h]
  __int64 v371; // [rsp+80h] [rbp-A0h]
  __int64 v372; // [rsp+88h] [rbp-98h]
  __int64 v373; // [rsp+90h] [rbp-90h]
  __int64 v374; // [rsp+98h] [rbp-88h]
  char v375; // [rsp+A0h] [rbp-80h]
  D3DKMT_HANDLE v377; // [rsp+B0h] [rbp-70h]
  unsigned int v378; // [rsp+B4h] [rbp-6Ch] BYREF
  struct DXGALLOCATION *v379; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v380; // [rsp+C0h] [rbp-60h]
  char v381; // [rsp+C4h] [rbp-5Ch]
  DXGADAPTERSTOPRESETLOCKSHARED *v382; // [rsp+C8h] [rbp-58h]
  unsigned int v383[2]; // [rsp+D0h] [rbp-50h]
  unsigned int hSource; // [rsp+D8h] [rbp-48h]
  struct DXGALLOCATION *v385; // [rsp+E0h] [rbp-40h] BYREF
  unsigned int v386[2]; // [rsp+E8h] [rbp-38h] BYREF
  const RECT *v387; // [rsp+F0h] [rbp-30h]
  struct _EX_RUNDOWN_REF *v388; // [rsp+F8h] [rbp-28h] BYREF
  unsigned int v389; // [rsp+100h] [rbp-20h]
  struct DXGCONTEXT **v390; // [rsp+108h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v391; // [rsp+110h] [rbp-10h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v392; // [rsp+118h] [rbp-8h]
  struct _DXGKARG_PRESENT v393; // [rsp+120h] [rbp+0h] BYREF
  struct tagRECT Source1; // [rsp+1D0h] [rbp+B0h] BYREF
  struct _D3DKMT_LOCK2 v395; // [rsp+1E0h] [rbp+C0h] BYREF
  __int128 v396; // [rsp+1F8h] [rbp+D8h] BYREF
  _OWORD v397[35]; // [rsp+210h] [rbp+F0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v398; // [rsp+440h] [rbp+320h] BYREF
  int v399; // [rsp+47Ch] [rbp+35Ch]
  struct _DXGKARG_DESCRIBEALLOCATION v400; // [rsp+480h] [rbp+360h] BYREF
  enum _D3DDDIFORMAT v402[4]; // [rsp+4C0h] [rbp+3A0h] BYREF
  _BYTE v404[64]; // [rsp+510h] [rbp+3F0h] BYREF
  _BYTE v405[64]; // [rsp+550h] [rbp+430h] BYREF

  v8 = a7;
  *(_QWORD *)&Source1.left = a5;
  v390 = a6;
  v10 = *((_QWORD *)this + 2);
  v382 = a4;
  v392 = a7;
  v11 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(v10 + 16)) )
  {
    WdLogSingleEntry1(1LL, 3911LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3911LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 45) )
  {
    WdLogSingleEntry1(1LL, 3912LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer == NULL", 3912LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (a2->Flags.Value & 0x4000) != 0
    || (Win32kInterface = DXGPROCESS::GetWin32kInterface(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL)),
        v13 = a2->Flags.Value & 0x12000,
        v387 = (const RECT *)Win32kInterface,
        v13 == 73728) )
  {
    LODWORD(v36) = -1073741811;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    return (unsigned int)v36;
  }
  memset(&v393, 0, sizeof(v393));
  v14 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v14;
  v16 = (a2->Flags.Value & 0x10000) == 0;
  v378 = hDestination;
  if ( v16 )
    v14 |= 1u;
  v17 = v14 | 0x100;
  *(_DWORD *)a7 = v17;
  *(_DWORD *)a7 = v17 ^ (v17 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v377 = 0;
  v380 = 0;
  LODWORD(v388) = 0;
  Width = 0;
  v383[0] = 0;
  Height = 0;
  v386[0] = 0;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v379, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v385, 0LL);
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v391, 0LL);
  v20 = a2->hDestination;
  v389 = 0;
  if ( !v20 )
    goto LABEL_14;
  v144 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v144 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v156 = *(_DWORD *)(v144 + 272);
      if ( v156 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (const EVENT_DESCRIPTOR *)"g", 0LL, v156);
    }
    ExAcquirePushLockSharedEx(v144 + 248, 0LL);
  }
  v145 = (v20 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v145 >= *(_DWORD *)(v144 + 296) )
    goto LABEL_221;
  v146 = *(_QWORD *)(v144 + 280);
  v147 = *(_DWORD *)(v146 + 16 * v145 + 8);
  if ( ((v20 >> 25) & 0x60) != (*(_BYTE *)(v146 + 16 * v145 + 8) & 0x60) || (v147 & 0x2000) != 0 || (v147 & 0x1F) == 0 )
    goto LABEL_221;
  v148 = (struct _EX_RUNDOWN_REF **)(v146 + 16LL * (unsigned int)v145);
  if ( (v147 & 0x1F) != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_221:
    v149 = 0LL;
    goto LABEL_204;
  }
  v149 = *v148;
LABEL_204:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v386, v149);
  ExReleasePushLockSharedEx(v144 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v385, (struct _EX_RUNDOWN_REF **)v386);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v386);
  if ( !v385 )
  {
    v157 = a2->hDestination;
LABEL_255:
    v158 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, this, v157);
LABEL_338:
    v11 = v158;
    goto LABEL_339;
  }
  v150 = *((_QWORD *)this + 2);
  v151 = *(_QWORD *)(*(_QWORD *)(v150 + 16) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v385 + 1) + 16LL) + 16LL) != v151 )
  {
    v158 = -1073741811;
    WdLogSingleEntry3(2LL, v150, v385, -1073741811LL);
    v159 = v385;
LABEL_258:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      (__int64)v159,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_338;
  }
  memset(&v400.Width, 0, 40);
  v400.hAllocation = *(HANDLE *)(*((_QWORD *)v385 + 6) + 16LL);
  v152 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v150 + 16), &v400, v151);
  v32 = v152;
  if ( v152 < 0 )
  {
    WdLogSingleEntry4(2LL, v152, this, *(_QWORD *)(*((_QWORD *)v385 + 6) + 16LL), v385);
    v160 = v385;
LABEL_261:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
      v32,
      (__int64)this,
      *(_QWORD *)(*((_QWORD *)v160 + 6) + 16LL),
      (__int64)v160,
      0LL);
    v158 = v32;
    goto LABEL_338;
  }
  Width = v400.Width;
  Height = v400.Height;
  v383[0] = v400.Width;
  v386[0] = v400.Height;
LABEL_14:
  if ( (a2->Flags.Value & 0x8002) != 0 )
  {
    v28 = (struct _EX_RUNDOWN_REF *)v379;
    goto LABEL_28;
  }
  v21 = a2->hSource;
  v22 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v22 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v161 = *(_DWORD *)(v22 + 272);
      if ( v161 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (const EVENT_DESCRIPTOR *)"g", 0LL, v161);
    }
    ExAcquirePushLockSharedEx(v22 + 248, 0LL);
  }
  v23 = (v21 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 < *(_DWORD *)(v22 + 296)
    && (v24 = *(_QWORD *)(v22 + 280),
        v25 = *(_DWORD *)(v24 + 16 * v23 + 8),
        ((v21 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60))
    && (v25 & 0x2000) == 0
    && (v25 & 0x1F) != 0 )
  {
    v26 = (struct _EX_RUNDOWN_REF **)(v24 + 16LL * (unsigned int)v23);
    if ( (v25 & 0x1F) == 5 )
    {
      v27 = *v26;
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v27 = 0LL;
    }
  }
  else
  {
    v27 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v388, v27);
  ExReleasePushLockSharedEx(v22 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v379, &v388);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v388);
  v28 = (struct _EX_RUNDOWN_REF *)v379;
  if ( !v379 )
  {
    v157 = a2->hSource;
    goto LABEL_255;
  }
  v11 = 0;
  v16 = (a2->Flags.Value & 0x10000000) == 0;
  memset(&v400.Width, 0, 40);
  v400.hAllocation = *(HANDLE *)(*((_QWORD *)v379 + 6) + 16LL);
  if ( !v16 )
  {
    v377 = a2[1].hSource;
    v380 = a2[1].hDestination;
    LODWORD(v388) = a2[1].Color;
    goto LABEL_27;
  }
  v29 = *((_QWORD *)this + 2);
  v30 = *(_QWORD *)(v29 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v379 + 1) + 16LL) + 16LL) != *(_QWORD *)(v30 + 16) )
  {
    v158 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v379, -1073741811LL);
    v159 = v379;
    goto LABEL_258;
  }
  v31 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v29 + 16), &v400, v30);
  v32 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry4(2LL, v31, this, *(_QWORD *)(*((_QWORD *)v379 + 6) + 16LL), v379);
    v160 = v379;
    goto LABEL_261;
  }
  v28 = (struct _EX_RUNDOWN_REF *)v379;
  LODWORD(v388) = v400.Format;
  v380 = v400.Height;
  v377 = v400.Width;
LABEL_27:
  Width = v383[0];
LABEL_28:
  v33 = a2->hDestination;
  if ( !v33 || (LODWORD(Value) = a2->Flags.0, (Value & 0x10000) != 0) )
  {
    Value = a2->Flags.Value;
    if ( (Value & 4) == 0 )
    {
      if ( (Value & 3) == 0 )
      {
        if ( (Value & 0x8000) == 0 )
        {
          LODWORD(v36) = -1073741811;
          WdLogSingleEntry5(3LL, -1073741811LL, this, a2->pSrcSubRects, a2->SubRectCnt, a2->Flags.Value);
          goto LABEL_96;
        }
        if ( (Value & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
            {
LABEL_35:
              LODWORD(v36) = SubmitPresentHistoryTokenPreparation(
                               v382,
                               a3,
                               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                               &a2->PresentHistoryToken,
                               a2->PresentLimitSemaphore,
                               (a2->Flags.Value & 0x10) != 0);
              if ( (int)v36 < 0 )
                goto LABEL_100;
              TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v398, &a2->PresentHistoryToken, v382, a3);
              LODWORD(v398.hAllocation) = SubmitPresentHistoryToken(
                                            &a2->PresentHistoryToken,
                                            (struct _SLIST_ENTRY *)a3,
                                            v382,
                                            *(struct CWin32kLocks **)&Source1.left,
                                            1,
                                            0LL,
                                            (struct DXGK_PRESENT_PARAMS *)a2,
                                            a7,
                                            this,
                                            0LL,
                                            0LL);
              LODWORD(v36) = v398.hAllocation;
              TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v398);
              goto LABEL_94;
            }
          }
          else if ( ((Model - 7) & 0xFFFFFFFD) == 0 )
          {
            goto LABEL_35;
          }
        }
        LODWORD(v36) = -1073741811;
        WdLogSingleEntry3(3LL, this, a2->Flags.Value, -1073741811LL);
        goto LABEL_100;
      }
      v74 = 0;
      v375 = 0;
      if ( (Value & 0x100) != 0 )
      {
        v75 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v75 + 1848) )
        {
          LODWORD(v36) = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), -1073741811LL);
          goto LABEL_100;
        }
        v76 = *(unsigned int *)(v75 + 1856);
        if ( (unsigned int)v76 <= a2->VidPnSourceId )
        {
          WdLogSingleEntry2(3LL, a2->VidPnSourceId, v76);
          LODWORD(v36) = -1073741811;
          goto LABEL_100;
        }
      }
      pSrcSubRects = a2->pSrcSubRects;
      if ( (Value & 2) != 0 )
      {
        if ( pSrcSubRects && a2->SubRectCnt && (Value & 0x86BD) == 0 )
        {
          hSource = 0;
          goto LABEL_113;
        }
      }
      else if ( pSrcSubRects )
      {
        SubRectCnt = a2->SubRectCnt;
        if ( (_DWORD)SubRectCnt )
        {
          if ( v377 && v380 && (Value & 0x802E) == 0 )
          {
            v79 = ((unsigned int)Value >> 10) & 1;
            if ( (((unsigned int)Value >> 9) & 1) != 0 )
            {
              if ( (((unsigned int)Value >> 9) & 1) == v79 )
              {
                LODWORD(v36) = -1073741811;
                WdLogSingleEntry5(3LL, -1073741811LL, this, pSrcSubRects, SubRectCnt, Value);
                goto LABEL_100;
              }
            }
            else if ( !v79 )
            {
              goto LABEL_113;
            }
            if ( (Value & 0x100) == 0
              || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                    *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                    *((const struct DXGDEVICE **)this + 2),
                    a2->VidPnSourceId) )
            {
              v222 = (struct DXGALLOCATION *)a2->Flags.Value;
              pSrcSubRects = a2->pSrcSubRects;
              goto LABEL_649;
            }
LABEL_113:
            v80 = a2->Flags.Value & 3 | v393.Flags.Value & 0xFFFFFF8C | (a2->Flags.Value >> 5) & 0x70;
            v393.Color = a2->Color;
            v81 = (DXGPRESENT *)*((_QWORD *)this + 19);
            v393.Flags.Value = v80;
            LODWORD(v36) = DXGPRESENT::CheckInput(v81, a2, v377, v380);
            if ( (int)v36 < 0 )
              goto LABEL_96;
            v82 = (DXGPRESENT *)*((_QWORD *)this + 19);
            if ( (*((_DWORD *)v82 + 1) & 4) != 0 )
            {
LABEL_216:
              if ( bTracingEnabled && !v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                McTemplateK0p_EtwWriteTransfer(
                  (REGHANDLE *)&DxgkControlGuid_Context,
                  &EventBlitCancel,
                  0LL,
                  a2->hWindow);
LABEL_95:
              v71 = v391;
              if ( v391 )
              {
                if ( (a2->Flags.Value & 0x10000000) == 0 )
                {
                  v142 = *((_QWORD *)this + 2);
                  v143 = *(_QWORD *)(v142 + 1848);
                  if ( v143 )
                  {
                    if ( (*(_DWORD *)(*(_QWORD *)(v142 + 40) + 424LL) & 4) == 0 )
                    {
                      v342 = v389;
                      HIDWORD(v397[0]) = 0;
                      *(_QWORD *)((char *)&v397[17] + 4) = 0LL;
                      v343 = 2LL;
                      HIDWORD(v397[17]) = 0;
                      DWORD1(v397[19]) = 0;
                      LODWORD(v397[0]) = a2->hDevice;
                      *(_OWORD *)((char *)&v397[18] + 4) = 0LL;
                      DWORD1(v397[0]) = v389;
                      v344 = (*(_DWORD *)(v391[6].Count + 4) >> 6) & 0xF;
                      HIDWORD(v397[0]) = a2->BroadcastContextCount;
                      DWORD2(v397[0]) = v344;
                      BroadcastContext = a2->BroadcastContext;
                      v346 = &v397[1];
                      do
                      {
                        v347 = *((_OWORD *)BroadcastContext + 1);
                        *v346 = *(_OWORD *)BroadcastContext;
                        v348 = *((_OWORD *)BroadcastContext + 2);
                        v346[1] = v347;
                        v349 = *((_OWORD *)BroadcastContext + 3);
                        v346[2] = v348;
                        v350 = *((_OWORD *)BroadcastContext + 4);
                        v346[3] = v349;
                        v351 = *((_OWORD *)BroadcastContext + 5);
                        v346[4] = v350;
                        v352 = *((_OWORD *)BroadcastContext + 6);
                        v346[5] = v351;
                        v353 = *((_OWORD *)BroadcastContext + 7);
                        BroadcastContext += 32;
                        v346[6] = v352;
                        v346 += 8;
                        *(v346 - 1) = v353;
                        --v343;
                      }
                      while ( v343 );
                      v354 = *(_QWORD *)(v143 + 2792);
                      LODWORD(v397[17]) = 0;
                      LODWORD(v397[18]) = 0;
                      LODWORD(v397[19]) = 4;
                      v355 = OUTPUTDUPL_MGR::ProcessPresent(
                               *(OUTPUTDUPL_MGR **)(v354 + 120),
                               this,
                               (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS)4,
                               v342,
                               HIDWORD(v397[0]),
                               (struct _D3DKMT_PRESENT_RGNS *)&v397[17],
                               (const struct DXGK_PRESENT_PARAMS *)a2,
                               (*(_DWORD *)(v71[6].Count + 4) >> 6) & 0xF,
                               v390,
                               a3);
                      if ( v355 == 259 )
                        v355 = 0;
                      LODWORD(v36) = v355;
                    }
                  }
                }
              }
              goto LABEL_96;
            }
            DXGPRESENT::CheckOutput(v82, Width, v386[0]);
            v83 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
            if ( !v83 || DXGADAPTER::IsDisplayOnlyAdapter(v83) )
            {
              v252 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, (a2->Flags.Value & 0x10) == 0, a3);
              v36 = v252;
              if ( v252 < 0 )
                goto LABEL_449;
            }
            else
            {
              v84 = *((_QWORD *)this + 2);
              if ( *(_QWORD *)(v84 + 1848) != *(_QWORD *)(*(_QWORD *)(v84 + 16) + 16LL) )
              {
                WdLogSingleEntry1(1LL, 5137LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
                  5137LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v84 = *((_QWORD *)this + 2);
              }
              v85 = 0;
              if ( *(_DWORD *)(v84 + 1856) )
              {
                while ( 1 )
                {
                  v86 = DXGCONTEXT::WaitForQueuedPresentLimit(this, v85, (a2->Flags.Value & 0x10) == 0, a3);
                  v36 = v86;
                  if ( v86 < 0 )
                    break;
                  if ( ++v85 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL) )
                    goto LABEL_122;
                }
LABEL_449:
                WdLogSingleEntry2(4LL, v36, this);
                goto LABEL_100;
              }
            }
LABEL_122:
            v72 = (_QWORD *)((char *)this + 360);
            LODWORD(v36) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 45, a3, 0);
            if ( (int)v36 < 0 )
              goto LABEL_97;
            if ( !*v72 && !*((_BYTE *)this + 441) )
            {
              WdLogSingleEntry1(1LL, 5175LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"m_pPresentDmaBuffer || IsParavirtualized()",
                5175LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            DXGPRESENTMUTEX::DXGPRESENTMUTEX(
              (DXGPRESENTMUTEX *)&v398,
              *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
            v87 = 0;
            if ( (a2->Flags.Value & 0x10000) != 0 )
            {
              if ( a2->hDestination )
              {
                v88 = *((_QWORD *)v385 + 6);
                v89 = *(_DWORD *)(v88 + 4);
                *(_DWORD *)(v88 + 4) = v89 | 0x400;
                v87 = (v89 & 0x400) == 0;
              }
            }
            else
            {
              v93 = a3;
              COREDEVICEACCESS::Release(a3);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v398);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
              v253 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              LODWORD(v36) = v253;
              if ( v253 < 0 )
              {
                WdLogSingleEntry2(4LL, v253, this);
                goto LABEL_470;
              }
              v87 = 0;
            }
            v90 = (*(__int64 (**)(void))&v387->right)();
            v386[0] = v90;
            CurrentThreadId = PsGetCurrentThreadId();
            v16 = *((_BYTE *)this + 441) == 0;
            *(_QWORD *)v383 = CurrentThreadId;
            if ( v16 )
            {
              VIDSCH_EXPORT::VidSchGetMonitorPowerState(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL),
                *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 632LL));
              CurrentThreadId = *(HANDLE *)v383;
            }
            v92 = *((_QWORD *)this + 19);
            if ( *(_DWORD *)(v92 + 8) == v90
              && *(HANDLE *)(v92 + 56) == CurrentThreadId
              && *(HWND *)(v92 + 48) == a2->hWindow
              && !*(_DWORD *)(v92 + 64)
              && !v87 )
            {
              v254 = *(_DWORD *)(v92 + 4);
              if ( (v254 & 0x108) == 0 )
              {
                if ( (v254 & 1) != 0 )
                {
                  LODWORD(v36) = -1071775738;
                  goto LABEL_140;
                }
                if ( (v254 & 0x10) != 0 || (a2->Flags.Value & 0x10000) != 0 )
                  goto LABEL_140;
                v255 = 0;
                goto LABEL_467;
              }
            }
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
            v93 = a3;
            COREDEVICEACCESS::Release(a3);
            v94 = *(HDC **)&Source1.left;
            LODWORD(v36) = CWin32kLocks::Lock(
                             *(CWin32kLocks **)&Source1.left,
                             a2->hWindow,
                             HIWORD(a2->Flags.Value) & 1,
                             1,
                             0);
            if ( (a2->Flags.Value & 0x10000) == 0
              || (v95 = *v94,
                  *(_QWORD *)&v395.hDevice = 0LL,
                  (*(void (__fastcall **)(HDC, struct _D3DKMT_LOCK2 *))&v387[14].right)(v95, &v395),
                  *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = *(_QWORD *)&v395.hDevice,
                  (a2->Flags.Value & 0x10000) == 0) )
            {
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v398);
            }
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
            v96 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
            if ( v96 >= 0 )
            {
              if ( (int)v36 < 0 )
                goto LABEL_141;
              if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
              {
                WdLogSingleEntry2(4LL, 0LL, this);
                v256 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                if ( v256 )
                {
                  VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                    v256,
                    0LL);
                  *((_QWORD *)this + 45) = 0LL;
                }
                LODWORD(v36) = 0;
                goto LABEL_623;
              }
              v97 = *v94;
              v98 = (HDEV)v94[2];
              LODWORD(v36) = DXGPRESENT::CheckVisRgn(
                               *((DXGPRESENT **)this + 19),
                               a2,
                               v97,
                               v98,
                               *((const struct DXGDEVICE **)this + 2),
                               v377,
                               v380,
                               (enum _D3DDDIFORMAT)v388,
                               1);
              if ( (_DWORD)v36 != 261 )
                goto LABEL_138;
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
              COREDEVICEACCESS::Release(a3);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
              if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                LODWORD(v36) = -1071775738;
              if ( (a2->Flags.Value & 0x10000) == 0 )
                DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v398);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
              v257 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              v258 = v257;
              if ( v257 >= 0 )
              {
                if ( (_DWORD)v36 != -1071775738 )
                  LODWORD(v36) = DXGPRESENT::CheckVisRgn(
                                   *((DXGPRESENT **)this + 19),
                                   a2,
                                   v97,
                                   v98,
                                   *((const struct DXGDEVICE **)this + 2),
                                   v377,
                                   v380,
                                   (enum _D3DDDIFORMAT)v388,
                                   0);
LABEL_138:
                v99 = *((_QWORD *)this + 19);
                if ( (int)v36 < 0 )
                {
                  if ( (*(_BYTE *)(v99 + 4) & 1) != 0 )
                  {
                    *(_QWORD *)(v99 + 56) = *(_QWORD *)v383;
                    *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v386[0];
                  }
                  goto LABEL_140;
                }
                *(_QWORD *)(v99 + 56) = *(_QWORD *)v383;
                if ( (a2->Flags.Value & 0x10000) != 0 )
                {
LABEL_140:
                  v94 = *(HDC **)&Source1.left;
LABEL_141:
                  v100 = *((_QWORD *)this + 19);
                  v381 = 0;
                  v101 = *(_DWORD *)(v100 + 4);
                  if ( (v101 & 0x10) == 0 )
                  {
                    if ( (int)v36 >= 0 && (v101 & 2) == 0 )
                    {
                      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))&v387[14].left)(0LL, 0LL, 0LL) )
                      {
                        if ( (a2->Flags.Value & 0x12100) != 0x10000 )
                        {
                          WdLogSingleEntry1(1LL, 5805LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"((pPresent->Flags.RedirectedBlt) && (!pPresent->Flags.RestrictVidPnSource) && (!pPr"
                                      "esent->Flags.Rotate))",
                            5805LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      else if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) && (a2->Flags.Value & 0x4000000) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 5810LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"GetDisplayAdapter() != NULL || pPresent->Flags.CrossAdapter",
                          5810LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( (a2->Flags.Value & 0x10000) == 0 )
                        goto LABEL_155;
                      v102 = *v94;
                      Current = DXGPROCESS::GetCurrent();
                      v104 = DXGPROCESS::GetWin32kInterface(Current);
                      v105 = v104;
                      if ( !v102
                        || !v104
                        || *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) != a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                      {
                        goto LABEL_155;
                      }
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                      COREDEVICEACCESS::Release(a3);
                      memset(v397, 0, 0x228uLL);
                      DdiSubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), 0);
                      v107 = (DXGPRESENT *)*((_QWORD *)this + 19);
                      LODWORD(v397[0]) = DdiSubRectCnt;
                      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(v107, 0);
                      BroadcastContextCount = a2->BroadcastContextCount;
                      *((_QWORD *)&v397[0] + 1) = DdiSubRectList;
                      *((_QWORD *)&v397[1] + 1) = *((unsigned int *)this + 6);
                      v110 = 1LL;
                      LODWORD(v397[1]) = 1;
                      if ( (_DWORD)BroadcastContextCount )
                      {
                        v332 = a2->BroadcastContext;
                        v333 = BroadcastContextCount;
                        do
                        {
                          v334 = *v332++;
                          *((_QWORD *)&v397[1] + v110 + 1) = v334;
                          v110 = (unsigned int)++LODWORD(v397[1]);
                          --v333;
                        }
                        while ( v333 );
                      }
                      if ( !*((_BYTE *)this + 441)
                        && (unsigned int)VIDSCH_EXPORT::VidSchGetNumUnorderedWaitsInDevice(
                                           *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL),
                                           *(struct _VIDSCH_DEVICE **)(*((_QWORD *)this + 2) + 768LL)) )
                      {
                        v381 = 1;
                        LOBYTE(v397[34]) = 1;
                      }
                      (*((void (__fastcall **)(HDC, _OWORD *))v105 + 30))(v102, v397);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
                      v111 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                      v112 = v111;
                      if ( v111 >= 0 )
                      {
LABEL_155:
                        for ( i = 0; ; ++i )
                        {
                          v16 = (a2->Flags.Value & 0x10000) == 0;
                          v383[0] = i;
                          if ( v16 )
                            v114 = *(_DWORD *)(*((_QWORD *)this + 2) + 1856LL);
                          else
                            v114 = 1;
                          if ( i >= v114 )
                            goto LABEL_210;
                          v393.SubRectCnt = DXGPRESENT::GetDdiSubRectCnt(*((DXGPRESENT **)this + 19), i);
                          if ( v393.SubRectCnt )
                          {
                            if ( (a2->Flags.Value & 0x10000) != 0 )
                            {
                              v115 = v378;
                            }
                            else
                            {
                              v115 = DXGDEVICE::OpenCddPrimaryHandle(
                                       *((DXGDEVICE **)this + 2),
                                       i,
                                       *((_BYTE *)this + 440),
                                       *((_DWORD *)this + 100));
                              v378 = v115;
                            }
                            if ( v115 )
                            {
                              v393.pDstSubRects = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), i);
                              v116 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                              if ( (*(_WORD *)&v116 & 0x2000) != 0 )
                              {
                                CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                                                       i,
                                                       1LL);
                                v336 = 0;
                                if ( CurrentOrientation != 1 )
                                  v336 = 128;
                                v393.Flags.Value = v336 | v393.Flags.Value & 0xFFFFFF7F;
                                v116 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                              }
                              v117 = *((_QWORD *)this + 2);
                              v396 = 0LL;
                              if ( (*(_DWORD *)&v116 & 0x10000) != 0 )
                                v118 = &v396;
                              else
                                v118 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v117 + 1848) + 2792LL) + 128LL)
                                                  + 628LL
                                                  + 4000LL * i);
                              v119 = (RECT *)*((_QWORD *)this + 19);
                              v120 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                              v121 = v117;
                              v393.SrcRect = v119[9];
                              v393.DstRect.top = v119[8].top - *((_DWORD *)v118 + 1);
                              v393.DstRect.bottom = v119[8].bottom - *((_DWORD *)v118 + 1);
                              v393.DstRect.left = v119[8].left - *(_DWORD *)v118;
                              v393.DstRect.right = v119[8].right - *(_DWORD *)v118;
                              if ( bTracingEnabled && *v120 )
                              {
                                v122 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                                         *(VIDMM_EXPORT **)(*(_QWORD *)(v117 + 16) + 648LL),
                                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v117 + 16) + 656LL),
                                         v378);
                                v123 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                                         *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                                         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                                         hSource);
                                v124 = *v120;
                                hWindow = a2->hWindow;
                                pDstSubRects = v393.pDstSubRects;
                                v127 = v393.SubRectCnt;
                                *(_QWORD *)&v395.hDevice = v124;
                                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                                {
                                  LODWORD(v374) = v393.SubRectCnt;
                                  LODWORD(v373) = v393.DstRect.bottom;
                                  LODWORD(v372) = v393.DstRect.top;
                                  LODWORD(v371) = v393.DstRect.right;
                                  LODWORD(v370) = v393.DstRect.left;
                                  LODWORD(v369) = v393.SrcRect.bottom;
                                  LODWORD(v368) = v393.SrcRect.top;
                                  v366[0] = (enum _D3DDDIFORMAT)v393.SrcRect.right;
                                  LODWORD(v365) = v393.SrcRect.left;
                                  LODWORD(v364) = v393.Flags.0;
                                  LODWORD(v362) = 0;
                                  LODWORD(v360) = 1;
                                  McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                                    (__int64)&DxgkControlGuid_Context,
                                    (__int64)&EventBlit,
                                    0LL,
                                    hWindow,
                                    *(_QWORD *)&v395.hDevice,
                                    0LL,
                                    v123,
                                    v122,
                                    v360,
                                    v362,
                                    v364,
                                    v365,
                                    *(_QWORD *)v366,
                                    v368,
                                    v369,
                                    v370,
                                    v371,
                                    v372,
                                    v373,
                                    v374);
                                }
                                v128 = 0;
                                if ( v127 )
                                {
                                  v129 = *(_QWORD *)&v395.hDevice;
                                  while ( 1 )
                                  {
                                    v130 = v127 - v128;
                                    if ( v127 - v128 > 0x10 )
                                      break;
                                    v131 = v127 - v128;
                                    if ( v130 )
                                      goto LABEL_174;
LABEL_176:
                                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                    {
                                      LODWORD(v358) = v131;
                                      LODWORD(v356) = v130 <= 0x10;
                                      McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                                        (__int64)&DxgkControlGuid_Context,
                                        (__int64)&EventBlitRect,
                                        0LL,
                                        v129,
                                        v356,
                                        v358,
                                        &v400,
                                        v404,
                                        v405,
                                        v402);
                                    }
                                    v128 += 16;
                                    if ( v128 >= v127 )
                                    {
                                      v8 = v392;
                                      goto LABEL_180;
                                    }
                                  }
                                  v131 = 16;
LABEL_174:
                                  v132 = 0LL;
                                  v133 = 0;
                                  do
                                  {
                                    v134 = v133 + v128;
                                    ++v133;
                                    v134 *= 2LL;
                                    v132 += 4LL;
                                    *(int *)((char *)&v399 + v132) = *(&pDstSubRects->left + 2 * v134);
                                    *(_DWORD *)&v404[v132 - 4] = *(&pDstSubRects->right + 2 * v134);
                                    *(_DWORD *)&v404[v132 + 60] = *(&pDstSubRects->top + 2 * v134);
                                    v402[v132 / 4 - 1] = *((enum _D3DDDIFORMAT *)&pDstSubRects->bottom + 2 * v134);
                                  }
                                  while ( v133 < v131 );
                                  goto LABEL_176;
                                }
LABEL_180:
                                v121 = *((_QWORD *)this + 2);
                                v120 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                                i = v383[0];
                                v375 = 1;
                              }
                              if ( *((_BYTE *)this + 441) )
                              {
                                v337 = *(_QWORD *)(*(_QWORD *)(v121 + 16) + 16LL);
                                v338 = *((_DWORD *)v385 + 5);
                                v339 = *((_DWORD *)v379 + 5);
                                v340 = DXGPROCESS::GetCurrent();
                                v135 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v337 + 4344),
                                         v340,
                                         this,
                                         v339,
                                         v338,
                                         &v393.SrcRect,
                                         &v393.DstRect,
                                         v393.SubRectCnt,
                                         v393.pDstSubRects,
                                         v393.PrivateDriverDataSize,
                                         (unsigned __int8 *)v393.pPrivateDriverData);
                                i = v383[0];
                                v120 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
                              }
                              else
                              {
                                v367 = (int)v388;
                                *((_DWORD *)v8 + 29) = i;
                                v135 = DXGCONTEXT::SubmitPresent(
                                         this,
                                         a2,
                                         (struct DXGHWQUEUE **)a2[1].hWindow,
                                         a2->BroadcastContextCount,
                                         v390,
                                         v379,
                                         hSource,
                                         v378,
                                         &v393,
                                         0LL,
                                         *v120,
                                         v8,
                                         v367,
                                         a3);
                              }
                              *v120 = 0LL;
                              LODWORD(v36) = v135;
                              if ( (a2->Flags.Value & 0x10000) != 0
                                && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                              {
                                v136 = v393.SubRectCnt;
                                a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                                a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19)
                                                                                               + 440LL);
                                if ( v136 > 0x10 )
                                {
                                  DstRect = v393.DstRect;
                                  a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                                  a2->PresentHistoryToken.Token.Blt.DirtyRegions.Rects[0] = DstRect;
                                }
                                else
                                {
                                  a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v136;
                                  if ( v136 )
                                  {
                                    v137 = v393.pDstSubRects;
                                    v138 = (char *)&a2->PresentHistoryToken - (char *)v393.pDstSubRects;
                                    v139 = v136;
                                    do
                                    {
                                      v140 = (__int128)*v137++;
                                      *(_OWORD *)((char *)&v137[1].bottom + v138) = v140;
                                      --v139;
                                    }
                                    while ( v139 );
                                  }
                                }
                                a2->PresentHistoryToken.TokenSize = 16
                                                                  * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
                                v141 = SubmitPresentHistoryToken(
                                         &a2->PresentHistoryToken,
                                         (struct _SLIST_ENTRY *)a3,
                                         v382,
                                         *(struct CWin32kLocks **)&Source1.left,
                                         0,
                                         0LL,
                                         (struct DXGK_PRESENT_PARAMS *)a2,
                                         0LL,
                                         this,
                                         0LL,
                                         0LL);
                                i = v383[0];
                                LODWORD(v36) = v141;
                              }
                              if ( (int)v36 < 0 )
                                goto LABEL_210;
                            }
                          }
                        }
                      }
                      WdLogSingleEntry2(4LL, v111, this);
                      v302 = a3;
                      goto LABEL_622;
                    }
LABEL_210:
                    DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
                    if ( v381 )
                    {
                      CWin32kLocks::Unlock(*(CWin32kLocks **)&Source1.left);
                      COREDEVICEACCESS::Release(a3);
                      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 7u, 0xFFFFFFFD, 0);
                      LODWORD(v36) = COREDEVICEACCESS::AcquireShared(a3, 0LL);
                    }
                    goto LABEL_212;
                  }
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
                  if ( (int)v36 < 0 || (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 2) != 0 )
                  {
LABEL_569:
                    DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
LABEL_212:
                    v153 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                    if ( v153 )
                    {
                      if ( (int)v36 >= 0
                        && (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x12) == 16
                        && (*(_BYTE *)&a2->Flags.0 & 2) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 6047LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"!NT_SUCCESS(ntStatus) || !m_pPresent->BltViaGDI() || m_pPresent->IsBltEmpty() || pPre"
                                    "sent->Flags.ColorFill",
                          6047LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v153 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 45);
                      }
                      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
                        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                        v153,
                        0LL);
                      *((_QWORD *)this + 45) = 0LL;
                    }
                    if ( (*(_DWORD *)(*((_QWORD *)this + 19) + 4LL) & 0x80) != 0 )
                    {
                      if ( (unsigned int)(v36 + 1071775738) > 1 )
                      {
                        WdLogSingleEntry1(1LL, 6055LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"ntStatus == STATUS_GRAPHICS_PRESENT_OCCLUDED || ntStatus == STATUS_GRAPHICS_PRESENT_DENIED",
                          6055LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      LODWORD(v36) = 0;
                    }
                    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v398);
                    if ( (int)v36 < 0 )
                      goto LABEL_96;
                    v74 = v375;
                    goto LABEL_216;
                  }
                  if ( a2->BroadcastContextCount )
                  {
                    WdLogSingleEntry1(2LL, 5456LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Present via GDI cannot be broadcasted",
                      5456LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    LODWORD(v36) = -1071774910;
                    goto LABEL_569;
                  }
                  if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                  {
                    WdLogSingleEntry1(1LL, 5462LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                      5462LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v396 = 0LL;
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                    McTemplateK0q_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, &EventPerformanceWarning, 0LL, 0);
                  v261 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                  if ( (*(_WORD *)&v261 & 0x100) != 0 )
                  {
                    v262 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL)
                                                 + 128LL)
                                     + 4000LL * a2->VidPnSourceId
                                     + 628);
                    *(_QWORD *)v383 = &v396;
                    v396 = v262;
                  }
                  else
                  {
                    *(_QWORD *)v383 = 0LL;
                  }
                  if ( (*(_BYTE *)&v261 & 1) != 0 )
                  {
                    if ( *(_BYTE *)&v261 >= 0 )
                    {
                      v393.SrcRect.bottom = v380;
                      right = v377;
                      *(_QWORD *)&v393.SrcRect.left = 0LL;
                    }
                    else
                    {
                      top = a2->SrcRect.top;
                      if ( top < 0 )
                        top = 0;
                      v393.SrcRect.top = top;
                      left = a2->SrcRect.left;
                      if ( left < 0 )
                        left = 0;
                      v393.SrcRect.left = left;
                      bottom = a2->SrcRect.bottom;
                      if ( (int)v380 < bottom )
                        bottom = v380;
                      v393.SrcRect.bottom = bottom;
                      right = a2->SrcRect.right;
                      if ( (int)v377 < right )
                        right = v377;
                    }
                    v393.SrcRect.right = right;
                    v16 = a2->SubRectCnt == 0;
                    v393.DstRect = v393.SrcRect;
                    v393.Flags.Value ^= (*(_WORD *)&v393.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v261 >> 9)) & 0x800;
                    if ( v16 )
                    {
                      WdLogSingleEntry1(1LL, 5509LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pPresent->SubRectCnt",
                        5509LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( !a2->pSrcSubRects )
                    {
                      WdLogSingleEntry1(1LL, 5510LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pPresent->pSrcSubRects",
                        5510LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    LODWORD(v36) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
                    if ( (int)v36 < 0 )
                      goto LABEL_569;
                    v267 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
                    v16 = a2->SubRectCnt == 0;
                    v268 = 0;
                    v269 = 0LL;
                    v393.SubRectCnt = 0;
                    v393.pDstSubRects = v267;
                    if ( v16 )
                      goto LABEL_569;
                    while ( 1 )
                    {
                      if ( DXGPRESENT::IntersectRect(&v267[v269], &a2->pSrcSubRects[v268], &v393.SrcRect) )
                        v269 = ++v393.SubRectCnt;
                      else
                        v269 = v393.SubRectCnt;
                      if ( ++v268 >= a2->SubRectCnt )
                        break;
                      v267 = (struct tagRECT *)v393.pDstSubRects;
                    }
                    if ( !(_DWORD)v269 )
                      goto LABEL_569;
                    v270 = a3;
                    if ( DXGPRESENT::PrepareStagingBuffer(
                           *((DXGPRESENT **)this + 19),
                           *((struct DXGDEVICE **)this + 2),
                           a2->hSource,
                           a3,
                           &v378) < 0 )
                      goto LABEL_595;
                    if ( *((_BYTE *)this + 441) )
                    {
                      v271 = DXGPROCESS::GetCurrent();
                      v272 = v378;
                      v273 = v271;
                      KeEnterCriticalRegion();
                      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v273 + 248, 0LL) )
                      {
                        if ( bTracingEnabled )
                        {
                          v274 = *((_DWORD *)v273 + 68);
                          if ( v274 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                            McTemplateK0q_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (const EVENT_DESCRIPTOR *)"g",
                              0LL,
                              v274);
                        }
                        ExAcquirePushLockSharedEx((char *)v273 + 248, 0LL);
                      }
                      v275 = (v272 >> 6) & 0xFFFFFF;
                      if ( (unsigned int)v275 < *((_DWORD *)v273 + 74) )
                      {
                        v276 = *((_QWORD *)v273 + 35);
                        v277 = *(_DWORD *)(v276 + 16 * v275 + 8);
                        if ( ((v272 >> 25) & 0x60) == (*(_BYTE *)(v276 + 16 * v275 + 8) & 0x60)
                          && (v277 & 0x2000) == 0
                          && (v277 & 0x1F) != 0 )
                        {
                          if ( (v277 & 0x1F) == 5 )
                          {
                            v278 = *(struct _EX_RUNDOWN_REF **)(v276 + 16LL * (unsigned int)v275);
LABEL_539:
                            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v386, v278);
                            ExReleasePushLockSharedEx((char *)v273 + 248, 0LL);
                            KeLeaveCriticalRegion();
                            v279 = *(_QWORD *)v386;
                            if ( !*(_QWORD *)v386 )
                            {
                              WdLogSingleEntry1(1LL, 5542LL);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"AllocRef.m_pAllocation != NULL",
                                5542LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                              v279 = *(_QWORD *)v386;
                            }
                            v280 = *(_DWORD *)(v279 + 20);
                            pPrivateDriverData = (unsigned __int8 *)a2->pPrivateDriverData;
                            PrivateDriverDataSize = a2->PrivateDriverDataSize;
                            v283 = *((_DWORD *)v379 + 5);
                            v284 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                            v285 = DXGPROCESS::GetCurrent();
                            v286 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v284 + 4344),
                                     v285,
                                     this,
                                     v283,
                                     v280,
                                     &v393.SrcRect,
                                     &v393.DstRect,
                                     v393.SubRectCnt,
                                     v393.pDstSubRects,
                                     PrivateDriverDataSize,
                                     pPrivateDriverData);
                            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v386);
                            v94 = *(HDC **)&Source1.left;
LABEL_559:
                            if ( v286 >= 0 )
                            {
                              v299 = (DXGDEVICE *)*((_QWORD *)this + 2);
                              v300 = 0;
                              if ( (a2->Flags.Value & 0x100) != 0
                                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                                     *(DXGADAPTER ***)(*((_QWORD *)v299 + 231) + 2792LL),
                                     *((const struct DXGDEVICE **)this + 2),
                                     a2->VidPnSourceId) )
                              {
                                v300 = 1;
                              }
                              else if ( !DXGDEVICE::AllowLegacyPresent(v299, 0) )
                              {
                                DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                                v301 = a3;
                                COREDEVICEACCESS::Release(a3);
                                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                                {
                                  COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
                                  LODWORD(v36) = -1071775738;
                                  goto LABEL_569;
                                }
                                goto LABEL_564;
                              }
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                              v301 = a3;
                              COREDEVICEACCESS::Release(a3);
LABEL_564:
                              CWin32kLocks::Unlock((CWin32kLocks *)v94);
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
                              v112 = COREDEVICEACCESS::AcquireShared(v301, 0LL);
                              if ( v112 < 0 )
                              {
                                v302 = a3;
LABEL_622:
                                COREDEVICEACCESS::AcquireSharedUncheck(v302, 0LL);
                                LODWORD(v36) = v112;
                                goto LABEL_623;
                              }
                              v16 = *((_BYTE *)this + 441) == 0;
                              memset(&v400, 0, sizeof(v400));
                              if ( v16 )
                              {
                                v308 = v378;
                                if ( !v378 )
                                {
                                  WdLogSingleEntry1(1LL, 5633LL);
                                  DxgkLogInternalTriageEvent(
                                    0LL,
                                    262146,
                                    -1,
                                    (__int64)L"hDestinationAllocation",
                                    5633LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL);
                                  v308 = v378;
                                }
                                v307 = a3;
                                v309 = (DXGDEVICE *)*((_QWORD *)this + 2);
                                HIDWORD(v400.hAllocation) = v308;
                                LODWORD(v36) = DXGDEVICE::Lock(v309, (struct _D3DKMT_LOCK *)&v400, a3);
                              }
                              else
                              {
                                v303 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                                memset(&v395, 0, sizeof(v395));
                                v395.hAllocation = v378;
                                v304 = *(_QWORD *)(*((_QWORD *)v303 + 2) + 16LL);
                                v305 = DXGPROCESS::GetCurrent();
                                v306 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v304 + 4344),
                                         v305,
                                         v303,
                                         &v395,
                                         0,
                                         0,
                                         0);
                                v94 = *(HDC **)&Source1.left;
                                LODWORD(v36) = v306;
                                v307 = a3;
                                *(_QWORD *)&v400.MultisampleMethod.NumQualityLevels = v395.pData;
                              }
                              if ( (int)v36 < 0 )
                                goto LABEL_569;
                              DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                              COREDEVICEACCESS::Release(v307);
                              if ( !*(_QWORD *)&v400.MultisampleMethod.NumQualityLevels )
                              {
                                WdLogSingleEntry1(1LL, 5646LL);
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  262146,
                                  -1,
                                  (__int64)L"LockData.pData",
                                  5646LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
                              }
                              if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                              {
                                WdLogSingleEntry1(1LL, 5647LL);
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  262146,
                                  -1,
                                  (__int64)L"!pPresent->Flags.RedirectedBlt || pPresent->hDestination == NULL",
                                  5647LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
                              }
                              v310 = v387;
                              if ( (*(unsigned int (__fastcall **)(_QWORD))&v387[19].left)(0LL) )
                                v311 = v300;
                              else
                                v311 = 0;
                              LODWORD(v36) = CWin32kLocks::Lock((CWin32kLocks *)v94, a2->hWindow, 0, 0, v311);
                              if ( (int)v36 >= 0 )
                              {
                                v312 = *(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDC, _QWORD, const RECT *, _QWORD, int, D3DKMT_HANDLE, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))&v310[9].left;
                                v313 = *(_DWORD *)(*((_QWORD *)this + 19) + 424LL);
                                Color = a2->Color;
                                v315 = (a2->Flags.Value & 0x200) != 0;
                                v316 = CWin32kLocks::hDestDc(*(CWin32kLocks **)&Source1.left);
                                LOBYTE(v363) = v315;
                                LOBYTE(v361) = 0;
                                if ( !v312(
                                        a2,
                                        v316,
                                        *(_QWORD *)v383,
                                        v393.pDstSubRects,
                                        *(_QWORD *)&v400.MultisampleMethod.NumQualityLevels,
                                        v313,
                                        v377,
                                        v380,
                                        v361,
                                        v363,
                                        Color,
                                        DXGPRESENT::XformRect,
                                        DXGPRESENT::ClipRects) )
                                {
                                  WdLogSingleEntry2(4LL, -1071775737LL, this);
                                  LODWORD(v36) = -1071775737;
                                }
                                v307 = a3;
                              }
                              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
                              v112 = COREDEVICEACCESS::AcquireShared(v307, 0LL);
                              if ( v112 >= 0 )
                              {
                                v317 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                                if ( *((_BYTE *)this + 441) )
                                {
                                  v395.hDevice = 0;
                                  v395.hAllocation = v378;
                                  v318 = *(_QWORD *)(*((_QWORD *)v317 + 2) + 16LL);
                                  v319 = DXGPROCESS::GetCurrent();
                                  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(v318 + 4344),
                                    v319,
                                    v317,
                                    (struct _D3DKMT_UNLOCK2 *)&v395,
                                    0);
                                }
                                else
                                {
                                  v395.hDevice = 0;
                                  *(_QWORD *)&v395.Flags.0 = (char *)&v400.hAllocation + 4;
                                  v395.hAllocation = 1;
                                  DXGDEVICE::Unlock(v317, (const struct _D3DKMT_UNLOCK *)&v395, 0);
                                }
                                if ( (int)v36 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                                {
                                  a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                                  a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)this + 19)
                                                                                                 + 440LL);
                                  a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                                  a2->PresentHistoryToken.TokenSize = 48;
                                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)&v398);
                                  LODWORD(v36) = SubmitPresentHistoryToken(
                                                   &a2->PresentHistoryToken,
                                                   (struct _SLIST_ENTRY *)v307,
                                                   v382,
                                                   *(struct CWin32kLocks **)&Source1.left,
                                                   0,
                                                   0LL,
                                                   (struct DXGK_PRESENT_PARAMS *)a2,
                                                   0LL,
                                                   this,
                                                   0LL,
                                                   0LL);
                                }
                                goto LABEL_569;
                              }
LABEL_610:
                              v302 = v307;
                              goto LABEL_622;
                            }
LABEL_595:
                            WdLogSingleEntry2(3LL, -1071775738LL, this);
                            LODWORD(v36) = -1071775738;
                            goto LABEL_569;
                          }
                          WdLogSingleEntry1(2LL, 267LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Handle type mismatch",
                            267LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      v278 = 0LL;
                      goto LABEL_539;
                    }
                    v287 = v378;
                    if ( !v378 )
                    {
                      WdLogSingleEntry1(1LL, 5556LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"hDestinationAllocation",
                        5556LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      v287 = v378;
                    }
                    if ( bTracingEnabled )
                    {
                      v288 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                               *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                               *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                               v287);
                      v289 = VIDMM_EXPORT::VidMmETWAllocationHandle(
                               *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                               *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
                               hSource);
                      v290 = *((_QWORD *)this + 45);
                      v291 = v393.pDstSubRects;
                      v292 = v393.SubRectCnt;
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v360) = 1;
                        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
                          (__int64)&DxgkControlGuid_Context,
                          (__int64)&EventBlit,
                          0LL,
                          a2->hWindow,
                          v290,
                          0LL,
                          v289,
                          v288,
                          v360,
                          0,
                          v393.Flags.Value,
                          v393.SrcRect.left,
                          v393.SrcRect.right,
                          v393.SrcRect.top,
                          v393.SrcRect.bottom,
                          v393.DstRect.left,
                          v393.DstRect.right,
                          v393.DstRect.top,
                          v393.DstRect.bottom,
                          v393.SubRectCnt);
                      }
                      v293 = 0;
                      if ( v292 )
                      {
                        while ( 1 )
                        {
                          v294 = v292 - v293;
                          if ( v292 - v293 > 0x10 )
                            break;
                          v295 = v292 - v293;
                          if ( v294 )
                            goto LABEL_551;
LABEL_553:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          {
                            LODWORD(v358) = v295;
                            LODWORD(v357) = v294 <= 0x10;
                            McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
                              (__int64)&DxgkControlGuid_Context,
                              (__int64)&EventBlitRect,
                              0LL,
                              v290,
                              v357,
                              v358,
                              v402,
                              &v400,
                              v404,
                              v405);
                          }
                          v293 += 16;
                          if ( v293 >= v292 )
                          {
                            v8 = v392;
                            goto LABEL_557;
                          }
                        }
                        v295 = 16;
LABEL_551:
                        v296 = 0LL;
                        v297 = 0;
                        do
                        {
                          v298 = v297 + v293;
                          ++v297;
                          v298 *= 2LL;
                          v296 += 4LL;
                          v402[v296 / 4 - 1] = *((enum _D3DDDIFORMAT *)&v291->left + 2 * v298);
                          *(int *)((char *)&v399 + v296) = *(&v291->right + 2 * v298);
                          *(_DWORD *)&v404[v296 - 4] = *(&v291->top + 2 * v298);
                          *(_DWORD *)&v404[v296 + 60] = *(&v291->bottom + 2 * v298);
                        }
                        while ( v297 < v295 );
                        goto LABEL_553;
                      }
LABEL_557:
                      v287 = v378;
                      v94 = *(HDC **)&Source1.left;
                      v270 = a3;
                      v375 = 1;
                    }
                    v286 = DXGCONTEXT::SubmitPresent(
                             this,
                             a2,
                             (struct DXGHWQUEUE **)a2[1].hWindow,
                             a2->BroadcastContextCount,
                             v390,
                             v379,
                             hSource,
                             v287,
                             &v393,
                             0LL,
                             *((struct _VIDMM_DMA_BUFFER **)this + 45),
                             v8,
                             (enum _D3DDDIFORMAT)v388,
                             v270);
                    *((_QWORD *)this + 45) = 0LL;
                    goto LABEL_559;
                  }
                  if ( (*(_BYTE *)&v261 & 2) == 0 )
                    goto LABEL_569;
                  v320 = (DXGDEVICE *)*((_QWORD *)this + 2);
                  v321 = 0;
                  if ( (*(_WORD *)&v261 & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v320 + 231) + 2792LL),
                         *((const struct DXGDEVICE **)this + 2),
                         a2->VidPnSourceId) )
                  {
                    v321 = 1;
                  }
                  else if ( !DXGDEVICE::AllowLegacyPresent(v320, 0) )
                  {
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                    v307 = a3;
                    COREDEVICEACCESS::Release(a3);
                    if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                    {
                      LODWORD(v36) = -1071775738;
LABEL_608:
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
                      v331 = COREDEVICEACCESS::AcquireShared(v307, 0LL);
                      v112 = v331;
                      if ( v331 >= 0 )
                        goto LABEL_569;
                      WdLogSingleEntry2(4LL, v331, this);
                      goto LABEL_610;
                    }
LABEL_601:
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                    {
                      WdLogSingleEntry1(1LL, 5767LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"!pPresent->Flags.RedirectedBlt",
                        5767LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v322 = *(CWin32kLocks **)&Source1.left;
                    CWin32kLocks::Unlock(*(CWin32kLocks **)&Source1.left);
                    v323 = v387;
                    v16 = (*(unsigned int (__fastcall **)(_QWORD))&v387[19].left)(0LL) == 0;
                    v324 = v321;
                    if ( v16 )
                      v324 = 0;
                    v325 = CWin32kLocks::Lock(v322, a2->hWindow, 0, 0, v324);
                    v326 = *(unsigned int (__fastcall **)(HDC, _QWORD, const RECT *, _QWORD, UINT))&v323[9].right;
                    LODWORD(v36) = v325;
                    v327 = a2->Color;
                    v328 = a2->SubRectCnt;
                    v329 = a2->pSrcSubRects;
                    v330 = CWin32kLocks::hDestDc(*(CWin32kLocks **)&Source1.left);
                    if ( !v326(v330, *(_QWORD *)v383, v329, v328, v327) )
                    {
                      WdLogSingleEntry2(4LL, -1071775737LL, this);
                      LODWORD(v36) = -1071775737;
                    }
                    v307 = a3;
                    goto LABEL_608;
                  }
                  DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
                  COREDEVICEACCESS::Release(a3);
                  goto LABEL_601;
                }
                *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v386[0];
                DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u, 0xFFFFFFFD, 0);
                v259 = 0;
                v260 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
                if ( v260 != (*(unsigned int (**)(void))&v387->right)() )
                {
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v386[0];
                  ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3LL, 0xFFFFFFFFLL);
                  v259 = 1;
                }
                v255 = v259;
LABEL_467:
                DXGDEVICE::SynchronizePresentToPrimary(
                  *((DXGDEVICE **)this + 2),
                  this,
                  (struct DXGPRESENTMUTEX *)&v398,
                  v255);
                goto LABEL_140;
              }
              WdLogSingleEntry1(4LL, v257);
              COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
              LODWORD(v36) = v258;
LABEL_623:
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v398);
              goto LABEL_100;
            }
            LODWORD(v36) = v96;
LABEL_470:
            COREDEVICEACCESS::AcquireSharedUncheck(v93, 0LL);
            goto LABEL_623;
          }
        }
      }
      v222 = (struct DXGALLOCATION *)a2->Flags.Value;
LABEL_649:
      v221 = a2->SubRectCnt;
      LODWORD(v36) = -1073741811;
      v359 = -1073741811LL;
      v223 = (__int64)this;
LABEL_650:
      WdLogSingleEntry5(3LL, v223, pSrcSubRects, v221, v222, v359);
      goto LABEL_100;
    }
    if ( v33 )
      goto LABEL_262;
    if ( (Value & 0x10A7C3) != 0 )
    {
      v210 = a2->Flags.Value;
      goto LABEL_433;
    }
    if ( (Value & 0x10000000) != 0 )
    {
      Count = v28[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        WdLogSingleEntry1(2LL, 4414LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Expecting indirect display presents to be a shared surface",
          4414LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_348;
      }
      v207 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
      if ( !v207
        || !DXGADAPTER::IsDisplayAdapter(v207)
        || (VidPnSourceId = a2->VidPnSourceId,
            VidPnSourceId >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL) + 96LL)) )
      {
        WdLogSingleEntry1(2LL, a2->VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"An invalid VidPn source ID was supplied to an indirect present (%I64d)",
          a2->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_348;
      }
      v28 = (struct _EX_RUNDOWN_REF *)v379;
    }
    else
    {
      v37 = v28[6].Count;
      v38 = *(_DWORD *)(v37 + 4);
      if ( (v38 & 2) == 0 && (v38 & 1) == 0 && (v38 & 0x2000) == 0 )
      {
        v155 = -1073741811;
        WdLogSingleEntry5(2LL, -1073741811LL, this, v28, v37, a2->hSource);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x",
          -1073741811LL,
          (__int64)this,
          (__int64)v379,
          *((_QWORD *)v379 + 6),
          a2->hSource);
        goto LABEL_434;
      }
      VidPnSourceId = (v38 >> 6) & 0xF;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v28);
    DXGALLOCATIONREFERENCE::MoveAssign(&v391, (struct _EX_RUNDOWN_REF **)&Source1);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1);
    v389 = a2->hSource;
    v40 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v40
      || !DXGADAPTER::IsDisplayAdapter(v40)
      || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                         + 2792LL)) )
    {
      WdLogSingleEntry1(1LL, 4455LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL"
                  ") && GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisp"
                  "layCore()->IsCoreResourceSharedOwner()",
        4455LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v41 = *((_QWORD *)v379 + 6);
    v42 = *(_DWORD *)(v41 + 4);
    if ( (v42 & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 424LL) & 4) == 0 )
    {
      v155 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, this, v379, v41, a2->hSource);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x 0x%I64x DirectFlip Presents are only supported from the DWM process 0x%I64x 0x%I64x 0x%I64x",
        -1073741811LL,
        (__int64)this,
        (__int64)v379,
        *((_QWORD *)v379 + 6),
        a2->hSource);
      goto LABEL_434;
    }
    if ( (a2->Flags.Value & 0x60000) == 0 )
      goto LABEL_48;
    if ( (a2->Flags.Value & 0x60000) == 0x60000 )
    {
      WdLogSingleEntry1(2LL, 4474LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
        4474LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( (v42 & 0x1000) != 0 )
    {
      v208 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                           VidPnSourceId)
             + 10);
      if ( (v208 & 0x10) == 0 )
      {
        WdLogSingleEntry1(3LL, 4487LL);
        v155 = -1071775739;
        goto LABEL_434;
      }
      v209 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
      if ( (*(_DWORD *)&v209 & 0x40000) != 0 && (v208 & 0x20) == 0 )
      {
        WdLogSingleEntry1(3LL, 4493LL);
        v155 = -1071775739;
        goto LABEL_434;
      }
      if ( (*(_DWORD *)&v209 & 0xC0000) != 0xC0000 )
      {
LABEL_48:
        if ( !DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2)) )
          goto LABEL_65;
        v43 = *(_DWORD *)a7 ^ (a2->Flags.Value ^ *(_DWORD *)a7) & 4;
        *(_DWORD *)a7 = v43;
        v44 = (a2->Flags.Value ^ v43) & 8 ^ v43;
        *(_DWORD *)a7 = v44;
        v45 = ((unsigned __int8)v44 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v44;
        *(_DWORD *)a7 = v45;
        v46 = (v45 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v45;
        *(_DWORD *)a7 = v46;
        v47 = (v46 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v46;
        *(_DWORD *)a7 = v47;
        v48 = v47 ^ (v47 ^ (4 * a2->Flags.Value)) & 0x200000;
        *(_DWORD *)a7 = v48;
        if ( (a2->Flags.Value & 0x8000000) != 0 )
          Duration = a2->Duration;
        else
          Duration = 0;
        *((_DWORD *)a7 + 36) = Duration;
        *(_DWORD *)a7 = v48 ^ (a2->Flags.Value ^ v48) & 0x20000000;
        pPresentRegions = a2->pPresentRegions;
        v393.Flags.Value = v393.Flags.Value & 0xFFFFF8FB | a2->Flags.Value & 4 | (a2->Flags.Value >> 9) & 0x700;
        if ( pPresentRegions
          && !pPresentRegions->MoveRectCount
          && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 424LL) & 4) != 0 )
        {
          v393.SubRectCnt = pPresentRegions->DirtyRectCount;
          v393.pDstSubRects = pPresentRegions->pDirtyRects;
        }
        DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 624LL),
                           *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                           VidPnSourceId,
                           (__int64)&a2->FlipInterval);
        *((_DWORD *)a7 + 30) = DeviceFlipMode;
        v52 = DeviceFlipMode;
        if ( DeviceFlipMode )
        {
          v16 = ((DeviceFlipMode - 1) & 0xFFFFFFFD) == 0;
          FlipInterval = a2->FlipInterval;
          if ( v16 )
          {
            v393.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
          }
          else
          {
            v393.FlipInterval = a2->FlipInterval;
            if ( v52 == 2 )
              goto LABEL_59;
          }
          v393.Flags.Value |= 8u;
LABEL_59:
          *((_DWORD *)a7 + 31) = FlipInterval;
          *((_DWORD *)a7 + 29) = VidPnSourceId;
          DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId);
          if ( DisplayedPrimary )
          {
            v55 = *((_QWORD *)DisplayedPrimary + 6);
            if ( (*(_DWORD *)(*((_QWORD *)v379 + 6) + 4LL) & 0x2000) != 0 )
            {
              if ( (*(_DWORD *)(v55 + 4) & 0x2000) == 0 )
              {
                *(_DWORD *)a7 |= 0x400000u;
                goto LABEL_63;
              }
            }
            else if ( (*(_DWORD *)(v55 + 4) & 0x2000) != 0 )
            {
              *(_DWORD *)a7 |= 0x400000u;
              goto LABEL_63;
            }
          }
          *(_DWORD *)a7 &= ~0x400000u;
LABEL_63:
          v56 = *((_DWORD *)a7 + 30);
          if ( v56 )
          {
            v57 = *((_QWORD *)this + 2);
            if ( v56 != *(_DWORD *)(v57 + 4LL * VidPnSourceId + 1784) )
            {
              WdLogSingleEntry1(4LL, v57);
              COREDEVICEACCESS::Release(a3);
              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u, 0xFFFFFFFD, 0);
              v154 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              v155 = v154;
              if ( v154 < 0 )
              {
                WdLogSingleEntry1(4LL, v154);
                COREDEVICEACCESS::AcquireSharedUncheck(a3, 0LL);
LABEL_434:
                v11 = v155;
                goto LABEL_435;
              }
            }
          }
LABEL_65:
          v58 = v377;
          goto LABEL_66;
        }
        v210 = a2->FlipInterval;
LABEL_433:
        v155 = -1073741811;
        WdLogSingleEntry3(3LL, this, v210, -1073741811LL);
        goto LABEL_434;
      }
      WdLogSingleEntry1(2LL, 4499LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
        4499LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, 4480LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER",
        4480LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_348:
    v155 = -1073741811;
    goto LABEL_434;
  }
LABEL_262:
  v162 = a2->pSrcSubRects;
  if ( !v162 || (v163 = a2->SubRectCnt, !(_DWORD)v163) || (Value & 3) == 0 || (Value & 0x100E803C) != 0 )
  {
    v167 = (unsigned int)Value;
    v168 = a2->SubRectCnt;
    goto LABEL_337;
  }
  if ( (Value & 2) != 0 )
  {
    if ( (Value & 0x100681) == 0 )
    {
      v164 = v377;
      goto LABEL_269;
    }
    goto LABEL_272;
  }
  v164 = v377;
  if ( !v377 || !v380 || (Value & 0x82) != 0x80 )
  {
LABEL_272:
    v167 = (unsigned int)Value;
    v168 = a2->SubRectCnt;
LABEL_337:
    v158 = -1073741811;
    WdLogSingleEntry5(3LL, this, v162, v168, v167, -1073741811LL);
    goto LABEL_338;
  }
  if ( (Value & 0x600) == 0x600 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, this, v162, v163, (unsigned int)Value);
    goto LABEL_338;
  }
LABEL_269:
  v165 = *((_QWORD *)v385 + 6);
  v166 = *(_DWORD *)(v165 + 4);
  if ( (v166 & 2) == 0 && (v166 & 1) == 0 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v385, v165, a2->hDestination);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x destination must be primary 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v385,
      *((_QWORD *)v385 + 6),
      a2->hDestination);
    goto LABEL_338;
  }
  VidPnSourceId = (v166 >> 6) & 0xF;
  v169 = *(DXGADAPTER **)(*((_QWORD *)this + 2) + 1848LL);
  if ( !v169
    || !DXGADAPTER::IsDisplayAdapter(v169)
    || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL)
                                                                       + 2792LL)) )
  {
    WdLogSingleEntry1(1LL, 4163LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(GetDisplayAdapter(VidPnSourceId) == GetDisplayAdapter(0)) && (GetDisplayAdapter(VidPnSourceId) != NULL) "
                "&& GetDisplayAdapter(VidPnSourceId)->IsDisplayAdapter() && GetDisplayAdapter(VidPnSourceId)->GetDisplayC"
                "ore()->IsCoreResourceSharedOwner()",
      4163LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v170 = (struct _EX_RUNDOWN_REF *)v385;
  *((_DWORD *)a7 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1, v170);
  DXGALLOCATIONREFERENCE::MoveAssign(&v391, (struct _EX_RUNDOWN_REF **)&Source1);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Source1);
  v171 = a2->hDestination;
  v172 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  v389 = v171;
  if ( (*(_BYTE *)&v172 & 1) == 0 )
  {
    v393.DstRect.right = v383[0];
    v393.DstRect.bottom = Height;
    if ( (*(_BYTE *)&v172 & 0x40) != 0 )
    {
      v198 = a2->DstRect.left;
      v199 = a2->DstRect.right;
      if ( (int)v199 <= (int)v198 || (v200 = a2->DstRect.bottom, v200 <= a2->DstRect.top) || (int)v199 <= 0 || v200 <= 0 )
      {
        v158 = -1073741811;
        WdLogSingleEntry5(3LL, -1073741811LL, v198, a2->DstRect.top, v199, a2->DstRect.bottom);
        goto LABEL_338;
      }
      if ( !DXGPRESENT::IntersectRect(&v393.DstRect, &a2->DstRect, &v393.DstRect) )
      {
LABEL_339:
        v155 = v11;
        goto LABEL_434;
      }
    }
    v181 = a2->SubRectCnt;
    v201 = 0LL;
    if ( !v181 )
    {
LABEL_332:
      v197 = v393.DstRect;
      v184 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
      v196 = v393.Flags.Value;
      v58 = v377;
      v393.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_333;
    }
    while ( 1 )
    {
      v202 = (unsigned int)v201;
      v203 = &a2->pSrcSubRects[v202];
      *(_OWORD *)&v395.hDevice = 0LL;
      if ( !DXGPRESENT::IntersectRect((struct tagRECT *)&v395, v203, &v393.DstRect)
        || RtlCompareMemory(&v395, &a2->pSrcSubRects[v202], 0x10uLL) != 16 )
      {
        break;
      }
      v181 = a2->SubRectCnt;
      v201 = (unsigned int)(v201 + 1);
      if ( (unsigned int)v201 >= v181 )
      {
        v11 = 0;
        goto LABEL_332;
      }
    }
    v155 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, a2->DstRect.left, a2->DstRect.top, a2->DstRect.right, a2->DstRect.bottom);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
      -1073741811LL,
      a2->DstRect.left,
      a2->DstRect.top,
      a2->DstRect.right,
      a2->DstRect.bottom);
    v205 = (unsigned int)v201;
    WdLogSingleEntry5(
      2LL,
      v201,
      a2->pSrcSubRects[v205].left,
      a2->pSrcSubRects[v205].top,
      a2->pSrcSubRects[v205].right,
      a2->pSrcSubRects[v205].bottom);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
      v201,
      a2->pSrcSubRects[v205].left,
      a2->pSrcSubRects[v205].top,
      a2->pSrcSubRects[v205].right,
      a2->pSrcSubRects[v205].bottom);
    goto LABEL_434;
  }
  v173 = v385;
  if ( v385 == v379 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v379, a2->hSource, v171);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x Source and destination must be different 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v379,
      a2->hSource,
      a2->hDestination);
    goto LABEL_338;
  }
  v174 = *(unsigned int *)(*((_QWORD *)v379 + 6) + 4LL);
  if ( ((v174 & 2) != 0 || (v174 & 1) != 0) && (((unsigned int)v174 >> 6) & 0xF) != VidPnSourceId )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, v379, (v174 >> 6) & 0xF, VidPnSourceId);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x primary source has different VidPnSourceId 0x%I64x 0x%I64x != 0x%I64x",
      -1073741811LL,
      (__int64)this,
      (__int64)v379,
      (*(_DWORD *)(*((_QWORD *)v379 + 6) + 4LL) >> 6) & 0xF,
      VidPnSourceId);
    goto LABEL_338;
  }
  v175 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v177 = a2->SrcRect.right;
  if ( (int)v177 <= v175
    || (v178 = a2->SrcRect.bottom, v179 = a2->SrcRect.top, v178 <= v179)
    || v175 >= v164
    || (v180 = v380, v179 >= (int)v380)
    || (int)v177 <= 0
    || v178 <= 0 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, a2->SrcRect.left, a2->SrcRect.top, v177, a2->SrcRect.bottom);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]",
      -1073741811LL,
      p_SrcRect->left,
      a2->SrcRect.top,
      a2->SrcRect.right,
      a2->SrcRect.bottom);
    goto LABEL_338;
  }
  v181 = a2->SubRectCnt;
  v182 = 0LL;
  if ( !v181 )
    goto LABEL_300;
  do
  {
    v183 = a2->pSrcSubRects;
    *(_QWORD *)&v395.hDevice = 16LL * (unsigned int)v182;
    Source1 = 0LL;
    if ( !DXGPRESENT::IntersectRect(&Source1, (const RECT *)((char *)v183 + *(_QWORD *)&v395.hDevice), &a2->SrcRect)
      || RtlCompareMemory(&Source1, (char *)a2->pSrcSubRects + *(_QWORD *)&v395.hDevice, 0x10uLL) != 16 )
    {
      v158 = -1073741811;
      WdLogSingleEntry5(2LL, -1073741811LL, a2->SrcRect.left, a2->SrcRect.top, a2->SrcRect.right, a2->SrcRect.bottom);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Source Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] contains an invalid subrect",
        -1073741811LL,
        a2->SrcRect.left,
        a2->SrcRect.top,
        a2->SrcRect.right,
        a2->SrcRect.bottom);
      v195 = (unsigned int)v182;
      WdLogSingleEntry5(
        2LL,
        v182,
        a2->pSrcSubRects[v195].left,
        a2->pSrcSubRects[v195].top,
        a2->pSrcSubRects[v195].right,
        a2->pSrcSubRects[v195].bottom);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubRect 0x%I64x is invalid 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
        v182,
        a2->pSrcSubRects[v195].left,
        a2->pSrcSubRects[v195].top,
        a2->pSrcSubRects[v195].right,
        a2->pSrcSubRects[v195].bottom);
      goto LABEL_338;
    }
    v181 = a2->SubRectCnt;
    v182 = (unsigned int)(v182 + 1);
  }
  while ( (unsigned int)v182 < v181 );
  v173 = v385;
  p_SrcRect = &a2->SrcRect;
  Height = v386[0];
  v180 = v380;
LABEL_300:
  v184 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&v184 & 0x40) == 0 )
  {
    v58 = v377;
    if ( v383[0] == v377 && Height == v180 )
    {
      v194 = *p_SrcRect;
      v393.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_318;
    }
    WdLogSingleEntry5(3LL, this, v383[0], Height, v377, v180);
    v158 = -1073741811;
    goto LABEL_338;
  }
  v185 = a2->DstRect.right;
  v186 = a2->DstRect.left;
  if ( v185 <= (int)v186
    || (v187 = a2->DstRect.bottom, v188 = a2->DstRect.top, v187 <= v188)
    || (int)v186 >= (int)v383[0]
    || v188 >= (int)Height
    || v185 <= 0
    || v187 <= 0 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(3LL, -1073741811LL, v186, a2->DstRect.top, a2->DstRect.right, a2->DstRect.bottom);
    goto LABEL_338;
  }
  if ( a2->SrcRect.right - p_SrcRect->left != v185 - (_DWORD)v186 || a2->SrcRect.bottom - a2->SrcRect.top != v187 - v188 )
  {
    v158 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, this, a2->Flags.Value, v173, VidPnSourceId);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x specified destination RECT has different size from source RECT 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)this,
      a2->Flags.Value,
      (__int64)v385,
      VidPnSourceId);
    goto LABEL_338;
  }
  v158 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), a2->SubRectCnt);
  if ( v158 < 0 )
    goto LABEL_338;
  v189 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  v190 = 0;
  v191 = a2->DstRect.left - p_SrcRect->left;
  v192 = a2->DstRect.top - a2->SrcRect.top;
  v181 = a2->SubRectCnt;
  if ( v181 )
  {
    do
    {
      v193 = v190++;
      v193 *= 2LL;
      *(&v189->left + 2 * v193) = v191 + *(&a2->pSrcSubRects->left + 2 * v193);
      *(&v189->right + 2 * v193) = v191 + *(&a2->pSrcSubRects->right + 2 * v193);
      *(&v189->top + 2 * v193) = v192 + *(&a2->pSrcSubRects->top + 2 * v193);
      *(&v189->bottom + 2 * v193) = v192 + *(&a2->pSrcSubRects->bottom + 2 * v193);
      v181 = a2->SubRectCnt;
    }
    while ( v190 < v181 );
  }
  v194 = a2->DstRect;
  v184 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  v58 = v377;
  v393.pDstSubRects = v189;
LABEL_318:
  v196 = (*(_WORD *)&v393.Flags.0 ^ (unsigned __int16)(*(unsigned int *)&v184 >> 9)) & 0x800 ^ v393.Flags.Value;
  v393.DstRect = v194;
  v197 = *p_SrcRect;
  v11 = 0;
LABEL_333:
  v204 = a2->Color;
  v393.SubRectCnt = v181;
  v393.Color = v204;
  v393.Flags.Value = *(_BYTE *)&v184 & 3 | v196 & 0xFFFFF78C | ((*(_WORD *)&v184 & 0xE00 | (*(unsigned int *)&v184 >> 4) & 0x10000) >> 5);
  v393.SrcRect = v197;
LABEL_66:
  v59 = DXGCONTEXT::CheckDevicePresentSettings(
          this,
          (a2->Flags.Value >> 2) & 1,
          (a2->Flags.Value >> 28) & 1,
          VidPnSourceId);
  LODWORD(v36) = v59;
  if ( v59 < 0 )
  {
    if ( v59 != -1071774920 )
      goto LABEL_100;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_435;
    IsFullWDDMDevice = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
    v212 = (struct _KTHREAD **)*((_QWORD *)this + 2);
    v213 = VidPnSourceId;
    if ( IsFullWDDMDevice )
      goto LABEL_365;
    DXGDEVICE::SetDisplayedPrimary(v212, VidPnSourceId, v379, 0, 1u);
    goto LABEL_435;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v36) = DXGCONTEXT::ValidatePresentRegions(this, a2, v58, v380);
      if ( (int)v36 < 0 )
        goto LABEL_100;
    }
  }
  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
         VidPnSourceId,
         0) )
  {
    v214 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
    v215 = (*(__int64 (**)(void))&v387->right)();
    v216 = a2->Flags.Value & 4;
    if ( v214 == v215 )
    {
      if ( v216 )
      {
LABEL_372:
        v61 = a3;
LABEL_373:
        v60 = (DXGDEVICE *)*((_QWORD *)this + 2);
        goto LABEL_73;
      }
      v61 = a3;
      COREDEVICEACCESS::Release(a3);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)&v398,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v398);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
      v220 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v36 = v220;
      if ( v220 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v398, 0);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v398);
        goto LABEL_373;
      }
    }
    else
    {
      if ( v216 )
        goto LABEL_370;
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u, 0xFFFFFFFD, 0);
      DXGADAPTERSTOPRESETLOCKSHARED::Release(v382);
      v61 = a3;
      COREDEVICEACCESS::Release(a3);
      DXGPRESENTMUTEX::DXGPRESENTMUTEX(
        (DXGPRESENTMUTEX *)&v398,
        *(struct ADAPTER_RENDER *const *)(*((_QWORD *)this + 2) + 16LL));
      DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)&v398);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v382);
      v217 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v36 = v217;
      if ( v217 >= 0 )
      {
        DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, (struct DXGPRESENTMUTEX *)&v398, 1);
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v398);
LABEL_370:
        v218 = *((_QWORD *)this + 19);
        *(_DWORD *)(v218 + 8) = (*(__int64 (**)(void))&v387->right)();
        CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                         *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
                         VidPnSourceId);
        if ( CddInterface )
          (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
        goto LABEL_372;
      }
    }
    WdLogSingleEntry2(4LL, v36, this);
    COREDEVICEACCESS::AcquireSharedUncheck(v61, 0LL);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)&v398);
    goto LABEL_100;
  }
  v60 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v60 + VidPnSourceId + 302) & 0x200) == 0 && (a2->Flags.Value & 0x10000000) == 0 )
  {
    v221 = a2->hSource;
    LODWORD(v36) = -1071775739;
    v222 = v379;
    pSrcSubRects = (const RECT *)this;
    v359 = VidPnSourceId;
    v223 = -1071775739LL;
    goto LABEL_650;
  }
  v61 = a3;
LABEL_73:
  if ( !DXGDEVICE::IsFullWDDMDevice(v60) )
  {
    v239 = *((_QWORD *)this + 2);
    v240 = *(_QWORD *)(v239 + 1848);
    if ( !v240 )
    {
      WdLogSingleEntry2(1LL, v239, -1073741822LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
        *((_QWORD *)this + 2),
        -1073741822LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_431;
    }
    v241 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    *(_QWORD *)&v395.hDevice = 0LL;
    if ( (*(_DWORD *)&v241 & 0x10000000) != 0 )
    {
      v395.Flags.Value = a2[1].hSource;
      v250 = a2[1].hDestination;
    }
    else
    {
      v242 = v385;
      if ( (*(_BYTE *)&v241 & 4) != 0 )
        v242 = v379;
      v243 = *(_DWORD *)(*((_QWORD *)v242 + 6) + 4LL);
      if ( (v243 & 0x10) != 0 )
      {
        WdLogSingleEntry3(4LL, -1071775482LL, this, v242);
        LODWORD(v36) = -1071775482;
        goto LABEL_100;
      }
      v244 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v240 + 2792), (v243 >> 6) & 0xF);
      v398.Flags.Value = 1;
      memset(&v398.Width, 0, 32);
      v398.Rotation = -1;
      *(_OWORD *)v402 = v244;
      v245 = *((_QWORD *)this + 2);
      v398.hAllocation = *(HANDLE *)(*((_QWORD *)v242 + 6) + 16LL);
      v247 = ADAPTER_RENDER::DdiDescribeAllocation(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v245 + 16) + 16LL) + 2800LL),
               &v398,
               v246);
      if ( v247 < 0 )
      {
        v248 = v247;
        WdLogSingleEntry5(
          2LL,
          v247,
          this,
          *((unsigned int *)v242 + 4),
          v242,
          (*(_DWORD *)(*((_QWORD *)v242 + 6) + 4LL) >> 6) & 0xF);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
          v248,
          (__int64)this,
          *((unsigned int *)v242 + 4),
          (__int64)v242,
          (*(_DWORD *)(*((_QWORD *)v242 + 6) + 4LL) >> 6) & 0xF);
LABEL_431:
        LODWORD(v36) = -1073741811;
        goto LABEL_100;
      }
      v249 = v398.Width;
      if ( v398.Width != v402[0] || (v250 = v398.Height, v398.Height != v402[1]) )
      {
LABEL_422:
        WdLogSingleEntry3(4LL, -1071775482LL, this, v242);
        LODWORD(v36) = -1071775739;
        goto LABEL_100;
      }
      if ( !*((_BYTE *)this + 441) )
      {
        v251 = RemoveAlphaChannel(v402[2]);
        if ( RemoveAlphaChannel(v398.Format) != v251 )
          goto LABEL_422;
        v250 = v398.Height;
        v249 = v398.Width;
        v61 = a3;
      }
      v239 = *((_QWORD *)this + 2);
      v395.Flags.Value = v249;
    }
    *((_DWORD *)&v395.Flags + 1) = v250;
    LODWORD(v36) = ADAPTER_DISPLAY::PresentDisplayOnly(
                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(v239 + 1848) + 2792LL),
                     this,
                     VidPnSourceId,
                     a2,
                     &v393,
                     v61,
                     (struct tagRECT *)&v395);
    if ( (int)v36 < 0 )
      goto LABEL_96;
    if ( (a2->Flags.Value & 4) == 0 )
      goto LABEL_95;
    DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe(*((DXGDEVICE **)this + 2), VidPnSourceId);
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v379, 0, 1u);
    goto LABEL_93;
  }
  v62 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 0x10) == 0, v61);
  v63 = v62;
  if ( v62 < 0 )
  {
    WdLogSingleEntry2(4LL, v62, this);
    LODWORD(v36) = v63;
    goto LABEL_100;
  }
  v64 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
  if ( ((*((_DWORD *)a7 + 30) - 3) & 0xFFFFFFFD) == 0 )
    goto LABEL_76;
  LODWORD(v36) = DXGCONTEXT::AcquireDmaBuffer(this, (struct _VIDMM_DMA_BUFFER **)this + 45, a3, 0);
  if ( (int)v36 < 0 )
    goto LABEL_96;
  if ( !*v64 )
  {
    WdLogSingleEntry1(1LL, 4777LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer", 4777LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_76:
  LODWORD(v36) = DXGCONTEXT::CheckDevicePresentSettings(
                   this,
                   (a2->Flags.Value >> 2) & 1,
                   (a2->Flags.Value >> 28) & 1,
                   VidPnSourceId);
  if ( (int)v36 < 0 )
  {
    if ( *v64 )
    {
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
        *v64,
        0LL);
      *v64 = 0LL;
    }
    if ( (_DWORD)v36 != -1071774920 )
      goto LABEL_96;
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v224 = DXGDEVICE::IsFullWDDMDevice(*((DXGDEVICE **)this + 2));
      v212 = (struct _KTHREAD **)*((_QWORD *)this + 2);
      v213 = VidPnSourceId;
      if ( !v224 )
      {
        DXGDEVICE::SetDisplayedPrimary(v212, VidPnSourceId, v379, 0, 1u);
        LODWORD(v36) = 0;
        goto LABEL_100;
      }
LABEL_365:
      DXGDEVICE::ClearDisplayedAllMultiPlaneOverlaysUnsafe((DXGDEVICE *)v212, v213);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), VidPnSourceId, v379, *((_DWORD *)a7 + 34), 1u);
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)a7 + 30);
    }
LABEL_435:
    LODWORD(v36) = v11;
    goto LABEL_100;
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( v379 )
    {
      v65 = *((_QWORD *)v379 + 6);
      if ( v65 )
      {
        if ( (*(_DWORD *)(v65 + 4) & 0x2000) != 0
          && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v379) )
        {
          LODWORD(v36) = -1071775739;
          WdLogSingleEntry3(4LL, -1071775739LL, this, v379);
          if ( *v64 )
          {
            VIDMM_EXPORT::VidMmReleaseDmaBuffer(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
              *v64,
              0LL);
            *v64 = 0LL;
          }
          goto LABEL_100;
        }
      }
    }
  }
  if ( (a2->Flags.Value & 0x2000) != 0 )
  {
    v225 = ADAPTER_DISPLAY::GetCurrentOrientation(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL),
             VidPnSourceId,
             1LL);
    v226 = 0;
    if ( v225 != 1 )
      v226 = 128;
    v393.Flags.Value = v226 | v393.Flags.Value & 0xFFFFFF7F;
  }
  if ( bTracingEnabled )
  {
    v66 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v67 = *(struct VIDMM_GLOBAL **)(v66 + 656);
    v68 = *(VIDMM_EXPORT **)(v66 + 648);
    if ( (a2->Flags.Value & 4) != 0 )
    {
      VIDMM_EXPORT::VidMmETWAllocationHandle(v68, v67, hSource);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0pqpqtt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventFlip, 0LL);
      goto LABEL_86;
    }
    v227 = VIDMM_EXPORT::VidMmETWAllocationHandle(v68, v67, v378);
    v228 = VIDMM_EXPORT::VidMmETWAllocationHandle(
             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
             *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL),
             hSource);
    v229 = *((_QWORD *)this + 45);
    v230 = a2->hWindow;
    v231 = v393.SubRectCnt;
    v387 = v393.pDstSubRects;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
    {
      LODWORD(v360) = 1;
      McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventBlit,
        0LL,
        v230,
        v229,
        0LL,
        v228,
        v227,
        v360,
        0,
        v393.Flags.Value,
        v393.SrcRect.left,
        v393.SrcRect.right,
        v393.SrcRect.top,
        v393.SrcRect.bottom,
        v393.DstRect.left,
        v393.DstRect.right,
        v393.DstRect.top,
        v393.DstRect.bottom,
        v393.SubRectCnt);
    }
    v232 = 0;
    if ( !v231 )
    {
LABEL_408:
      v64 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 360);
      goto LABEL_86;
    }
    v233 = v387;
    while ( 2 )
    {
      v234 = v231 - v232;
      if ( v231 - v232 <= 0x10 )
      {
        v235 = v231 - v232;
        if ( v234 )
          goto LABEL_402;
      }
      else
      {
        v235 = 16;
LABEL_402:
        v236 = 0LL;
        v237 = 0;
        do
        {
          v238 = v237 + v232;
          ++v237;
          v238 *= 2LL;
          v236 += 4LL;
          *(_DWORD *)&v404[v236 + 60] = *(&v233->left + 2 * v238);
          *(_DWORD *)&v404[v236 - 4] = *(&v233->right + 2 * v238);
          *(_DWORD *)((char *)&v397[34] + v236 + 12) = *(&v233->top + 2 * v238);
          *(int *)((char *)&v399 + v236) = *(&v233->bottom + 2 * v238);
        }
        while ( v237 < v235 );
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v358) = v235;
        LODWORD(v356) = v234 <= 0x10;
        McTemplateK0ptqDR2DR2DR2DR2_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventBlitRect,
          0LL,
          v229,
          v356,
          v358,
          v405,
          v404,
          &v398,
          &v400);
        v233 = v387;
      }
      v232 += 16;
      if ( v232 >= v231 )
      {
        v8 = v392;
        goto LABEL_408;
      }
      continue;
    }
  }
LABEL_86:
  LODWORD(v36) = DXGCONTEXT::SubmitPresent(
                   this,
                   a2,
                   (struct DXGHWQUEUE **)a2[1].hWindow,
                   a2->BroadcastContextCount,
                   v390,
                   v379,
                   hSource,
                   v378,
                   &v393,
                   a2->pPresentRegions,
                   *v64,
                   v8,
                   (enum _D3DDDIFORMAT)v388,
                   a3);
  if ( (int)v36 >= 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL) + 128LL)
                 + 4000LL * VidPnSourceId
                 + 1088) == -1 )
  {
    WdLogSingleEntry1(1LL, 4891LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!NT_SUCCESS(ntStatus) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnSourceToVidPnTarget"
                "(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
      4891LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *v64 = 0LL;
LABEL_89:
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v69 = *((_QWORD *)this + 2);
      v70 = *(_QWORD *)(v69 + 1848);
      if ( v70 == *(_QWORD *)(*(_QWORD *)(v69 + 16) + 16LL) )
      {
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v70 + 2792), VidPnSourceId);
        v69 = *((_QWORD *)this + 2);
      }
      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v69, VidPnSourceId, v379, *((_DWORD *)v8 + 34), 1u);
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * VidPnSourceId + 1784) = *((_DWORD *)v8 + 30);
LABEL_93:
      UpdatePostComposition(
        VidPnSourceId,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL));
    }
LABEL_94:
    if ( (int)v36 < 0 )
      goto LABEL_96;
    goto LABEL_95;
  }
  *v64 = 0LL;
  if ( (int)v36 >= 0 )
    goto LABEL_89;
LABEL_96:
  v72 = (_QWORD *)((char *)this + 360);
LABEL_97:
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL))
    && (_DWORD)v36 != -1073741130 )
  {
    WdLogSingleEntry1(1LL, 6171LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || ntStatus == STATUS_DEVICE_REMOVED",
      6171LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *v72 )
  {
    WdLogSingleEntry1(1LL, 6172LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPresentDmaBuffer == NULL", 6172LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_100:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v391);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v385);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v379);
  return (unsigned int)v36;
}
