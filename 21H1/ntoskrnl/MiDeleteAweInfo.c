/*
 * XREFs of MiDeleteAweInfo @ 0x1408D14F4
 * Callers:
 *     MiDeleteSectionAwe @ 0x140545FE8 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D0230 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D1170 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402D4DE0 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D149C (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(ULONG_PTR a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
