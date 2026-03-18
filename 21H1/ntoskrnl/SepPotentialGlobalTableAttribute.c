/*
 * XREFs of SepPotentialGlobalTableAttribute @ 0x140313924
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     SepShouldSetDelinkFlags @ 0x1406DBAEC (SepShouldSetDelinkFlags.c)
 * Callees:
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 */

char __fastcall SepPotentialGlobalTableAttribute(PCUNICODE_STRING String2)
{
  UNICODE_STRING *v2; // rbx
  int v3; // edi
  char result; // al

  v2 = &PotentialGlobalAttributePrefixes;
  v3 = 0;
  while ( 1 )
  {
    if ( KeGetCurrentIrql() >= 2u )
      result = v2->Length <= String2->Length && memcmp(v2->Buffer, String2->Buffer, v2->Length) == 0;
    else
      result = RtlPrefixUnicodeString(v2, String2, 1u);
    if ( result )
      break;
    ++v3;
    ++v2;
    if ( v3 )
      return result;
  }
  return 1;
}
