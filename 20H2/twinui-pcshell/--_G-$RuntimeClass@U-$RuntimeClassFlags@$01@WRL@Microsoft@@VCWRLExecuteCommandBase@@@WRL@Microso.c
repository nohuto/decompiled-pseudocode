/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803290D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180328FE0 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
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
