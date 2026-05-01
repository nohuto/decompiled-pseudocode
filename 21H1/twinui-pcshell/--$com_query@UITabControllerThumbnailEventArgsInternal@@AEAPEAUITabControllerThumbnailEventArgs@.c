/*
 * XREFs of ??$com_query@UITabControllerThumbnailEventArgsInternal@@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITabControllerThumbnailEventArgsInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUITabControllerThumbnailEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18009D1C4
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180252A30 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<ITabControllerThumbnailEventArgsInternal,Windows::Internal::ComposableShell::Tabs::ITabControllerThumbnailEventArgs * &>(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_6362c4dc_07c8_46d1_9b9c_7448d55ab0c8, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
