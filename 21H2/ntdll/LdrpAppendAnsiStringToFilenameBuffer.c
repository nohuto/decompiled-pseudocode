/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800CD53C (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlxOemStringToUnicodeSize @ 0x180016DE0 (RtlxOemStringToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18001A930 (LdrpAllocateFileNameBufferIfNeeded.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, PCSTR *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( *(_WORD *)a2 )
  {
    v5 = RtlxOemStringToUnicodeSize(a2);
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, (unsigned int)*a1 + v5);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, (PCANSI_STRING)a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
