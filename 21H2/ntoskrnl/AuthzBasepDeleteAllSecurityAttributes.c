/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributes @ 0x14064A2A8
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140205370 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140376790 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributes(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1 + 8;
  for ( i = *(_QWORD *)(a1 + 8); i != v1; i = *(_QWORD *)i )
  {
    *(_DWORD *)(i + 56) |= 4u;
    AuthzBasepAddSecurityAttributeToLists(a1, i, 0, 1);
    result = AuthzBasepDeleteAllSecurityAttributeValues(i);
  }
  return result;
}
