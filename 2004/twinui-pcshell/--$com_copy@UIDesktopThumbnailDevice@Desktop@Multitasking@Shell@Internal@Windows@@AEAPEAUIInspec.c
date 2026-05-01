/*
 * XREFs of ??$com_copy@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEAPEAUIInspectable@@@wil@@YA?AV?$com_ptr_t@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIInspectable@@@Z @ 0x1800AD660
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18033C460 (-AppViewDataSourceAdapter_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationVie.c)
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@44PEAUITabViewManager@@PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x18033C630 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4AppViewDataSourceScope@@PEAUIApplicationViewColle.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_copy<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice,IInspectable * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 )
  {
    v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*a2)(
           *a2,
           &GUID_1a799508_e9ca_48aa_b2f1_d6101190fb84,
           a1);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5495LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
