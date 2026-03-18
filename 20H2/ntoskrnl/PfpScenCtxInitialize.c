/*
 * XREFs of PfpScenCtxInitialize @ 0x1407BBC3C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
