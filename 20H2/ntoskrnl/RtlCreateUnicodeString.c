/*
 * XREFs of RtlCreateUnicodeString @ 0x1406FDE90
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x140714A90 (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x140715AB0 (EtwpRealtimeCreateLogfile.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140721FEC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PiDevCfgQueryDriverNode @ 0x14073BDF8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     PiGetDefaultMessageString @ 0x140766E94 (PiGetDefaultMessageString.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     PiDevCfgResolveVariable @ 0x1407775C0 (PiDevCfgResolveVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     DrvDbCreateDatabaseNode @ 0x140799D48 (DrvDbCreateDatabaseNode.c)
 *     _PnpCtxCreateNode @ 0x14079A288 (_PnpCtxCreateNode.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1407AD3D0 (EtwpQueryRegistryCallback.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140879FC0 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A9C64 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408AA078 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408BA47C (PiDrvDbResolveNodeFilePaths.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     PipInitDeviceOverrideCache @ 0x140A5C040 (PipInitDeviceOverrideCache.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140A5E608 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
