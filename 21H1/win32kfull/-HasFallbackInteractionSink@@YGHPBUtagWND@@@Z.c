/*
 * XREFs of ?HasFallbackInteractionSink@@YGHPBUtagWND@@@Z @ 0x14D31F
 * Callers:
 *     ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02 (-IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x26470 (-xxxDCEWindowHitTest2Internal@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagDCE_WINDOW_HIT_TEST_ARGS.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 */

int __thiscall HasFallbackInteractionSink(void *this)
{
  int v2; // [esp+4h] [ebp-4h] BYREF

  v2 = 0;
  if ( CWindowProp::GetProp<CInputQueueProp>((int)this, &v2) )
    return (*(_DWORD *)(v2 + 28) >> 1) & 1;
  else
    return 0;
}
