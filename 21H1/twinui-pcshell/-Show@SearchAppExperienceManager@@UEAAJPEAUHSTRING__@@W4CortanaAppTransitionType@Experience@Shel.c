/*
 * XREFs of ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004FC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x18004F1B8 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18004F374 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18004F684 (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18004FB0C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800518AC (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800519D0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180051E7C (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z @ 0x180052DF4 (-StartActivity@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180053008 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  SearchAppExperienceManager *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  HSTRING v13; // rbx
  unsigned __int16 *StringRawBuffer; // rdi
  SearchAppExperienceManager *v15; // rcx
  int CortanaEntryPointAndArgs; // eax
  const unsigned __int16 *v17; // rsi
  const unsigned __int16 *v18; // rdi
  int v19; // eax
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+20h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v24; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v25; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 length; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v27[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 504) + 64LL))(*(_QWORD *)(a1 + 504), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  SearchAppExperienceManager::_CancelDeferredSuspensionTimer((SearchAppExperienceManager *)a1);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 424) + 72LL))(
         *(_QWORD *)(a1 + 424),
         *(_QWORD *)(a1 + 512),
         1LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v21);
    return v9;
  }
  else
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(v10, a2, &string);
    v12 = v11;
    v13 = string;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A0,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v11,
        v21);
    }
    else
    {
      length = 0;
      StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
      string = (HSTRING)StringRawBuffer;
      v24 = 0LL;
      WindowsDeleteString(0LL);
      v25 = 0LL;
      WindowsDeleteString(v24);
      CortanaEntryPointAndArgs = SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
                                   v15,
                                   StringRawBuffer,
                                   length,
                                   &v24,
                                   &v25);
      if ( CortanaEntryPointAndArgs < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A7,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)CortanaEntryPointAndArgs,
          v22);
      v17 = WindowsGetStringRawBuffer(v25, 0LL);
      v18 = WindowsGetStringRawBuffer(v24, 0LL);
      wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v27);
      v27[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::`vftable';
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StartActivity(
        (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v27,
        v18,
        v17);
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        (__int64)v27,
        (__int64 *)&string);
      v19 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 432) + 80LL))(
              *(_QWORD *)(a1 + 432),
              v13,
              a3);
      v12 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AC,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v19,
          v22);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v27);
        WindowsDeleteString(v25);
        v25 = 0LL;
        WindowsDeleteString(v24);
        v24 = 0LL;
      }
      else
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked((CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v27);
        WindowsDeleteString(v25);
        v25 = 0LL;
        WindowsDeleteString(v24);
        v24 = 0LL;
        v12 = 0;
      }
    }
    WindowsDeleteString(v13);
    return v12;
  }
}
