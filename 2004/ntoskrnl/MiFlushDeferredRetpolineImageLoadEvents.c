/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x14078E628
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140760FA0 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C4CA78;
    if ( qword_140C4CA78 == &qword_140C4CA78 )
      break;
    if ( *((PVOID **)qword_140C4CA78 + 1) != &qword_140C4CA78
      || (v2 = *(_QWORD *)qword_140C4CA78, *(PVOID *)(*(_QWORD *)qword_140C4CA78 + 8LL) != qword_140C4CA78) )
    {
      __fastfail(3u);
    }
    qword_140C4CA78 = *(PVOID *)qword_140C4CA78;
    *(_QWORD *)(v2 + 8) = &qword_140C4CA78;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
