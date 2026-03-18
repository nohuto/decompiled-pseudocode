/*
 * XREFs of ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800D2FB4
 * Callers:
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800D2E70 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x1801689B4 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180180820 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180194F7C (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801950CC (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::AckReference(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  if ( !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 56LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 6),
      a3);
  }
}
