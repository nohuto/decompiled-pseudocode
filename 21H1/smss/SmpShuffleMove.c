/*
 * XREFs of SmpShuffleMove @ 0x140014F98
 * Callers:
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000202C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpQueryFileExists @ 0x140012E7C (SmpQueryFileExists.c)
 *     SmpOpenTargetFile @ 0x140014A30 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140014B3C (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2)
{
  unsigned __int64 v4; // r14
  int v5; // edi
  int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES v13; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
  v4 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  v5 = 0;
  while ( 1 )
  {
    LODWORD(v8) = (unsigned __int16)(v5 + v4);
    v6 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", DestinationString.Buffer, L"SMSS-PFRO", v8);
    if ( v6 < 0 )
      break;
    if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
    {
      v6 = -1073741823;
      break;
    }
    if ( !SmpQueryFileExists(&NtPathName) )
    {
      UnicodeString = NtPathName;
      v13.RootDirectory = 0LL;
      v13.Length = 48;
      v13.Attributes = 64;
      v13.ObjectName = a1;
      *(_OWORD *)&v13.SecurityDescriptor = 0LL;
      v6 = SmpOpenTargetFile(&Handle, 0x110000u, &v13);
      if ( v6 >= 0 )
      {
        v6 = SmpRenameTargetFile((const void **)&UnicodeString, Handle, 1);
        if ( v6 >= 0 )
        {
          v6 = SmpRenameTargetFile((const void **)a1, a2, 1);
          if ( v6 >= 0 )
            v6 = 0;
          else
            SmpRenameTargetFile((const void **)a1, Handle, 1);
        }
      }
      break;
    }
    RtlFreeUnicodeString(&NtPathName);
    if ( (unsigned int)++v5 >= 0x64 )
    {
      v6 = -1073741823;
      break;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v6;
}
