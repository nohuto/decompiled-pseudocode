/*
 * XREFs of IopGetPersistedStateLocation @ 0x14074CEBC
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x14074CC84 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1405DC980 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetPersistedStateLocation(__int64 a1, const WCHAR *a2, __int64 a3, WCHAR **a4)
{
  SIZE_T BufferLengthIn; // rsi
  WCHAR *TargetPath; // rbx
  NTSTATUS PersistedStateLocation; // edi
  __int64 result; // rax
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  BufferLengthOut = 0;
  BufferLengthIn = 256LL;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x63466F49u);
    if ( !TargetPath )
    {
      PersistedStateLocation = -1073741670;
      goto LABEL_10;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               a2,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= (unsigned int)BufferLengthIn )
    {
      PersistedStateLocation = -1073741595;
      break;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_10:
  if ( TargetPath )
  {
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
  }
LABEL_5:
  result = (unsigned int)PersistedStateLocation;
  *a4 = TargetPath;
  return result;
}
