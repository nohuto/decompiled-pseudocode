/*
 * XREFs of KGetAppModelStateSeparatedRegKeyPath @ 0x140709FDC
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x140706908 (KIsUnlockSettingEnabled.c)
 *     KIsSideloadingEnabled @ 0x14095B964 (KIsSideloadingEnabled.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1405DC980 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KGetAppModelStateSeparatedRegKeyPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( DestinationString )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               L"TargetNtPath",
                               DefaultPath,
                               LocationTypeRegistry,
                               0LL,
                               0,
                               (PULONG)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      BufferLengthIn = NumberOfBytes;
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D707041u);
      if ( TargetPath )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceID,
                   L"TargetNtPath",
                   DefaultPath,
                   LocationTypeRegistry,
                   TargetPath,
                   BufferLengthIn,
                   (PULONG)&NumberOfBytes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
          if ( inited >= 0 )
            TargetPath = 0LL;
        }
        if ( TargetPath )
          ExFreePoolWithTag(TargetPath, 0x4D707041u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
