/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DD250
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800DCD18 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DD184 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800A2048 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  if ( CVisual::GetInputHandle(this) )
    *((_QWORD *)this + 55) = 0LL;
  CVisual::PropagateFlags((__int64)this, 0x10u);
  *((_BYTE *)this + 92) |= 0x80u;
}
