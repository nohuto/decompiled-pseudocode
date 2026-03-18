/*
 * XREFs of ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801970B4
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801978F0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180196BA0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Leave(Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v2; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *v3; // rbx
  struct Microsoft::BamoImpl::ConnectionIndirector *v4; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct Microsoft::BamoImpl::BamoStubImpl *v16; // [rsp+70h] [rbp+20h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v17; // [rsp+78h] [rbp+28h] BYREF
  struct Microsoft::BamoImpl::ConnectionIndirector *v18; // [rsp+80h] [rbp+30h] BYREF

  v14 = 0LL;
  *(_OWORD *)v13 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
    &v18,
    &v17,
    &v16);
  v2 = v16;
  if ( v16 )
  {
    do
    {
      v3 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v2 + 7);
      *((_QWORD *)v2 + 7) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)v2 + 8LL))(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = v17;
  if ( v17 )
  {
    do
    {
      v5 = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)v4 + 8);
      *((_QWORD *)v4 + 8) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v4 + 8LL))(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v18 + 16LL))(v18);
  v6 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  v11 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 218) = 1;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      894LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      (int)v13);
  if ( v13[0] )
    std::_Deallocate<16,0>((void *)v13[0], (v14 - v13[0]) & 0xFFFFFFFFFFFFFFF8uLL);
}
