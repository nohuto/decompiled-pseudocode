/*
 * XREFs of _RtlValidSecurityDescriptor@4 @ 0x4B2E8170
 * Callers:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

BOOLEAN __cdecl RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v1; // ecx
  char *v2; // ecx
  __int16 v3; // ax
  ACL *v4; // ecx
  __int16 v5; // ax
  ACL *v7; // ecx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v1 = (char *)*((_DWORD *)SecurityDescriptor + 1);
  if ( *((__int16 *)SecurityDescriptor + 1) < 0 )
    v1 = v1 != 0 ? (char *)SecurityDescriptor + (_DWORD)v1 : 0;
  if ( v1 && !RtlValidSid(v1) )
    return 0;
  v2 = (char *)*((_DWORD *)SecurityDescriptor + 2);
  if ( *((__int16 *)SecurityDescriptor + 1) < 0 )
    v2 = v2 != 0 ? (char *)SecurityDescriptor + (_DWORD)v2 : 0;
  if ( v2 && !RtlValidSid(v2) )
    return 0;
  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v3 & 4) != 0 )
  {
    v4 = (ACL *)*((_DWORD *)SecurityDescriptor + 4);
    if ( v3 < 0 )
      v4 = v4 != 0 ? (ACL *)((char *)SecurityDescriptor + (_DWORD)v4) : 0;
    if ( v4 && !RtlValidAcl(v4) )
      return 0;
  }
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v5 & 0x10) == 0 )
    return 1;
  v7 = (ACL *)*((_DWORD *)SecurityDescriptor + 3);
  if ( v5 < 0 )
    v7 = v7 != 0 ? (ACL *)((char *)SecurityDescriptor + (_DWORD)v7) : 0;
  return !v7 || RtlValidAcl(v7);
}
