/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YGHPAUtagWND@@@Z @ 0x11E02
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _IsWindowHolographicForHitTest@4 @ 0x268C0 (_IsWindowHolographicForHitTest@4.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?HasFallbackInteractionSink@@YGHPBUtagWND@@@Z @ 0x14D31F (-HasFallbackInteractionSink@@YGHPBUtagWND@@@Z.c)
 */

int __thiscall IsCompositionInputWindowForHitTest(_DWORD *this)
{
  int v2; // edi
  const struct tagWND *v4; // [esp+0h] [ebp-Ch]
  const struct tagWND *v5; // [esp+0h] [ebp-Ch]
  const struct tagWND *v6; // [esp+0h] [ebp-Ch]

  v2 = IsCompositionInputWindow(v4);
  if ( !IsWindowHolographicForHitTest(this) )
  {
    if ( !v2 )
      return v2;
    if ( !CoreWindowProp::IsComponent(v5) )
    {
      if ( (*(_BYTE *)(this[5] + 147) & 1) != 0 || HasFallbackInteractionSink(v6) )
        return 0;
      return v2;
    }
  }
  return 1;
}
