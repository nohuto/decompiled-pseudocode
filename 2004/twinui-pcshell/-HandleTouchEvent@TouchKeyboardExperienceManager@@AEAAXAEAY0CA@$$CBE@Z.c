/*
 * XREFs of ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1800B0ADC
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800B0350 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_NullCheckOfTabTipAdapter_33881369@@@details@wil@@QEAA_NXZ @ 0x1800B287C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_fix_NullCheckOfTabTipAd.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B2A14 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1800EEBA8 (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1802CCE60 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18034FB24 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleTouchEvent(
        TouchKeyboardExperienceManager *this,
        const unsigned __int8 (*a2)[32])
{
  const struct _tlgProvider_t *v3; // rax
  bool v4; // bl
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned int v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v23; // [rsp+A0h] [rbp+30h] BYREF
  bool v24; // [rsp+A8h] [rbp+38h] BYREF

  CNotificationData::s_UnpackTouchEvent(
    a2,
    (enum IhmNotification::TouchEventSource *)&v15,
    &v17,
    &v18,
    &v16,
    &v24,
    &v23);
  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  v4 = v23;
  v5 = v15;
  if ( *(_DWORD *)v3 > 5u && tlgKeywordOn((__int64)v3, 16LL) )
  {
    v23 = v4;
    v15 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v6,
      (unsigned int)&unk_1805192B7,
      v7,
      v8,
      (__int64)&v15,
      (__int64)&v24,
      (__int64)&v23);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_fix_NullCheckOfTabTipAdapter_33881369>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_NullCheckOfTabTipAdapter_33881369>::GetImpl'::`2'::impl) )
  {
    v9 = *((_QWORD *)this + 86);
    if ( v9 )
    {
      v10 = 1;
      if ( v5 <= 1 )
        v10 = v4 ? 16 : 2;
      LODWORD(v18) = v10;
      v20 = v18;
      v21 = v19;
      v11 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v9, &v20);
      if ( v11 < 0 )
      {
        v12 = 3469LL;
LABEL_14:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      }
    }
  }
  else
  {
    v13 = 1;
    if ( v5 <= 1 )
      v13 = v4 ? 16 : 2;
    v14 = *((_QWORD *)this + 86);
    LODWORD(v20) = v13;
    v18 = v20;
    v19 = v21;
    v11 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v14, &v18);
    if ( v11 < 0 )
    {
      v12 = 3484LL;
      goto LABEL_14;
    }
  }
}
