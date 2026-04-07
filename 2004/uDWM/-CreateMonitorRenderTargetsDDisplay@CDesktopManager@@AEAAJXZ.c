/*
 * XREFs of ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x180085ED8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002DCF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029550 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002CC38 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002CCDC (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002CD30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003EF74 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800527B0 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180052A4C (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x180052E24 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800868B8 (-EnsureDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z @ 0x180087D2C (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargetsDDisplay(CDesktopManager *this)
{
  char v1; // di
  int v3; // eax
  int SourceHandleForTarget; // ebx
  int v5; // eax
  int AllDisplaysNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // r12d
  __int64 v9; // r13
  CDDisplayManager *v10; // rcx
  struct _LUID v11; // rdx
  CDWMDXGIEnumeration *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [rsp+60h] [rbp-49h]
  HANDLE hObject; // [rsp+80h] [rbp-29h] BYREF
  HANDLE v23; // [rsp+88h] [rbp-21h]
  void **p_hObject; // [rsp+90h] [rbp-19h]
  void *v25; // [rsp+98h] [rbp-11h] BYREF
  char v26; // [rsp+A0h] [rbp-9h]
  __int128 v27; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+C0h] [rbp+17h]
  struct CDWMDisplaySet *v30; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+120h] [rbp+77h] BYREF
  struct IDCompositionRenderTargetPartner *v32; // [rsp+128h] [rbp+7Fh] BYREF

  v30 = 0LL;
  v1 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v23 = 0LL;
  v3 = CDesktopManager::EnsureDDisplay(this);
  SourceHandleForTarget = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x54Bu);
    goto LABEL_39;
  }
  v5 = CDesktopManager::EnumerateMonitors(this, &v30);
  SourceHandleForTarget = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x54Du);
    goto LABEL_39;
  }
  if ( v30 )
    RaiseFailFastException(0LL, 0LL, 0);
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 21), (__int64)&v27);
  SourceHandleForTarget = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x556u);
    goto LABEL_39;
  }
  if ( v29 != 1 )
  {
    *((_DWORD *)this + 202) = 0;
    goto LABEL_39;
  }
  v7 = v27;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 8LL * v8);
    if ( !*(_QWORD *)(v9 + 8) )
      break;
LABEL_27:
    if ( ++v8 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 5) + 24LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL));
      SourceHandleForTarget = v19;
      if ( v19 >= 0 )
      {
        if ( v1 )
          CDesktopManager::UpdateMaxTextureSize(this);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x5A8u);
      }
      goto LABEL_39;
    }
  }
  v10 = (CDDisplayManager *)*((_QWORD *)this + 100);
  p_hObject = &hObject;
  hObject = 0LL;
  v25 = 0LL;
  v26 = 1;
  SourceHandleForTarget = CDDisplayManager::MakeSourceHandleForTarget(v10, &v25, &v31);
  if ( v26 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      p_hObject,
      v25);
  if ( SourceHandleForTarget >= 0 )
  {
    v11 = *(struct _LUID *)(v9 + 168);
    v12 = (CDWMDXGIEnumeration *)*((_QWORD *)this + 20);
    v32 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(v12, v11)
      || (v13 = *((_DWORD *)this + 44) - 2, LODWORD(v30) = 3, v13 <= 1) )
    {
      LODWORD(v30) = 2;
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
    LOBYTE(v21) = 1;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, HANDLE, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, _DWORD, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v14 + 528LL))(
            v14,
            *(_QWORD *)(*(_QWORD *)(v9 + 88) + 16LL),
            hObject,
            v31,
            *(_QWORD *)(v9 + 168),
            *(_DWORD *)(v9 + 176),
            *(_DWORD *)(v9 + 196),
            *(_DWORD *)(v9 + 212),
            v9 + 56,
            v9 + 40,
            *(_DWORD *)(v9 + 208),
            (_DWORD)v30,
            v21,
            &v32);
    v16 = FailFastIfAccessDenied(v15);
    SourceHandleForTarget = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x588u);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD))(*(_QWORD *)v32 + 24LL))(
              v32,
              *((_QWORD *)this + 9));
      SourceHandleForTarget = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x58Au);
      }
      else
      {
        if ( !(unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v9 + 88) + 16LL))
          || (v18 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v32 + 40LL))(v32),
              SourceHandleForTarget = v18,
              v18 >= 0) )
        {
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v9, v32);
          v1 = 1;
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          v7 = v27;
          goto LABEL_27;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x58Eu);
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v32);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SourceHandleForTarget, 0x56Cu);
LABEL_35:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
LABEL_39:
  if ( (char *)v23 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(v23);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v27);
  return (unsigned int)SourceHandleForTarget;
}
