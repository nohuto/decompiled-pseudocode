/*
 * XREFs of ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1801BA300
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180087B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6788242ee63e21dca0a125830d496daa_@@@Z @ 0x1801B61EC (--$DoInvoke@V_lambda_6788242ee63e21dca0a125830d496daa_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x1801B65D0 (Microsoft--WRL--Details--Make__CortanaExperienceManagerNotification--OnShown_--_2_--CCortanaShow.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801BAEF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation@@@detai.c)
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x1801BC1FC (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 */

char __fastcall CortanaExperienceManagerNotification::OnShown(__int64 a1, const __m128i *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  char result; // al
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_BoostPriorityAlwaysOnViewCreation>::GetImpl'::`2'::impl,
    0LL);
  v4 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v4 + 538) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 496) + 104LL))(*(_QWORD *)(v4 + 496), 3LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x632,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 538LL) = 1;
  }
  result = CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)(a1 - 8));
  if ( result )
  {
    v7 = Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(
           &v13,
           a2);
    v8 = *v7;
    *v7 = 0LL;
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v9);
    }
    v10 = *(RTL_SRWLOCK **)(a1 + 48);
    *(_QWORD *)&v11 = &v14;
    v14 = v10;
    *((_QWORD *)&v11 + 1) = &v15;
    v15 = v8;
    result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_6788242ee63e21dca0a125830d496daa_>(
               v10 + 6,
               &v11);
    if ( v8 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return result;
}
