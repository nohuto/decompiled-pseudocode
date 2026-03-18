/*
 * XREFs of TelemetryData_pCreateDumpFile @ 0x1C008984C
 * Callers:
 *     TelemetryData_pWriteDumpFile @ 0x1C0089ED4 (TelemetryData_pWriteDumpFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0012E78 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 */

__int64 __fastcall TelemetryData_pCreateDumpFile(__int64 a1, void **a2)
{
  unsigned int v4; // edi
  NTSTATUS v5; // ebx
  wchar_t *v6; // r11
  const wchar_t *v7; // r8
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-A9h]
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A1h]
  __int64 ShareAccess; // [rsp+30h] [rbp-99h]
  __int64 Disposition; // [rsp+38h] [rbp-91h]
  __int64 CreateOptions; // [rsp+40h] [rbp-89h]
  PVOID EaBuffer; // [rsp+48h] [rbp-81h]
  union _LARGE_INTEGER LocalTime; // [rsp+70h] [rbp-59h] BYREF
  NTSTRSAFE_PCWSTR pszFormat[2]; // [rsp+78h] [rbp-51h] BYREF
  union _LARGE_INTEGER SystemTime; // [rsp+88h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-9h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp+7h] BYREF

  TimeFields = 0LL;
  v4 = 0;
  v5 = -1073741823;
  LocalTime.QuadPart = 0LL;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  RtlTimeToTimeFields(&LocalTime, &TimeFields);
  v6 = (wchar_t *)(a1 + 656);
  while ( 1 )
  {
    LODWORD(EaBuffer) = v4;
    LODWORD(CreateOptions) = TimeFields.Minute;
    LODWORD(Disposition) = TimeFields.Hour;
    LODWORD(ShareAccess) = TimeFields.Day;
    pszFormat[0] = L"%ws-%04u%02u%02u-%02u%02u-%02u.dmp";
    v7 = L"%ws-%04u%02u%02u-%02u%02u.dmp";
    if ( v4 )
      v7 = pszFormat[0];
    FileAttributes[0] = TimeFields.Month;
    LODWORD(AllocationSize) = TimeFields.Year;
    if ( RtlStringCbPrintfW(
           v6,
           0x50uLL,
           v7,
           a1 + 624,
           AllocationSize,
           *(_QWORD *)FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer) < 0 )
      break;
    if ( RtlStringCbPrintfW((NTSTRSAFE_PWSTR)(a1 + 736), 0x208uLL, L"%ws\\%ws\\%ws", a1 + 104, a1 + 624, a1 + 656) >= 0 )
    {
      *(_OWORD *)pszFormat = 0LL;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      IoStatusBlock = 0LL;
      RtlInitUnicodeString((PUNICODE_STRING)pszFormat, (PCWSTR)(a1 + 736));
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)pszFormat;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = IoCreateFile(
             a2,
             0x120116u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             0,
             2u,
             0x22u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v5 >= 0 )
        return (unsigned int)v5;
      ++v4;
      v6 = (wchar_t *)(a1 + 656);
      if ( v4 <= 0xA )
        continue;
    }
    goto LABEL_11;
  }
  *(_WORD *)(a1 + 656) = 0;
  v5 = -1073741823;
LABEL_11:
  *(_WORD *)(a1 + 736) = 0;
  *a2 = 0LL;
  return (unsigned int)v5;
}
