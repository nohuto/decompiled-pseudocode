/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A712C0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
