/*
 * XREFs of ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18019762C
 * Callers:
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180197750 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x180197000 (-InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerIm.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180197424 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
        char **this,
        __int64 a2,
        char *a3,
        char a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v7; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  const char *v11; // r9
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Microsoft::BamoImpl::BamoStubImpl *v18; // [rsp+40h] [rbp+8h] BYREF
  struct Microsoft::BamoImpl::BamoStubImpl *v19; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((Microsoft::BamoImpl::BaseBamoPeerImpl *)a3, 0, &v18, &v19);
  v7 = v18;
  if ( v18 )
  {
    do
    {
      v8 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v7 + 7);
      *((_QWORD *)v7 + 7) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)v7 + 8LL))(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
    (Microsoft::BamoImpl::BamoAsyncOperationCoordinator *)(a3 + 72),
    (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)a3);
  LOBYTE(v9) = a4;
  v10 = (*((__int64 (__fastcall **)(char **, char *, __int64))*this + 7))(this, a3, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1932LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v16);
  v12 = this[14];
  v13 = 0LL;
  while ( 1 )
  {
    if ( !v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2087LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v11);
    if ( v12 == a3 )
      break;
    v13 = v12;
    v12 = (char *)*((_QWORD *)v12 + 8);
  }
  v14 = (char *)*((_QWORD *)a3 + 8);
  if ( v13 )
    *((_QWORD *)v13 + 8) = v14;
  else
    this[14] = v14;
  *((_QWORD *)a3 + 8) = 0LL;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a3 + 8LL))(a3);
  return 0LL;
}
