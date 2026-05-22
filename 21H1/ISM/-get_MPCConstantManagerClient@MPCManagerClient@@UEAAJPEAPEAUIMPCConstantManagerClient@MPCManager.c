/*
 * XREFs of ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x18010C790
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180019220 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079738 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCConstantManagerClient@@@12@$$QEAPEAVMPCManagerClientConnection@@@Z @ 0x180106444 (--$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801076E8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010AAC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18010AAC0.c)
 */

__int64 __fastcall MPCManagerClient::get_MPCConstantManagerClient(
        MPCManagerClient *this,
        struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient **a2)
{
  MPCConstantManagerClient **v4; // rax
  const char *v5; // r9
  struct MPCManagerClientConnection *v6; // rdx
  __int64 v7; // rcx
  MPCConstantManagerClient *v8; // rcx
  _DWORD *v9; // rcx
  struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient *v10; // r8
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  _DWORD *v13; // rdx
  struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient *v14; // r8
  int CanCastTo; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCConstantManagerClient *v18; // [rsp+30h] [rbp+8h] BYREF
  struct MPCManagerClientConnection *v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_QWORD *)this + 213) )
  {
    v19 = (struct MPCManagerClientConnection *)*((_QWORD *)this + 200);
    v4 = Microsoft::WRL::Details::Make<MPCConstantManagerClient,MPCManagerClientConnection *>(&v18, &v19);
    v6 = 0LL;
    if ( &v19 != v4 )
    {
      v6 = *v4;
      *v4 = 0LL;
    }
    v7 = *((_QWORD *)this + 213);
    *((_QWORD *)this + 213) = v6;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(v7);
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release((__int64)v8);
    }
    if ( !*((_QWORD *)this + 213) )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        280LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
        v5);
      __debugbreak();
    }
  }
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_4e663a2d_1db5_4a2f_98d7_4ba9bf42d201, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a2 = v10;
    (*(void (__fastcall **)(struct Windows::Internal::Input::MPCManager::IMPCConstantManagerClient *))(*(_QWORD *)v10 + 8LL))(v10);
    return 0;
  }
  if ( InlineIsEqualGUID(v11, v12) )
  {
    *a2 = v14;
    CanCastTo = 0;
LABEL_15:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>::CanCastTo(
                (__int64)v14 + 8,
                v13);
  if ( CanCastTo >= 0 )
    goto LABEL_15;
  return (unsigned int)CanCastTo;
}
