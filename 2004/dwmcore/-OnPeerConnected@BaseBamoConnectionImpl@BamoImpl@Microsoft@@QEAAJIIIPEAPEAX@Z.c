/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800D27EC
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800D26C0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800D2AD0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800D2FEC (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r15
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  Microsoft::BamoImpl::BaseBamoPeerImpl *v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // r14d
  void (__fastcall *v17)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rdi
  __int64 v18; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v19; // rax
  unsigned int v20; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v21; // rax
  unsigned int v22; // edi
  unsigned int v24; // [rsp+20h] [rbp-20h]
  unsigned int v25; // [rsp+20h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  __int64 v27; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v29; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v29 = 0LL;
  *a5 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v26,
    this);
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 32LL))(
          this,
          &v27);
  v11 = v26;
  v12 = v10;
  if ( v26 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 128));
    *(_DWORD *)(v11 + 168) = GetCurrentThreadId();
  }
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4EF,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v24);
    __debugbreak();
  }
  v13 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v13, this, a2, a3, a4);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v26,
    this);
  v14 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          v13,
          &a5,
          &v29);
  v15 = v26;
  v16 = v14;
  if ( v26 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 128));
    *(_DWORD *)(v15 + 168) = GetCurrentThreadId();
  }
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F9,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v16,
      v25);
    __debugbreak();
  }
  if ( (_BYTE)a5 )
  {
    v17 = *(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v13 + 80LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2));
    v17(v13, v18);
    if ( v29 )
    {
      v19 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
      v20 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v19, v13);
      (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, v20);
    }
    *((_QWORD *)v13 + 7) = *((_QWORD *)this + 12);
    v21 = v13;
    *((_QWORD *)this + 12) = v13;
    v13 = 0LL;
    v22 = 0;
    *v5 = v21;
  }
  else
  {
    v22 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x502,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL,
      v25);
  }
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v29);
  if ( v13 )
    (**(void (__fastcall ***)(Microsoft::BamoImpl::BaseBamoPeerImpl *))v13)(v13);
  return v22;
}
