/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x1406BEB28
 * Callers:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     _PnpDispatchInterfaceClass @ 0x1406BEB70 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1406C1168 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmCreateInterfaceClassWorker @ 0x140736FE4 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140976440 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140978A34 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1405DBB74 (_CmOpenCommonClassRegKey.c)
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
