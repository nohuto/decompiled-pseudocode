/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A74370
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
