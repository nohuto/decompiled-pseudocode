/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A77470
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
