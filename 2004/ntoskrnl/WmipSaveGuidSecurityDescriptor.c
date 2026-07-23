/*
 * XREFs of WmipSaveGuidSecurityDescriptor @ 0x1407C03D4
 * Callers:
 *     WmipSecurityMethod @ 0x1406EDF50 (WmipSecurityMethod.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1405DC980 (RtlGetPersistedStateLocation.c)
 *     RtlLengthSecurityDescriptor @ 0x140669A30 (RtlLengthSecurityDescriptor.c)
 *     RtlWriteRegistryValue @ 0x1407038F0 (RtlWriteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipSaveGuidSecurityDescriptor(__int64 a1, void *a2)
{
  WCHAR *TargetPath; // rbx
  ULONG v5; // r14d
  ULONG BufferLengthIn; // edi
  NTSTATUS PersistedStateLocation; // eax
  unsigned int v8; // edi
  ULONG BufferLengthOut; // [rsp+70h] [rbp+18h] BYREF

  TargetPath = 0LL;
  v5 = RtlLengthSecurityDescriptor(a2);
  BufferLengthIn = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    if ( BufferLengthIn )
    {
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLengthIn, 0x70696D57u);
      if ( !TargetPath )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( TargetPath )
    {
      ExFreePoolWithTag(TargetPath, 0);
      TargetPath = 0LL;
    }
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, TargetPath, *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, v5);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return v8;
}
