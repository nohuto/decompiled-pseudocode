/*
 * XREFs of ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x180180704
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyContextualProcessor@@@Z @ 0x1801372B4 (--$MakeAndInitialize@VHotkeyContextualProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801491D0 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x18017FF90 (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 *     ??$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKeyTracker@@@Z @ 0x18018005C (--$MakeAndInitialize@VVirtualHotKeyTracker@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualHotKe.c)
 *     ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x1801A2730 (--$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdap.c)
 */

__int64 __fastcall HotkeyContextualProcessor::RuntimeClassInitialize(HotkeyContextualProcessor *this)
{
  HotkeyContextualProcessor *v1; // rdi
  int v2; // eax
  int v3; // eax
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HotkeyContextualProcessor *v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,>((HotKeyProcessor **)v1 + 3);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      65LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v1 + 4);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<VirtualHotKeyTracker,VirtualHotKeyTracker,>((VirtualHotKeyTracker **)v1 + 4);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      66LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (_QWORD *)((char *)v1 + 40);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v1 + 5);
  if ( v1 )
    v1 = (HotkeyContextualProcessor *)((char *)v1 + 8);
  v15 = v1;
  if ( !v1 )
  {
    v7 = -2147024809;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapterCreate", 30LL, 87);
    goto LABEL_13;
  }
  v8 = Microsoft::WRL::Details::MakeAndInitialize<TextInputStateAdapter,ITextInputStateAdapter,ITextInputStateAdapterOwner * &>(
         v4,
         &v15);
  v7 = v8;
  if ( v8 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v10, v9, "TextInputStateAdapterCreate", 34LL, v8);
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      68LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)v7);
    __debugbreak();
  }
  LOBYTE(v11) = 1;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v4 + 328LL))(*v4, 31LL, v11);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      71LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\hotkeyco"
               "ntextualprocessor.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  return 0LL;
}
