/*
 * XREFs of _lambda_1cae16f642e2019a980ae53ef80da94f_::operator() @ 0x180119C10
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1cae16f642e2019a980ae53ef80da94f__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180120A50 (std--_Func_impl_no_alloc__lambda_1cae16f642e2019a980ae53ef80da94f__long_SystemEffec_ea_180120A50.c)
 * Callees:
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18001FE10 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180029574 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800486CC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1cae16f642e2019a980ae53ef80da94f_::operator()(
        __int64 a1,
        __int32 *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 v9; // rdx
  BOOL v10; // edi
  __int64 *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                   *(CEndpointCharacteristics **)a1,
                   0,
                   0,
                   a2[12],
                   (struct tWAVEFORMATEX **)&pv);
  v7 = DeviceFormat;
  v8 = pv;
  if ( DeviceFormat >= 0 )
  {
    v10 = *(_WORD *)pv != 0xFFFE || !IsDolbyMatFormat((const struct tWAVEFORMATEX *)pv);
    v11 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                       (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                       *(int *)(a1 + 24));
    v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v11,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                     (SystemEffectDescriptor *)a2,
                     a3,
                     1u,
                     a1 + 8,
                     v10,
                     v12 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_DWORD *)a3 + 4) = 2;
      v7 = 0;
      goto LABEL_11;
    }
    v9 = 1444LL;
  }
  else
  {
    v9 = 1438LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat);
LABEL_11:
  CoTaskMemFree(v8);
  return v7;
}
