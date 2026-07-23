/*
 * XREFs of PiGetStateRootPath @ 0x1407814BC
 * Callers:
 *     PiOpenDriverRedirectedStateKey @ 0x14077BD64 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C4FA4 (PiCreateDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x14089E970 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x14089F628 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x14089F920 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6EEEC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x1406347D0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(
        PCWSTR SourceID,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  NTSTATUS v13; // eax
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+20h] BYREF

  if ( DestinationString )
  {
    LODWORD(NumberOfBytes) = 0;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               0LL,
                               DefaultPath,
                               StateLocationType,
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
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
      if ( TargetPath )
      {
        v13 = RtlGetPersistedStateLocation(
                SourceID,
                0LL,
                DefaultPath,
                StateLocationType,
                TargetPath,
                BufferLengthIn,
                (PULONG)&NumberOfBytes);
        inited = v13;
        if ( v13 == -1073741772 )
        {
          inited = -1073741595;
        }
        else if ( v13 >= 0 )
        {
          inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
          if ( inited >= 0 )
            TargetPath = 0LL;
        }
        if ( TargetPath )
          ExFreePoolWithTag(TargetPath, 0);
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
