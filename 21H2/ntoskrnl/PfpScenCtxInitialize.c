/*
 * XREFs of PfpScenCtxInitialize @ 0x14085094C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
