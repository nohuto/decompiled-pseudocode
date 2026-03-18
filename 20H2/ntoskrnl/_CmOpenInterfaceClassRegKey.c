/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x1406E9468
 * Callers:
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     _PnpDispatchInterfaceClass @ 0x1406E94B0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406EBAA8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmCreateInterfaceClassWorker @ 0x140746474 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14097C210 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097E804 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x140640454 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 0x40u, 0, a5, a6, a7, a8);
}
