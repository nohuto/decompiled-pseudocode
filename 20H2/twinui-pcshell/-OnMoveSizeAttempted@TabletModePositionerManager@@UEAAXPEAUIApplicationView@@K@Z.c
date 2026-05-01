/*
 * XREFs of ?OnMoveSizeAttempted@TabletModePositionerManager@@UEAAXPEAUIApplicationView@@K@Z @ 0x1803F1F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TabletModePositionerManager::OnMoveSizeAttempted(
        TabletModePositionerManager *this,
        struct IApplicationView *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // eax
  HRESULT v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, &punk);
  if ( v5 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           punk,
           &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
           &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
           &ppvOut);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
        ppvOut,
        a2,
        `TabletModePositionerManager::MoveSizeTypeFromArrangementMessage'::`2'::MoveSizeMessageParamToMoveSizeTypeMap[v3]);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
}
