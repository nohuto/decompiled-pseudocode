/*
 * XREFs of VfPoolIsInternalFree @ 0x1405A0B6C
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x1409D971C (VfRemLockDeleteMemoryRange.c)
 *     VfCheckForLookaside @ 0x1409E4528 (VfCheckForLookaside.c)
 *     VfCheckForResource @ 0x1409E549C (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

__int64 VfPoolIsInternalFree()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v1; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (struct _KTHREAD **)&unk_140CEC9E8;
  while ( CurrentThread != *v1 )
  {
    v1 += 8;
    if ( (__int64)v1 >= (__int64)&unk_140CECA68 )
      return 0LL;
  }
  return 1LL;
}
