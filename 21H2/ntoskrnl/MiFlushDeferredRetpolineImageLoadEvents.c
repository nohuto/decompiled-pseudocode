/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5288
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075FC2C (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C4CC78;
    if ( qword_140C4CC78 == &qword_140C4CC78 )
      break;
    if ( *((PVOID **)qword_140C4CC78 + 1) != &qword_140C4CC78
      || (v2 = *(_QWORD *)qword_140C4CC78, *(PVOID *)(*(_QWORD *)qword_140C4CC78 + 8LL) != qword_140C4CC78) )
    {
      __fastfail(3u);
    }
    qword_140C4CC78 = *(PVOID *)qword_140C4CC78;
    *(_QWORD *)(v2 + 8) = &qword_140C4CC78;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
