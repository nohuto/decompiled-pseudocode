/*
 * XREFs of ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800EFE74
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800EFE00 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F0024 (--1-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800F0054 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800F0500 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  int v10; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v11; // rbx
  __int64 (__fastcall *v12)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *); // rdi
  int v13; // eax
  void (__fastcall *v14)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64); // rdi
  __int64 v15; // rax
  Microsoft::BamoImpl::BamoPrincipalImpl *v16; // rax
  unsigned int v17; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v18; // rax
  unsigned int v19; // edi
  unsigned int v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]
  __int64 v23[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v25 = 0LL;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64 *))(*(_QWORD *)this + 40LL))(
          this,
          v23);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v21);
  v11 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23[0] + 8LL))(v23[0]);
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v11, this, a2, a3, a4);
  v12 = *(__int64 (__fastcall **)(Microsoft::BamoImpl::BaseBamoConnectionImpl *, Microsoft::BamoImpl::BaseBamoPeerImpl *, void ***, __int64 *))(*(_QWORD *)this + 48LL);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  v13 = v12(this, v11, &a5, &v25);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x728,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v13,
      v22);
  if ( (_BYTE)a5 )
  {
    v14 = *(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64))(*(_QWORD *)v11 + 88LL);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
    v14(v11, v15);
    if ( v25 )
    {
      v16 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
      v17 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v16, v11);
      (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, v17);
    }
    *((_QWORD *)v11 + 8) = *((_QWORD *)this + 14);
    v18 = v11;
    *((_QWORD *)this + 14) = v11;
    v11 = 0LL;
    v19 = 0;
    *v5 = v18;
  }
  else
  {
    v19 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x731,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)0x87B2080CLL);
  }
  wil::com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BamoPrincipal,wil::err_returncode_policy>(&v25);
  if ( v11 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BaseBamoPeerImpl *))(*(_QWORD *)v11 + 8LL))(v11);
  return v19;
}
