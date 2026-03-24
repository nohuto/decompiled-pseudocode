/*
 * XREFs of CiFreeMemory @ 0x1C0004B3C
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B170 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C7D8 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000CCC4 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
