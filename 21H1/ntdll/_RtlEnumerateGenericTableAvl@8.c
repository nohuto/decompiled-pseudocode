/*
 * XREFs of _RtlEnumerateGenericTableAvl@8 @ 0x4B2AB820
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEnumerateGenericTableWithoutSplayingAvl@8 @ 0x4B2AB850 (_RtlEnumerateGenericTableWithoutSplayingAvl@8.c)
 */

PVOID __cdecl RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  PVOID *p_RestartKey; // eax

  p_RestartKey = (PVOID *)&Table->RestartKey;
  if ( Restart )
    *p_RestartKey = 0;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, p_RestartKey);
}
