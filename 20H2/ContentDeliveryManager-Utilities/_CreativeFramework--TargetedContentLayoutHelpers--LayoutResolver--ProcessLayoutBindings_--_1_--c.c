/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch$10 @ 0x1800D6DC2
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180006484 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ @ 0x180007650 (-Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ.c)
 *     ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ @ 0x18000766C (-Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800A3608 (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  HSTRING v4; // rdx
  __int64 (__fastcall *v5)(__int64, HSTRING); // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  int v8; // eax
  HSTRING_HEADER *v9; // rax
  CreativeFramework::TargetedContentLayoutHelpers::Settings *v10; // rax
  HSTRING v11; // rdx
  HSTRING v12; // r8
  HSTRING v13; // r9
  unsigned int v14; // eax
  int v15; // eax

  Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)(a2 + 72));
  v3 = *(_QWORD *)(a2 + 96);
  v4 = Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)(v3 + 8));
  v7 = v5(v6, v4);
  v8 = wil::verify_hresult<long>(v7);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 568),
      (void *)0x102,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (HSTRING_HEADER *)(a2 + 472),
         (const WCHAR **)&off_1800FA3F0);
  Microsoft::WRL::Wrappers::HStringReference::Get((Microsoft::WRL::Wrappers::HStringReference *)v9);
  v10 = (CreativeFramework::TargetedContentLayoutHelpers::Settings *)Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)(v3 + 8));
  v14 = CreativeFramework::TargetedContentLayoutHelpers::Settings::SetBoundedLayoutType(v10, v11, v12, v13);
  v15 = wil::verify_hresult<long>(v14);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 568),
      (void *)0x103,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15);
  throw;
}
