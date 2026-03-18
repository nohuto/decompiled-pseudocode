/*
 * XREFs of CcWaitForCurrentLazyWriterActivityHelper @ 0x14037E4B0
 * Callers:
 *     <none>
 * Callees:
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14037E4DC (CcWaitForCurrentLazyWriterActivityInternal.c)
 */

char __fastcall CcWaitForCurrentLazyWriterActivityHelper(__int64 a1, int *a2)
{
  int v3; // eax

  v3 = CcWaitForCurrentLazyWriterActivityInternal();
  if ( *a2 >= 0 && v3 < 0 )
    *a2 = v3;
  return 1;
}
