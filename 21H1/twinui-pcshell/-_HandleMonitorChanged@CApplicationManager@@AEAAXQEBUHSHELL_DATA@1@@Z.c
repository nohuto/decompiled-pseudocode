/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180038530
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180037490 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003D1E0 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18008255C (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013157C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180131A38 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r15
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  HWND v12; // rdi
  HWND v13; // rbx
  char v14; // al
  __int64 v15; // rcx
  int v16; // ebx
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **, __int64); // rbx
  __int64 v20; // [rsp+20h] [rbp-69h]
  __int64 v21; // [rsp+28h] [rbp-61h]
  struct IImmersiveMonitor *v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  struct ISyncIAMEventHandler *v24; // [rsp+50h] [rbp-39h] BYREF
  struct IObjectArray *v25; // [rsp+58h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v26; // [rsp+60h] [rbp-29h] BYREF
  __int64 v27; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v28[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v29; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+90h] [rbp+7h] BYREF
  int v32; // [rsp+98h] [rbp+Fh]
  __int64 v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]
  __int64 v35; // [rsp+F8h] [rbp+6Fh] BYREF
  struct IObjectArray *v36; // [rsp+100h] [rbp+77h] BYREF
  struct ISyncIAMEventHandler *v37; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)a2 + 1);
  v33 = v4;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v30[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v30[1] = v4;
    v7 = (unsigned int)v5[15].Ptr;
    v8 = 0LL;
    v34 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 3) = 1;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v10[2] = 0LL;
      if ( v10 + 2 != v30 )
      {
        v10[2] = Ptr;
        Ptr = 0LL;
      }
      v10[3] = v4;
      *v10 = off_1804678E8;
      v8 = v10;
    }
    v21 = 0LL;
    v20 = (__int64)v8;
    SHTaskPoolQueueTask(3LL, 2LL, v7);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == 1 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 1);
    v13 = v12;
    if ( *((_QWORD *)a2 + 5) )
      v13 = (HWND)*((_QWORD *)a2 + 5);
    v35 = 0LL;
    if ( GetShellWindow() != v13
      && !(unsigned int)GetPropW(v13, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v13 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *, __int64))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v13,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v35,
        v21);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, HWND, __int64))(**((_QWORD **)this + 67) + 32LL))(
            *((_QWORD *)this + 67),
            v12,
            v35);
    v15 = v35;
    if ( v14 && v35 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, v12, 2LL, v35);
      v15 = v35;
    }
    if ( v15 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else if ( v11 == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
    {
      v31 = *((_QWORD *)a2 + 1);
      v32 = 2;
      v23 = 0LL;
      v27 = 0LL;
      v16 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
              (int)this + 632,
              (unsigned int)&v31,
              (unsigned int)&v27,
              (unsigned int)&v29,
              v20);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( v16 >= 0 )
      {
        v17 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v29);
        if ( (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v23) >= 0 )
        {
          v22 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **, __int64))(**((_QWORD **)this + 70) + 88LL))(
                 *((_QWORD *)this + 70),
                 *((_QWORD *)a2 + 1),
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v22,
                 v21) >= 0 )
          {
            v28[0] = *((_DWORD *)this + 240);
            v28[1] = 0;
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *, _DWORD *, __int64))(*(_QWORD *)v23 + 456LL))(
              v23,
              v22,
              v28,
              4LL);
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 416LL))(v23) )
            {
              v37 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v37) >= 0 )
              {
                v36 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
                if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v22, &v36) >= 0 )
                  (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v37 + 24LL))(
                    v37,
                    v36,
                    (char *)this + 248,
                    0LL,
                    *((_DWORD *)a2 + 6),
                    2,
                    0xFFFF);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v36);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v37);
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v26 = 0LL;
    v18 = *((_QWORD *)this + 70);
    v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **, __int64))(*(_QWORD *)v18 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( v19(
           v18,
           *((_QWORD *)a2 + 1),
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v26,
           v21) >= 0 )
    {
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v26, &v25) >= 0 )
      {
        v24 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v24) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v24 + 24LL))(
            v24,
            v25,
            (char *)this + 248,
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  }
}
