/*
 * XREFs of HaliQuerySystemInformation @ 0x1409909D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetPlatformTimerInformation @ 0x14024E4C4 (HalpGetPlatformTimerInformation.c)
 *     HalpQueryNumaRangeTableInformation @ 0x1403CF00C (HalpQueryNumaRangeTableInformation.c)
 *     HalpGetDisplayBiosInformation @ 0x1403CFA50 (HalpGetDisplayBiosInformation.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403D05B0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpTimerQueryWatchdogType @ 0x1404B6CF0 (HalpTimerQueryWatchdogType.c)
 *     HalpDpQueryMaxHotPlugMemoryAddress @ 0x1404BDF58 (HalpDpQueryMaxHotPlugMemoryAddress.c)
 *     HalpHvQueryHyperlaunchEntrypoint @ 0x1404D22BC (HalpHvQueryHyperlaunchEntrypoint.c)
 *     HalpQueryHeterogeneousMemoryAttributesInterface @ 0x14061D0F4 (HalpQueryHeterogeneousMemoryAttributesInterface.c)
 *     HalpQueryPerDeviceMsiLimitInformation @ 0x14061D108 (HalpQueryPerDeviceMsiLimitInformation.c)
 *     xHalAllocatePmcCounterSet @ 0x140726340 (xHalAllocatePmcCounterSet.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140765644 (HalpQueryIommuReservedRegionInformation.c)
 *     HalpQueryProfileInformation @ 0x140773D88 (HalpQueryProfileInformation.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9994 (HalpInterruptGetIrtInfo.c)
 *     HalpGetProcessorBrandString @ 0x1407C8070 (HalpGetProcessorBrandString.c)
 *     HalpInterruptQueryControllerInfo @ 0x1407D1FCC (HalpInterruptQueryControllerInfo.c)
 *     HalpGetAcpiStaticNumaTopology @ 0x1407D428C (HalpGetAcpiStaticNumaTopology.c)
 *     HalpQuerySecondaryInterruptInformation @ 0x1407D45B0 (HalpQuerySecondaryInterruptInformation.c)
 *     HalpDmaGetRemappingInformation @ 0x1407D4C78 (HalpDmaGetRemappingInformation.c)
 *     HalpGetMcaLog @ 0x1408647D4 (HalpGetMcaLog.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1408664A0 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpAuditQueryResults @ 0x140866854 (HalpAuditQueryResults.c)
 *     HalpChannelPowerRequest @ 0x140866A88 (HalpChannelPowerRequest.c)
 *     HalpQueryDebuggerInformation @ 0x1409B64CC (HalpQueryDebuggerInformation.c)
 *     HalpQueryChannelTopologyInformation @ 0x140A8EA48 (HalpQueryChannelTopologyInformation.c)
 */

