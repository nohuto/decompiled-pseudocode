/*
 * XREFs of IoctlToNVMe @ 0x1C0001B20
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 * Callees:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00013B0 (IoctlQueryProtocolInfoProcess.c)
 *     IoctlFirmwareProcess @ 0x1C0001738 (IoctlFirmwareProcess.c)
 *     SetPrpFromSrb @ 0x1C0001AE8 (SetPrpFromSrb.c)
 *     CompareId @ 0x1C0004640 (CompareId.c)
 *     DiagGeneric @ 0x1C000FF68 (DiagGeneric.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0011124 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00115A0 (IoctlDeleteReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0011A50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0011C08 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011E38 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x1C0011F9C (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0012024 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0012150 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0012304 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C00126B8 (IoctlStorageStreamsReleaseId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // ebp
  int v7; // ebp

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 0x1B0780:
      result = IoctlFirmwareProcess(a1, a2);
      break;
    case 0x1B0900:
      result = DiagGeneric(a1, a2);
      break;
    case 0x2D1400:
      v6 = v4 + 4;
      if ( (unsigned __int8)CompareId((unsigned int)"PROTOCOL", 8, (int)v4 + 4, 8, 0LL) )
      {
        result = IoctlQueryProtocolInfoProcess(a1, a2);
        break;
      }
      if ( (unsigned __int8)CompareId((unsigned int)"TEMPERAT", 8, v6, 8, 0LL) )
      {
        result = IoctlQueryTemperatureInfoProcess(a1, a2);
      }
      else if ( (unsigned __int8)CompareId((unsigned int)"QUEUEINF", 8, v6, 8, 0LL) )
      {
        result = IoctlQueryReservedQueueEntries(a1, a2);
      }
      else
      {
        if ( !(unsigned __int8)CompareId((unsigned int)"ENDURINF", 8, v6, 8, 0LL) )
        {
LABEL_16:
          *(_BYTE *)(a2 + 3) = 6;
          result = 3238002694LL;
          break;
        }
        result = IoctlQueryEnduranceInformation(a1, a2);
      }
      break;
    case 0x2D2828:
      result = IoctlStorageStreamsGetParameters(a1);
      break;
    case 0x2D282C:
      result = IoctlStorageStreamsGetOpenStreams(a1);
      break;
    case 0x2D2830:
      result = IoctlStorageStreamsReleaseId(a1, a2);
      break;
    case 0x2D940C:
      v7 = v4 + 4;
      if ( (unsigned __int8)CompareId((unsigned int)"SETPROTO", 8, (int)v4 + 4, 8, 0LL) )
      {
        result = IoctlSetProtocolInfoProcess(a1, a2);
      }
      else if ( (unsigned __int8)CompareId((unsigned int)"CREATEQU", 8, v7, 8, 0LL) )
      {
        result = IoctlCreateReservedQueuePair(a1);
      }
      else
      {
        if ( !(unsigned __int8)CompareId((unsigned int)"DELETEQU", 8, v7, 8, 0LL) )
          goto LABEL_16;
        result = IoctlDeleteReservedQueuePair(a1);
      }
      break;
    default:
      if ( *(_DWORD *)(v4 + 16) != 3002880
        || !(unsigned __int8)CompareId((unsigned int)"SETTEMPT", 8, (int)v4 + 4, 8, 0LL) )
      {
        goto LABEL_16;
      }
      result = IoctlSetTemperatureThresholdProcess(a1, a2);
      break;
  }
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = SetPrpFromSrb(a1);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}
