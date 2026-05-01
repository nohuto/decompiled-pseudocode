/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180335100
 * Callers:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z @ 0x180327EC8 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180327FD8 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180340018 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1803401A8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180340314 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180067DB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008BF18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801B6DB4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x180323CF8 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180341DD8 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v3; // ebx
  _WORD *v6; // rax
  char *v7; // rdx
  KeyboardHosting::TabTipAdapter *v8; // rdi
  _WORD *v9; // rax
  unsigned int v10; // r8d
  char *v11; // rax
  HSTRING Reserved1; // rbx
  unsigned int v13; // r8d
  void **v14; // rax
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  int v17[2]; // [rsp+20h] [rbp-89h] BYREF
  char v18[16]; // [rsp+28h] [rbp-81h] BYREF
  __m128i si128; // [rsp+38h] [rbp-71h]
  void *Src[4]; // [rsp+48h] [rbp-61h] BYREF
  HSTRING_HEADER v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h]
  HSTRING_HEADER v23; // [rsp+88h] [rbp-21h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-9h]
  _WORD v25[24]; // [rsp+B2h] [rbp+9h] BYREF
  _WORD v26[3]; // [rsp+E2h] [rbp+39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v3 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  std::wstring::wstring((__int64)Src, L"ViewVisibilityUpdated_");
  v6 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v25, a2);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_WORD *)v18 = 0;
  if ( v6 != v25 )
    std::wstring::assign(v18, v6, v25 - v6);
  v7 = v18;
  if ( si128.m128i_i64[1] >= 8uLL )
    v7 = *(char **)v18;
  std::wstring::append(Src, v7, si128.m128i_u64[0]);
  std::wstring::_Tidy_deallocate(v18);
  v8 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v26, v3);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *(_WORD *)v18 = 0;
  if ( v9 != v26 )
    std::wstring::assign(v18, v9, v26 - v9);
  v11 = v18;
  if ( si128.m128i_i64[1] >= 8uLL )
    v11 = *(char **)v18;
  *(_QWORD *)v17 = v11;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)v17, v10)[1].Reserved.Reserved1;
  v14 = Src;
  if ( Src[3] >= (void *)8 )
    v14 = (void **)Src[0];
  *(_QWORD *)v17 = v14;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)v17, v13);
  v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v8, (HSTRING)v15[1].Reserved.Reserved1, Reserved1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCB1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  v22 = 0LL;
  v24 = 0LL;
  std::wstring::_Tidy_deallocate(v18);
  std::wstring::_Tidy_deallocate(Src);
}
