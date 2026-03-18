/*
 * XREFs of ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C0011A40
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall PDEV::DecrementClientReferenceCount(PDEV *this)
{
  __int64 result; // rax

  TrackObjectReferenceDecrement(1LL, *((_QWORD *)this + 443));
  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
