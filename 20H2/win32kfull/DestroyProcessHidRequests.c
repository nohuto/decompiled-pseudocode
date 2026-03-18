/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0129A30
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0129A48 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
