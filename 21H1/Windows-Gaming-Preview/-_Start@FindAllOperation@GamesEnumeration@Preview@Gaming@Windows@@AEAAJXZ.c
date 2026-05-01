/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x180009DBC (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003BA8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000A934 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000F5AC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000F930 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800112FC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800118E8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x1800124F8 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001640C (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180016684 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003EA10 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003EC10 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        __int64 a2)
{
  int CallingProcessHandle; // eax
  void *v4; // rdx
  bool *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  int v20; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v21; // rcx
  int v22; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int8 *v29; // r8
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // rdx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v37; // rcx
  int v38; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v39; // rcx
  unsigned int v40; // r8d
  wil::details_abi *v41; // rcx
  __int64 v42; // rdx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v44; // rsi
  int v45; // r12d
  int GameConfigStoreClientIfNeeded; // eax
  int v47; // ebx
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  struct wil::ThreadErrorContext *v50; // r8
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v56; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v58; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h] BYREF
  char *v61; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  unsigned int v65; // [rsp+78h] [rbp-88h] BYREF
  char **v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+88h] [rbp-78h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h]
  unsigned int v70; // [rsp+A0h] [rbp-60h] BYREF
  char **v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+B0h] [rbp-50h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v73; // [rsp+B8h] [rbp-48h] BYREF
  struct wil::details_abi::ThreadLocalData *v74; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-38h]
  DiagnosticsInfo v76; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v78[2]; // [rsp+E0h] [rbp-20h] BYREF
  const char *v79; // [rsp+E8h] [rbp-18h]
  __int64 v80; // [rsp+F0h] [rbp-10h]
  __int16 v81; // [rsp+F8h] [rbp-8h]
  _BYTE v82[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v83[7]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v84; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = (unsigned int)CallingProcessHandle;
    v8 = 93LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v7);
    goto LABEL_91;
  }
  v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v4, &v58, v5);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 97LL;
    goto LABEL_7;
  }
  if ( !(_BYTE)v58 )
  {
    v6 = -2147024891;
    v7 = 2147942405LL;
    v8 = 98LL;
    goto LABEL_7;
  }
  v63 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 80LL))(*((_QWORD *)this + 14), &v63);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 102LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_89;
  }
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v63);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 103LL;
    goto LABEL_12;
  }
  v60 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 14) + 56LL))(
          *((_QWORD *)this + 14),
          3LL,
          0LL,
          &v60);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_87;
  }
  v59 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 56LL))(v60, &v59);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 109LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_85;
  }
  v69 = v59;
  v71 = &v61;
  v72 = 0;
  v73 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 56LL))(v59, &v70);
  *(_DWORD *)v71 = v15;
  if ( v15 >= 0 && v70 )
  {
    v16 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
            v69,
            0LL,
            &v73);
    *(_DWORD *)v71 = v17;
  }
  v18 = 0;
  v19 = v70;
  while ( *(int *)v71 >= 0 && v18 != v19 )
  {
    v20 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v73);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v20,
        v56);
    ++v18;
    if ( *(int *)v71 >= 0 && v18 < v70 )
    {
      v21 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
              v69,
              v18,
              &v73);
      *(_DWORD *)v71 = v22;
    }
  }
  v23 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      v56);
  v24 = *((_QWORD *)this + 14);
  v25 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, 0LL, 0LL, &v60);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 119LL;
    goto LABEL_44;
  }
  v26 = v60;
  v27 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v59);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 120LL;
    goto LABEL_44;
  }
  v64 = v59;
  v66 = &v61;
  v67 = 0;
  v68 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 56LL))(v59, &v65);
  *(_DWORD *)v66 = v28;
  if ( v28 >= 0 && v65 )
  {
    v30 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
            v64,
            0LL,
            &v68);
    *(_DWORD *)v66 = v31;
  }
  v32 = 0;
  v33 = v65;
  while ( *(int *)v66 >= 0 && v32 != v33 )
  {
    v62 = 0LL;
    v57 = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v68,
                         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)&v57,
                         v29);
    v35 = retaddr;
    if ( IsUserPinnedTile >= 0 )
    {
      if ( !v57 )
        goto LABEL_59;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v68);
      v35 = retaddr;
      if ( IsUserPinnedTile >= 0 )
        goto LABEL_59;
      v36 = 129LL;
    }
    else
    {
      v36 = 126LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v35,
      (void *)v36,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)IsUserPinnedTile,
      v56);
LABEL_59:
    ++v32;
    if ( *(int *)v66 >= 0 && v32 < v65 )
    {
      v37 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
              v64,
              v32,
              &v68);
      *(_DWORD *)v66 = v38;
    }
  }
  v39 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v39 + 16LL))(v39);
  }
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      v56);
  *(_QWORD *)v78 = retaddr;
  v79 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v80 = 0LL;
  v81 = 135;
  v40 = `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v62 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl,
                       v82);
    v40 = v62;
  }
  LODWORD(v62) = 0;
  BYTE4(v62) = 3;
  v76.cost = 0;
  LOWORD(v76.flags) = WORD2(v62);
  wil_details_FeatureReporting_ReportUsageToService(&unk_18005AEA0, 11973136LL, (v40 >> 8) & 1, (v40 >> 9) & 1);
  LOBYTE(v41) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v41, v42);
  v44 = ThreadLocalDataCache;
  v74 = ThreadLocalDataCache;
  v75 = 0LL;
  v45 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v75) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v75) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v75;
    v45 = HIDWORD(v75);
    v44 = v74;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 216);
  v47 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v48 = (unsigned int)GameConfigStoreClientIfNeeded;
    v49 = 137LL;
    goto LABEL_74;
  }
  v83[0] = off_180048D30;
  v83[1] = this;
  v84 = v83;
  v47 = DoWorkOnGameConfigStore(*((_QWORD *)this + 27), v83);
  if ( v84 )
  {
    v51 = v83;
    LOBYTE(v51) = v84 != v83;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v84 + 32LL))(v84, v51);
    v84 = 0LL;
  }
  if ( v47 >= 0 )
  {
    v47 = 0;
  }
  else
  {
    v48 = (unsigned int)v47;
    v49 = 145LL;
LABEL_74:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v48);
  }
  if ( v47 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v47,
      (wil::ThreadErrorContext *)&v74,
      v50,
      (unsigned int)v78,
      &v76);
  if ( v44 )
    *((_DWORD *)v44 + 4) = v45;
  v6 = 0;
LABEL_85:
  v52 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
LABEL_87:
  v53 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
LABEL_89:
  v54 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
LABEL_91:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
