/*
 * XREFs of ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     EngLockSurface @ 0x1C0086390 (EngLockSurface.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C00B50F0 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceDecrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  if ( a2 )
  {
    v2 = *(&qword_1C024D3D8 + 2 * a1);
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 0);
  }
}
