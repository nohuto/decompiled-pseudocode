/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140B316B0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
