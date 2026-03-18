/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140754B28
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406F7B3C (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14071A9B0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x14071AED4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14071BE68 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407438D0 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x140754744 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x1409713E4 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140971960 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1409743A0 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1409794AC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403F5020 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405E1D30 (_RegRtlOpenKeyTransacted.c)
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
