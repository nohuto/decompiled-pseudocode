/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DBE14
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800DB8DC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800DBD48 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18007C6E8 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  if ( CVisual::GetInputHandle(this) )
    *((_QWORD *)this + 55) = 0LL;
  CVisual::PropagateFlags((__int64)this, 0x10u);
  *((_BYTE *)this + 92) |= 0x80u;
}
