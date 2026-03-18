/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0164600
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C000CC40 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000E3A8 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164BD4 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165588 (rimFindMonitorForDigitizerWithQDCData.c)
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
