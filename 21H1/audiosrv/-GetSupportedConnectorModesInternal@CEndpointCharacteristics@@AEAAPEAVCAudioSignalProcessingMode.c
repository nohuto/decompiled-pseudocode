/*
 * XREFs of ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800236A0
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800211E4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048E74 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800499F4 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     _lambda_624ff53c6311d881d87aa48034e46cd1_::operator() @ 0x18005BF84 (_lambda_624ff53c6311d881d87aa48034e46cd1_--operator().c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSupportedConnectorModesInternal(
        CEndpointCharacteristics *a1,
        int a2,
        int a3)
{
  __int64 v3; // rdi
  SystemEffectDescriptor *v6; // rax
  SystemEffectDescriptor *v7; // rax
  SystemEffectDescriptor *v8; // rax

  v3 = a2;
  if ( !a2 && !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(a1) )
    return (__int64)a1 + 168;
  if ( !a3 )
  {
    v6 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)a1 + 1656, v3);
    SystemEffectDescriptor::ResolveAllOverridingChains(v6);
    v7 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)a1 + 1672, v3);
    SystemEffectDescriptor::ResolveAllOverridingChains(v7);
    v8 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)a1 + 1688, v3);
    SystemEffectDescriptor::ResolveAllOverridingChains(v8);
  }
  return gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)a1 + 152, v3);
}
