/*
 * XREFs of ?OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800811F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@Z @ 0x18001089C (--$DoInvoke@V_lambda_68949f556153738f7c1e1d8e42eb57ef_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x18008127C (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800876E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SearchAppExperienceManagerNotification::OnShown(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_QWORD *)(a1 + 40) )
  {
    v2 = (__int64 *)Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(&v6);
    v3 = *v2;
    *v2 = 0LL;
    if ( v6 )
    {
      v6 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release();
    }
    v4 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&v5 = &v7;
    v7 = v4;
    *((_QWORD *)&v5 + 1) = &v8;
    v8 = v3;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_68949f556153738f7c1e1d8e42eb57ef_>(
      v4 + 48,
      &v5);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
