/*
 * XREFs of ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x18002885C
 * Callers:
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180027D68 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180028DB0 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800265B4 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CWindowData::GetIdealWindowRepresentationType(CWindowData *a1)
{
  if ( *((_QWORD *)a1 + 52) )
    return 2;
  else
    return CWindowData::HasNonTrivialRepresentation(a1) != 0;
}
