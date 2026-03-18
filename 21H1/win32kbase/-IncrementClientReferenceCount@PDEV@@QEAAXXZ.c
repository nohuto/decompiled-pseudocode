/*
 * XREFs of ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00B50C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall PDEV::IncrementClientReferenceCount(PDEV *this)
{
  ++*((_DWORD *)this + 2);
  TrackObjectReferenceIncrement(
    1u,
    *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)this + 443));
}
