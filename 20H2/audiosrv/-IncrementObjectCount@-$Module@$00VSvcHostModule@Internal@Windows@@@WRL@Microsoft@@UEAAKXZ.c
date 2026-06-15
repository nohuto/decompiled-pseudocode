/*
 * XREFs of ?IncrementObjectCount@?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAKXZ @ 0x18004CD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Windows::Internal::SvcHostModule>::IncrementObjectCount()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
