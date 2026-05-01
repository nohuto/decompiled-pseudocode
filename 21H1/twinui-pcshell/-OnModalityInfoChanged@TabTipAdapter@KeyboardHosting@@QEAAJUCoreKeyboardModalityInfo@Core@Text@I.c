/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800A49F4
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x1800A2AA4 (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285@@@details@wil@@QEAA_NXZ @ 0x1800A47DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboar.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x180347680 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CoreInputViewAPIKeyboardInvocation_29705285>::GetImpl'::`2'::impl) )
  {
    v4 = -2147418113;
    v5 = 2323LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_DWORD *)a2 + 2);
  v8 = *(_QWORD *)(a1 + 104);
  v9 = *a2;
  v10 = v7;
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(v8, &v9, &v12);
  if ( v4 < 0 )
  {
    v5 = 2326LL;
    goto LABEL_3;
  }
  return 0LL;
}
