/*
 * XREFs of ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180196E4C
 * Callers:
 *     ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x180196BA0 (-DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversatio.c)
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801BAB20 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 216) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2333LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      a4);
  *((_BYTE *)this + 216) = 0;
}
