/*
 * XREFs of memset @ 0x1C00142C0
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00018D0 (McGenControlCallbackV2.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00020C4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002400 (wil_details_StagingConfig_Load.c)
 *     DeviceCreate @ 0x1C0002950 (DeviceCreate.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0004DB0 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C0005634 (USBType1BuildIsochUrbRequest.c)
 *     InitializeSideband @ 0x1C0008688 (InitializeSideband.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0009390 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C00096D8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E514 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0010C98 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0011674 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0011900 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0011B24 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0012024 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     _handle_error @ 0x1C0012C5C (_handle_error.c)
 *     RaiseException @ 0x1C0012EB0 (RaiseException.c)
 *     WppTraceCallback @ 0x1C0022010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C0023B88 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C00241B0 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0024BD0 (PinBuildDescriptors.c)
 *     TopologyProcessMixerUnit @ 0x1C0026360 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C002742C (TopologyBuildFilterTopology.c)
 *     BusApiBuildFunctionUnit @ 0x1C002AFD4 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C002B850 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002CA54 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002D74C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002DB60 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseMixerUnit @ 0x1C002F510 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C002F8E0 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030A90 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0030D10 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0031E98 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C0032020 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C0032978 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0033268 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C00339B0 (USBMidiOutAllocateRequest.c)
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
