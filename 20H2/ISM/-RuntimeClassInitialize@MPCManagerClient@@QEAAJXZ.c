/*
 * XREFs of ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x18010AC00
 * Callers:
 *     ??$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180106050 (--$MakeAndInitialize@VMPCManagerClient@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@$$.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033548 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18007B220 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180105984 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010A6F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_18010A6F0.c)
 *     ??0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z @ 0x18010C3E4 (--0MPCManagerClientPrincipal@@QEAA@PEAVMPCManagerClientConnection@@PEAVMPCManagerClient@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCManagerClient::RuntimeClassInitialize(MPCManagerClient *this)
{
  int v2; // eax
  __int64 v3; // r8
  const char *v4; // r9
  struct MPCManagerClientConnection **v5; // rdi
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  int v7; // eax
  MPCManagerClientPrincipal *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r10
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  int v15[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v17; // [rsp+40h] [rbp+8h] BYREF
  MPCManagerClientPrincipal *v18; // [rsp+48h] [rbp+10h]

  v17 = 0LL;
  v2 = CoreUICreate(&v17);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      26LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  if ( !v17 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v4);
    __debugbreak();
  }
  v5 = (struct MPCManagerClientConnection **)((char *)this + 1624);
  v6 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 203);
  *((_QWORD *)this + 203) = 0LL;
  if ( v6 )
    Microsoft::Bamo::BaseBamoConnection::Release(v6);
  v15[2] = 1;
  *(_QWORD *)v15 = 0LL;
  v7 = Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(
         v17,
         (__int128 *)v15,
         v3,
         (_QWORD *)this + 203);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v18 = (MPCManagerClientPrincipal *)operator new(0x40uLL);
  v8 = MPCManagerClientPrincipal::MPCManagerClientPrincipal(v18, *v5, this);
  v10 = *((_QWORD *)this + 202);
  *((_QWORD *)this + 202) = v8;
  if ( v8 )
    (**(void (__fastcall ***)(MPCManagerClientPrincipal *))v8)(v8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *((_QWORD *)*v5 + 24);
  *((_QWORD *)*v5 + 24) = this;
  v12 = *((_QWORD *)this + 6);
  while ( v12 >= 0 )
  {
    if ( (_DWORD)v12 != 0x7FFFFFFF )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v12 + 1, v12);
      if ( v13 != v12 )
        continue;
    }
    goto LABEL_16;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v12 + 16), v9);
LABEL_16:
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v11);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v17);
  return 0LL;
}
