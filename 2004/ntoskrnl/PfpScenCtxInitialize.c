/*
 * XREFs of PfpScenCtxInitialize @ 0x1407ADCFC
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
