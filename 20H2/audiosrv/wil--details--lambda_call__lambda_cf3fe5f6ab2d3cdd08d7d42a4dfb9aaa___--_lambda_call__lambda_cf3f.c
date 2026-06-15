/*
 * XREFs of wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___ @ 0x18006F988
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED748 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1800EDC58 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18006FD6C (_lambda_db18f22ab46b33b274128dc9e227aeaf_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    v2[5] = *(_QWORD *)(a1 + 40);
    return lambda_db18f22ab46b33b274128dc9e227aeaf_::operator()(v2);
  }
  return result;
}
