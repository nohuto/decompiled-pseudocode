/*
 * XREFs of ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1800A2AA4
 * Callers:
 *     wistd::__function::__func__lambda_fb5c3ed5a8990780d308ae9cb96bd0c4__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800A21F0 (wistd--__function--__func__lambda_fb5c3ed5a8990780d308ae9cb96bd0c4__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z @ 0x1800A0328 (--$OnTouchEvent@IAEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N1@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285@@@details@wil@@QEAA_NXZ @ 0x1800A47DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboar.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800A49F4 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPEAKPEA_N5@Z @ 0x1800CA178 (-s_UnpackTouchEvent@CNotificationData@@SAXPEBXPEAW4TouchEventSource@IhmNotification@@PEAIPEA_JPE.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleTouchEvent(
        TouchKeyboardExperienceManager *this,
        const unsigned __int8 (*a2)[32])
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned int v10; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  int v14; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  bool v16; // [rsp+90h] [rbp+20h] BYREF
  bool v17; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::GetImpl'::`2'::impl) )
  {
    CNotificationData::s_UnpackTouchEvent(
      a2,
      (enum IhmNotification::TouchEventSource *)&v8,
      &v10,
      &v11,
      &v9,
      &v17,
      &v16);
    v4 = v8;
    TouchKeyboardExperienceTelemetryLogger::OnTouchEvent<unsigned int,bool &,bool &>(&v8, &v17, (char *)&v16);
    v5 = 1;
    if ( v4 <= 1 )
      v5 = v16 ? 16 : 2;
    v6 = *((_QWORD *)this + 86);
    LODWORD(v11) = v5;
    v13 = v11;
    v14 = v12;
    v7 = KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(v6, &v13);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xDC4,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
