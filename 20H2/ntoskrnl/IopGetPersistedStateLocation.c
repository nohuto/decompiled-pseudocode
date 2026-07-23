/*
 * XREFs of IopGetPersistedStateLocation @ 0x14075BA9C
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x14075B864 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140668560 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
