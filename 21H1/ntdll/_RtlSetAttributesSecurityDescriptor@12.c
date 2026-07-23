/*
 * XREFs of _RtlSetAttributesSecurityDescriptor@12 @ 0x4B347290
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetControlSecurityDescriptor@12 @ 0x4B2ED370 (_RtlSetControlSecurityDescriptor@12.c)
 */

NTSTATUS __cdecl RtlSetAttributesSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        SECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
    return RtlSetControlSecurityDescriptor(SecurityDescriptor, Control & 0x3FC0, Control & 0x3FC0);
  else
    return -1073741736;
}
