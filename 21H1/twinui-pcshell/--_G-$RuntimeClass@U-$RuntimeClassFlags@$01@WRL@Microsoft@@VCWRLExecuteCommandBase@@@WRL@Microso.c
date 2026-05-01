/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180307EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D394 (--3@YAXPEAX@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180307DB0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 */

CWRLExecuteCommandBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`scalar deleting destructor'(
        CWRLExecuteCommandBase *Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  CWRLExecuteCommandBase::~CWRLExecuteCommandBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
