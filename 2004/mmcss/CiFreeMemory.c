/*
 * XREFs of CiFreeMemory @ 0x1C0004AFC
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000AE00 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C494 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C888 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
