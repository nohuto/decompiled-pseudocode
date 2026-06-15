/*
 * XREFs of _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119094
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18011FDE0 (std--_Func_impl_no_alloc__lambda_1ddcc36e30584de0b30e6aa0e02df019__long_SystemEffec_ea_18011FDE0.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800273C8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180028EF4 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18005AABC (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005ABAC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x18005BCEC (_lambda_9db93a4360823e3555de44b3b523347b_--operator().c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _lambda_4b369aa96bdcdce7616c4f02413351c1_::operator() @ 0x1801194BC (_lambda_4b369aa96bdcdce7616c4f02413351c1_--operator().c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18011DDF4 (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011E8E8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180123080 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator()(
        struct _GUID *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v7; // r15
  int v8; // ebx
  GUID *v9; // rax
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // r14d
  __int64 *v14; // rax
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  int v25; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _AEC_POLICY_RESULTS *v27; // [rsp+50h] [rbp-30h]
  struct _GUID v28; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 40LL)
                                                                                                  + 40LL))(
                                *(_QWORD *)(*(_QWORD *)&a1->Data1 + 40LL),
                                a1->Data4,
                                pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_39;
  v7 = v27;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *(_DWORD *)v27 != 5 )
    goto LABEL_38;
  v28 = a1[6];
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                *(struct CEndpointCharacteristics **)&a1->Data1,
                                *(struct IPropertyStore **)(*(_QWORD *)&a1->Data1 + 40LL),
                                (struct SystemEffectDescriptor *)a2,
                                &v28,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v25,
                                v27);
  if ( DelayedAECInsertionPolicy >= 0 )
  {
    v8 = v25;
    if ( v25 == 2 )
    {
      if ( a1[7].Data1 != 3
        || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported(*(CEndpointCharacteristics **)&a1->Data1) )
      {
        v9 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
      }
      else
      {
        v9 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      }
    }
    else
    {
      v9 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v28 = *v9;
    v10 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                       (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 152LL),
                       (int)a1[7].Data1);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v10,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !v8 )
        goto LABEL_33;
      v11 = lambda_4b369aa96bdcdce7616c4f02413351c1_::operator()(a1[7].Data4);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86C,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    if ( !v8 )
      goto LABEL_33;
    if ( v8 > 0 )
    {
      if ( v8 <= 2 )
      {
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v28,
                                      2,
                                      0);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        v19 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                           (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 152LL),
                           a2[12]);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v19, &a1[6].Data1) != -1 )
        {
          v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1736LL),
                  (int)a1[7].Data1);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v20, &a1[6].Data1) )
            goto LABEL_24;
          v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 152LL),
                  a2[12]);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v21, &a1[6]);
        }
        if ( *((_DWORD *)v7 + 16) == 8 )
        {
          v22 = *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8728LL);
          if ( v22 )
          {
            *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8728LL) = v22 - 1;
            *((_DWORD *)a3 + 4) = 1;
          }
        }
LABEL_33:
        *(GUID *)((char *)v7 + 44) = *lambda_9db93a4360823e3555de44b3b523347b_::operator()((int *)a1[9].Data4, &v28);
        pv = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)&a1->Data1 + 16LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v23 + 40LL))(v23, &pv);
        v28 = a1[6];
        LogAecEffectPolicyInsertion(v7, (const unsigned __int16 *)pv, &v28, a1[7].Data1);
        DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                      *(CEndpointCharacteristics **)&a1->Data1,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a1[7].Data1,
                                      (const struct _tagpropertykey *)a1->Data4,
                                      v7);
        PropVariantClear(pvar);
        if ( DelayedAECInsertionPolicy >= 0 )
          DelayedAECInsertionPolicy = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x86C,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)DelayedAECInsertionPolicy);
        if ( pv )
          CoTaskMemFree(pv);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      if ( v8 == 3 )
      {
        v14 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                           (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 152LL),
                           (int)a1[7].Data1);
        v15 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v14, &a1[6].Data1);
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v28,
                                      1,
                                      v15 != -1);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        v16 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                           (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1736LL),
                           (int)a1[7].Data1);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v16, &a1[6].Data1) != -1 )
        {
          v17 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 152LL),
                  (int)a1[7].Data1);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v17, &a1[6].Data1) )
          {
LABEL_24:
            DelayedAECInsertionPolicy = -2147024882;
            goto LABEL_39;
          }
          v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*(_QWORD *)&a1->Data1 + 1736LL),
                  (int)a1[7].Data1);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v18, &a1[6]);
        }
        goto LABEL_33;
      }
    }
LABEL_38:
    PropVariantClear(pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_39;
  }
LABEL_6:
  PropVariantClear(pvar);
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x86C,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
