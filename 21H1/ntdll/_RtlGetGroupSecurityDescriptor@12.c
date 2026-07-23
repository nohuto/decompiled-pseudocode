/*
 * XREFs of _RtlGetGroupSecurityDescriptor@12 @ 0x4B2ECDD0
 * Callers:
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v3; // edx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = (char *)*((_DWORD *)SecurityDescriptor + 2);
  if ( *((__int16 *)SecurityDescriptor + 1) < 0 )
    v3 = v3 != 0 ? (char *)SecurityDescriptor + (_DWORD)v3 : 0;
  *Group = v3;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
