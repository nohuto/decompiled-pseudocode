/*
 * XREFs of ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x18033F370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18032B29C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18032CC74 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18033CBF0 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *a3)
{
  __int64 v4; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *ViewOptions; // rax
  int v16; // esi
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  _BYTE v25[16]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v26; // [rsp+40h] [rbp-49h] BYREF
  __int128 v27; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v28[3]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v29; // [rsp+90h] [rbp+7h]
  __int128 v30; // [rsp+A0h] [rbp+17h]
  __int64 v31; // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 66) )
  {
    v4 = 677LL;
LABEL_3:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 62);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  v7 = *(_QWORD *)(v6[1] + 8 * (*((_QWORD *)this + 65) & (v6[2] - 1LL)));
  v8 = *(_OWORD *)(v7 + 16);
  v28[0] = *(_OWORD *)v7;
  v9 = *(_OWORD *)(v7 + 32);
  v28[1] = v8;
  v10 = *(_OWORD *)(v7 + 48);
  v28[2] = v9;
  v11 = *(_OWORD *)(v7 + 64);
  v29 = v10;
  v31 = *(_QWORD *)(v7 + 80);
  v30 = v11;
  if ( !BYTE4(v31) )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)this + 66);
      if ( !v12 )
        break;
      v13 = v12 - 1;
      *((_QWORD *)this + 66) = v13;
      if ( v13 )
        ++*((_QWORD *)this + 65);
      else
        *((_QWORD *)this + 65) = 0LL;
    }
    v4 = 690LL;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)a3;
  v25[0] = 0;
  (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *, _BYTE *))(v14 + 48))(
    a3,
    v25);
  if ( v25[0] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    v18 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
            *((TouchKeyboardExperienceManager **)this + 8),
            *((_DWORD *)this + 122),
            0,
            0);
    if ( v18 < 0 )
    {
      v19 = 734LL;
      goto LABEL_15;
    }
  }
  else
  {
    LODWORD(v26) = (int)*((float *)&v30 + 1);
    DWORD1(v26) = (int)*((float *)&v30 + 2);
    DWORD2(v26) = (int)(float)(*((float *)&v30 + 3) + *((float *)&v30 + 1));
    HIDWORD(v26) = (int)(float)(*((float *)&v30 + 2) + *(float *)&v31);
    ViewOptions = (__int128 *)GetViewOptions((__int64)&v27, (__int64)v28);
    v16 = HIDWORD(v29);
    v17 = *((_QWORD *)this + 8);
    v27 = *ViewOptions;
    v18 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(v17, HIDWORD(v29), &v26, &v27);
    if ( v18 < 0 )
    {
      v19 = 700LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v18);
      return (unsigned int)v18;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    if ( v16 == *((_DWORD *)this + 122) )
    {
      v22 = *((_QWORD *)this + 3);
      if ( v22 )
      {
        v23 = *((unsigned int *)this + 78);
        if ( (_DWORD)v23 != 1 )
        {
          v23 = 2LL;
          *((_DWORD *)this + 78) = 2;
        }
        LOBYTE(v21) = *((_BYTE *)this + 317);
        LOBYTE(v20) = *((_BYTE *)this + 316);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _BYTE))(*(_QWORD *)v22 + 560LL))(
          v22,
          v23,
          v20,
          v21,
          *((_BYTE *)this + 318));
        *((_DWORD *)this + 78) = 0;
      }
    }
  }
  if ( (*((_QWORD *)this + 66))-- == 1LL )
    *((_QWORD *)this + 65) = 0LL;
  else
    ++*((_QWORD *)this + 65);
  return 0LL;
}
