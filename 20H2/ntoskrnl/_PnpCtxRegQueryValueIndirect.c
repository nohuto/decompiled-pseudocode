/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x14066BC80
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x140640C4C (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406E8C50 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14075AF0C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14075B19C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 520);
  if ( !v2 )
    v2 = (__int64 (__fastcall *)(__int64, __int64))&PnpRegQueryValueIndirect;
  return v2(a1, a2);
}
