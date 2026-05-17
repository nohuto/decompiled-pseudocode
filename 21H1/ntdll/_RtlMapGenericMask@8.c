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

int __stdcall RtlMapGenericMask(int *a1, _DWORD *a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *a1;
  if ( *a1 < 0 )
  {
    result = v2 | *a2;
    *a1 = result;
    v2 = result;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    result = v2 | a2[1];
    *a1 = result;
    v2 = result;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    result = v2 | a2[2];
    *a1 = result;
    v2 = result;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= a2[3];
  *a1 = v2 & 0xFFFFFFF;
  return result;
}
