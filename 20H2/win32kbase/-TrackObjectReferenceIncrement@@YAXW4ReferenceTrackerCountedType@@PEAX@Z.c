/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384
 * Callers:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C0011A10 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     HmgShareLockEx @ 0x1C0042C10 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C0044DC0 (HmgShareLock.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C004734C (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     DrvGetHDEV @ 0x1C005E220 (DrvGetHDEV.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0078140 (HmgShareLockCheckIgnoreStockBit.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceIncrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  if ( a2 )
  {
    v2 = *(&qword_1C02453D8 + 2 * a1);
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 1);
  }
}
