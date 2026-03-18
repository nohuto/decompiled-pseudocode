/*
 * XREFs of RtlStringCchLengthW @ 0x140240108
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x14058B7F4 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x14058BAA4 (RtlpNameprepAsciiRealWorker.c)
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x140647040 (PnpConcatPWSTR.c)
 *     PiUEventCopyEventData @ 0x140648498 (PiUEventCopyEventData.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140648E60 (PiUEventProcessBroadcastNotifications.c)
 *     PnpValidateMultiSz @ 0x1406F32CC (PnpValidateMultiSz.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     PnpGetMultiSzLength @ 0x1407476E4 (PnpGetMultiSzLength.c)
 *     WmipMangleInstanceName @ 0x140751498 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140753A78 (AslStringDuplicate.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407A19A8 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1407C1468 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407C1674 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408FC24C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408FE450 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140915650 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x14096AF8C (AslPathCombine.c)
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
