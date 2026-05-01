/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18002831C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18000D450 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180158C64 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000D2A0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18000DD8C (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180016774 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180017FA0 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800281E4 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180039B28 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18003F630 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180143AE8 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801458E4 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveApplicationInternal **),
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  int v6; // r13d
  int v7; // edi
  unsigned int v8; // r14d
  RTL_SRWLOCK *v9; // rcx
  char v10; // r12
  int First; // ebx
  struct IImmersiveApplicationInternal *v12; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveApplicationInternal *v14; // rcx
  struct IImmersiveApplicationInternal *v15; // rbx
  unsigned __int64 v16; // rdi
  const unsigned __int16 *v17; // rax
  PSRWLOCK v18; // rax
  void (__fastcall *v19)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  struct IImmersiveApplicationInternal *v22; // [rsp+20h] [rbp-60h]
  const struct _GUID *v23; // [rsp+28h] [rbp-58h]
  struct IImmersiveApplicationInternal *v24; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  struct IImmersiveApplicationInternal *v27; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-18h]
  unsigned __int64 v30; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-8h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v32; // [rsp+C8h] [rbp+48h] BYREF
  struct IUnknown *v33; // [rsp+D0h] [rbp+50h]
  int v34; // [rsp+D8h] [rbp+58h] BYREF

  v33 = a3;
  string = 0LL;
  v5 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*a2)[7];
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2, &string) >= 0 )
  {
    v6 = -1;
    v25 = -1LL;
    ((void (__fastcall *)(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveApplicationInternal **), unsigned __int64 *))(*a2)[79])(
      a2,
      &v25);
    v7 = 0;
    v34 = 0;
    v8 = 0;
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v27 = 0LL;
      v19 = **a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v19(
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
        &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2,
        &v27);
      if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, const WCHAR *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))(*(_QWORD *)v27 + 88LL))(
             v27,
             L"LastSetGlomIdForReconstitution",
             &v32) >= 0 )
        v8 = (unsigned int)v32;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v9 = CApplicationManagerUtility::g_pIAMGlobals;
    }
    v24 = 0LL;
    v10 = 0;
    AcquireSRWLockExclusive(v9);
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v30 = v25;
      v31 = v8;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v30, &v24);
      LODWORD(v32) = First;
    }
    else
    {
      v27 = (struct IImmersiveApplicationInternal *)v25;
      v24 = 0LL;
      v32 = 0LL;
      First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                (_QWORD *)this + 79,
                &v27,
                (__int64 *)&v32,
                &v28,
                (__int64)v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      if ( First >= 0 )
      {
        v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79)
                                                                                                  + 8 * v28);
        First = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v24);
      }
      LODWORD(v32) = First;
    }
    if ( First >= 0 )
    {
      v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 408LL))(v24) == 0;
      First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v24, 1, 0LL, (__int64)v33);
      LODWORD(v32) = First;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First < 0 )
    {
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)&v30,
        (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v7 = v31;
      v34 = v31;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v8 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        v28 = v25;
        v29 = v8;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v28, &v24);
        LODWORD(v32) = First;
      }
      else
      {
        v12 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v28 = v25;
        v24 = 0LL;
        v32 = 0LL;
        First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                  (_QWORD *)this + 79,
                  &v28,
                  (__int64 *)&v32,
                  &v27,
                  (__int64)v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        if ( First >= 0 )
        {
          v21 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v27);
          First = (**v21)(v21, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v24);
        }
        LODWORD(v32) = First;
      }
      if ( First >= 0 )
      {
        v6 = 1;
        v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 408LL))(v24) == 0;
      }
      else if ( First == -2147319765 )
      {
        v27 = 0LL;
        First = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, GUID *, struct IImmersiveApplicationInternal **))(**((_QWORD **)this + 70) + 72LL))(
                  *((_QWORD *)this + 70),
                  0LL,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &v27);
        LODWORD(v32) = First;
        if ( First >= 0 )
        {
          if ( !v8 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v8 = 1;
            if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                        (CApplicationManager *)((char *)this + 624),
                        StringRawBuffer,
                        &v32,
                        0LL) >= 0 )
            {
              v8 = *((_DWORD *)v32 + 8);
              *((_DWORD *)v32 + 8) = v8 + 1;
            }
          }
          v14 = v24;
          if ( v24 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v14 + 16LL))(v14);
          }
          v15 = v27;
          v16 = v25;
          v17 = WindowsGetStringRawBuffer(string, 0LL);
          First = CApplicationManager::_CreateImmersiveApp(this, v17, v16, v8, v15, v23, (void **)&v24);
          LODWORD(v32) = First;
          if ( First >= 0 )
          {
            v6 = 0;
            v18 = CApplicationManagerUtility::g_pIAMGlobals;
            if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
            {
              CApplicationManager::UpdateMonitorForAppAsync(this, v24);
              v18 = CApplicationManagerUtility::g_pIAMGlobals;
            }
            v10 = BYTE4(v18[13].Ptr);
          }
          v7 = v34;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      }
      if ( First >= 0 )
      {
        First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v24, v6, 0LL, (__int64)v33);
        LODWORD(v32) = First;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v30 + 48LL))(v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      if ( First < 0 )
        goto LABEL_47;
    }
    if ( v10 )
    {
      First = CApplicationManager::HandleInitialPosition(
                (CApplicationManager *)((char *)this + 240),
                v24,
                v33,
                0LL,
                0LL);
      LODWORD(v32) = First;
    }
    if ( First < 0 || v7 < 0 )
    {
LABEL_47:
      v28 = (unsigned __int64)WindowsGetStringRawBuffer(string, 0LL);
      CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        &v28,
        &v25,
        &v32,
        &v34);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  if ( string )
    WindowsDeleteString(string);
}
