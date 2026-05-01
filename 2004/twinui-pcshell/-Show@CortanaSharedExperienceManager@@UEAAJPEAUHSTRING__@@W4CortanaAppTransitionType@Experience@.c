/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1801BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x18004FBE8 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18005053C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800522DC (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180052400 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x180053824 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180053A38 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801B5BCC (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1801BC214 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x1801BC548 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1801BCB44 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rbx
  int v14; // eax
  CortanaSharedExperienceManager *v15; // rcx
  int v16; // eax
  HSTRING v17; // rbx
  unsigned __int16 *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v19; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v21; // rsi
  const unsigned __int16 *v22; // rdi
  WINBOOL v23; // edx
  int v24; // edi
  __int64 v25; // rdx
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v28; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v29; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v30; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 496) + 64LL))(*(_QWORD *)(a1 + 496), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 424);
  v9 = *v8;
  if ( !*(_BYTE *)(a1 + 537) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 504), a2);
    if ( v10 < 0 )
    {
      v11 = 426LL;
      goto LABEL_6;
    }
LABEL_9:
    v30 = 0LL;
    v12 = *(_QWORD *)(a1 + 424);
    v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)v12 + 8LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v14 = v13(v12, &v30);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      return (unsigned int)v10;
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v15, a2, v30, &string);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      WindowsDeleteString(string);
      goto LABEL_22;
    }
    length = 0;
    v17 = string;
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
    string = (HSTRING)StringRawBuffer;
    v28 = 0LL;
    WindowsDeleteString(0LL);
    v29 = 0LL;
    WindowsDeleteString(v28);
    CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                                 v19,
                                 StringRawBuffer,
                                 length,
                                 &v28,
                                 &v29);
    if ( CortanaEntryPointAndArgs < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)CortanaEntryPointAndArgs);
    v21 = WindowsGetStringRawBuffer(v29, 0LL);
    v22 = WindowsGetStringRawBuffer(v28, 0LL);
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v33,
      (__int64)"CortanaExperienceManager_ShowDocked");
    v33[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
      (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33,
      v22,
      v21);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
      (__int64)v33,
      (__int64 *)&string);
    v32 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v30,
                &v32) < 0 )
    {
      v24 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v30 + 80LL))(
              v30,
              *(_QWORD *)(a1 + 504),
              v17,
              0LL);
      if ( v24 < 0 )
      {
        v25 = 452LL;
        goto LABEL_18;
      }
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v32 + 80LL))(v32, v17, a3);
      if ( v24 < 0 )
      {
        v25 = 448LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33);
        WindowsDeleteString(v29);
        v29 = 0LL;
        WindowsDeleteString(v28);
        v28 = 0LL;
        WindowsDeleteString(v17);
        v10 = v24;
        goto LABEL_22;
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v33,
      v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33);
    WindowsDeleteString(v29);
    v29 = 0LL;
    WindowsDeleteString(v28);
    v28 = 0LL;
    WindowsDeleteString(v17);
    v10 = 0;
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 504));
  if ( v10 >= 0 )
    goto LABEL_9;
  v11 = 422LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
