/*
 * XREFs of ?NotifyInteractionTrackerExpressionProcessingComplete@CExpressionManager@@QEAAXXZ @ 0x180050824
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18021B724 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1802215A8 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 */

void __fastcall CExpressionManager::NotifyInteractionTrackerExpressionProcessingComplete(CExpressionManager *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdx
  CInteractionTrackerBindingManager *v5; // rcx
  unsigned int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    do
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v3);
      v5 = *(CInteractionTrackerBindingManager **)(v4 + 640);
      if ( v5 && *(_DWORD *)(v4 + 176) == 2 && (*(_BYTE *)(v4 + 541) & 1) != 0 )
        CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
          v5,
          (struct CInteractionTracker *)v4);
      v6 = *((_DWORD *)this + 72);
      ++v3;
    }
    while ( v3 < v6 );
    if ( v6 )
    {
      do
        CInteractionTracker::NotifyExpressionProcessingComplete(*(CInteractionTracker **)(*((_QWORD *)this + 33)
                                                                                        + 8LL * v1++));
      while ( v1 < *((_DWORD *)this + 72) );
    }
  }
}
