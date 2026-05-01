/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803BCDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1803959D0 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase>::`vector deleting destructor'(
        CMultitaskingViewElementBase *Block,
        char a2)
{
  *((_DWORD *)Block + 53) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
