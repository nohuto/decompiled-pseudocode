/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A5488
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075FDEC (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v2; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C4CCB8;
    if ( qword_140C4CCB8 == &qword_140C4CCB8 )
      break;
    if ( *((PVOID **)qword_140C4CCB8 + 1) != &qword_140C4CCB8
      || (v2 = *(_QWORD *)qword_140C4CCB8, *(PVOID *)(*(_QWORD *)qword_140C4CCB8 + 8LL) != qword_140C4CCB8) )
    {
      __fastfail(3u);
    }
    qword_140C4CCB8 = *(PVOID *)qword_140C4CCB8;
    *(_QWORD *)(v2 + 8) = &qword_140C4CCB8;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
