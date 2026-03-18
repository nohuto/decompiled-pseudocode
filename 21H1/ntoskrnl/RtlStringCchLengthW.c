/*
 * XREFs of RtlStringCchLengthW @ 0x1402DF438
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x140587764 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x140587A14 (RtlpNameprepAsciiRealWorker.c)
 *     PiUEventHandleRegistration @ 0x1406801D8 (PiUEventHandleRegistration.c)
 *     PnpConcatPWSTR @ 0x140680BB8 (PnpConcatPWSTR.c)
 *     PiUEventCopyEventData @ 0x140683588 (PiUEventCopyEventData.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140683E60 (PiUEventProcessBroadcastNotifications.c)
 *     PnpValidateMultiSz @ 0x14069F8C8 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     WmipMangleInstanceName @ 0x140740D38 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140743318 (AslStringDuplicate.c)
 *     PnpGetMultiSzLength @ 0x140754040 (PnpGetMultiSzLength.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1407928D0 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1407B05B4 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140884720 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AC170 (PiCMGenerateDeviceInstance.c)
 *     PopPlInitWString @ 0x1408F534C (PopPlInitWString.c)
 *     TtmNotifyDeviceArrival @ 0x1408F7550 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x14090E770 (RtlpValidAttribute.c)
 *     AslPathCombine @ 0x140963E1C (AslPathCombine.c)
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
