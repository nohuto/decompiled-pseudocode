/*
 * XREFs of ?SetNotifiedWorldUpVector@CVisual@@QEAAXUVector3@Numerics@Foundation@Windows@@@Z @ 0x1801B0404
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801AF798 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003F740 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedWorldUpVector(__int64 a1, unsigned int *a2)
{
  CSparseStorage *v2; // r10
  __int64 v3; // rcx

  v2 = (CSparseStorage *)(a1 + 216);
  v3 = *(_QWORD *)a2 - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    v3 = a2[2];
  if ( v3 )
    CSparseStorage::SetData(v2, 0xBu, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x200000u;
}
