/*
 * XREFs of MmWaitForCacheManagerPrefetch @ 0x14027C6DC
 * Callers:
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14027DB4C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcFetchDataForRead @ 0x140329470 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1402792E0 (MiPfCompletePrefetchIos.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseReadListResources @ 0x1406FACF8 (MiReleaseReadListResources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitForCacheManagerPrefetch(_DWORD *P)
{
  unsigned int v1; // ebp
  _QWORD *v2; // r14
  int v3; // esi
  _QWORD *v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rcx

  v1 = 0;
  v2 = P;
  v3 = P[26] & 1;
  do
  {
    v4 = (_QWORD *)*v2;
    v5 = MiPfCompletePrefetchIos(v2 + 15, 0LL, 0LL);
    MiReleaseReadListResources(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v4;
    if ( v5 < 0 )
      v1 = v5;
  }
  while ( v4 );
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v1;
}
