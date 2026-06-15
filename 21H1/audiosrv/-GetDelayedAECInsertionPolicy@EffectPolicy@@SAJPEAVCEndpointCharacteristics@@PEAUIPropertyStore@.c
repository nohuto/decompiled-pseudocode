/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180124060
 * Callers:
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119C64 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x180032D00 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005C130 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x1801243FC (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801244F8 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801245C8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  _OWORD *v9; // rdi
  _OWORD *v10; // rbx
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 *v14; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v15; // r14
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v23; // [rsp+40h] [rbp-79h] BYREF
  int v24; // [rsp+48h] [rbp-71h] BYREF
  BOOL v25; // [rsp+50h] [rbp-69h] BYREF
  int v26; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-59h] BYREF
  __int64 v28; // [rsp+68h] [rbp-51h] BYREF
  __int64 v29; // [rsp+70h] [rbp-49h] BYREF
  LPVOID v30; // [rsp+78h] [rbp-41h] BYREF
  _OWORD *v31; // [rsp+80h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-31h] BYREF
  __int128 v33; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v34[2]; // [rsp+A0h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v35; // [rsp+B0h] [rbp-9h]
  struct IPropertyStore *v36; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_QWORD *)&v33 = a4;
  v35 = a3;
  v36 = a2;
  v30 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v34[0] = 0LL;
  v34[1] = 0LL;
  v10 = 0LL;
  v31 = 0LL;
  if ( !EffectPolicy::IsMicArray(a2, a6) || EffectPolicy::IsValidMicArrayForAEC(this, a3[12], a2, a6) )
  {
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (SystemEffectDescriptor *)a3,
                                 (struct CAudioSignalProcessingModeArray *)v34,
                                 &v23,
                                 (struct _GUID **)&pv);
    v12 = DefaultEffectChainClsids;
    v9 = pv;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v14 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                         (unsigned __int64 *)this + 19,
                         *((int *)a3 + 12));
      v25 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v14, (_QWORD *)v33) != -1;
      v31 = v9;
      v24 = 1;
      v26 = 2;
      DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                   &v29,
                                   &v26,
                                   &v25,
                                   &v24,
                                   &v23,
                                   &v31);
      v12 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids >= 0 )
      {
        v10 = (_OWORD *)*((_QWORD *)this + 2);
        v31 = v10;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        v33 = *(_OWORD *)v33;
        v15 = v35;
        if ( (*(int (__fastcall **)(__int64, _OWORD *, __int128 *, __int64, _DWORD, _QWORD, __int64 *))(*(_QWORD *)v29 + 24LL))(
               v29,
               v10,
               &v33,
               1LL,
               *((_DWORD *)v35 + 12),
               0LL,
               &v28) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v28 + 24LL))(
               v28,
               &v30,
               &v27,
               0LL) >= 0 )
        {
          *((_DWORD *)a6 + 9) = 0;
          if ( v27 )
          {
            v16 = 0;
            v17 = v30;
            v18 = v27;
            do
            {
              v19 = *v17 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v17 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v19 = v17[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v19 )
              {
                v16 |= 2u;
                *((_DWORD *)a6 + 9) = v16;
              }
              v20 = *v17 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v17 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v20 = v17[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( v20 )
              {
                v16 = *((_DWORD *)a6 + 9);
              }
              else
              {
                v16 |= 4u;
                *((_DWORD *)a6 + 9) = v16;
              }
              v21 = *v17 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v17 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v21 = v17[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v21 )
              {
                v16 |= 8u;
                *((_DWORD *)a6 + 9) = v16;
              }
              v17 += 2;
              --v18;
            }
            while ( v18 );
          }
        }
        if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)v15 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
        {
          EffectPolicy::IsIntegratedAudioDevice(v36, (int *)a6 + 10);
          if ( *((_DWORD *)a6 + 1) == 2 && *((_DWORD *)a6 + 10) )
          {
            *(_DWORD *)a5 = 2;
            *((_DWORD *)a6 + 16) = 0;
          }
          else if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
          {
            *(_DWORD *)a5 = 0;
            *((_DWORD *)a6 + 16) = 9;
          }
          else
          {
            *(_DWORD *)a5 = 3;
            *((_DWORD *)a6 + 16) = 7;
          }
        }
        else
        {
          *(_DWORD *)a5 = 2;
          *((_DWORD *)a6 + 16) = 8;
        }
        goto LABEL_37;
      }
      v13 = 320LL;
    }
    else
    {
      v13 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    goto LABEL_38;
  }
  *(_DWORD *)a5 = 2;
  *((_DWORD *)a6 + 16) = 5;
LABEL_37:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  v12 = 0;
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v34);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  CoTaskMemFree(v9);
  CoTaskMemFree(v30);
  return v12;
}
