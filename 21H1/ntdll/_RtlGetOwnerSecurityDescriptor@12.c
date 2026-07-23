/*
 * XREFs of _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80
 * Callers:
 *     _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800 (_RtlAppxIsFileOwnedByTrustedInstaller@8.c)
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v3; // edx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = (char *)*((_DWORD *)SecurityDescriptor + 1);
  if ( *((__int16 *)SecurityDescriptor + 1) < 0 )
    v3 = v3 != 0 ? (char *)SecurityDescriptor + (_DWORD)v3 : 0;
  *Owner = v3;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
