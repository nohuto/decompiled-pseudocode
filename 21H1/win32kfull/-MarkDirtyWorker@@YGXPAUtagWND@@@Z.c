/*
 * XREFs of ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906
 * Callers:
 *     ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906 (-MarkDirtyWorker@@YGXPAUtagWND@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QAEXXZ @ 0xF48D6 (-MarkDirty@CVisRgnTrackerProp@@QAEXXZ.c)
 *     ?MarkDirtyWorker@@YGXPAUtagWND@@@Z @ 0xF4906 (-MarkDirtyWorker@@YGXPAUtagWND@@@Z.c)
 */

void __thiscall MarkDirtyWorker(_DWORD *this)
{
  int i; // esi
  struct tagWND *v3; // [esp+0h] [ebp-8h]
  CVisRgnTrackerProp *v4; // [esp+4h] [ebp-4h] BYREF

  if ( this )
  {
    v4 = 0;
    if ( CWindowProp::GetProp<CVisRgnTrackerProp>((int)this, (int *)&v4) )
      CVisRgnTrackerProp::MarkDirty(v4);
    for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
      MarkDirtyWorker(v3);
  }
}
