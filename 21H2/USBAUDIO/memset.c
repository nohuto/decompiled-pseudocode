/*
 * XREFs of memset @ 0x1C0013D80
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001970 (McGenControlCallbackV2.c)
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0002958 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002D88 (wil_details_StagingConfig_Load.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0005380 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0005C04 (USBType1BuildIsochUrbRequest.c)
 *     InitializeSideband @ 0x1C0008C58 (InitializeSideband.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E124 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001074C (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0011124 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C00113B0 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C00115D4 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0011AD4 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     _handle_error @ 0x1C001271C (_handle_error.c)
 *     RaiseException @ 0x1C0012970 (RaiseException.c)
 *     WppTraceCallback @ 0x1C0022010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C0023ED8 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C0024500 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0024F50 (PinBuildDescriptors.c)
 *     TopologyProcessFeatureUnit @ 0x1C0026180 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x1C00266E0 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C00277CC (TopologyBuildFilterTopology.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B504 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C002BFA0 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002D224 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DF1C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002E330 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0031E14 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0032094 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0033348 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C00334D0 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C0033E28 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0034718 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C0034E60 (USBMidiOutAllocateRequest.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
