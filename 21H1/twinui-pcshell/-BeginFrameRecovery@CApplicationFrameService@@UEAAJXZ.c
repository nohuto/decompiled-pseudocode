/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180150790
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180043F3C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18008381C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180130CE4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18014F9D8 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_18014F9D8.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x18014FBD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1801516A0 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180446578 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180448858 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804488CC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  int v2; // ebx
  CCriticalFailureHandler *v3; // rcx
  struct IApplicationFrameManager *v4; // rdi
  __int64 (__fastcall *v5)(struct IApplicationFrameManager *, __int64 *); // rbx
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, _QWORD, GUID *, struct IApplicationFrame **); // rsi
  unsigned __int16 **v11; // r8
  int ImmersiveAppIdFromWindow; // ebx
  void *v13; // r8
  __int64 v14; // rdx
  CApplicationFrameWrapper **v15; // rdx
  CApplicationFrameWrapper *v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  HWND v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 *v24; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v25; // [rsp+28h] [rbp-41h]
  CApplicationFrameWrapper *v26; // [rsp+30h] [rbp-39h] BYREF
  struct IApplicationFrame *v27; // [rsp+38h] [rbp-31h] BYREF
  struct IApplicationFrameManager *v28; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+48h] [rbp-21h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-19h] BYREF
  struct HWND__ v31[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+60h] [rbp-9h]
  __int64 v33; // [rsp+68h] [rbp-1h]
  struct IApplicationFrame *v34; // [rsp+70h] [rbp+7h] BYREF
  struct IApplicationFrameManager *v35; // [rsp+78h] [rbp+Fh] BYREF
  char *v36; // [rsp+80h] [rbp+17h] BYREF
  HWND v37[7]; // [rsp+88h] [rbp+1Fh] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v39; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int PropW; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v28);
    v2 = CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 0, (__int64 *)&v28);
    v38 = v2;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, &v38);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v2 = v38;
    }
    if ( v2 >= 0 )
      goto LABEL_9;
    if ( v2 != -2147024882 && v2 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        &v38,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x21Au,
        v24,
        v25);
      v2 = v38;
    }
    if ( v2 >= 0 )
    {
LABEL_9:
      v29 = 0LL;
      v4 = v28;
      v5 = *(__int64 (__fastcall **)(struct IApplicationFrameManager *, __int64 *))(*(_QWORD *)v28 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      v2 = v5(v4, &v29);
      v38 = v2;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v6, &v38);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v2 = v38;
      }
      if ( v2 >= 0 )
        goto LABEL_56;
      if ( v2 != -2147024882 && v2 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          &v38,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x22Au,
          v24,
          v25);
        v2 = v38;
      }
      if ( v2 >= 0 )
      {
LABEL_56:
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 24LL))(v29, &v39);
        v38 = v2;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v7, &v38);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v2 = v38;
        }
        if ( v2 >= 0 )
          goto LABEL_57;
        if ( v2 != -2147024882 && v2 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v7,
            &v38,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            0x22Eu,
            v24,
            v25);
          v2 = v38;
        }
        if ( v2 >= 0 )
        {
LABEL_57:
          v8 = 0;
          if ( v39 )
          {
            do
            {
              v27 = 0LL;
              v9 = v29;
              v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationFrame **))(*(_QWORD *)v29 + 32LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
              if ( v10(v9, v8, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee, &v27) >= 0 )
              {
                if ( (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v27 + 24LL))(v27, &hWnd) < 0 )
                  goto LABEL_47;
                *(_QWORD *)&v31[0].unused = 0LL;
                v32 = 0LL;
                v33 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v31);
                v32 = -1LL;
                v33 = -1LL;
                ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow((CallerIdentity *)hWnd, v31, v11);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  PropW = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                  v26 = 0LL;
                  v34 = v27;
                  v35 = v4;
                  v36 = (char *)this - 40;
                  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v26);
                  ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                               (volatile signed __int64 **)&v26,
                                               &v36,
                                               &v35,
                                               &v34,
                                               (const unsigned __int16 **)v31,
                                               &PropW);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                    if ( CApplicationFrameWrapper::IsManagedBy(v26, *((struct IApplicationFrameManager **)this + 17)) )
                    {
                      ImmersiveAppIdFromWindow = 0;
                      v14 = *((_QWORD *)this + 9);
                      if ( v14 != *((_QWORD *)this + 11)
                        || (ImmersiveAppIdFromWindow = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                                         (__int64)this + 64,
                                                         v14 + 1,
                                                         v13),
                            ImmersiveAppIdFromWindow >= 0) )
                      {
                        v15 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
                        if ( v15 )
                        {
                          *v15 = v26;
                          v16 = v26;
                          if ( v26 )
                          {
                            v17 = *((_QWORD *)v26 + 8);
                            while ( v17 >= 0 )
                            {
                              if ( (_DWORD)v17 != 0x7FFFFFFF )
                              {
                                v18 = v17;
                                v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 8, v17 + 1, v17);
                                if ( v18 != v17 )
                                  continue;
                              }
                              goto LABEL_40;
                            }
                            Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                              (Microsoft::WRL::Details *)(2 * v17 + 16),
                              (volatile int *)((unsigned __int64)v17 >> 63));
LABEL_40:
                            v4 = v28;
                          }
                        }
                      }
                    }
                    else
                    {
                      ImmersiveAppIdFromWindow = -2147024809;
                    }
                    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  }
                  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v26);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    v19 = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                    if ( v19 )
                    {
                      if ( !IsWindow(v19) )
                      {
                        v37[0] = hWnd;
                        Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                          v21,
                          v20,
                          v22,
                          v37);
                      }
                    }
                  }
                }
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v31);
                if ( ImmersiveAppIdFromWindow < 0 )
LABEL_47:
                  (*(void (__fastcall **)(struct IApplicationFrameManager *, struct IApplicationFrame *))(*(_QWORD *)v4 + 32LL))(
                    v4,
                    v27);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
              ++v8;
            }
            while ( v8 < v39 );
            v2 = v38;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      if ( v2 >= 0 )
        *((_BYTE *)this + 184) = 1;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v28);
  }
  return (unsigned int)v2;
}
