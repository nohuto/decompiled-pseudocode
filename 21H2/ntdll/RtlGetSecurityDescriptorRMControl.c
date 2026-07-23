/*
 * XREFs of RtlGetSecurityDescriptorRMControl @ 0x180086020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlGetSecurityDescriptorRMControl(PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl)
{
  if ( (*((_WORD *)SecurityDescriptor + 1) & 0x4000) != 0 )
  {
    *RMControl = *((_BYTE *)SecurityDescriptor + 1);
    return 1;
  }
  else
  {
    *RMControl = 0;
    return 0;
  }
}
