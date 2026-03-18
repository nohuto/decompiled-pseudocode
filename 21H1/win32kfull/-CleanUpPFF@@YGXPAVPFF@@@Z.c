/*
 * XREFs of ?CleanUpPFF@@YGXPAVPFF@@@Z @ 0x2214F4
 * Callers:
 *     <none>
 * Callees:
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ @ 0x221DA8 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ.c)
 */

void __stdcall CleanUpPFF(struct PFF *a1)
{
  struct PFF *v1; // [esp+0h] [ebp-8h] BYREF

  v1 = a1;
  PFFOBJ::vPFFC_DeleteAndCleanup((PFFOBJ *)&v1);
}
