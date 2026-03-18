/*
 * XREFs of ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624
 * Callers:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00870E8 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     EngUnlockSurface @ 0x1C00878E0 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0087B70 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     GreGetBounds @ 0x1C00882C0 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00896E0 (DEC_SHARE_REF_CNT.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     EngLockSurface @ 0x1C008D410 (EngLockSurface.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C009249C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C00A7EF0 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0151198 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceDecrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  if ( a2 )
  {
    v2 = *(&qword_1C02473D8 + 2 * a1);
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 0);
  }
}
