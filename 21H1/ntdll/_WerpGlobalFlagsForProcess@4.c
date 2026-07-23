/*
 * XREFs of _WerpGlobalFlagsForProcess@4 @ 0x4B33B104
 * Callers:
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _WerpPathTail@4 @ 0x4B33B28F (_WerpPathTail@4.c)
 */

ULONG __thiscall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  int v2; // eax
  const WCHAR *v3; // esi
  _WORD *v4; // ecx
  int v5; // edx
  int v7; // edi
  size_t v9; // [esp-4h] [ebp-254h]
  SIZE_T v10; // [esp-4h] [ebp-254h]
  _BYTE ProcessInformation[4]; // [esp+10h] [ebp-240h] BYREF
  int v12; // [esp+14h] [ebp-23Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+228h] [ebp-28h] BYREF
  ULONG Value; // [esp+240h] [ebp-10h] BYREF
  _UNICODE_STRING Destination; // [esp+244h] [ebp-Ch] BYREF
  HANDLE KeyHandle; // [esp+24Ch] [ebp-4h] BYREF

  LODWORD(v9) = 532;
  KeyHandle = 0;
  memset(ProcessInformation, 0, v9);
  Value = 0;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0;
  if ( (ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x210u, 0) & 0xC0000000) != 0xC0000000 )
  {
    v2 = WerpPathTail(v12);
    v3 = (const WCHAR *)v2;
    if ( v2 )
    {
      v4 = (_WORD *)v2;
      v5 = v2 + 2;
      while ( *v4++ )
        ;
      v7 = 2 * (((int)v4 - v5) >> 1) + 194;
      LODWORD(v10) = v7;
      Destination.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      if ( Destination.Buffer )
      {
        Destination.MaximumLength = v7;
        if ( RtlAppendUnicodeToString(
               &Destination,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&Destination, v3) >= 0 )
        {
          ObjectAttributes.Length = 24;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0;
          ObjectAttributes.Attributes = 64;
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
            RtlQueryImageFileKeyOption(KeyHandle, L"GlobalFlag", 4, &Value, 4u, 0);
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0;
  }
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return Value;
}
