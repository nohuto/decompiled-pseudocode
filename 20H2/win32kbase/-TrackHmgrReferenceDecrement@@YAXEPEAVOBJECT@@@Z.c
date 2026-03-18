/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0046274
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C001DA90 (GreSetBitmapOwnerEx.c)
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0055870 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0097360 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 5 )
  {
    v2 = *((_QWORD *)a2 + 85);
    v3 = 0LL;
LABEL_5:
    TrackObjectReferenceDecrement(v3, v2);
    return;
  }
  if ( a1 == 16 )
  {
    v2 = *((_QWORD *)a2 + 17);
    v3 = 2LL;
    goto LABEL_5;
  }
}
