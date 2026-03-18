/*
 * XREFs of SeDeassignSecurity @ 0x1406CF230
 * Callers:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1406171CC (ObpAssignSecurity.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
