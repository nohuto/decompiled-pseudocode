/*
 * XREFs of HalpAcpiPostSleep @ 0x140996B2C
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     HalpAcpiPmRegisterWrite @ 0x14037C2B0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterAvailable @ 0x14037C570 (HalpAcpiPmRegisterAvailable.c)
 *     HalpRestoreNvsArea @ 0x140386A74 (HalpRestoreNvsArea.c)
 *     HalpTimerEnableHypervisorTimer @ 0x140386ADC (HalpTimerEnableHypervisorTimer.c)
 *     HalpTimerInitializeVpptClockTimer @ 0x140386B4C (HalpTimerInitializeVpptClockTimer.c)
 *     HalpTimerSwitchStallSource @ 0x140386DD0 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386E28 (HalpTimerRestorePerformanceCounter.c)
 *     HalpSetClockAfterSleep @ 0x140386ECC (HalpSetClockAfterSleep.c)
 *     HalpAcpiPmRegisterRead @ 0x140399790 (HalpAcpiPmRegisterRead.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpMapPhysicalMemory64 @ 0x1403EFFF0 (HalpMapPhysicalMemory64.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHvNotifyDebugDeviceAvailable @ 0x1404C2CB4 (HalpHvNotifyDebugDeviceAvailable.c)
 *     HalpRestoreDmaControllerState @ 0x140996CF0 (HalpRestoreDmaControllerState.c)
 *     HalpInterruptReinitialize @ 0x140996D78 (HalpInterruptReinitialize.c)
 *     HalpCheckFixedWakeSources @ 0x1409970B0 (HalpCheckFixedWakeSources.c)
 *     HalpPiix4Detect @ 0x14099B3E0 (HalpPiix4Detect.c)
 *     HalpResetSBF @ 0x14099C49C (HalpResetSBF.c)
 *     HalpSimpleCheck @ 0x1409A90EC (HalpSimpleCheck.c)
 */

char __fastcall HalpAcpiPostSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v4; // bx
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // ecx
  REGHANDLE v15; // rbx
  _WORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v17[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  unsigned int *v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  v16[0] = 0;
  v3 = a1;
  v17[0] = 0;
  if ( (HalpPlatformFlags & 1) != 0 )
  {
    HalpCheckFixedWakeSources();
    if ( (int)HalpAcpiPmRegisterAvailable(0) >= 0 )
    {
      HalpAcpiPmRegisterRead(0, (unsigned __int8)byte_140C4A078 >> 1, (__int64)v17, 2u, 0LL);
      v4 = v17[0];
      v16[0] = v17[0];
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
      {
        HalpAcpiPmRegisterRead(3, (unsigned __int8)byte_140C4A078 >> 1, (__int64)v17, 2u, 0LL);
        v4 = v17[0] | v16[0];
      }
      v16[0] = v4 & 0xFBFF;
      HalpAcpiPmRegisterWrite(0, (unsigned __int8)byte_140C4A078 >> 1, (__int64)v16, 2u, 0LL);
      if ( (int)HalpAcpiPmRegisterAvailable(3) >= 0 )
        HalpAcpiPmRegisterWrite(3, (unsigned __int8)byte_140C4A078 >> 1, (__int64)v16, 2u, 0LL);
    }
  }
  v19 = -1;
  v20 = 0;
  v18 = 0;
  if ( (HalpSleepContext & 0x20000) != 0 && !HalpResumeFromHibernate )
  {
    v8 = 0LL;
    v9 = (unsigned __int64)HalpLowStubPhysicalAddress >> 12;
    v10 = ((unsigned __int64)HalpLowStubPhysicalAddress >> 12) + 1;
    if ( ((unsigned __int16)HalpLowStubPhysicalAddress & 0xFFF) == 0 )
      v10 = (unsigned __int64)HalpLowStubPhysicalAddress >> 12;
    do
    {
      if ( !_bittest((const signed __int32 *)HalpLowMemoryMap.Buffer, v8)
        && !_bittest((const signed __int32 *)HalpLowMemoryMapStack.Buffer, v8)
        && v8 != v9
        && v8 != v10 )
      {
        v11 = HalpMapPhysicalMemory64(v8 << 12, 1LL, 0, 4LL);
        if ( v11 )
        {
          if ( (unsigned __int8)HalpSimpleCheck(v11, a2, a3, v11) != HalpPhysicalMemoryCheckSums[v8] )
          {
            v13 = v19;
            v14 = v20;
            if ( v8 < v19 )
              v13 = v8;
            v19 = v13;
            if ( v8 > v20 )
              v14 = v8;
            ++v18;
            v20 = v14;
          }
          HalpUnmapVirtualAddress(v12, 1LL, 0LL);
        }
      }
      ++v8;
    }
    while ( v8 < 0x100 );
  }
  if ( (HalpPlatformFlags & 4) != 0 )
    HalpSetClockAfterSleep(a1, a2, a3);
  HalpTimerRestorePerformanceCounter();
  HalpTimerSwitchStallSource(0);
  HIBYTE(HalpWakeupState) = 0;
  *(_DWORD *)HalpWakeVector = 0;
  HalpInterruptReinitialize(v3);
  if ( !HalpResumeFromHibernate )
  {
    ((void (__fastcall *)(_QWORD))off_140C007C0)(((v3 >> 8) & 0xF) + 1);
    if ( HalpHvCpuManager )
      HalpHvNotifyDebugDeviceAvailable();
  }
  if ( v18 )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      v15 = HalpDiagnosticEventHandle;
      if ( EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v18;
        v23 = 4LL;
        v22 = &v19;
        v25 = 4LL;
        v24 = &v20;
        EtwWrite(v15, &HAL_ETW_EVENT_FIRMWARE_SLEEP_CORRUPTION, 0LL, 3u, &UserData);
      }
    }
  }
  if ( (HalpSleepContext & 0x4000) != 0 )
  {
    if ( KdComPortInUse )
      KdInitialize(4LL, 0LL, 0LL, v5);
    HalpRestoreDmaControllerState();
  }
  HalpTimerInitializeVpptClockTimer();
  HalpTimerEnableHypervisorTimer();
  HalpPiix4Detect(0LL);
  if ( !HalpResumeFromHibernate )
    ((void (__fastcall *)(_QWORD))off_140C006C0[0])(((v3 >> 8) & 0xF) + 1);
  v6 = PmAcpiDispatchTable;
  LOBYTE(v6) = 1;
  (*(void (__fastcall **)(__int64))(PmAcpiDispatchTable + 8))(v6);
  HalpRestoreNvsArea();
  HalpResetSBF();
  return 1;
}
