/*
 * XREFs of ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02BF708
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0192DAC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C0024898 (McGenEventRegister_EtwRegister.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 */

void __fastcall DXGGLOBAL::SubscribeWNFForCSAccounting(PVOID *this)
{
  _QWORD *v1; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF

  v1 = this + 245;
  v15 = WNF_PO_SCENARIO_CHANGE;
  v3 = ExSubscribeWnfStateChange(this + 245, &v15, 1LL);
  v7 = v3;
  if ( v3 >= 0 )
  {
    v9 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           (PPOWER_SETTING_CALLBACK)PDCIdleResiliencyEngagedCallBackFn,
           0LL,
           this + 246);
    v13 = v9;
    if ( v9 >= 0 )
    {
      McGenEventRegister_EtwRegister(
        &SLEEPSTUDY_ETW_PROVIDER,
        v10,
        SLEEPSTUDY_ETW_PROVIDER_Context,
        SLEEPSTUDY_ETW_PROVIDER_Context);
      *((_DWORD *)this + 495) = 1;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v13;
      WdLogEvent5_WdWarning(v14);
      ExUnsubscribeWnfStateChange(*v1);
      *v1 = 0LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
}
