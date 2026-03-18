/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C00EFA90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00EFB24 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F1CCC (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02193F4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0219E2C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
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
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 1080);
  RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080));
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080), *v2);
  if ( a1 == qword_1C033ABB0 )
  {
    qword_1C033ABB0 = 0LL;
    if ( qword_1C033AB30 )
      dword_1C033ABB8 |= 1u;
  }
  if ( word_1C033AB90 )
  {
    if ( a1 == qword_1C033AB98 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
