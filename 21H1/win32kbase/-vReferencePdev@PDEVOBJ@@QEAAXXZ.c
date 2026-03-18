/*
 * XREFs of ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00177C0
 * Callers:
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C004DF64 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C014B460 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C014B680 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C014E6CC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C0152D0C (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 v5; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx

  v3 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v5 = *(_QWORD *)this;
  ++*(_DWORD *)(v5 + 8);
  v6 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3544);
  v7 = (int)qword_1C024D3E8;
  if ( v6 && qword_1C024D3E8 )
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C024D3E8, v6, 1);
  if ( v3 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v7, (unsigned int)&LockRelease, a3, (__int64)v3);
    }
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v8);
  }
}
