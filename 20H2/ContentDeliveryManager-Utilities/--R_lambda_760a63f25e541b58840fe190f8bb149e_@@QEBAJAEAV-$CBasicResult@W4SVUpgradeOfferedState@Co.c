/*
 * XREFs of ??R_lambda_760a63f25e541b58840fe190f8bb149e_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x180011838
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_760a63f25e541b58840fe190f8bb149e_@@V?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeOfferedState@ContentManagement@@$0A@@23@@Z @ 0x18001BFE0 (-Run@-$COperationLambdaVar@$0A@V_lambda_760a63f25e541b58840fe190f8bb149e_@@V-$CBasicResult@W4SVU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext@@@details@wil@@QEAA_NXZ @ 0x1800174FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext@.c)
 *     ??$CoCreateInstance@VUpdateSessionOrchestrator@@UIUpdateSessionOrchestrator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIUpdateSessionOrchestrator@@Uerr_exception_policy@wil@@@0@K@Z @ 0x180019FA0 (--$CoCreateInstance@VUpdateSessionOrchestrator@@UIUpdateSessionOrchestrator@@Uerr_exception_poli.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _lambda_760a63f25e541b58840fe190f8bb149e_::operator()(__int64 a1, __int64 a2)
{
  const char *v3; // r9
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 (__fastcall **v9)(__int64, GUID *, __int64 **); // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  HRESULT v12; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  unsigned int v20; // edi
  int v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  int v25; // ecx
  bool v26; // al
  wil::details::in1diag3 *v27; // r10
  HRESULT v28; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall ***v34)(__int64, GUID *, __int64 **); // [rsp+48h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-58h] BYREF
  __int64 v36; // [rsp+58h] [rbp-50h] BYREF
  __int64 *v37; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-30h] BYREF
  HSTRING string; // [rsp+90h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v38[1] = -2LL;
  try
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetImpl'::`2'::impl) )
      return 0LL;
    wil::CoCreateInstance<UpdateSessionOrchestrator,IUpdateSessionOrchestrator,wil::err_exception_policy>(v38);
    if ( v38[0] )
    {
      v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))v38[0])(
             v38[0],
             &GUID_c57692f8_8f5f_47cb_9381_34329b40285a,
             &v37);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        v34 = 0LL;
        v6 = *v37;
        v34 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, const WCHAR *, __int64 (__fastcall ****)(__int64, GUID *, __int64 **)))(v6 + 24))(
               v37,
               L"ContentDeliveryManager",
               &Src,
               &v34);
        v8 = retaddr;
        if ( v7 >= 0 )
        {
          v33 = 0LL;
          v9 = *v34;
          v33 = 0LL;
          v10 = (*v9)((__int64)v34, &GUID_0ada57ba_5e42_4be3_87bb_bb1cf169b391, &v33);
          v11 = retaddr;
          if ( v10 >= 0 )
          {
            v36 = 0LL;
            string = 0LL;
            v12 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
            if ( v12 >= 0 )
            {
              ActivationFactory = RoGetActivationFactory(string, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v36);
              v14 = retaddr;
              if ( ActivationFactory >= 0 )
              {
                v32 = 0LL;
                v15 = *v33;
                v32 = 0LL;
                v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v15 + 216))(v33, &v32);
                v17 = retaddr;
                if ( v16 >= 0 )
                {
                  v18 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v32 + 32))(v32, &v35);
                  v19 = retaddr;
                  if ( v18 >= 0 )
                  {
                    v20 = 0;
                    v21 = 1;
                    while ( v20 < v35 )
                    {
                      v31 = 0LL;
                      v22 = *v32;
                      v31 = 0LL;
                      v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v22 + 24))(v32, v20, &v31);
                      v24 = retaddr;
                      if ( v23 < 0 )
                        goto LABEL_49;
                      VariantInit((VARIANTARG *)&hstringHeader);
                      v25 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v31
                                                                                                  + 272LL))(
                              v31,
                              L"UsePromotionalUxSurfaces",
                              &hstringHeader);
                      v26 = ((v25 + 0x80000000) & 0x80000000) == 0 && v25 != -2147023728;
                      v27 = retaddr;
                      if ( v26 )
                        goto LABEL_50;
                      if ( v25 >= 0 )
                      {
                        v28 = VariantChangeType(
                                (VARIANTARG *)&hstringHeader,
                                (const VARIANTARG *)&hstringHeader,
                                0,
                                0xBu);
                        v29 = retaddr;
                        if ( v28 < 0 )
                          goto LABEL_51;
                        if ( *(_WORD *)&hstringHeader.Reserved.Reserved2[8] == 0xFFFF )
                        {
                          VariantClear((VARIANTARG *)&hstringHeader);
                          if ( v31 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                          v21 = 0;
                          break;
                        }
                      }
                      VariantClear((VARIANTARG *)&hstringHeader);
                      if ( v31 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                      ++v20;
                    }
                    *(_DWORD *)(a2 + 16) = v21 + 1;
                    if ( v32 )
                      (*(void (__fastcall **)(__int64 *))(*v32 + 16))(v32);
                    if ( v36 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
                    if ( v33 )
                      (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
                    if ( v34 )
                      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 **)))(*v34)[2])(v34);
                    if ( v37 )
                      (*(void (__fastcall **)(__int64 *))(*v37 + 16))(v37);
                    if ( v38[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]);
                    return 0LL;
                  }
LABEL_48:
                  wil::details::in1diag3::Throw_Hr(
                    v19,
                    (void *)0x28C,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                    (const char *)(unsigned int)v18);
LABEL_49:
                  wil::details::in1diag3::Throw_Hr(
                    v24,
                    (void *)0x291,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                    (const char *)(unsigned int)v23);
LABEL_50:
                  wil::details::in1diag3::Throw_Hr(
                    v27,
                    (void *)0x295,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                    (const char *)(unsigned int)v25);
LABEL_51:
                  wil::details::in1diag3::Throw_Hr(
                    v29,
                    (void *)0x298,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                    (const char *)(unsigned int)v28);
                  JUMPOUT(0x180011CF5LL);
                }
LABEL_47:
                wil::details::in1diag3::Throw_Hr(
                  v17,
                  (void *)0x28A,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  (const char *)(unsigned int)v16);
                goto LABEL_48;
              }
LABEL_46:
              wil::details::in1diag3::Throw_Hr(
                v14,
                (void *)0x287,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)ActivationFactory);
              goto LABEL_47;
            }
LABEL_45:
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
            goto LABEL_46;
          }
LABEL_44:
          wil::details::in1diag3::Throw_Hr(
            v11,
            (void *)0x284,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_45;
        }
LABEL_43:
        wil::details::in1diag3::Throw_Hr(
          v8,
          (void *)0x282,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_44;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80004005LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4);
    goto LABEL_43;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2A3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      v3);
  }
  return 0LL;
}
