/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140671490
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x140371964 (DbgUnicodeStringToAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x140632D38 (EtwpBuildProcessEvent.c)
 *     ExpQueryModuleInformation @ 0x1406712D0 (ExpQueryModuleInformation.c)
 *     MmGetSystemRoutineAddress @ 0x1406AA800 (MmGetSystemRoutineAddress.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407539A4 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 *     CmpQueryEditionVersion @ 0x14079E270 (CmpQueryEditionVersion.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1407AD00C (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408C3568 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x140957220 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140957B70 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409DBD4C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x1409F2C18 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140A73158 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x140671610 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x140671830 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
