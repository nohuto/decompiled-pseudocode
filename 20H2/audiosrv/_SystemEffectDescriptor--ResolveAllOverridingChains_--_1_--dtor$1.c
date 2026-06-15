/*
 * XREFs of _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x180078480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(a2 + 32);
}
