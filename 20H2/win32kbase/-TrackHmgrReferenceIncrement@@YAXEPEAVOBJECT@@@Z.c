/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C004734C
 * Callers:
 *     HmgShareLockIgnoreStockBit @ 0x1C00A5058 (HmgShareLockIgnoreStockBit.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(char a1, struct OBJECT *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 5 )
  {
    v2 = *((_QWORD *)a2 + 85);
    v3 = 0LL;
  }
  else
  {
    if ( a1 != 16 )
      return;
    v2 = *((_QWORD *)a2 + 17);
    v3 = 2LL;
  }
  TrackObjectReferenceIncrement(v3, v2);
}
