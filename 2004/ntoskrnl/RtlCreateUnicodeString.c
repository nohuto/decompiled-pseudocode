/*
 * XREFs of RtlCreateUnicodeString @ 0x140642DF0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     EtwpCaptureString @ 0x140645208 (EtwpCaptureString.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406CA74C (EtwpRealtimeCreateLogfile.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C518 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgQueryDriverNode @ 0x14072D37C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     PiGetDefaultMessageString @ 0x140758254 (PiGetDefaultMessageString.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x14078DB48 (_PnpCtxCreateNode.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x14079E0A0 (EtwpQueryRegistryCallback.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140874470 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A4134 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A4548 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B485C (PiDrvDbResolveNodeFilePaths.c)
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A4B7EC (CmpOpenSystemDriverHiveContext.c)
 *     PipInitDeviceOverrideCache @ 0x140A4D0A4 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406F19D0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
