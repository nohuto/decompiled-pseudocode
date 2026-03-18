/*
 * XREFs of SeDeassignSecurity @ 0x1406C4020
 * Callers:
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x1405E035C (ObpAssignSecurity.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140789E10 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
