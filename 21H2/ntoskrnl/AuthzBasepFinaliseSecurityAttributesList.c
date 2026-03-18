/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x140204E2C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140204EA0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14064A67C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  char v8; // al

  v3 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    result = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v6 = result - 2;
    v7 = result - 2;
    if ( a2 )
      v8 = AuthzBasepCommitSecurityAttributeChanges(a1, v7);
    else
      v8 = AuthzBasepRollbackSecurityAttributeChanges(a1, v7);
    if ( v8 )
      ExFreePoolWithTag(v6, 0);
  }
  return result;
}
