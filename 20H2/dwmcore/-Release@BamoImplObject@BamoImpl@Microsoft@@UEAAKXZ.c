/*
 * XREFs of ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2930
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18002CA04 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2160 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D27D0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800D28E0 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D2920 (-Release@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x1801655D8 (--1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180165760 (--_EBamoPeer@dataprovider_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1801657B0 (--_GBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801663F0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ??_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z @ 0x18017E0B0 (--_GBamoDataProviderRegistrarPrincipal@@MEAAPEAXI@Z.c)
 *     ??_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18017E100 (--_GBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z @ 0x18017E1F0 (--_EDataProviderRegistrarPrincipal@@UEAAPEAXI@Z.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801823D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014C964 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoImplObject::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
      a4);
    __debugbreak();
  }
  if ( !v4 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoImplObject *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v4;
}
