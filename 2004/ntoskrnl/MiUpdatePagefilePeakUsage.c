/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x1402D5284
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdatePagefilePeakUsage(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}
