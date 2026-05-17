/*
 * XREFs of _RtlCreateAcl@12 @ 0x4B2D7BF0
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpInheritAcl2@72 @ 0x4B2D7947 (_RtlpInheritAcl2@72.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlpComputeMergedAcl2@44 @ 0x4B3478EE (_RtlpComputeMergedAcl2@44.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 *     _RtlpCreateServerAcl@20 @ 0x4B348798 (_RtlpCreateServerAcl@20.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlCreateAcl(int a1, unsigned int a2, unsigned int a3)
{
  if ( a2 < 8 )
    return -1073741789;
  if ( a3 < 2 || a3 > 4 || a2 > 0xFFFC )
    return -1073741811;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_WORD *)a1 = (unsigned __int8)a3;
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
