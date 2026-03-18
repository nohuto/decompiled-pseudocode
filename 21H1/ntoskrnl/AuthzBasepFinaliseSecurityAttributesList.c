/*
 * XREFs of AuthzBasepFinaliseSecurityAttributesList @ 0x1403388B0
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140338570 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140338920 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1405BBA80 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
