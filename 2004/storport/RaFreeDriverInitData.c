/*
 * XREFs of RaFreeDriverInitData @ 0x1C0033490
 * Callers:
 *     RaDeleteDriver @ 0x1C0078CA0 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFreeDriverInitData(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x49486152u);
}
