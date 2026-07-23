/*
 * XREFs of _RtlAbsoluteToSelfRelativeSD@12 @ 0x4B2E6A00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMakeSelfRelativeSD@12 @ 0x4B2E6A30 (_RtlMakeSelfRelativeSD@12.c)
 */

NTSTATUS __cdecl RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) < 0 )
    return -1073741593;
  else
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
}
