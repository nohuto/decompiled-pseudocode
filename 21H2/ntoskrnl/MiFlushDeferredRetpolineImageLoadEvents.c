/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x14082CB2C
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14081BD3C (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  int *v1; // rbx
  __int64 v3; // rax

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (int *)qword_140C4F430;
    if ( qword_140C4F430 == &qword_140C4F430 )
      break;
    if ( *((PVOID **)qword_140C4F430 + 1) != &qword_140C4F430
      || (v3 = *(_QWORD *)qword_140C4F430, *(PVOID *)(*(_QWORD *)qword_140C4F430 + 8LL) != qword_140C4F430) )
    {
      __fastfail(3u);
    }
    qword_140C4F430 = *(PVOID *)qword_140C4F430;
    *(_QWORD *)(v3 + 8) = &qword_140C4F430;
    MiLogNonRetpolineImageLoadEvent((__int64)(v1 + 4), v1[8]);
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
