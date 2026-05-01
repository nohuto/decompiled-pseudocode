/*
 * XREFs of ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1801E4CC8
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801E4C0C (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x1801E3400 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 *     ??4?$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801E3824 (--4-$ComPtr@VISearchAppExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1801E5D50 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18042AABC (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  TwinUI::Lighting::AssistantLightManager *v11; // rbx
  _QWORD *v12; // rbx
  TwinUI::Lighting::AssistantLightManager *v13; // rsi
  __int64 (__fastcall *v14)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  void *v21; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  Microsoft::WRL::ComPtr<TwinUI::Cortana::ISearchAppExperienceManagerNotification>::operator=((__int64 *)(a1 + 80), a3);
  v7 = *a4;
  *a4 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a1 + 88,
    v7);
  v8 = wil::make_unique_nothrow<TwinUI::Lighting::AssistantLightWNFListener,>((__int64 *)&v21);
  v9 = *v8;
  *v8 = 0LL;
  v10 = *(_QWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v9;
  if ( v10 )
  {
    v11 = (TwinUI::Lighting::AssistantLightManager *)v10[1];
    v10[1] = 0LL;
    if ( v11 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v11);
      operator delete(v11, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v10, (const struct std::nothrow_t *)0x10);
  }
  v12 = v21;
  v21 = 0LL;
  if ( v12 )
  {
    v13 = (TwinUI::Lighting::AssistantLightManager *)v12[1];
    v12[1] = 0LL;
    if ( v13 )
    {
      TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(v13);
      operator delete(v13, (const struct std::nothrow_t *)0x70);
    }
    operator delete(v12, (const struct std::nothrow_t *)0x10);
  }
  *(_DWORD *)(a1 + 180) = 1134559232;
  *(_DWORD *)(a1 + 184) = 1143209984;
  v20 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v15 = v14(a2, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v20);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v20 + 24LL))(
            v20,
            26LL,
            a1 + 32,
            a1 + 216);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v20 + 24LL))(
              v20,
              1025LL,
              a1 + 32,
              a1 + 220);
      v16 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 104), a2);
        v15 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 88))(*(_QWORD *)(a1 + 88), a1 + 56, 0LL);
        v16 = v15;
        if ( v15 >= 0 )
        {
          v16 = 0;
          goto LABEL_19;
        }
        v17 = 336LL;
      }
      else
      {
        v17 = 330LL;
      }
    }
    else
    {
      v17 = 329LL;
    }
  }
  else
  {
    v17 = 328LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v15);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    a4,
    0LL);
  return v16;
}
