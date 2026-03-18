/*
 * XREFs of _CmRaiseDeleteEvent @ 0x14071C2C0
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x14071A6F4 (_CmDeleteDeviceContainerWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x14071ABBC (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceWorker @ 0x14071B1A8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140971DDC (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x14097219C (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x140974CF0 (_CmDeleteDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405D9D18 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14071C318 (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[1] = 0LL;
  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v7, v6);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v9[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 3LL, v9);
  }
  return result;
}
