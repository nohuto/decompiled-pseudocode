/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140763768
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406CAC2C (_CmGetDeviceSoftwareKey.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407289A0 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140728EC4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140729E58 (PiDqDeleteUserObject.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407524B0 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x140763384 (_RegRtlDeleteTreeInternal.c)
 *     _PnpCtxRegDeleteKey @ 0x1409771B4 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140977730 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14097A170 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097A79C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097F27C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwDeleteKey @ 0x1403F9BF0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x14066DAC0 (_RegRtlOpenKeyTransacted.c)
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
