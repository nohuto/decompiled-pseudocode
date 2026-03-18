/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1405E0970
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406BE310 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x1406C130C (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14074C32C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14074C5BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *); // rax

  v2 = *(__int64 (__fastcall **)(size_t, void *, __int64, unsigned int *, const wchar_t *, __int64, bool *))(a1 + 520);
  if ( !v2 )
    v2 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64))v2)(a1, a2);
}
