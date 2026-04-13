/*
 * XREFs of ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800A48F4
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A54F8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180050E3C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007E3F0 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer(
        __int64 a1,
        __int64 *a2,
        HSTRING a3)
{
  __int64 *v3; // rbx
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  wil::details::in1diag3 *v9; // rcx
  void (__fastcall ***v10)(__int64, GUID *, __int64 *); // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  void (__fastcall ***v13)(__int64, GUID *, __int64 *); // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  const char *StringRawBuffer; // rax
  void (__fastcall ***v19)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF
  HSTRING v22; // [rsp+50h] [rbp-48h]
  __int64 *v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]
  HSTRING_HEADER v25; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v24 = -2LL;
  v3 = a2;
  v23 = a2;
  v22 = a3;
  *a2 = 0LL;
  v19 = (void (__fastcall ***)(__int64, GUID *, __int64 *))L"Windows.Services.TargetedContent.TargetedContentContainer";
  v21 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, (const WCHAR **)&v19);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8, &v21);
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
      v19 = 0LL;
      v6 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v21);
      v9 = retaddr;
      if ( v6 >= 0 )
      {
        v10 = v19;
        v20 = 0LL;
        v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
                v19,
                v7,
                v8);
        if ( v11 >= 0 )
          v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), __int64 *))(*v10)[8])(
                  v10,
                  &v20);
        v12 = retaddr;
        if ( v11 >= 0 )
        {
          v13 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v13)[2])(v13);
          }
          v14 = v20;
          v15 = 0LL;
          v20 = 0LL;
          v16 = *v3;
          *v3 = v14;
          if ( v16 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            v15 = v20;
          }
          if ( v15 )
          {
            v20 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          return v3;
        }
LABEL_18:
        wil::details::in1diag3::Throw_Hr(
          v12,
          (void *)0x63A,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
          (const char *)(unsigned int)v11);
        JUMPOUT(0x1800A4AEFLL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v6);
    goto LABEL_18;
  }
  catch ( ... )
  {
    StringRawBuffer = (const char *)WindowsGetStringRawBuffer(v22, 0LL);
    wil::details::in1diag3::Log_CaughtExceptionMsg(
      retaddr,
      (void *)0x11F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      "Content ID: %ls",
      StringRawBuffer);
    return v23;
  }
  return v3;
}
