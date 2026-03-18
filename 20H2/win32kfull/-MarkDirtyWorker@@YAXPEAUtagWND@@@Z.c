/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00CB428 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00CBDC0 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1)
{
  CVisRgnTrackerProp *Prop; // rax
  __int64 i; // rbx

  if ( a1 )
  {
    Prop = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL);
    if ( Prop )
      CVisRgnTrackerProp::MarkDirty(Prop);
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      MarkDirtyWorker((struct tagWND *)i);
  }
}
