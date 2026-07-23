/*
 * XREFs of AuthzBasepFreeSecurityAttributeValues @ 0x140248094
 * Callers:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140248044 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402F5890 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x1403611E0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1405C17D0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140248104 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributeValues(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _DWORD *v7; // rbp

  if ( !a2 )
  {
    v4 = (_QWORD *)(a1 + 72);
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      if ( (_QWORD *)*v4 == v4 )
        break;
      LOBYTE(a3) = 1;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, *v4, a3);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v6 = *(_QWORD **)(a1 + 96);
  while ( v6 != (_QWORD *)(a1 + 96) )
  {
    v7 = v6 - 2;
    v6 = (_QWORD *)*v6;
    if ( (v7[8] & 1) == 0 )
    {
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
}
