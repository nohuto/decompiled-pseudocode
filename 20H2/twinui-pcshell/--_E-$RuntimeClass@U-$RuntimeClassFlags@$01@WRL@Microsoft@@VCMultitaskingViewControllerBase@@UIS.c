/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@UISnapAssistViewController@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18039C710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180396238 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CMultitaskingViewControllerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vector deleting destructor'(
        CMultitaskingViewControllerBase *Block,
        char a2)
{
  *((_DWORD *)Block + 35) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
