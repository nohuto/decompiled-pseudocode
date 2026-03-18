/*
 * XREFs of ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1801679E4
 * Callers:
 *     ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180167AB0 (-DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?FreeProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x180167BA0 (-FreeProxyAtShutdown@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180167F60 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x180167ECC (-OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::Disconnect(Microsoft::BamoImpl::BamoProxyImpl *this, char a2)
{
  __int64 v2; // rax
  Microsoft::Bamo::BamoProxy *v4; // rdi
  int v5; // eax
  void (__fastcall ***v6)(_QWORD); // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)this;
  *((_BYTE *)this + 29) = 1;
  v4 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (**)(void))(v2 + 48))();
  _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)v4 + 48LL))(v4)
                                                  + 8));
  if ( !a2 )
  {
    v5 = Microsoft::Bamo::BamoProxy::OnDisconnectedCallout(v4);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2DE,
        (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
  v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)v4 + 48LL))(v4);
  (**v6)(v6);
}
