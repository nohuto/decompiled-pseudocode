/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406B0430
 * Callers:
 *     DrvDbGetObjectDatabaseNode @ 0x1406ADEA0 (DrvDbGetObjectDatabaseNode.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     MiFindHotPatchRecord @ 0x140746494 (MiFindHotPatchRecord.c)
 *     PipAddBindingId @ 0x14079DFF8 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x14089953C (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     NtManageHotPatch @ 0x1408CA3F0 (NtManageHotPatch.c)
 *     EtwpCovSampModuleGetName @ 0x140940AFC (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409523F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x14095313C (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x1409531CC (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140953354 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140A66CA0 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x1402E6B10 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406D0920 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // di
  wchar_t *v6; // r14
  ULONG v7; // esi
  ULONG v8; // r13d
  NTSTATUS result; // eax
  unsigned __int16 v10; // bx
  wchar_t *StringRoutine; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v7 && Length == 0xFFFE )
    return -1073741562;
  if ( v7 )
    v10 = Length + 2;
  else
    v10 = Length;
  if ( !v8 && !Length )
    v10 = 0;
  if ( !v10 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v10);
  v6 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( v7 )
      v6[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v10;
    StringOut->Length = Length;
    StringOut->Buffer = v6;
    return 0;
  }
  return -1073741801;
}
