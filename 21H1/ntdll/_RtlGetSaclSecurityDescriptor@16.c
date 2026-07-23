/*
 * XREFs of _RtlGetSaclSecurityDescriptor@16 @ 0x4B2EC050
 * Callers:
 *     _RtlReplaceSidInSd@16 @ 0x4B346EC0 (_RtlReplaceSidInSd@16.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v4; // dx
  __int16 v5; // ax
  ACL *v6; // ecx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1) & 0x10;
  *SaclPresent = v4 != 0;
  if ( v4 )
  {
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 0x10) != 0 )
    {
      v6 = (ACL *)*((_DWORD *)SecurityDescriptor + 3);
      if ( v5 < 0 )
        v6 = v6 != 0 ? (ACL *)((char *)SecurityDescriptor + (_DWORD)v6) : 0;
    }
    else
    {
      v6 = 0;
    }
    *Sacl = v6;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
