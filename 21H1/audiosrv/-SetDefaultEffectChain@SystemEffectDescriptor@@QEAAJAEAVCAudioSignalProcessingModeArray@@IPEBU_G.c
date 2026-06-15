/*
 * XREFs of ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005A6C8
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18005A25C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x180123F84 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18005A740 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 */

__int64 __fastcall SystemEffectDescriptor::SetDefaultEffectChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        int a3,
        const struct _GUID *a4)
{
  int EffectChain; // ebx
  __int64 v6; // rdx
  char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (char *)this + 16;
  if ( *((int *)a2 + 2) > 0 )
  {
    EffectChain = SystemEffectChainDescriptor::CreateEffectChain((_DWORD)a2, a3, (_DWORD)a4, 0, 0LL, (__int64)v7);
    if ( EffectChain >= 0 )
      return 0LL;
    v6 = 163LL;
  }
  else
  {
    EffectChain = SystemEffectChainDescriptor::CreateEffectChain((_DWORD)a2, 0, 0, a3, (__int64)a4, (__int64)v7);
    if ( EffectChain >= 0 )
      return 0LL;
    v6 = 168LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)EffectChain);
  return (unsigned int)EffectChain;
}
