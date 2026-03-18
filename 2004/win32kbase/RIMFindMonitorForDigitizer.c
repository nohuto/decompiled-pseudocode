/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0166B60
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C000CA18 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C000CF30 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0167134 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        __int64 a4)
{
  unsigned int *v8; // rsi
  unsigned int v10[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v10 = 0LL;
  v8 = RIMGetQDCActivePathsData(v10);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2);
  return RIMFreeQDCActivePathsData((__int64)v8);
}
