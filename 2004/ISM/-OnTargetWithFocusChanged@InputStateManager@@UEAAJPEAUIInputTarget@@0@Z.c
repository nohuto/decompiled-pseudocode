/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180003D1C (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@AEBW4GameInputGamepadButtons@@@Z @ 0x18000BA20 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GameInputGamepadButtons@@GV-$_Uhash_compare@W4GameInputGa.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B624 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800371C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$_Insert_unverified@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4GameInputGamepadButtons@@GV?$_Uhash_compare@W4GameInputGamepadButtons@@U?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@1@@Z @ 0x1800381FC (--$_Insert_unverified@U-$pair@$$CBW4GameInputGamepadButtons@@G@std@@V-$_List_unchecked_iterator@.c)
 *     ??$emplace_front@AEBW4GameInputGamepadButtons@@AEAG@?$list@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@2@@std@@QEAAAEAU?$pair@$$CBW4GameInputGamepadButtons@@G@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x180038330 (--$emplace_front@AEBW4GameInputGamepadButtons@@AEAG@-$list@U-$pair@$$CBW4GameInputGamepadButtons.c)
 *     atexit @ 0x18003BF5C (atexit.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011DD18 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123740 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  __int16 v16; // bx
  _WORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  __int64 *v24; // r8
  __int64 *v25; // rax
  unsigned __int64 v26; // r10
  __int64 *v27; // rdx
  __int64 *v28; // rcx
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rcx
  __int64 v31; // r9
  __int64 *v32; // r8
  __int64 *v33; // rax
  unsigned __int64 v34; // r10
  __int64 *v35; // rdx
  __int64 *v36; // rcx
  _DWORD *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  _QWORD *i; // rdi
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // ebx
  __int64 v48; // rcx
  __int64 v50; // rcx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  ULONG v52; // [rsp+20h] [rbp-49h]
  WINBOOL fPending[2]; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL v54[2]; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v55; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v56; // [rsp+44h] [rbp-25h] BYREF
  LPVOID v57[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v58; // [rsp+58h] [rbp-11h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = *((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 8);
  if ( v6 == v7 )
  {
LABEL_7:
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 40LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
    v55 = 0;
    LOBYTE(v6) = 1;
    if ( a3 )
    {
      v58 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
             a3,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v58) >= 0 )
      {
        v56 = 0;
        v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v58 + 32LL))(v58, &v55);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xE5,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v14,
            v52);
          __debugbreak();
        }
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v58 + 48LL))(v58, &v56);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xE7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controlle"
                          "rnavigationmanager.cpp",
            (const char *)(unsigned int)v15,
            v52);
          goto LABEL_66;
        }
        LOBYTE(v6) = v56 != 0;
      }
      v12 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    if ( *(_BYTE *)(v13 + 228) != (_BYTE)v6 )
    {
      *(_BYTE *)(v13 + 228) = v6;
      fPending[0] = 8;
      if ( (_BYTE)v6 )
      {
        v16 = 196;
        LOWORD(v54[0]) = 196;
        std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::lower_bound(
          v12,
          (__int64 **)v57,
          (unsigned __int8 *)fPending);
        v17 = v57[0];
        if ( v57[0] != (LPVOID)qword_180208C08 )
        {
LABEL_17:
          v17[10] = v16;
          goto LABEL_18;
        }
      }
      else
      {
        v16 = 27;
        LOWORD(v54[0]) = 27;
        std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::lower_bound(
          v12,
          (__int64 **)v57,
          (unsigned __int8 *)fPending);
        v17 = v57[0];
        if ( v57[0] != (LPVOID)qword_180208C08 )
          goto LABEL_17;
      }
      std::list<std::pair<enum GameInputGamepadButtons const,unsigned short>>::emplace_front<enum GameInputGamepadButtons const &,unsigned short &>(
        &qword_180208C08,
        fPending,
        v54);
      std::_Hash<std::_Umap_traits<enum GameInputGamepadButtons,unsigned short,std::_Uhash_compare<enum GameInputGamepadButtons,std::hash<enum GameInputGamepadButtons>,std::equal_to<enum GameInputGamepadButtons>>,std::allocator<std::pair<enum GameInputGamepadButtons const,unsigned short>>,0>>::_Insert_unverified<std::pair<enum GameInputGamepadButtons const,unsigned short>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum GameInputGamepadButtons const,unsigned short>>>>>(
        v50,
        v57,
        *(_QWORD *)qword_180208C08 + 16LL);
    }
