/*
 * XREFs of ?ActivateSubscription@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800A2548
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A32E8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007C1E0 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A4E74 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  HSTRING_HEADER *v1; // rax
  int ActivationFactory; // eax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  const WCHAR *v5; // rbx
  int v6; // eax
  const char *v7; // r9
  wil::details::in1diag3 *v8; // rcx
  const WCHAR *v9; // rcx
  __int64 v10; // rcx
  const WCHAR *v11; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v14; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13[1] = -2LL;
  v11 = L"Windows.Services.TargetedContent.TargetedContentSubscription";
  v13[0] = 0LL;
  v1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, &v11);
  ActivationFactory = RoGetActivationFactory(v1[1].Reserved.Reserved1, &GUID_faddfe80_360d_4916_b53c_7ea27090d02a, v13);
  try
  {
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x661,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v11 = 0LL;
      v3 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v13[0]);
      v4 = retaddr;
      if ( v3 >= 0 )
      {
        v5 = v11;
        v12 = 0LL;
        v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(v11);
        if ( v6 >= 0 )
          v6 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v12);
        v8 = retaddr;
        if ( v6 >= 0 )
        {
          v9 = v11;
          if ( v11 )
          {
            v11 = 0LL;
            (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v9 + 16LL))(v9);
          }
          v10 = v12;
          if ( v12 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( v13[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
          return;
        }
LABEL_15:
        wil::details::in1diag3::Throw_Hr(
          v8,
          (void *)0x63A,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
          (const char *)(unsigned int)v6);
        JUMPOUT(0x1800A26DBLL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x112,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      v7);
  }
}
