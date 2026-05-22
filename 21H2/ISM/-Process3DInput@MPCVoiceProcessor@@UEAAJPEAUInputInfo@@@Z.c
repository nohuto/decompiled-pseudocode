/*
 * XREFs of ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18018A390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x18004002C (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800646D0 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007792C (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x180084DB8 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCVoiceProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  bool v5; // al
  MPCHolographicInputManager *Instance; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct MPCHolographicInputManager *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  struct IMPCTarget *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v15; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 10 )
  {
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **(_DWORD **)(this + 24),
      *(_DWORD *)(*(_QWORD *)(this + 24) + 4LL),
      *((_QWORD *)a2 + 2),
      0,
      0x20u);
    return 0LL;
  }
  else
  {
    if ( !MPCInputProviderBase::IsPrimary(this) )
      MPCInputProviderBase::SetRequestingPrimary((MPCInputProviderBase *)(this - 24));
    v5 = (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 7
      || (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 1;
    *(_BYTE *)(this + 4608) = v5;
    v15 = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
    v7 = MPCHolographicInputManager::Process3DInput(
           Instance,
           a2,
           (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
           &v15);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = MPCHolographicInputManager::GetInstance();
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 287) + 48LL))(*((_QWORD *)v9 + 287));
      v11 = v10;
      if ( v10 && *(_BYTE *)(this + 4516) )
        (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
      v12 = v15;
      if ( v15 )
      {
        *((_BYTE *)a2 + 2026) = 1;
        v13 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct InputInfo *, __int64))(*(_QWORD *)v12 + 24LL))(
                v12,
                a2,
                v11);
        if ( v13 != -2147417853 && v13 != -2147417828 && v13 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            85LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
      }
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>((__int64 *)&v15);
    return v8;
  }
}
