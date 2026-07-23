/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x140361170
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140360E30 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x1403611E0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1405C17D0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall AuthzBasepFinaliseSecurityAttributesList(__int64 a1, char a2)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rdx
  char v8; // al

  v4 = (_QWORD *)(a1 + 32);
  while ( 1 )
  {
    result = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
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
