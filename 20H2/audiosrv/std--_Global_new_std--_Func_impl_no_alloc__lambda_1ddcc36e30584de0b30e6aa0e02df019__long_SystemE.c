/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_1ddcc36e30584de0b30e6aa0e02df019___ @ 0x1801187A4
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059588 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     std::_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Copy @ 0x18011FD70 (std--_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffec_ea_18011FD70.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_1ddcc36e30584de0b30e6aa0e02df019___(
        _OWORD *a1)
{
  HANDLE ProcessHeap; // rax
  char *result; // rax
  __int128 v4; // xmm0

  ProcessHeap = GetProcessHeap();
  result = (char *)HeapAlloc(ProcessHeap, 0, 0xC0uLL);
  *(_QWORD *)result = off_180155C58;
  *(_OWORD *)(result + 8) = *a1;
  *(_OWORD *)(result + 24) = a1[1];
  *(_OWORD *)(result + 40) = a1[2];
  *(_OWORD *)(result + 56) = a1[3];
  *(_OWORD *)(result + 72) = a1[4];
  *(_OWORD *)(result + 88) = a1[5];
  *(_OWORD *)(result + 104) = a1[6];
  v4 = a1[7];
  a1 += 8;
  *(_OWORD *)(result + 120) = v4;
  *(_OWORD *)(result + 136) = *a1;
  *(_OWORD *)(result + 152) = a1[1];
  *(_OWORD *)(result + 168) = a1[2];
  *((_QWORD *)result + 23) = *((_QWORD *)a1 + 6);
  return result;
}
