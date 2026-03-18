/*
 * XREFs of _ConvertToAndFromWideChar@24 @ 0xDFDA8
 * Callers:
 *     _RtlWCSMessageWParamCharToMB@8 @ 0xC5322 (_RtlWCSMessageWParamCharToMB@8.c)
 *     _cUnicodeRangesSupported@20 @ 0xDFCB6 (_cUnicodeRangesSupported@20.c)
 *     _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5 (_RtlMBMessageWParamCharToWCS@8.c)
 *     _WCSToMBEx@24 @ 0x1B73F3 (_WCSToMBEx@24.c)
 *     _EngMultiByteToWideChar@20 @ 0x1DA264 (_EngMultiByteToWideChar@20.c)
 *     _EngWideCharToMultiByte@20 @ 0x1DA386 (_EngWideCharToMultiByte@20.c)
 *     ?bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z @ 0x22173E (-bExtendGlyphSet@@YG_NPAPAU_FD_GLYPHSET@@0@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _ConvertToAndFromWideCharSymCP@20 @ 0x1D9FFF (_ConvertToAndFromWideCharSymCP@20.c)
 *     _GetNlsTablePath@8 @ 0x1DA3A5 (_GetNlsTablePath@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
ULONG __fastcall ConvertToAndFromWideChar(
        int a1,
        WCHAR *a2,
        ULONG MaxBytesInUnicodeString,
        CHAR *a4,
        ULONG BytesInMultiByteString,
        int a6)
{
  struct _CPTABLEINFO *p_CodePageTable; // edi
  void *v8; // esi
  NTSTATUS v9; // eax
  ULONG v11; // edi
  NTSTATUS v12; // eax
  void *v13; // edi
  ULONG BytesInUnicodeString; // [esp+10h] [ebp-298h] BYREF
  CHAR *MultiByteString; // [esp+14h] [ebp-294h]
  void *FileHandle; // [esp+18h] [ebp-290h] BYREF
  int v17; // [esp+1Ch] [ebp-28Ch]
  USHORT AnsiCodePage[2]; // [esp+20h] [ebp-288h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-284h] BYREF
  USHORT OemCodePage[2]; // [esp+2Ch] [ebp-27Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-278h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+38h] [ebp-270h] BYREF
  ULONG FileInformation[7]; // [esp+50h] [ebp-258h] BYREF
  _CPTABLEINFO CodePageTable; // [esp+6Ch] [ebp-23Ch] BYREF
  WCHAR SourceString[262]; // [esp+98h] [ebp-210h] BYREF

  MultiByteString = a4;
  v17 = a1;
  *(_DWORD *)OemCodePage = 0;
  p_CodePageTable = 0;
  *(_DWORD *)AnsiCodePage = 0;
  v8 = 0;
  BytesInUnicodeString = 0;
  memset(&CodePageTable, 0, sizeof(CodePageTable));
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
  if ( AnsiCodePage[0] == v17 )
  {
    if ( a6 )
      v9 = RtlMultiByteToUnicodeN(
             a2,
             MaxBytesInUnicodeString,
             &BytesInUnicodeString,
             MultiByteString,
             BytesInMultiByteString);
    else
      v9 = RtlUnicodeToMultiByteN(
             MultiByteString,
             BytesInMultiByteString,
             &BytesInUnicodeString,
             a2,
             MaxBytesInUnicodeString);
    if ( v9 >= 0 )
      return BytesInUnicodeString;
    return -1;
  }
  if ( v17 != 42 )
  {
    GreAcquireFastMutex(_ghfmMemory);
    if ( v17 == LastCodePageTranslated && gfLastCPTableInfoInitialized == 1 )
    {
      ++NlsTableUseCount;
      p_CodePageTable = (struct _CPTABLEINFO *)&LastCPTableInfo;
    }
    GreReleaseFastMutex(_ghfmMemory);
    if ( !p_CodePageTable )
    {
      if ( !GetNlsTablePath(v17, SourceString) )
        return -1;
      *(_DWORD *)&DestinationString.Length = 0;
      DestinationString.Buffer = 0;
      IoStatusBlock.Status = 0;
      IoStatusBlock.Information = 0;
      FileHandle = 0;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0, 0, 1u, 1u, 0x20u, 0, 0) < 0 )
        return -1;
      memset(FileInformation, 0, 0x18u);
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v11 = FileInformation[2];
        if ( FileInformation[2] )
        {
          v8 = PALLOCMEM2(FileInformation[2], 1668768583, 1);
          if ( v8 )
          {
            if ( ZwReadFile(FileHandle, 0, 0, 0, &IoStatusBlock, v8, v11, 0, 0) < 0 )
            {
              Win32FreePool(v8);
              v8 = 0;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v8 )
        return -1;
      RtlInitCodePageTable((PUSHORT)v8, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v12 = RtlCustomCPToUnicodeN(
              p_CodePageTable,
              a2,
              MaxBytesInUnicodeString,
              &BytesInUnicodeString,
              MultiByteString,
              BytesInMultiByteString);
    else
      v12 = RtlUnicodeToCustomCPN(
              p_CodePageTable,
              MultiByteString,
              BytesInMultiByteString,
              &BytesInUnicodeString,
              a2,
              MaxBytesInUnicodeString);
    if ( v12 < 0 )
      BytesInUnicodeString = -1;
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(_ghfmMemory);
      if ( NlsTableUseCount )
      {
        v13 = v8;
      }
      else
      {
        LastCodePageTranslated = v17;
        memmove(&LastCPTableInfo, p_CodePageTable, 0x2Cu);
        gfLastCPTableInfoInitialized = 1;
        v13 = (void *)_LastNlsTableBuffer;
        _LastNlsTableBuffer = v8;
      }
      GreReleaseFastMutex(_ghfmMemory);
      if ( v13 )
        Win32FreePool(v13);
    }
    else
    {
      GreAcquireFastMutex(_ghfmMemory);
      --NlsTableUseCount;
      GreReleaseFastMutex(_ghfmMemory);
    }
    return BytesInUnicodeString;
  }
  return ConvertToAndFromWideCharSymCP(MultiByteString, BytesInMultiByteString, a6);
}
