/*
 * XREFs of _xxxCleanupThreadPointerInputInfo@4 @ 0x9AFC6
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeThreadPointerHookData@@YGXPAUtagTHREADPOINTERDATA@@@Z @ 0x15ADA6 (-FreeThreadPointerHookData@@YGXPAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YGXPAUtagTHREADINPUTPOINTERLIST@@PAUtagTHREADPOINTERDATA@@@Z @ 0x15B23F (-UnlinkAndFreeThreadPointerData@@YGXPAUtagTHREADINPUTPOINTERLIST@@PAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __userpurge xxxCleanupThreadPointerInputInfo(struct tagTHREADPOINTERDATA *a1@<edi>, int a2)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // [esp-4h] [ebp-8h]
  struct tagTHREADPOINTERDATA *v3; // [esp+0h] [ebp-4h]

  if ( a2 == _gptiManipulationThread )
  {
    CTouchProcessor::CleanupManipulationThreadData(_gpTouchProcessor);
    _gptiManipulationThread = 0;
  }
  v2 = a1;
  if ( *(_DWORD *)(a2 + 624) )
  {
    FreeThreadPointerHookData(a1);
    *(_DWORD *)(a2 + 624) = 0;
  }
  while ( *(_DWORD *)(a2 + 612) != a2 + 612 )
    UnlinkAndFreeThreadPointerData(v2, v3);
  if ( a2 == dword_2752F8 )
  {
    dword_2752F8 = 0;
    if ( dword_27528C )
      dword_2752FC |= 1u;
  }
  if ( (_WORD)dword_2752E0 )
  {
    if ( a2 == dword_2752E8 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
