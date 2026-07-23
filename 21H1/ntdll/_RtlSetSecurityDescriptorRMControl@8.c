/*
 * XREFs of _RtlSetSecurityDescriptorRMControl@8 @ 0x4B3472D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetSecurityDescriptorRMControl(PSECURITY_DESCRIPTOR SecurityDescriptor, PUCHAR RMControl)
{
  __int16 v2; // ax
  UCHAR v3; // al

  v2 = *((_WORD *)SecurityDescriptor + 1);
  if ( RMControl )
  {
    *((_WORD *)SecurityDescriptor + 1) = v2 | 0x4000;
    v3 = *RMControl;
  }
  else
  {
    *((_WORD *)SecurityDescriptor + 1) = v2 & 0xBFFF;
    v3 = 0;
  }
  *((_BYTE *)SecurityDescriptor + 1) = v3;
}
