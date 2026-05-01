/*
 * XREFs of ?DecrementObjectCount@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAKXZ @ 0x180090E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Platform::Details::InProcModule>::DecrementObjectCount()
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
