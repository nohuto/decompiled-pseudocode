/*
 * XREFs of ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180180500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033720 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7338 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801803A0 (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801813EC (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019FBE4 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotkeyContextualProcessor::OnInput(
        HotKeyProcessor **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  GUID v7; // xmm6
  int v8; // ecx
  __int64 *v9; // rdi
  int v10; // eax
  int v11; // eax
  unsigned __int16 v12; // ax
  int v13; // eax
  int v14; // eax
  unsigned int v16; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-35h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID v20; // [rsp+68h] [rbp-19h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+78h] [rbp-9h] BYREF
  GUID v22; // [rsp+88h] [rbp+7h]
  char v23; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  *((_DWORD *)a4 + 2) = 4;
  if ( (*(_BYTE *)a2 & 4) != 0 )
  {
    *(_OWORD *)v21 = 0LL;
    v7 = GUID_NULL;
    v22 = GUID_NULL;
    v23 = 0;
    if ( *((_WORD *)a2 + 18) > 6u || (v8 = 118, !_bittest(&v8, *((unsigned __int16 *)a2 + 18))) )
    {
      if ( *((_WORD *)a2 + 18) != 231 )
      {
        v17 = 0;
        v16 = 0;
        v20 = GUID_NULL;
        v18 = 0LL;
        v9 = (__int64 *)((char *)a3 + 16);
        if ( *((_QWORD *)a3 + 2)
          && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a3 + 2,
                    &v18) >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v17);
          if ( v10 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              127LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\"
                       "hotkeycontextualprocessor.cpp",
              (const char *)(unsigned int)v10);
            __debugbreak();
          }
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v16);
          if ( v11 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              128LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\"
                       "hotkeycontextualprocessor.cpp",
              (const char *)(unsigned int)v11);
            __debugbreak();
          }
          v19[0] = *v9;
          Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v19);
          GetContainerGuidFromInputTarget(v19, &v20);
          v7 = v20;
        }
        v20 = v7;
        if ( (unsigned __int16)(*((_WORD *)a2 + 18) - 160) > 5u )
          v12 = *((_WORD *)a2 + 18);
        else
          v12 = (*((unsigned __int16 *)a2 + 18) - 160) / 2 + 16;
        v13 = HotKeyProcessor::DetectAndProcessHotKey(
                this[3],
                v12,
                *((_BYTE *)a2 + 70) & 1,
                *((_QWORD *)a2 + 42),
                v17,
                v16,
                &v20,
                (struct HotKeyDetectionResult *)v21);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            141LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\ho"
                     "tkeycontextualprocessor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        v20 = v7;
        v14 = VirtualHotKeyTracker::OnInput(this[4], a2, &v20, (const struct HotKeyDetectionResult *)v21);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            147LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\hotkey\\system\\lib\\ho"
                     "tkeycontextualprocessor.cpp",
            (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
        if ( v23 )
          *((_DWORD *)a4 + 2) = 3;
      }
    }
    if ( v21[1] )
      std::_Ref_count_base::_Decref(v21[1]);
  }
  return 0LL;
}
