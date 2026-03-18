/*
 * XREFs of HalpAcpiPreSleep @ 0x140A5072C
 * Callers:
 *     HaliAcpiSleep @ 0x140390D20 (HaliAcpiSleep.c)
 * Callees:
 *     HalpPreserveNvsArea @ 0x140391764 (HalpPreserveNvsArea.c)
 *     KeSynchronizeTimeToQpc @ 0x1403917D0 (KeSynchronizeTimeToQpc.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x140391800 (HalpTimerGetSavedPerformanceCounter.c)
 *     HalpSetClockBeforeSleep @ 0x14039188C (HalpSetClockBeforeSleep.c)
 *     HalpTimerSavePerformanceCounter @ 0x14039190C (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140391998 (HalpTimerSwitchStallSource.c)
 *     HalpAcpiPmRegisterWrite @ 0x1403B2B00 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x1403B2F00 (HalpAcpiPmRegisterAvailable.c)
 *     HalpAcpiPmRegisterRead @ 0x1403B41A0 (HalpAcpiPmRegisterRead.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpSaveDmaControllerState @ 0x140A508C0 (HalpSaveDmaControllerState.c)
 */

void *__fastcall HalpAcpiPreSleep(int a1)
{
  __int16 v1; // bx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 SavedPerformanceCounter; // rax
  __int16 v6; // bx
  __int16 v7; // bx
  void *result; // rax
  __int16 v9; // [rsp+50h] [rbp+20h] BYREF
  __int16 v10; // [rsp+58h] [rbp+28h] BYREF

  v1 = a1;
  HalpSleepContext = a1;
  v9 = 0;
  v10 = 0;
  HalpTimerSwitchStallSource(1);
  HalpTimerSavePerformanceCounter();
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockBeforeSleep(v3, v2, v4);
  SavedPerformanceCounter = HalpTimerGetSavedPerformanceCounter();
  KeSynchronizeTimeToQpc((LARGE_INTEGER)SavedPerformanceCounter);
  HalpHiberInProgress = 1;
  if ( (v1 & 0x4000) != 0 )
    HalpSaveDmaControllerState();
  if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
  {
    HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v10, 2u, 0LL);
    v6 = v10;
    v9 = v10;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v10, 2u, 0LL);
      v6 = v10 | v9;
      v9 |= v10;
    }
    if ( (dword_140C4C090 & 0x40) == 0 )
    {
      if ( HIBYTE(HalpWakeupState) )
        v7 = v6 | 0x400;
      else
        v7 = v6 & 0xFBFF;
      v9 = v7;
    }
    HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v9, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140C4C078 >> 1, (__int64)&v9, 2u, 0LL);
    HalpAcpiPmRegisterRead(0, 0, (__int64)&v10, 2u, 0LL);
    v9 = v10;
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
    {
      HalpAcpiPmRegisterRead(3, 0, (__int64)&v10, 2u, 0LL);
      v9 |= v10;
    }
    HalpAcpiPmRegisterWrite(0, 0, (__int64)&v9, 2u, 0LL);
    if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)&v9, 2u, 0LL);
  }
  if ( (_BYTE)HalpWakeupState )
    (*(void (**)(void))(PmAcpiDispatchTable + 24))();
  else
    (*(void (__fastcall **)(_QWORD))(PmAcpiDispatchTable + 8))(0LL);
  result = HalpPreserveNvsArea();
  SystemPowerPhase = 2;
  return result;
}
