/*
 * XREFs of _EtwpRemoveRegistrationFromTable@4 @ 0x4B2D9AD8
 * Callers:
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 */

void __thiscall EtwpRemoveRegistrationFromTable(_RTL_BALANCED_NODE *Node)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  Node->Children[0] = (_RTL_BALANCED_NODE *)-1414812757;
  Node = (_RTL_BALANCED_NODE *)((char *)Node + 4);
  Node->Children[0] = (_RTL_BALANCED_NODE *)-1414812757;
  Node->Children[1] = (_RTL_BALANCED_NODE *)-1414812757;
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
