/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x1402E1AA4
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402E3090 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1405BF99C (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402E19B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x1402E2720 (AuthzBasepAddSecurityAttributeValueToLists.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 *i; // rdx
  int v7; // eax
  __int64 result; // rax

  AuthzBasepFreeSecurityAttributeValues(a1, 1, a3);
  v5 = a1 + 72;
  for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)v5; i = (__int64 *)*i )
  {
    v7 = *((_DWORD *)i + 8);
    if ( (v7 & 2) == 0 )
    {
      LOBYTE(v4) = 1;
      *((_DWORD *)i + 8) = v7 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0LL, v4);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
