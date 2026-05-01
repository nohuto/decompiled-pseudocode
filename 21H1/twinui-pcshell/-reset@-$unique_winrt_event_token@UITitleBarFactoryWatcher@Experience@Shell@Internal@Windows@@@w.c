/*
 * XREFs of ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180267514
 * Callers:
 *     ??1TitleBarController@@EEAA@XZ @ 0x180264420 (--1TitleBarController@@EEAA@XZ.c)
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026455C (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x180265548 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)a1 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
      *(_QWORD *)(a1 + 8),
      &GUID_5b60b4ee_7d93_4b5b_a780_59cad821e93c,
      &v5);
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 16))(v5, *(_QWORD *)a1);
      if ( v2 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1960LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
          (const char *)(unsigned int)v2);
        __debugbreak();
      }
    }
    *(_QWORD *)a1 = 0LL;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 8));
    v3 = v5;
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
