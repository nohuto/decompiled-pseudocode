/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A75370
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
