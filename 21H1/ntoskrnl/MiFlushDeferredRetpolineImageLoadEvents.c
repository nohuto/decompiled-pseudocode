/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x14078C758
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075ECB0 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C4CBB8;
    if ( qword_140C4CBB8 == &qword_140C4CBB8 )
      break;
    if ( *((PVOID **)qword_140C4CBB8 + 1) != &qword_140C4CBB8
      || (v2 = *(_QWORD *)qword_140C4CBB8, *(PVOID *)(*(_QWORD *)qword_140C4CBB8 + 8LL) != qword_140C4CBB8) )
    {
      __fastfail(3u);
    }
    qword_140C4CBB8 = *(PVOID *)qword_140C4CBB8;
    *(_QWORD *)(v2 + 8) = &qword_140C4CBB8;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
