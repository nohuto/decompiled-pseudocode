/*
 * XREFs of ?DecrementObjectCount@?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAAKXZ @ 0x18004CC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::DecrementObjectCount()
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
