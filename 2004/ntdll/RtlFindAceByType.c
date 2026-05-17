/*
 * XREFs of RtlFindAceByType @ 0x18003C040
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x180036DA8 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18003D208 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCopyAces @ 0x18003D288 (RtlpCopyAces.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 *     RtlIsUntrustedObject @ 0x1800E63A0 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r9
  unsigned int v5; // r10d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
