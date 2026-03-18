/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x140376790
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402053E4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14064A2A8 (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x140204AE4 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14028AC10 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1)
{
  __int64 v2; // r11
  __int64 i; // rdx
  int v4; // eax
  __int64 result; // rax

  AuthzBasepFreeSecurityAttributeValues(a1, 1);
  v2 = a1 + 72;
  for ( i = *(_QWORD *)(a1 + 72); i != v2; i = *(_QWORD *)i )
  {
    v4 = *(_DWORD *)(i + 32);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(i + 32) = v4 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0, 1);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
