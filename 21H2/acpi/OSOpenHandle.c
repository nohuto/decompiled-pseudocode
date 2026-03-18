/*
 * XREFs of OSOpenHandle @ 0x1C008EB74
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008E978 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0096764 (ACPIThermalGetOverrideHandle.c)
 *     ACPIInitGlobalHeapSize @ 0x1C00967F4 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B70 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2238 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00B254C (OSOpenNextSubkey.c)
 *     AcpiDiagInitialize @ 0x1C00BB8FC (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BCB2C (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BD39C (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     OSOpenUnicodeHandle @ 0x1C008EC0C (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v7; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xCu,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        v7,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
  }
  else
  {
    v5 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  return (unsigned int)v5;
}
