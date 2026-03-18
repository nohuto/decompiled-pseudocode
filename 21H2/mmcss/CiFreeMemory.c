/*
 * XREFs of CiFreeMemory @ 0x1C0004DEC
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B4E0 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C514 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C908 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
