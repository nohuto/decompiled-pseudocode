/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x14061B5F0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14036EDE4 (DbgUnicodeStringToAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x1405D8FA8 (EtwpBuildProcessEvent.c)
 *     ExpQueryModuleInformation @ 0x14061B430 (ExpQueryModuleInformation.c)
 *     MmGetSystemRoutineAddress @ 0x1406FC3A0 (MmGetSystemRoutineAddress.c)
 *     AslStringUpcaseToMultiByteN @ 0x140743244 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 *     CmpQueryEditionVersion @ 0x14078F5D0 (CmpQueryEditionVersion.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14079990C (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408BC4E8 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409500C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140950A10 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D5CCC (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x1409ECC18 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140A6C5A8 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x14061B770 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x14061B930 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  SIZE_T v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int16 MaximumLength; // cx
  ULONG v10; // edx
  int v11; // edi
  char *StringRoutine; // rax
  ULONG v14; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v15; // [rsp+80h] [rbp+18h]
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v15 = AllocateDestinationString;
  BytesInMultiByteString = 0;
  v6 = 0;
  v14 = 0;
  RtlUnicodeToMultiByteSize(&v14, SourceString->Buffer, SourceString->Length);
  v7 = v14 + 1;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  v8 = v14;
  DestinationString->Length = v14;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v11 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v11 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v10);
      DestinationString->Buffer = 0LL;
    }
  }
  else
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    return v6;
  }
  return v11;
}
