/*
 * XREFs of MiDeleteAweInfo @ 0x1408D5FA4
 * Callers:
 *     MiDeleteSectionAwe @ 0x14054BD48 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D4CE0 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5C20 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140273E60 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D5F4C (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
