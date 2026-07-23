/*
 * XREFs of _RtlCreateSecurityDescriptor@8 @ 0x4B2D8740
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  *(_DWORD *)SecurityDescriptor = 0;
  *((_DWORD *)SecurityDescriptor + 1) = 0;
  *((_DWORD *)SecurityDescriptor + 2) = 0;
  *((_DWORD *)SecurityDescriptor + 3) = 0;
  *((_DWORD *)SecurityDescriptor + 4) = 0;
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
