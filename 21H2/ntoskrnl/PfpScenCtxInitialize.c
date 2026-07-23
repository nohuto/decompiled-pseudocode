/*
 * XREFs of PfpScenCtxInitialize @ 0x1407C055C
 * Callers:
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
