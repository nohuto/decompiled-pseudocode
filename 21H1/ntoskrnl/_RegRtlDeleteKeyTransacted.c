/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140750498
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406AEE88 (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140718620 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140718B44 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407193DC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140719AD8 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x140741D50 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x1407500B4 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x140970044 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409705C0 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140973000 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097362C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097810C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403F3D90 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x140617E68 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
