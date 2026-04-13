/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800ABE5C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070360 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180006CE0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000CC28 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180017354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@details@wil@@QE.c)
 *     _lambda_4da519507bbb1c7cbbe275d8da092dac_::operator() @ 0x1800AC00C (_lambda_4da519507bbb1c7cbbe275d8da092dac_--operator().c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r14
  wil::details_abi *v4; // rcx
  __int64 v5; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v7; // rbx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  volatile signed __int32 *v11; // rbx
  struct DiagnosticsInfo *v12; // [rsp+28h] [rbp-99h] BYREF
  struct wil::details_abi::ThreadLocalData *v13; // [rsp+30h] [rbp-91h] BYREF
  __int64 v14; // [rsp+38h] [rbp-89h]
  _QWORD v15[3]; // [rsp+40h] [rbp-81h] BYREF
  __int16 v16; // [rsp+58h] [rbp-69h]
  _QWORD v17[11]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+3Fh]
  __int64 v20; // [rsp+108h] [rbp+47h] BYREF
  __int64 v21; // [rsp+110h] [rbp+4Fh] BYREF
  __int64 v22; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va; // [rsp+120h] [rbp+5Fh]
  __int64 v24; // [rsp+128h] [rbp+67h] BYREF
  va_list va1; // [rsp+128h] [rbp+67h]
  __int64 v26; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+6Fh]
  __int64 v28; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v30; // [rsp+140h] [rbp+7Fh]
  va_list va4; // [rsp+148h] [rbp+87h] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  v30 = va_arg(va4, _QWORD);
  v21 = a2;
  v20 = a1;
  v17[9] = -2LL;
  v18 = a3;
  v3 = v30;
  v17[10] = v30;
  LOBYTE(v12) = 0;
  v17[0] = &v18;
  va_copy((va_list)&v17[1], va1);
  va_copy((va_list)&v17[2], va);
  va_copy((va_list)&v17[3], va3);
  v17[4] = &v20;
  v17[5] = &v21;
  va_copy((va_list)&v17[6], va2);
  v17[7] = &v12;
  v17[8] = v30;
  v15[0] = retaddr;
  v15[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v15[2] = 0LL;
  v16 = 228;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GenericActionAndTrigger>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetImpl'::`2'::impl,
    1u,
    3u);
  LOBYTE(v4) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v4, v5);
  v7 = ThreadLocalDataCache;
  v13 = ThreadLocalDataCache;
  v14 = 0LL;
  v8 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v14) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v14) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v14;
    v8 = HIDWORD(v14);
    v7 = v13;
  }
  v9 = lambda_4da519507bbb1c7cbbe275d8da092dac_::operator()(v17);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (__int64)&v13,
      (struct wil::ThreadErrorContext *)0x79780D,
      (const struct wil::FailureInfo *)v15);
  if ( v7 )
    *((_DWORD *)v7 + 4) = v8;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800AC004LL);
  }
  v11 = *(volatile signed __int32 **)(v3 + 8);
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( !_InterlockedDecrement(v11 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
