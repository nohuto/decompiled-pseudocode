/*
 * XREFs of PopBcdOpen @ 0x14081D3A0
 * Callers:
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 *a1)
{
  return BcdOpenStore(0LL, 2u, a1);
}
