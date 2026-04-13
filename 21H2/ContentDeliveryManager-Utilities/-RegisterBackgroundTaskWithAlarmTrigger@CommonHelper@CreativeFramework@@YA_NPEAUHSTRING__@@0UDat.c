/*
 * XREFs of ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B09AC
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800733E0 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180034084 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800AFC98 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskWithAlarmTrigger(
        HSTRING a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 *a8)
{
  HRESULT v11; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 (__fastcall **v17)(__int64, GUID *, __int64 *); // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbx
  __int64 *v21; // rax
  char v22; // si
  volatile signed __int32 *v23; // rbx
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-A1h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-99h] BYREF
  __int64 v27; // [rsp+50h] [rbp-91h] BYREF
  __int64 v28; // [rsp+58h] [rbp-89h]
  __int128 v29; // [rsp+60h] [rbp-81h]
  int v30; // [rsp+70h] [rbp-71h]
  __int64 v31[3]; // [rsp+78h] [rbp-69h] BYREF
  __int128 v32; // [rsp+90h] [rbp-51h] BYREF
  int v33; // [rsp+A0h] [rbp-41h]
  __int64 v34; // [rsp+B0h] [rbp-31h]
  __int64 *v35; // [rsp+B8h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-21h] BYREF
  HSTRING string; // [rsp+D8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v34 = -2LL;
  v35 = a8;
  v26 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.ApplicationModel.Background.AlarmTrigger",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
    goto LABEL_18;
  ActivationFactory = RoGetActivationFactory(string, &GUID_4725971e_c31d_4857_b33b_50779cf665c1, &v26);
  v13 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x108,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v25 = 0LL;
  v14 = *v26;
  v25 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, _BYTE, bool, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(v14 + 48))(
          v26,
          a3,
          0LL,
          2LL,
          0,
          (a7 & 8) != 0,
          &v25);
  v16 = retaddr;
  if ( v15 < 0 )
    goto LABEL_20;
  *(_QWORD *)&v29 = 0LL;
  *((_QWORD *)&v29 + 1) = 0x4805800000000LL;
  v30 = 1100;
  v17 = *v25;
  v32 = v29;
  v33 = 1100;
  v18 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int128 *))v17[6])(v25, &v32);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x116,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v18);
    JUMPOUT(0x1800B0C3ELL);
  }
  v28 = 0LL;
  v19 = (**v25)((__int64)v25, &GUID_84b3a058_6027_4b87_9790_bdf3f757dbd7, &v27);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v19);
LABEL_18:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_19;
  }
  v20 = v27;
  v28 = v27;
  v21 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          v31,
          a8);
  v22 = CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(a1, a2, v20, a6, 0, v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v25 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
  v23 = (volatile signed __int32 *)a8[1];
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( !_InterlockedDecrement(v23 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  return v22;
}
