/*
 * XREFs of DpiUnInitialize @ 0x1C02C32D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x1C02C2F60 (DpiCleanup.c)
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 0, a3);
}
