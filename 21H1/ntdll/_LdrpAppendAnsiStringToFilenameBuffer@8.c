/*
 * XREFs of _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA
 * Callers:
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 * Callees:
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970 (_RtlMultiByteToUnicodeSize@12.c)
 *     _LdrpAllocateFileNameBufferIfNeeded@8 @ 0x4B2CE9A7 (_LdrpAllocateFileNameBufferIfNeeded@8.c)
 */

int __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  int FileNameBufferIfNeeded; // ebx
  int v5; // edx
  wchar_t *v6; // ecx
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  ULONG BytesInUnicodeString; // [esp+14h] [ebp-4h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( a2->Length )
  {
    RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a2->Buffer, a2->Length);
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, *a1 + BytesInUnicodeString + 2);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v5 = *a1;
      DestinationString.Length = 0;
      v6 = (wchar_t *)(*((_DWORD *)a1 + 1) + v5);
      DestinationString.MaximumLength = a1[1] - v5;
      DestinationString.Buffer = v6;
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return FileNameBufferIfNeeded;
}
