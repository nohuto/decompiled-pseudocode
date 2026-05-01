/*
 * XREFs of ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026455C
 * Callers:
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x180265548 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x180263E64 (--$swap_wil@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV-$com_p.c)
 *     ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180267514 (-reset@-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@w.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>(a1 + 1, a2 + 1);
    v5 = a1[2];
    a1[2] = a2[2];
    a2[2] = v5;
  }
  return a1;
}
