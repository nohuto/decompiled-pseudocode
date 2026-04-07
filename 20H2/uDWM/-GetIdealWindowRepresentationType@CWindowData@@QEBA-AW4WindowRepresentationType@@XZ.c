/*
 * XREFs of ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180012B1C
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012524 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180013CC0 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 * Callees:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180014B98 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowData::GetIdealWindowRepresentationType(CWindowData *a1)
{
  if ( *((_QWORD *)a1 + 52) )
    return 2;
  else
    return CWindowData::HasNonTrivialRepresentation(a1);
}
