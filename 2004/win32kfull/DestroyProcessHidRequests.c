/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0127BB0
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0127BC8 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
