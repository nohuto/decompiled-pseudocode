/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1406B0174
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x1406AAF78 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406B26CC (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x140722E94 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x140724F9C (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *))(a1 + 520);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
