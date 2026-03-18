/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00870E8
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C002730C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0031AA0 (HmgShareUnlockRemoveObject.c)
 *     HmgRemoveObject @ 0x1C0090840 (HmgRemoveObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C0099670 (GreSetBitmapOwnerEx.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0099760 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
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
