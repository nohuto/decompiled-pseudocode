/*
 * XREFs of PfpScenCtxInitialize @ 0x1407AAB9C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
