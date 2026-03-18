/*
 * XREFs of AuthzBasepRestartOperandValueEnumeration @ 0x1402FCBCC
 * Callers:
 *     AuthzBasepValueInSet @ 0x1402FC6C0 (AuthzBasepValueInSet.c)
 *     AuthzBasepEvaluateSetRelationship @ 0x1402FCA54 (AuthzBasepEvaluateSetRelationship.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14029671C (AuthzBasepQuerySecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepRestartOperandValueEnumeration(__int64 a1)
{
  bool v1; // zf
  __int64 i; // rdx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12) == 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v1 && *(_QWORD *)(a1 + 16) )
  {
    for ( i = 56LL; i < 72; i += 8LL )
      *(_QWORD *)(i + *(_QWORD *)(a1 + 16)) = 0LL;
    return AuthzBasepQuerySecurityAttributeAndValues(*(_QWORD *)(a1 + 16));
  }
  return result;
}
