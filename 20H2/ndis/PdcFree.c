/*
 * XREFs of PdcFree @ 0x1C01294F8
 * Callers:
 *     PdcPortOpenCommon @ 0x1C0129560 (PdcPortOpenCommon.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
