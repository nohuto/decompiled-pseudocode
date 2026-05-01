/*
 * XREFs of ?AnimateComponent@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18037FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AnimateComponent@P8IDCompThumbnail@@EAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZW42@PEAU3@@CSwitchItemElement@@IEAAJW4SwitchItemComponent@@P8IDCompThumbnail@@EAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z12@Z @ 0x18037F6A4 (--$_AnimateComponent@P8IDCompThumbnail@@EAAJW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboar.c)
 */

__int64 __fastcall CSwitchItemElement::AnimateComponent(__int64 a1, int a2, __int64 a3)
{
  return CSwitchItemElement::_AnimateComponent<long (IDCompThumbnail::*)(enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *),enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *>(
           (_QWORD *)(a1 - 224),
           a2,
           a3);
}
