/*
 * XREFs of ACPIBuildMissingChildren @ 0x1C001726C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 * Callees:
 *     OSNotifyCreateProcessor @ 0x1C0015FCC (OSNotifyCreateProcessor.c)
 *     AMLIGetFirstChild @ 0x1C00163FC (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017300 (AMLIIterateSiblingsNext.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0018088 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1C001B15C (OSNotifyCreateDevice.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F710 (OSNotifyCreateThermalZone.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004C8B4 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall ACPIBuildMissingChildren(__int64 a1)
{
  volatile signed __int32 *i; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  int Device; // eax
  int v5; // edx

  if ( (*(_QWORD *)(a1 + 8) & 0x8000000000000LL) == 0 )
  {
    for ( i = AMLIGetFirstChild(*(_QWORD **)(a1 + 720)); ; i = (volatile signed __int32 *)AMLIIterateSiblingsNext(v2) )
    {
      v2 = (ULONG_PTR)i;
      if ( !i )
        return 0LL;
      v3 = *(_QWORD *)i;
      if ( !*(_QWORD *)(v3 + 104) )
      {
        switch ( *(_WORD *)(v3 + 66) )
        {
          case 6:
            Device = OSNotifyCreateDevice(v2);
            break;
          case 0xA:
            Device = OSNotifyCreateOperationRegion(v2);
            break;
          case 0xC:
            Device = OSNotifyCreateProcessor(v2, 0x20000000000uLL);
            break;
          case 0xD:
            Device = OSNotifyCreateThermalZone(v2, 0x20000000000LL);
            break;
          default:
            continue;
        }
        if ( Device < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v5) = 2;
          WPP_RECORDER_SF_DD(
            WPP_GLOBAL_Control->DeviceExtension,
            v5,
            22,
            24,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            Device,
            v2);
        }
      }
    }
  }
  return 0LL;
}
