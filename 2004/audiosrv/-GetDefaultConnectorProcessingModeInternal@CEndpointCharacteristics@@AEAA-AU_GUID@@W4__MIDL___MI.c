/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110
 * Callers:
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180002278 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022520 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800486CC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048BF8 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180049200 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18004AEB4 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        _QWORD *a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v5; // ebx
  int v8; // edi
  __int64 v9; // rbx
  BOOL v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  GUID v18; // xmm0
  SystemEffectDescriptor *v20; // rax
  SystemEffectDescriptor *v21; // rax
  SystemEffectDescriptor *v22; // rax
  __int64 v23; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-28h]

  v5 = a3;
  v8 = 0;
  if ( a3 == 2 )
  {
    v5 = 0;
  }
  else if ( a3 )
  {
    goto LABEL_3;
  }
  v10 = 1;
  v11 = a1[10];
  if ( v11 )
  {
    *(_OWORD *)pvar = 0LL;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v10 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
    if ( !v10 )
    {
      v9 = (__int64)(a1 + 21);
      goto LABEL_13;
    }
  }
LABEL_3:
  if ( !a4 )
  {
    v20 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 207, v5);
    SystemEffectDescriptor::ResolveAllOverridingChains(v20);
    v21 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 209, v5);
    SystemEffectDescriptor::ResolveAllOverridingChains(v21);
    v22 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 211, v5);
    SystemEffectDescriptor::ResolveAllOverridingChains(v22);
  }
  if ( (unsigned __int64)v5 >= a1[19] )
  {
    v23 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)pvar,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v23);
  }
  v9 = a1[20] + 16LL * v5;
LABEL_13:
  v12 = *(_DWORD *)(v9 + 8);
  if ( v12 )
  {
    v13 = 0;
    if ( v12 > 0 )
    {
      do
      {
        v14 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v13);
        v15 = *v14 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
        if ( *v14 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
          v15 = v14[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
        if ( !v15 )
        {
          if ( v13 == -1 )
            goto LABEL_21;
          v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          goto LABEL_26;
        }
        ++v13;
      }
      while ( v13 < v12 );
      while ( 1 )
      {
LABEL_21:
        v16 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v8);
        v17 = *v16 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v16 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v17 = v16[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v17 )
          break;
        if ( ++v8 >= v12 )
          goto LABEL_30;
      }
      if ( v8 != -1 )
      {
        v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        goto LABEL_26;
      }
    }
LABEL_30:
    v18 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, 0LL);
  }
  else
  {
    v18 = GUID_00000000_0000_0000_0000_000000000000;
  }
LABEL_26:
  *a2 = v18;
  return a2;
}
