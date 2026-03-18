/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0080048
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001758C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0019250 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C001D770 (HmgShareUnlockRemoveObject.c)
 *     HmgRemoveObject @ 0x1C00897F0 (HmgRemoveObject.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0091070 (GreSetBitmapOwnerEx.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 5 )
  {
    v2 = *((_QWORD *)a2 + 85);
    v3 = 0LL;
LABEL_3:
    TrackObjectReferenceDecrement(v3, v2);
    return;
  }
  if ( a1 == 16 )
  {
    v2 = *((_QWORD *)a2 + 17);
    v3 = 2LL;
    goto LABEL_3;
  }
}
