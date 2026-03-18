/*
 * XREFs of OSWriteRegValue @ 0x1C00955FC
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002ED80 (ACPIRootPowerCallBack.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00958C8 (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0096C54 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00B4B20 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BC7D4 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 DataSizea; // [rsp+28h] [rbp-30h]
  ULONG DataSizeb; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v7 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      DataSizeb = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x1Cu,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        DataSizeb,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
  }
  else
  {
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    v8 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(DataSizea) = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x1Du,
        (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids,
        DataSizea,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  return v8;
}
