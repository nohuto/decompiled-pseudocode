/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18002A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180018400 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ??$As@UIDWMSupportedInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDWMSupportedInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800264BC (--$As@UIDWMSupportedInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x180029F28 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x18002A74C (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800355D8 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x1800366D0 (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7338 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(_QWORD *a1, unsigned int *a2, int a3, int a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 appended; // rax
  __int64 v11; // rbx
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 i; // r9
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  struct IInputTarget *v20; // r15
  int v21; // eax
  __int64 *v23; // r9
  __int64 v24; // r9
  unsigned int v25; // ebx
  unsigned int v26; // esi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // [rsp+20h] [rbp-49h]
  int v38; // [rsp+20h] [rbp-49h]
  unsigned __int8 v39[4]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v40[4]; // [rsp+54h] [rbp-15h] BYREF
  __int64 *v41; // [rsp+58h] [rbp-11h] BYREF
  struct IInputTarget *v42; // [rsp+60h] [rbp-9h] BYREF
  int v43; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v44; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v45; // [rsp+70h] [rbp+7h] BYREF
  struct IInputTarget *v46; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v47; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v48[3]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_DWORD *)v39 = *a2;
  *(_DWORD *)v40 = a2[1];
  std::_Fnv1a_append_bytes((__int64)a1, v40, 4uLL);
  appended = std::_Fnv1a_append_bytes(v8, v39, v9);
  v11 = a1[7];
  v13 = a1[5];
  v14 = 2 * (a1[10] & (appended ^ v12));
  for ( i = *(_QWORD *)(v11 + 8 * v14); ; i = *v23 )
  {
    v16 = *(_QWORD *)(v11 + 8 * v14) == v13 ? v13 : **(_QWORD **)(v11 + 8 * v14 + 8);
    if ( i == v16 )
      break;
    if ( (unsigned __int8)operator==(i + 16, a2) )
    {
      if ( (unsigned __int8)operator==(a2, v23 + 2) )
        v13 = v24;
      break;
    }
  }
  if ( v13 != a1[5] )
    return 0LL;
  v42 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  v48[0] = 0LL;
  v17 = DWMInputTarget::CreateHelper((int)a2, (__int64 *)v48, a3, a4, &v42);
  v18 = v17;
  if ( v17 >= 0 )
  {
    v47 = 0LL;
    v19 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDWMSupportedInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v42,
            &v47);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2DC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v19,
        v37);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*(a1 - 6) + 104LL))(a1 - 6, v47);
    v20 = v42;
    v21 = DWMInputRouter::InformTargetOfAttachedDevices((DWMInputRouter *)(a1 - 6), v42);
    v18 = v21;
    if ( v21 >= 0 )
    {
      v42 = 0LL;
      std::unordered_map<tagMsgRoutingInfo,IInputTarget *,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        a1 + 4,
        v48,
        a2);
      *(_QWORD *)(v48[0] + 56) = v20;
      if ( !a1[28] )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v47);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
        return 0LL;
      }
      v25 = *a2;
      v26 = a2[1];
      v43 = 0;
      v41 = 0LL;
      v27 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(a1 + 28, &v41);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FA,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v27,
          v37);
        __debugbreak();
      }
      v28 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v41 + 32))(v41, &v43);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v28,
          v37);
        __debugbreak();
      }
      if ( v25 == v43 )
      {
        *(_DWORD *)v40 = 0;
        *(_DWORD *)v39 = 0;
        v48[0] = 0LL;
        v45 = 0;
        v44 = 0;
        v29 = *v41;
        v46 = 0LL;
        v30 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int8 *))(v29 + 48))(v41, v40);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x30B,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v30,
            v37);
          __debugbreak();
        }
        v31 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int8 *))(*v41 + 56))(v41, v39);
        if ( v31 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x30D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v31,
            v37);
          __debugbreak();
        }
        v32 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *))(*v41 + 64))(v41, v48);
        if ( v32 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x30F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v32,
            v37);
          __debugbreak();
        }
        v33 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v41 + 72))(v41, &v45);
        if ( v33 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x311,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v33,
            v37);
          __debugbreak();
        }
        v34 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v41 + 80))(v41, &v44);
        if ( v34 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x313,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v34,
            v37);
          __debugbreak();
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
        v35 = DWMInputRouter::CreateAndRegisterTarget(
                (DWMInputRouter *)(a1 - 6),
                v25,
                v26,
                *(unsigned int *)v40,
                *(unsigned int *)v39,
                v48[0],
                v45,
                v44,
                &v46);
        v18 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x31D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v35,
            v38);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
          Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v41);
          goto LABEL_38;
        }
        v36 = (*(__int64 (__fastcall **)(_QWORD *, struct IInputTarget *))(*(a1 - 6) + 96LL))(a1 - 6, v46);
        if ( v36 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x320,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v36,
            v38);
          __debugbreak();
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v41);
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v21,
      v37);
LABEL_38:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v47);
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D9,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)v17,
    v37);
LABEL_39:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  return v18;
}
