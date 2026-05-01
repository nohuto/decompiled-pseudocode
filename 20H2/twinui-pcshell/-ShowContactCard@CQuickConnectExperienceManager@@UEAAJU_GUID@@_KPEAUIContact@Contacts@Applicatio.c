/*
 * XREFs of ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1801DEE90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800449C4 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139AC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801DA738 (--$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@-$ComPtr@UIContactCardOptions@Co.c)
 *     ??$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801DAF58 (--$ExperienceManager_ShowContactCard_Guid@AEAU_GUID@@@ExperienceManager_ShowContactCard@QuickCon.c)
 *     ??$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1801DB010 (--$ExperienceManager_ShowContactCard_Normalized@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCa.c)
 *     ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x1801DB0E0 (--$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@.c)
 *     ??$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXAEAM000@Z @ 0x1801DB218 (--$ExperienceManager_ShowContactCard_Scaled@AEAMAEAMAEAMAEAM@ExperienceManager_ShowContactCard@Q.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801DBB98 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801DBB98.c)
 *     ??1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ @ 0x1801DC060 (--1ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1801DC930 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1801DD2B0 (-ExperienceManager_ShowContactCard_Showing@ExperienceManager_ShowContactCard@QuickConnectTelemet.c)
 *     ?ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1801DD334 (-ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists@ExperienceManage.c)
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1801DF864 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DF9BC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::ShowContactCard(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        struct Windows::ApplicationModel::Contacts::IContactCardOptions *a7,
        float a8,
        char a9)
{
  __int64 v13; // rax
  unsigned int LastErrorFailHr; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  float *v18; // r14
  _QWORD *v19; // rsi
  CQuickConnectExperienceManager *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  float *v26; // rsi
  float *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  wil::details *v30; // rcx
  __int64 v31; // r8
  const char *v32; // r9
  int v33; // eax
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT Point; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v42[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v42,
    (__int64)"ExperienceManager_ShowContactCard");
  v42[0] = &QuickConnectTelemetry::ExperienceManager_ShowContactCard::`vftable';
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::StartActivity((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v42);
  v13 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NULL.Data1 )
    v13 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v13 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 399LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v15);
    goto LABEL_40;
  }
  if ( !a3 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 400LL;
    goto LABEL_22;
  }
  if ( !a4 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 401LL;
    goto LABEL_22;
  }
  if ( !a7 )
  {
    LastErrorFailHr = -2147024809;
    v15 = 2147942487LL;
    v16 = 402LL;
    goto LABEL_22;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Guid<_GUID &>(
    (__int64)v42,
    (__int128 *)a2);
  v17 = *(_QWORD *)(a1 + 280) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 288) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v17 )
  {
    *(_OWORD *)(a1 + 280) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 272) = a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 304), a4);
    *(_BYTE *)(a1 + 340) = a9;
    v18 = (float *)(a1 + 320);
    *(_OWORD *)(a1 + 320) = *a5;
    *(_DWORD *)(a1 + 336) = a6;
    v19 = (_QWORD *)(a1 + 312);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 312));
    v21 = CQuickConnectExperienceManager::CopyContactCardOptions(
            v20,
            a7,
            (struct Windows::ApplicationModel::Contacts::IContactCardOptions **)(a1 + 312));
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 427LL;
LABEL_21:
      v15 = (unsigned int)v21;
      goto LABEL_22;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 48LL))(*v19, &v40);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 430LL;
      goto LABEL_21;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v19 + 64LL))(*v19, &v39);
    LastErrorFailHr = v21;
    if ( v21 < 0 )
    {
      v16 = 433LL;
      goto LABEL_21;
    }
    v37 = 0;
    v41 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 312),
                &v41) >= 0 )
    {
      v36 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v36);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 443LL;
        goto LABEL_28;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 56LL))(v36, &v37);
      LastErrorFailHr = v22;
      if ( v22 < 0 )
      {
        v23 = 444LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        v24 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_39;
      }
      v25 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    v26 = (float *)(a1 + 324);
    v35[0] = *(_BYTE *)(a1 + 340) != 0;
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>(
      (__int64)v42,
      v35,
      (int *)(a1 + 320),
      (int *)(a1 + 324),
      (int *)(a1 + 328),
      (int *)(a1 + 332),
      (int *)(a1 + 336),
      &v40,
      &v39,
      &v37);
    v27 = (float *)(a1 + 320);
    v28 = 4LL;
    do
    {
      *v27 = (float)(a8 / 96.0) * *v27;
      ++v27;
      --v28;
    }
    while ( v28 );
    QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Scaled<float &,float &,float &,float &>(
      (__int64)v42,
      (int *)(a1 + 320),
      (int *)(a1 + 324),
      (int *)(a1 + 328),
      (int *)(a1 + 332));
    Point.x = (int)*v18;
    Point.y = (int)*v26;
    if ( ClientToScreen(*(HWND *)(a1 + 272), &Point) )
    {
      *v18 = (float)Point.x;
      *v26 = (float)Point.y;
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Normalized<float &,float &,float &,float &>(
        (__int64)v42,
        (int *)(a1 + 320),
        (int *)(a1 + 324),
        (int *)(a1 + 328),
        (int *)(a1 + 332));
      QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Showing((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v42);
      v33 = CSingleViewShellExperience::Show(
              a1 + 48,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
      LastErrorFailHr = v33;
      if ( v33 >= 0 )
      {
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v42);
        LastErrorFailHr = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v33);
      }
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v30, v29, v31, v32);
    }
LABEL_39:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v41);
    goto LABEL_40;
  }
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_SkipShowNewContactCardDueToOldOneStillExists((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v42);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v42);
  LastErrorFailHr = 1;
LABEL_40:
  QuickConnectTelemetry::ExperienceManager_ShowContactCard::~ExperienceManager_ShowContactCard((QuickConnectTelemetry::ExperienceManager_ShowContactCard *)v42);
  return LastErrorFailHr;
}
