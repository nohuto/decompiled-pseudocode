/*
 * XREFs of ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18017C040
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180061C50 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18018329C (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1801833B0 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 */

__int64 __fastcall CImmersiveApp::ForgetThisApp(__int64 a1, int a2, _BYTE *a3)
{
  bool v6; // zf
  struct IApplicationPresentationLayer *v7; // rdx
  CImmersiveApp::CloakType *v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 i; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-60h] BYREF
  int v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  int v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 j; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+70h] [rbp-10h]

  v19 = 0LL;
  v21 = 0LL;
  *a3 = 0;
  v6 = (*(_BYTE *)(a1 + 472) & 1) == 0;
  v18 = 12;
  v20 = 6;
  *(_BYTE *)(a1 + 624) = 1;
  if ( !v6 )
  {
    v7 = *(struct IApplicationPresentationLayer **)(a1 + 336);
    v8 = (CImmersiveApp::CloakType *)(a1 + 520);
    *(_DWORD *)v8 |= 1u;
    CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v8, v7);
    CImmersiveApp::_HideApplication(a1 - 112, 0LL);
    v9 = *(_QWORD *)(a1 + 360);
    for ( i = 0LL; i < v9; ++i )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 352) + 8 * i);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, 0LL);
    }
    *a3 = 1;
  }
  v12 = (_QWORD *)(a1 + 616);
  v13 = *(_QWORD *)(a1 + 616);
  if ( v13 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v17) >= 0 )
  {
    v14 = 0;
    v23 = 0LL;
    for ( j = 0LL; v14 < v17; ++v14 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v12 + 32LL))(*v12, v14, &v24) >= 0 )
      {
        if ( v26 != 5 )
          goto LABEL_15;
        v15 = v24 - *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1;
        if ( v24 == *(_QWORD *)&PKEY_AppUserModel_ID.fmtid.Data1 )
          v15 = v25 - *(_QWORD *)PKEY_AppUserModel_ID.fmtid.Data4;
        if ( v15 )
LABEL_15:
          (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *))(*(_QWORD *)*v12 + 48LL))(*v12, &v24, &j);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 616));
  }
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)&v18,
    (*a3 != 0) + 1LL);
  if ( a2 == 1 )
  {
    v25 = 0LL;
    LODWORD(v24) = 16;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)(a1 - 112),
      (const struct APP_CHANGE_INFO *const)&v24,
      1uLL);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 288LL))(*(_QWORD *)(a1 + 336));
}
