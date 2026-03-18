/*
 * XREFs of GreReleaseHmgrSemaphore @ 0x1C003D970
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0018F80 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgNextGarbageCollectible @ 0x1C0019034 (HmgNextGarbageCollectible.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001B4B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001C060 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     HmgAllocateObjectAttr @ 0x1C001D314 (HmgAllocateObjectAttr.c)
 *     HmgAllocateDcAttr @ 0x1C001D474 (HmgAllocateDcAttr.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     HmgAlloc @ 0x1C003D700 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgFreeDcAttr @ 0x1C003E544 (HmgFreeDcAttr.c)
 *     HmgDecProcessHandleCount @ 0x1C003E660 (HmgDecProcessHandleCount.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C003E730 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     HmgFree @ 0x1C004BFE0 (HmgFree.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004D3F8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0090878 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgNextOwned @ 0x1C00925E0 (HmgNextOwned.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0097360 (HmgShareUnlockRemoveObject.c)
 *     GreDecQuotaCount @ 0x1C00A24C0 (GreDecQuotaCount.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00A53C8 (HMChangeOwnerPheProcessWorker.c)
 *     GreIncQuotaCount @ 0x1C00A5520 (GreIncQuotaCount.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 *     GreMarkDCUnreadable @ 0x1C00BEAA8 (GreMarkDCUnreadable.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreGetBrushColor @ 0x1C013E150 (GreGetBrushColor.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0140BD0 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014108C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0145EAC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0145FB8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C014C350 (EngDeleteSafeSemaphore.c)
 *     EngInitializeSafeSemaphore @ 0x1C014C510 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreReleaseHmgrSemaphore(int a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               a1,
               (unsigned int)&LockRelease,
               a3,
               (_DWORD)ghsemHmgr,
               (__int64)L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    return PsLeavePriorityRegion(v3);
  }
  return result;
}
