/*
 * XREFs of MiDeleteAweInfo @ 0x1408D8684
 * Callers:
 *     MiDeleteSectionAwe @ 0x14054A008 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D73C0 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D8300 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140262F60 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D862C (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(ULONG_PTR a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
