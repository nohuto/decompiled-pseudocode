/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C00FCC40
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00FCCD4 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F105C (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0218564 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0218F9C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi

  if ( a1 == gptiManipulationThread )
  {
    CTouchProcessor::CleanupManipulationThreadData(gpTouchProcessor);
    gptiManipulationThread = 0LL;
  }
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 1088);
  RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1088));
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1088), *v2);
  if ( a1 == qword_1C0339BE0 )
  {
    qword_1C0339BE0 = 0LL;
    if ( qword_1C0339B60 )
      dword_1C0339BE8 |= 1u;
  }
  if ( word_1C0339BC0 )
  {
    if ( a1 == qword_1C0339BC8 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
