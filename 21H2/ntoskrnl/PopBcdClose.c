/*
 * XREFs of PopBcdClose @ 0x14081D368
 * Callers:
 *     PopAdaptiveInitializeBootContext @ 0x140AF3434 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
