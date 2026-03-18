/*
 * XREFs of _UpdateDirtyVisRgnTrackers@0 @ 0xF4DC4
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CVisRgnTrackerProp@@QAEXXZ @ 0xF4974 (-Update@CVisRgnTrackerProp@@QAEXXZ.c)
 */

void __stdcall UpdateDirtyVisRgnTrackers()
{
  struct _LIST_ENTRY *i; // esi

  for ( i = CVisRgnTrackerProp::s_DirtyList.Flink; i != &CVisRgnTrackerProp::s_DirtyList; i = i->Flink )
    CVisRgnTrackerProp::Update(i != 0 ? (CVisRgnTrackerProp *)&i[-1] : 0);
  InitializeListHead(&CVisRgnTrackerProp::s_DirtyList);
}
