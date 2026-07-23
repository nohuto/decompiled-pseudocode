/*
 * XREFs of _RtlGetDaclSecurityDescriptor@16 @ 0x4B2E5690
 * Callers:
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v4; // dx
  __int16 v5; // ax
  ACL *v6; // ecx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v4 != 0;
  if ( v4 )
  {
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      v6 = (ACL *)*((_DWORD *)SecurityDescriptor + 4);
      if ( v5 < 0 )
        v6 = v6 != 0 ? (ACL *)((char *)SecurityDescriptor + (_DWORD)v6) : 0;
    }
    else
    {
      v6 = 0;
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
