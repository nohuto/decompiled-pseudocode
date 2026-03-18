/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C000C7A0
 * Callers:
 *     NVMeHwInitialize @ 0x1C00097C0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0009880 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000CDD8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     GetInterruptMessageInformation @ 0x1C000A114 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C000A8D4 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C000AA18 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000AB9C (IoQueuesCreationAsync.c)
 *     IoQueuesInitialize @ 0x1C000B2E4 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B828 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000B934 (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000D548 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000D7C0 (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0016798 (NVMeBuildPollingConfiguration.c)
 *     NVMeSetArbitration @ 0x1C001A2B8 (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C001A678 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001A78C (NVMeSetIoQueueCount.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, char a2, char a3)
{
  int v6; // ecx

  if ( a2 )
  {
    if ( !(unsigned __int8)GetInterruptMessageInformation() )
    {
      v6 = 11;
LABEL_29:
      *(_DWORD *)(a1 + 28) = v6;
      goto LABEL_30;
    }
    NVMeBuildPollingConfiguration(a1);
  }
  NVMeSetIoQueueCount(a1);
  if ( !*(_WORD *)(a1 + 282) || !*(_WORD *)(a1 + 280) )
  {
    v6 = 12;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
  {
    NVMeSetInterruptCoalescing(a1);
    if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
      NVMeSetArbitration(a1);
  }
  if ( a2 )
  {
    if ( !(unsigned __int8)InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 280) = 0;
      v6 = 21;
      goto LABEL_29;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      v6 = 13;
      goto LABEL_29;
    }
    if ( !*(_BYTE *)(a1 + 16) && *(_WORD *)(a1 + 814) && !(unsigned __int8)IoReservedQueuesInitialize(a1) )
    {
      v6 = 17;
      goto LABEL_29;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( (*(_DWORD *)(a1 + 128) & 4) != 0 || a3 )
  {
    if ( !IoQueuesCreation(a1) )
    {
LABEL_30:
      StorPortNotification(4109LL, a1, 0LL);
      return 0;
    }
  }
  else if ( !IoQueuesCreationAsync((_DWORD *)a1) )
  {
    goto LABEL_30;
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3776) & 5) == 5 )
    NVMeInitStreams(a1);
  return 1;
}
