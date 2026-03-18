/*
 * XREFs of RtlStringCchLengthW @ 0x140272AD8
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140587E94 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x140588144 (RtlpNameprepAsciiRealWorker.c)
 *     PnpValidateMultiSz @ 0x1405D0F68 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x1405DBA78 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140645A50 (PnpConcatPWSTR.c)
 *     PiUEventCopyEventData @ 0x140646EA8 (PiUEventCopyEventData.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140647870 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     PnpGetMultiSzLength @ 0x1407387D4 (PnpGetMultiSzLength.c)
 *     WmipMangleInstanceName @ 0x1407428B8 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140744E98 (AslStringDuplicate.c)
 *     SepParseElamCertResources @ 0x14078B6F8 (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     PpmRegisterProfiles @ 0x1407B3518 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407B3724 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140885A40 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408F663C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408F8840 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x14090FB10 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x1409651BC (AslPathCombine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    for ( i = cchMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( i )
        *pcchLength = cchMax - i;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
