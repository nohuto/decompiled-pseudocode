/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803A03A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CShrinkButtonElement@@QEAA@XZ @ 0x18039C14C (--1CShrinkButtonElement@@QEAA@XZ.c)
 */

CShrinkButtonElement *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>::`scalar deleting destructor'(
        CShrinkButtonElement *Block,
        char a2)
{
  *((_DWORD *)Block + 73) = -1073741823;
  CShrinkButtonElement::~CShrinkButtonElement(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
