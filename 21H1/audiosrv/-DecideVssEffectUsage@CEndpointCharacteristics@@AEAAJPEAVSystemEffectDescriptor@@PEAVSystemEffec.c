/*
 * XREFs of ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029998
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e06803c0aedafb4181c6469105296c31__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180047080 (std--_Func_impl_no_alloc__lambda_e06803c0aedafb4181c6469105296c31__long_SystemEffec_ea_180047080.c)
 *     std::_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x1801209D0 (std--_Func_impl_no_alloc__lambda_3391533480cddb0792323d763746dc17__long_SystemEffec_ea_1801209D0.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180029574 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029D24 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048860 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 *     _lambda_54745379ff30d9fd4bff252b54f177dd_::operator() @ 0x18011A290 (_lambda_54745379ff30d9fd4bff252b54f177dd_--operator().c)
 *     _lambda_6391a63ce46c606b78be3aee92140f1a_::operator() @ 0x18011A414 (_lambda_6391a63ce46c606b78be3aee92140f1a_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18011DD08 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DecideVssEffectUsage(
        CEndpointCharacteristics *this,
        struct SystemEffectDescriptor *a2,
        struct SystemEffectChainDescriptor *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  LPVOID v11; // rcx
  int v12; // r13d
  int v13; // eax
  __int64 v14; // r12
  bool v15; // bl
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29[2]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-39h] BYREF
  __int64 v32; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33; // [rsp+60h] [rbp-29h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // [rsp+68h] [rbp-21h]
  SystemEffectDescriptor *v35; // [rsp+70h] [rbp-19h]
  CEndpointCharacteristics *v36; // [rsp+78h] [rbp-11h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // [rsp+80h] [rbp-9h]
  __int64 v38[2]; // [rsp+88h] [rbp-1h] BYREF

  v34 = a4;
  v35 = a2;
  v36 = this;
  v37 = a4;
  v6 = 0;
  v30 = 0;
  *(_QWORD *)v29 = *((_QWORD *)this + 5);
  v33 = 0LL;
  v32 = 0LL;
  pv = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
         &v32,
         &v33,
         v29);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v33) = v7;
      v29[0] = 181;
      v38[0] = (__int64)"Create_SpatialAudioDevicePropertyReader";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v38,
        (__int64)v29,
        (__int64)&v33);
    }
  }
  else
  {
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, LPVOID *))v32)(
           v32,
           &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d,
           &pv);
  }
  v10 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 >= 0 && (*(int (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)pv + 184LL))(pv, &v30) >= 0 )
    v6 = v30;
  v11 = pv;
  if ( pv )
  {
    pv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v6 )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(this, v29);
      if ( v29[0] != 1 && v29[0] - 3 > 3 )
        v6 = 0;
    }
  }
  v12 = 0;
  v13 = *((_DWORD *)a3 + 2);
  if ( v13 > 0 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 < 0 || v12 >= v13 )
      {
        ATL::_AtlRaiseException(0xC000008C, v8);
        __debugbreak();
      }
      *(_OWORD *)v38 = *(_OWORD *)(v14 + *(_QWORD *)a3);
      v15 = v6 != 0;
      if ( v6 == 2 )
      {
        *(_QWORD *)v29 = 0LL;
        v32 = 0LL;
        pv = 0LL;
        v30 = 0;
        v15 = 1;
        if ( (int)lambda_6391a63ce46c606b78be3aee92140f1a_::operator()(&v36, v35, v38, v29, &v32) >= 0 )
        {
          v22 = v32;
          if ( v32 )
          {
            if ( (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v32 + 24LL))(
                   v32,
                   &pv,
                   &v30,
                   0LL) >= 0 )
            {
              v23 = 0;
              if ( v30 )
              {
                while ( 1 )
                {
                  v22 = 2LL * v23;
                  v24 = *((_QWORD *)pv + 2 * v23) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
                  if ( !v24 )
                    v24 = *((_QWORD *)pv + 2 * v23 + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
                  if ( !v24 )
                    break;
                  v25 = *((_QWORD *)pv + 2 * v23) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
                  if ( !v25 )
                    v25 = *((_QWORD *)pv + 2 * v23 + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
                  if ( !v25 )
                    break;
                  if ( ++v23 >= v30 )
                  {
                    v15 = 1;
                    goto LABEL_44;
                  }
                }
                v15 = 0;
              }
            }
          }
LABEL_44:
          if ( v15
            && *(_QWORD *)v29
            && ((unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v22, *(_QWORD *)v29, 48000LL, 6LL)
             || (unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v26, *(_QWORD *)v29, 48000LL, 8LL)
             || (unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v27, *(_QWORD *)v29, 44100LL, 6LL)
             || (unsigned __int8)lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(v28, *(_QWORD *)v29, 44100LL, 8LL)) )
          {
            v15 = 0;
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        if ( *(_QWORD *)v29 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 16LL))(*(_QWORD *)v29);
      }
      v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, v34);
      v17 = 0;
      v18 = *(_DWORD *)(v16 + 8);
      if ( v18 <= 0 )
      {
LABEL_22:
        v17 = -1;
      }
      else
      {
        v19 = *(_QWORD *)v16;
        while ( 1 )
        {
          v20 = *(_QWORD *)(v19 + 16LL * v17) - v38[0];
          if ( !v20 )
            v20 = *(_QWORD *)(v19 + 16LL * v17 + 8) - v38[1];
          if ( !v20 )
            break;
          if ( ++v17 >= v18 )
            goto LABEL_22;
        }
      }
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        v35,
        a3,
        v15,
        (unsigned __int64)&unk_18019E720 & -(__int64)v15,
        1,
        v17 != -1);
      ++v12;
      v14 += 16LL;
      v13 = *((_DWORD *)a3 + 2);
    }
    while ( v12 < v13 );
  }
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}
