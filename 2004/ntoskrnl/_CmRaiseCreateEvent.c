/*
 * XREFs of _CmRaiseCreateEvent @ 0x140736DC4
 * Callers:
 *     _CmCreateDeviceWorker @ 0x1407339E8 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140736CB0 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140736FE4 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x140743C18 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x140971774 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateDevicePanelWorker @ 0x1409746C4 (_CmCreateDevicePanelWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405D9D18 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x140736E28 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[1] = 0LL;
  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8, v10);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 512);
  if ( result )
  {
    v12[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v12);
  }
  return result;
}
