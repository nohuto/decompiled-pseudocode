/*
 * XREFs of _RtlCreateUserSecurityObject@28 @ 0x4B335F30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  void *ProcessHeap; // edi
  NTSTATUS result; // eax
  NTSTATUS v9; // esi
  PSECURITY_DESCRIPTOR BaseAddress; // [esp+4h] [ebp-4h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &BaseAddress);
  if ( result >= 0 )
  {
    v9 = RtlpNewSecurityObject(
           0,
           BaseAddress,
           NewSecurityDescriptor,
           0,
           0,
           IsDirectoryObject,
           0,
           (HANDLE)0xFFFFFFFC,
           GenericMapping,
           0);
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return result;
}
