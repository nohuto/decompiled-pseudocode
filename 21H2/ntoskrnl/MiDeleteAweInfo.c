/*
 * XREFs of MiDeleteAweInfo @ 0x1408D5E44
 * Callers:
 *     MiDeleteSectionAwe @ 0x14054BB08 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D4B80 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5AC0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140296D80 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D5DEC (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
