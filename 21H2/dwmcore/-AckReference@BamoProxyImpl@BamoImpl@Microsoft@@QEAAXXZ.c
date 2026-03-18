/*
 * XREFs of ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0
 * Callers:
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800F0270 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1800F0468 (-UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 *     ?SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180198054 (-SetBootstrapProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801BAF10 (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801DFDE8 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E00B8 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801E01B0 (-SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801E0264 (-SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z @ 0x1801E0318 (-SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z.c)
 *     ?SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z @ 0x1801E0398 (-SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z.c)
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801E0428 (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801E04C8 (-SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?Thunk_SetBooleanValue_13@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E05C0 (-Thunk_SetBooleanValue_13@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 *     ?Thunk_SetMatrix3x2Value_39@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E06A0 (-Thunk_SetMatrix3x2Value_39@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?Thunk_SetMatrix4x4Value_45@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E0730 (-Thunk_SetMatrix4x4Value_45@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801E0920 (-UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1801E0A8C (-UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::AckReference(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  if ( !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 6),
      a3);
  }
}
