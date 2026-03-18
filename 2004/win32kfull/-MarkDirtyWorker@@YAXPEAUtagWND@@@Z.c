/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00A3B0C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00A3B0C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00A3B0C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C01054E0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1)
{
  CVisRgnTrackerProp *Prop; // rax
  __int64 i; // rbx

  if ( a1 )
  {
    Prop = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL);
    if ( Prop )
      CVisRgnTrackerProp::MarkDirty(Prop);
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      MarkDirtyWorker((struct tagWND *)i);
  }
}
