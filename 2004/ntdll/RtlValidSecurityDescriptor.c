/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1800700C0
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E7E10 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 */

BOOLEAN __cdecl RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v2; // rcx
  char *v3; // rcx
  ACL *v4; // rcx
  ACL *v5; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v2 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 1) )
      goto LABEL_7;
    v2 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  if ( v2 && !RtlValidSid(v2) )
    return 0;
LABEL_7:
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 2) )
      goto LABEL_12;
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 2);
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_12:
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0 )
    goto LABEL_18;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 4) )
      goto LABEL_18;
    v4 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4));
  }
  if ( v4 && !RtlValidAcl(v4) )
    return 0;
LABEL_18:
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
    {
      v5 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)SecurityDescriptor + 3) )
        return 1;
      v5 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 3));
    }
    if ( v5 && !RtlValidAcl(v5) )
      return 0;
  }
  return 1;
}
