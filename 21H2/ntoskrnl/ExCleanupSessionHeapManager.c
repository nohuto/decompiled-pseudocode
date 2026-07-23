/*
 * XREFs of ExCleanupSessionHeapManager @ 0x140389960
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039D714 (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x140389A0C (RtlpHpHeapDestroy.c)
 *     RtlCSparseBitmapCleanup @ 0x14038CDF0 (RtlCSparseBitmapCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void ExCleanupSessionHeapManager()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rsi

  v0 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672);
  v1 = v0[1820];
  if ( v1 )
    RtlpHpHeapDestroy(v1);
  v2 = v0[1821];
  if ( v2 )
    RtlpHpHeapDestroy(v2);
  v3 = v0 + 1811;
  v4 = 3LL;
  do
  {
    if ( *v3 )
      RtlpHpHeapDestroy(*v3);
    v3 += 2;
    --v4;
  }
  while ( v4 );
  RtlCSparseBitmapCleanup(v0 + 2);
  RtlCSparseBitmapCleanup(v0 + 15);
  ExFreePoolWithTag(v0, 0x65537048u);
}
