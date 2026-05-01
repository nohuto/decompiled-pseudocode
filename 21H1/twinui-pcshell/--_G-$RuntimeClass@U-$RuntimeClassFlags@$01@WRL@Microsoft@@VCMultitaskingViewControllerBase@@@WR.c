/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180375910
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803758A8 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CMultitaskingViewControllerBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::`scalar deleting destructor'(
        CMultitaskingViewControllerBase *Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
