/*
 * XREFs of ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAPEAVBamoStubImpl@23@1@Z @ 0x180197424
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180196BA0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x18019762C (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180196CEC (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        char a2,
        struct Microsoft::BamoImpl::BamoStubImpl **a3,
        struct Microsoft::BamoImpl::BamoStubImpl **a4)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v4; // rbx
  __int64 v7; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *v8; // rcx
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 7);
  *a4 = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *a3 = v4;
  *((_BYTE *)this + 49) = 1;
  while ( v4 )
  {
    v7 = *((_QWORD *)v4 + 3);
    v8 = 0LL;
    for ( i = *(struct Microsoft::BamoImpl::BamoStubImpl **)(v7 + 32);
          i;
          i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
    {
      if ( i == v4 )
      {
        v10 = *((_QWORD *)v4 + 6);
        if ( v8 )
          *((_QWORD *)v8 + 6) = v10;
        else
          *(_QWORD *)(v7 + 32) = v10;
        *((_QWORD *)v4 + 6) = 0LL;
        break;
      }
      v8 = i;
    }
    if ( !i )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        657LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
        (const char *)a4);
    Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v4, a2);
    *a4 = v4;
    v4 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)v4 + 7);
  }
}
