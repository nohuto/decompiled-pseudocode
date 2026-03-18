/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QAEXXZ @ 0xF48D6
 * Callers:
 *     ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906 (-MarkDirtyWorker@@YGXPAUtagWND@@@Z.c)
 *     ?ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z @ 0xF494A (-ReNotifyDwm@CVisRgnTrackerProp@@SGXQAUtagWND@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 * Callees:
 *     <none>
 */

void __thiscall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this)
{
  struct _LIST_ENTRY *v1; // eax
  struct _LIST_ENTRY *Flink; // ecx

  if ( !*((_BYTE *)this + 33) )
  {
    *((_BYTE *)this + 33) = 1;
    v1 = (struct _LIST_ENTRY *)((char *)this + 8);
    Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
      __fastfail(3u);
    v1->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    v1->Blink = &CVisRgnTrackerProp::s_DirtyList;
    Flink->Blink = v1;
    CVisRgnTrackerProp::s_DirtyList.Flink = v1;
  }
}
