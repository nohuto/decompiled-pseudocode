/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180220980
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1802201A0 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x18021D1C4 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18021E8FC (--0-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@M.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18021E970 (--0Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutIte.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18021F68C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWor.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180221154 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x180223FC0 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  void (__fastcall *v8)(LPVOID, __int64, __int64 *); // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int (__fastcall *v12)(__int64, HSTRING *); // r15
  HSTRING v13; // r14
  DWORD LastError; // edi
  HSTRING v15; // rcx
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  HSTRING *v18; // r8
  const unsigned __int16 *v19; // rax
  unsigned __int64 v20; // rdx
  HSTRING v22; // [rsp+30h] [rbp-89h] BYREF
  HSTRING v23; // [rsp+38h] [rbp-81h] BYREF
  HSTRING string; // [rsp+40h] [rbp-79h] BYREF
  __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-69h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+58h] [rbp-61h] BYREF
  struct _FILETIME v28; // [rsp+60h] [rbp-59h] BYREF
  __int64 v29; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-49h] BYREF
  __int64 v31[2]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v32; // [rsp+88h] [rbp-31h] BYREF
  int v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+98h] [rbp-21h] BYREF
  __int64 v35[2]; // [rsp+A0h] [rbp-19h] BYREF
  HSTRING_HEADER v36; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *a3 = 0;
  v22 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v28 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &CLSID_PenWorkspaceLayoutPolicyManager,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_26;
  }
  v25 = 0LL;
  v7 = ppv;
  v8 = *(void (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v8(v7, 1LL, &v25);
  if ( !v25 )
    goto LABEL_25;
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>(
    (__int64)&v32,
    v25);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v30,
    (__int64)&v32,
    0);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v34,
    (__int64)&v32,
    v33);
  while ( v30 != v34 || v31[1] != v35[1] )
  {
    v9 = v31[0];
    v29 = v31[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
    string = 0LL;
    v23 = 0LL;
    v10 = *(_QWORD *)v9;
    string = 0LL;
    if ( (*(int (__fastcall **)(__int64, HSTRING *))(v10 + 24))(v9, &string) < 0 )
    {
      v12 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 32LL);
      v13 = v23;
      if ( v23 )
      {
        LastError = GetLastError();
        WindowsDeleteString(v13);
        SetLastError(LastError);
      }
      v23 = 0LL;
      if ( v12(v9, &v23) >= 0 )
      {
        v15 = v23;
        if ( !v23 )
          goto LABEL_19;
        StringRawBuffer = WindowsGetStringRawBuffer(v23, 0LL);
        v22 = 0LL;
        WindowsDeleteString(0LL);
        v22 = 0LL;
        v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, &StringRawBuffer, v16);
        if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                    (HSTRING)v17[1].Reserved.Reserved1,
                    (HSTRING)&v22,
                    v18) >= 0 )
        {
          v19 = WindowsGetStringRawBuffer(v22, 0LL);
          if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v19, &v28) >= 0 )
          {
            PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer, v20);
            ++*a3;
          }
        }
        WindowsDeleteString(v22);
        v22 = 0LL;
      }
    }
    else
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v28) >= 0 )
      {
        PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer, v11);
        ++*a3;
      }
    }
    v15 = v23;
LABEL_19:
    if ( v15 )
      WindowsDeleteString(v15);
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    ++v30;
    details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::GetCurrentObject(&v30);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
LABEL_25:
  v6 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v6;
}
