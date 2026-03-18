/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x14037BB78
 * Callers:
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
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
