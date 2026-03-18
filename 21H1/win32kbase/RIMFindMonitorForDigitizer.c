/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C016CEB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C00A4A24 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C016D484 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C016DE38 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  unsigned int *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v11 = 0LL;
  v6 = a3;
  v8 = RIMGetQDCActivePathsData(v11, (__int64)a2, a3);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( v6 )
    RIMSetDeviceOutputConfig(a1, a2);
  RIMFreeQDCActivePathsData((__int64)v8, v9, v10);
}
