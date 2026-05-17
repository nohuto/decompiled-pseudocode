/*
 * XREFs of _RtlFindAceByType@12 @ 0x4B2D7FA0
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpGenerateInheritAcl@60 @ 0x4B2D7C3D (_RtlpGenerateInheritAcl@60.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlIsUntrustedObject@12 @ 0x4B3465C0 (_RtlIsUntrustedObject@12.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__stdcall RtlFindAceByType(int a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // ecx
  unsigned int v5; // edx

  if ( !a1 )
    return 0;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
