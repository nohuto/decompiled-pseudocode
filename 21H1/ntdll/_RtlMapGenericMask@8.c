/*
 * XREFs of _RtlMapGenericMask@8 @ 0x4B2D83B0
 * Callers:
 *     _RtlpApplyAclToObject@8 @ 0x4B2A8EDE (_RtlpApplyAclToObject@8.c)
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _RtlNewSecurityGrantedAccess@24 @ 0x4B336330 (_RtlNewSecurityGrantedAccess@24.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // ecx
  ACCESS_MASK v3; // eax
  ACCESS_MASK v4; // eax
  ACCESS_MASK v5; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v3 = v2 | GenericMapping->GenericRead;
    *AccessMask = v3;
    v2 = v3;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v5 = v2 | GenericMapping->GenericWrite;
    *AccessMask = v5;
    v2 = v5;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v4 = v2 | GenericMapping->GenericExecute;
    *AccessMask = v4;
    v2 = v4;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
