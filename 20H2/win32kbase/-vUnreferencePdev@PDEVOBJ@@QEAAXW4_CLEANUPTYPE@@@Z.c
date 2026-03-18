/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80
 * Callers:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDestroyMDEV @ 0x1C0016458 (DrvDestroyMDEV.c)
 *     bDynamicModeChange @ 0x1C0019194 (bDynamicModeChange.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0086C10 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00BBE94 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0142C80 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0142D10 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0145EAC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C014A4DC (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 *     EngDeleteDriverObj @ 0x1C014D5A0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00B60C0 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(struct PDEV **a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct PDEV *v6; // rbx
  int v7; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v8; // rdx
  bool v9; // zf
  int v10; // ebx
  __int64 v11; // rcx
  struct PDEV *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 13, (__int64)L"ghsemDriverMgmt");
  v6 = *a1;
  v7 = (int)qword_1C02453E8;
  v8 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)*a1 + 443);
  if ( v8 && qword_1C02453E8 )
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02453E8, v8, 0);
  v9 = (*((_DWORD *)v6 + 2))-- == 1;
  v10 = *((_DWORD *)v6 + 2);
  if ( v9 )
    RemovePDEVFromList(&gppdevList, *a1);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v7,
      (unsigned int)&LockRelease,
      a3,
      (_DWORD)ghsemDriverMgmt,
      (__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v11);
  }
  if ( !v10 )
  {
    v12 = *a1;
    v13 = a2;
    v14 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v12);
  }
}
