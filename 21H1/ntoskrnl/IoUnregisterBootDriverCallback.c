/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A703F0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037EB50 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