__int64 __fastcall HaliQuerySystemInformation(int a1, unsigned int a2, __int16 *a3, int *a4)
{
  int IommuReservedRegionInformation; // ebx
  unsigned int v9; // ecx
  __int64 (__fastcall ****v10)(); // rdx
  int PlatformTimerInformation; // eax
  int v12; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  bool v18; // cc
  int v19; // esi
  int v20; // esi
  int v21; // esi
  bool v22; // cf
  int AcpiWakeAlarmSystemPowerState; // eax
  int v24[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v24, 0, sizeof(v24));
  IommuReservedRegionInformation = 0;
  if ( a4 )
    *a4 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a1 > 30 )
  {
    if ( a1 <= 40 )
    {
      if ( a1 == 40 )
      {
        if ( a2 < 0x10 )
          return (unsigned int)-1073741820;
        IommuReservedRegionInformation = HalpQueryIommuReservedRegionInformation((__int64)a3, a2);
        if ( IommuReservedRegionInformation >= 0 )
          *a4 = 16;
        return (unsigned int)IommuReservedRegionInformation;
      }
      v15 = a1 - 31;
      if ( !v15 )
        return (unsigned int)HalpQueryChannelTopologyInformation(a3, a2, a4);
      v16 = v15 - 2;
      if ( !v16 )
        return (unsigned int)HalpQueryDebuggerInformation(a3, a2, a4);
      v17 = v16 - 1;
      if ( !v17 )
      {
        v10 = (__int64 (__fastcall ****)())HalpFwBootPerformanceTable;
        if ( !HalpFwBootPerformanceTable )
          return (unsigned int)-1073741822;
        v9 = *(_DWORD *)(HalpFwBootPerformanceTable + 4);
        v18 = v9 <= HalpFwBootPerformanceTableMaximumLength;
LABEL_32:
        if ( v18 )
        {
          if ( a2 >= v9 )
            goto LABEL_15;
          goto LABEL_34;
        }
        return (unsigned int)-1073741822;
      }
      v19 = v17 - 1;
      if ( !v19 )
      {
        v10 = (__int64 (__fastcall ****)())HalpFwS3PerformanceTable;
        if ( !HalpFwS3PerformanceTable )
          return (unsigned int)-1073741822;
        v9 = *(_DWORD *)(HalpFwS3PerformanceTable + 4);
        v18 = v9 <= HalpFwS3PerformanceTableMaximumLength;
        goto LABEL_32;
      }
      v20 = v19 - 1;
      if ( !v20 )
        return (unsigned int)HalpChannelPowerRequest(a3, a2, a4);
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 2 )
          goto LABEL_87;
        return (unsigned int)HalpInterruptQueryControllerInfo(a2, a3, a4);
      }
      v10 = &off_140003AC0;
      if ( a2 < 0x10 )
        v10 = 0LL;
      v9 = a2 < 0x10 ? 0 : 0x10;
      v22 = a2 < 0x10;
