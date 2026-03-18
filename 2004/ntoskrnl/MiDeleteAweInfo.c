/*
 * XREFs of MiDeleteAweInfo @ 0x1408D2844
 * Callers:
 *     MiDeleteSectionAwe @ 0x140546638 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D1580 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D24C0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14026B440 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D27EC (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