LABEL_18:
    v18 = *(_DWORD *)(v13 + 224);
    v19 = HIWORD(v18);
    v20 = v18 >> 8;
    if ( v18 != v55 )
    {
      v6 = 0xCBF29CE484222325uLL;
      v21 = 0x100000001B3LL;
      v22 = 16
          * ((0x100000001B3LL
            * (HIBYTE(*(_DWORD *)(v13 + 224)) ^ (0x100000001B3LL
                                               * (BYTE2(v18) ^ (0x100000001B3LL
                                                              * (BYTE1(v18) ^ (0x100000001B3LL
                                                                             * ((unsigned __int8)v18 ^ 0xCBF29CE484222325uLL)))))))) & *(_QWORD *)(v13 + 176));
      v23 = *(_QWORD *)(v13 + 152);
      v24 = *(__int64 **)(v22 + v23);
      v25 = v24;
      v26 = v22 + 8;
      v27 = *(__int64 **)(v13 + 136);
      while ( 1 )
      {
        if ( v24 == v27 )
          v28 = v27;
        else
LABEL_66:
          v28 = **(__int64 ***)(v26 + v23);
        if ( v25 == v28 )
          break;
        if ( *((_DWORD *)v25 + 4) == *(_DWORD *)(v13 + 224) )
          goto LABEL_24;
        v25 = (__int64 *)*v25;
      }
      v25 = v27;
LABEL_24:
      if ( v25 != v27 )
        *(_BYTE *)(v25[3] + 80) = 1;
      v29 = v55;
      *(_DWORD *)(v13 + 224) = v55;
      v30 = 16
          * ((v21
            * (*(unsigned __int8 *)(v13 + 227) ^ (v21
                                                * (*(unsigned __int8 *)(v13 + 226) ^ (v21
                                                                                    * (*(unsigned __int8 *)(v13 + 225) ^ (v21 * (v6 ^ v29)))))))) & *(_QWORD *)(v13 + 176));
      v31 = *(_QWORD *)(v13 + 152);
      v32 = *(__int64 **)(v30 + v31);
      v33 = v32;
      v34 = v30 + 8;
      v35 = *(__int64 **)(v13 + 136);
      while ( 1 )
      {
        v36 = v32 == v35 ? *(__int64 **)(v13 + 136) : **(__int64 ***)(v34 + v31);
        if ( v33 == v36 )
          break;
        if ( *((_DWORD *)v33 + 4) == *(_DWORD *)(v13 + 224) )
          goto LABEL_31;
        v33 = (__int64 *)*v33;
      }
      v33 = *(__int64 **)(v13 + 136);
LABEL_31:
      if ( v33 == v35 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
        {
          Context = qword_180208AD0;
          qword_180208AD0[0] = &RawInputProvidersContinuousTracing::`vftable';
          qword_180208AE8 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180208AD0, qword_180208AE8, 0LL);
          InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, qword_180208AD0);
        }
        v37 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v37 && *v37 > 1u )
        {
          v57[0] = 0LL;
          if ( InitOnceBeginInitialize(&`InputETW::Instance'::`2'::wrapper, 0, v54, v57) && v54[0] )
          {
            v57[0] = qword_180208AD0;
            qword_180208AD0[0] = &RawInputProvidersContinuousTracing::`vftable';
            qword_180208AE8 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180208AD0, qword_180208AE8, 0LL);
            InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, qword_180208AD0);
          }
          v38 = *((_QWORD *)v57[0] + 1);
          if ( *(_DWORD *)v38 > 5u
            && (*(_BYTE *)(v38 + 16) & 1) != 0
            && (*(_QWORD *)(v38 + 24) & 1LL) == *(_QWORD *)(v38 + 24) )
          {
            tlgWriteTransfer_EventWriteTransfer(v38, (int)&dword_1801CE034, 0, 0, 2u, &v60);
          }
        }
        v39 = *(_QWORD **)(v13 + 72);
        for ( i = (_QWORD *)*v39; i != v39; i = (_QWORD *)*i )
          ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v13 + 8) + 32LL))(v13 + 8, 0LL);
      }
      else
      {
        ControllerNavigationManager::SetCurrentStateWithClient(
          (ControllerNavigationManager *)v13,
          (struct BamoControllerNavigationClientProxy *)v33[3]);
      }
    }
    v55 = 0;
    v56 = 0;
    *((_DWORD *)this + 43) = -1;
    if ( !a2 )
      goto LABEL_50;
    *(_QWORD *)fPending = 0LL;
    v41 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *, __int64))a2)(
            a2,
            &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
            fPending,
            v20);
    if ( v41 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v41,
        v52);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    else
    {
      v42 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 32LL))(
              *(_QWORD *)fPending,
              &v55);
      if ( v42 >= 0 )
      {
        v43 = *(_QWORD *)fPending;
        if ( *(_QWORD *)fPending )
        {
          *(_QWORD *)fPending = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        }
LABEL_50:
        if ( a3 )
        {
          fPending[0] = 0;
          *(_QWORD *)v54 = 0LL;
          v44 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *, __int64))a3)(
                  a3,
                  &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
                  v54,
                  v20);
          if ( v44 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x278,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
              (const char *)(unsigned int)v44,
              v52);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v54);
          }
          else
          {
            v45 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v54 + 32LL))(*(_QWORD *)v54, &v56);
            if ( v45 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x27A,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
                (const char *)(unsigned int)v45,
                v52);
              Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v54);
            }
            else
            {
              v46 = (*(__int64 (__fastcall **)(_QWORD, WINBOOL *))(**(_QWORD **)v54 + 48LL))(*(_QWORD *)v54, fPending);
              if ( v46 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x27B,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
                  (const char *)(unsigned int)v46,
                  v52);
                Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v54);
              }
              else
              {
                v47 = fPending[0];
                if ( fPending[0] )
                {
                  ViewHierarchy = ISMStatics::GetViewHierarchy();
                  ViewHelper::GetWindowForViewId((__int64 *)v57, ViewHierarchy, v47);
                  if ( v57[0] )
                  {
                    *((_DWORD *)this + 43) = -1;
                    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v57);
                  }
                }
                v48 = *(_QWORD *)v54;
                if ( *(_QWORD *)v54 )
                {
                  *(_QWORD *)v54 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                }
              }
            }
          }
        }
        goto LABEL_57;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v42,
        v52);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
LABEL_57:
    CompositorNotifyForegroundChanged(v55, v56, v19, v20);
    return 0LL;
  }
  while ( 1 )
  {
    *(_QWORD *)fPending = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, WINBOOL *))(v6 + 8))(
           *(_QWORD *)(v6 + 8),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           fPending) >= 0 )
      break;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
LABEL_6:
    v6 += 16LL;
    if ( v6 == v7 )
      goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**(_QWORD **)fPending + 24LL))(
         *(_QWORD *)fPending,
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
    {
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v8,
    v52);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
  return v9;
}
