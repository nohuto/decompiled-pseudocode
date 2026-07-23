/*
 * XREFs of _RtlGetAce@12 @ 0x4B2EA0A0
 * Callers:
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v3; // edx
  ULONG v4; // ebx

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v3 = Acl + 1;
    v4 = 0;
    *Ace = &Acl[1];
    if ( AceIndex )
    {
      while ( v3 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        v3 = (PACL)((char *)v3 + v3->AclSize);
        ++v4;
        *Ace = v3;
        if ( v4 >= AceIndex )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( v3 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
