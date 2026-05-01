/*
 * XREFs of ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18019E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180095474 (-PopulateCloudDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAA_NXZ @ 0x180095824 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18019C328 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x18019C7B4 (--1-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleArr.c)
 *     ??1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18019C840 (--1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x18019D138 (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019EE94 (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019EFE0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18019F200 (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 *     ?StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18019FC94 (-StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18019FD28 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetTaskbarLayout(
        TaskbarLayoutPolicyManager *a1,
        unsigned int a2,
        _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v19[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"GetTaskbarLayout");
  v19[0] = &TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v19);
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(TaskbarLayoutPolicyManager *, _QWORD, int *, _BYTE *))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2,
         &v16,
         v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( !v16 )
    {
      v7 = -2147467259;
      v8 = 2147500037LL;
      v9 = 203LL;
      goto LABEL_5;
    }
    memset(v17, 0, sizeof(v17));
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1
            || !wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetImpl'::`2'::impl) )
          {
            v7 = -2147024809;
LABEL_24:
            CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>((__int64)v17);
            goto LABEL_25;
          }
          v12 = TaskbarLayoutPolicyManager::PopulateCloudDefaultLayoutItems((__int64)a1, (__int64)v17);
          v7 = v12;
          if ( v12 < 0 )
          {
            v14 = 220LL;
LABEL_22:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)v12);
            goto LABEL_24;
          }
        }
        else
        {
          v12 = TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(a1);
          v7 = v12;
          if ( v12 < 0 )
          {
            v14 = 215LL;
            goto LABEL_22;
          }
        }
      }
      else
      {
        v12 = TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(a1);
        v7 = v12;
        if ( v12 < 0 )
        {
          v14 = 212LL;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v12 = TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(a1, v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        v14 = 209LL;
        goto LABEL_22;
      }
    }
    v12 = TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(v13, (__int64)v17, a3);
    v7 = v12;
    if ( v12 >= 0 )
    {
      wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
      v7 = 0;
      goto LABEL_24;
    }
    v14 = 232LL;
    goto LABEL_22;
  }
  v8 = (unsigned int)v6;
  v9 = 202LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)v8);
LABEL_25:
  TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::~GetTaskbarLayout((TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *)v19);
  return v7;
}
