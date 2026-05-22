/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x18007D168
 * Callers:
 *     _MPCHandProcessor::MPCHandProcessor_::_1_::dtor$0 @ 0x18007D11D (_MPCHandProcessor--MPCHandProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>(
        MPCInputProviderBase *a1)
{
  *((_DWORD *)a1 + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
}
