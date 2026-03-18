/*
 * XREFs of RtlCreateUnicodeString @ 0x140690CB0
 * Callers:
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14067A844 (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x14067B6D0 (EtwpRealtimeCreateLogfile.c)
 *     RtlConvertSidToUnicodeString @ 0x140690990 (RtlConvertSidToUnicodeString.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071A188 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgQueryDriverNode @ 0x140721F14 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     PiGetDefaultMessageString @ 0x1407562E4 (PiGetDefaultMessageString.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x14078B738 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x14078BC78 (_PnpCtxCreateNode.c)
 *     EtwpQueryRegistryCallback @ 0x140799CD0 (EtwpQueryRegistryCallback.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140873180 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A2E14 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B353C (PiDrvDbResolveNodeFilePaths.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140A55C40 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A58208 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
