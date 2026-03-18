/*
 * XREFs of ExCleanupSessionHeapManager @ 0x140385F88
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x14039A0A4 (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x140386034 (RtlpHpHeapDestroy.c)
 *     RtlCSparseBitmapCleanup @ 0x140389270 (RtlCSparseBitmapCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
