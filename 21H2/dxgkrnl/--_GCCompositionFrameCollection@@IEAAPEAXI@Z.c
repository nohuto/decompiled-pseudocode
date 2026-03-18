/*
 * XREFs of ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x1C001F4FC
 * Callers:
 *     ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x1C001F4D0 (-Release@CCompositionFrameCollection@@UEAAJXZ.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C0008D60 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 */

CCompositionFrameCollection *__fastcall CCompositionFrameCollection::`scalar deleting destructor'(
        CCompositionFrameCollection *P)
{
  *(_QWORD *)P = &CCompositionFrameCollection::`vftable';
  CCompositionFrameCollection::DiscardAllCompositionFrames(P);
  ExFreePoolWithTag(P, 0);
  return P;
}
