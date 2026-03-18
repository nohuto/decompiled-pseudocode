/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DCB60
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800DC628 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DCA94 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800A9B58 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  if ( CVisual::GetInputHandle(this) )
    *((_QWORD *)this + 55) = 0LL;
  CVisual::PropagateFlags((__int64)this, 0x10u);
  *((_BYTE *)this + 92) |= 0x80u;
}
