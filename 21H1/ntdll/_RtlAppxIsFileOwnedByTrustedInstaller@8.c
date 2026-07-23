/*
 * XREFs of _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _NtQuerySecurityObject@20 @ 0x4B2F3F30 (_NtQuerySecurityObject@20.c)
 */

NTSTATUS __cdecl RtlAppxIsFileOwnedByTrustedInstaller(HANDLE FileHandle, PBOOLEAN IsFileOwnedByTrustedInstaller)
{
  unsigned int v2; // ebx
  int OwnerSecurityDescriptor; // esi
  PVOID Heap; // ebx
  PVOID v6; // eax
  void *v7; // edi
  SIZE_T v8; // [esp-10h] [ebp-28h]
  _UNICODE_STRING ServiceName; // [esp+0h] [ebp-18h] BYREF
  PSID Owner; // [esp+8h] [ebp-10h] BYREF
  ULONG ServiceSidLength; // [esp+Ch] [ebp-Ch] BYREF
  ULONG LengthNeeded; // [esp+10h] [ebp-8h] BYREF
  BOOLEAN OwnerDefaulted; // [esp+17h] [ebp-1h] BYREF

  ServiceName.Length = 32;
  Owner = 0;
  ServiceName.MaximumLength = 34;
  ServiceName.Buffer = L"TrustedInstaller";
  ServiceSidLength = 0;
  if ( !IsFileOwnedByTrustedInstaller )
    return -1073741811;
  OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, 0, 0, &LengthNeeded);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, __PAIR64__(v2, LengthNeeded));
    if ( Heap )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, Heap, LengthNeeded, &LengthNeeded);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &Owner, &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( Owner )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, 0, &ServiceSidLength);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              LODWORD(v8) = ServiceSidLength;
              v6 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
              v7 = v6;
              if ( v6 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, v6, &ServiceSidLength);
                if ( OwnerSecurityDescriptor >= 0 )
                  *IsFileOwnedByTrustedInstaller = RtlEqualSid(Owner, v7);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
              }
            }
          }
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  return OwnerSecurityDescriptor;
}
