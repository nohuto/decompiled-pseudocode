/*
 * XREFs of ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180027910
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800499F4 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOSupportedProcessingModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rax

  v4 = a2;
  v6 = 0;
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v4 == 3 )
    v6 = 1;
  v7 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v4);
  return SystemEffectDescriptor::GetSupportedProcessingModes(v7, a3, v6);
}
