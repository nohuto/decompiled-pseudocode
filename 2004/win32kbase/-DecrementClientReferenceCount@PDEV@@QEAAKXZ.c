/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C00A7EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **this)
{
  __int64 result; // rax

  TrackObjectReferenceDecrement(1u, this[443]);
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