LABEL_64:
      IommuReservedRegionInformation = v22 ? 0xC0000004 : 0;
      goto LABEL_15;
    }
    switch ( a1 )
    {
      case '+':
        if ( (HalpPlatformFlags & 4) != 0 )
          return (unsigned int)-1073741637;
        if ( a2 < 4 )
        {
          IommuReservedRegionInformation = -1073741820;
          goto LABEL_15;
        }
        AcpiWakeAlarmSystemPowerState = HalpQueryAcpiWakeAlarmSystemPowerState((PLARGE_INTEGER)a3);
        break;
      case ',':
        return (unsigned int)HalpQueryProfileInformation();
      case '-':
        if ( a2 == 8 )
          *(_QWORD *)v24 = HalpHvQueryHyperlaunchEntrypoint();
        v10 = (__int64 (__fastcall ****)())v24;
        v9 = 8;
        if ( a2 != 8 )
        {
          v10 = 0LL;
          v9 = 0;
        }
        v22 = a2 != 8;
        goto LABEL_64;
      case '.':
        if ( a2 < 4 )
          return (unsigned int)-1073741820;
        AcpiWakeAlarmSystemPowerState = HalpTimerQueryWatchdogType(a3);
        break;
      case '/':
        return (unsigned int)HalpDmaGetRemappingInformation(a2, a4);
      case '1':
        if ( a2 != 8 )
          return (unsigned int)-1073741820;
        IommuReservedRegionInformation = HalpQueryHeterogeneousMemoryAttributesInterface(a3);
        if ( IommuReservedRegionInformation < 0 )
          return (unsigned int)IommuReservedRegionInformation;
LABEL_56:
        *a4 = 8;
        return (unsigned int)IommuReservedRegionInformation;
      case '2':
        if ( a2 < 2 )
          return (unsigned int)-1073741820;
        IommuReservedRegionInformation = HalpQueryPerDeviceMsiLimitInformation(a3);
        if ( IommuReservedRegionInformation >= 0 )
          *a4 = 2;
        return (unsigned int)IommuReservedRegionInformation;
      default:
        goto LABEL_87;
    }
    IommuReservedRegionInformation = AcpiWakeAlarmSystemPowerState;
    if ( AcpiWakeAlarmSystemPowerState >= 0 )
      *a4 = 4;
    return (unsigned int)IommuReservedRegionInformation;
  }
  if ( a1 == 30 )
    return (unsigned int)HalpQueryNumaRangeTableInformation(a3, a2, (unsigned int *)a4);
  if ( a1 > 17 )
  {
    if ( a1 != 20 )
    {
      if ( a1 != 23 )
      {
        switch ( a1 )
        {
          case 25:
            if ( a2 >= 0xC )
            {
              PlatformTimerInformation = HalpGetPlatformTimerInformation(v24);
LABEL_11:
              IommuReservedRegionInformation = PlatformTimerInformation;
LABEL_12:
              v10 = (__int64 (__fastcall ****)())v24;
              if ( a2 < 0xC )
                v10 = 0LL;
              v9 = a2 < 0xC ? 0 : 0xC;
              goto LABEL_15;
            }
            goto LABEL_106;
          case 26:
            if ( a2 < 8 )
              IommuReservedRegionInformation = -1073741820;
            else
              IommuReservedRegionInformation = HalpAuditQueryResults(v24);
            v10 = (__int64 (__fastcall ****)())v24;
            if ( a2 < 8 )
              v10 = 0LL;
            v9 = a2 < 8 ? 0 : 8;
LABEL_15:
            v12 = v9;
            if ( !v9 )
              return (unsigned int)IommuReservedRegionInformation;
            goto LABEL_16;
          case 27:
            if ( a2 >= 0xC )
            {
              PlatformTimerInformation = HalpInterruptGetIrtInfo(v24);
              goto LABEL_11;
            }
LABEL_106:
            IommuReservedRegionInformation = -1073741820;
            goto LABEL_12;
          case 28:
            if ( a2 < 0x38 )
              IommuReservedRegionInformation = -1073741820;
            else
              IommuReservedRegionInformation = HalpQuerySecondaryInterruptInformation((__int64)v24);
            v10 = (__int64 (__fastcall ****)())v24;
            if ( a2 < 0x38 )
              v10 = 0LL;
            v9 = a2 < 0x38 ? 0 : 0x38;
            goto LABEL_15;
          case 29:
            if ( a2 >= 0x18 )
            {
              IommuReservedRegionInformation = xKdEnumerateDebuggingDevices();
              if ( IommuReservedRegionInformation >= 0 )
                *a4 = 24;
              return (unsigned int)IommuReservedRegionInformation;
            }
            return (unsigned int)-1073741820;
        }
LABEL_87:
        IommuReservedRegionInformation = -1073741496;
        goto LABEL_15;
      }
      return (unsigned int)HalpGetProcessorBrandString(a2, (__int64)a3, (unsigned int *)a4);
    }
    return (unsigned int)HalpQueryProfileInformation();
  }
  switch ( a1 )
  {
    case 17:
      if ( a2 != 8 )
        return (unsigned int)-1073741820;
      *(_QWORD *)a3 = HalpDpQueryMaxHotPlugMemoryAddress();
      goto LABEL_56;
    case 1:
      return (unsigned int)HalpQueryProfileInformation();
    case 7:
      return (unsigned int)HalpGetMcaLog();
    case 8:
      return (unsigned int)-1073741496;
    case 9:
      v12 = 4;
      v24[0] = HalpGetDisplayBiosInformation();
      goto LABEL_16;
  }
  if ( a1 != 11 )
  {
    if ( a1 == 12 )
    {
      v24[0] = *(_DWORD *)a3;
      IommuReservedRegionInformation = xHalAllocatePmcCounterSet();
      goto LABEL_47;
    }
    if ( a1 != 13 )
    {
      if ( a1 != 16 )
        goto LABEL_87;
      v9 = 456;
      if ( a2 >= 0x1C8 )
      {
        v10 = (__int64 (__fastcall ****)())&BadIOAddrList;
LABEL_47:
        v12 = v9;
LABEL_16:
        if ( a2 >= v9 )
          a2 = v12;
        *a4 = a2;
        memmove(a3, v10, a2);
        return (unsigned int)IommuReservedRegionInformation;
      }
LABEL_34:
      *a4 = v9;
      return (unsigned int)-1073741820;
    }
    return (unsigned int)HalpGetMcaLog();
  }
  if ( a2 != 64 )
    return (unsigned int)-1073741820;
  IommuReservedRegionInformation = -1073741496;
  if ( HalpNumaConfig )
  {
    IommuReservedRegionInformation = HalpGetAcpiStaticNumaTopology();
    if ( IommuReservedRegionInformation >= 0 )
      *a4 = 64;
  }
  return (unsigned int)IommuReservedRegionInformation;
}
