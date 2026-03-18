/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00CB428
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this)
{
  struct _LIST_ENTRY *v1; // rax
  struct _LIST_ENTRY *Flink; // rcx

  if ( !*((_BYTE *)this + 65) )
  {
    *((_BYTE *)this + 65) = 1;
    v1 = (struct _LIST_ENTRY *)((char *)this + 16);
    Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
      __fastfail(3u);
    v1->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    v1->Blink = &CVisRgnTrackerProp::s_DirtyList;
    Flink->Blink = v1;
    CVisRgnTrackerProp::s_DirtyList.Flink = v1;
  }
}
