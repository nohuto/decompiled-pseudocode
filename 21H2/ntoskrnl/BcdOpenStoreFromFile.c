/*
 * XREFs of BcdOpenStoreFromFile @ 0x140A1CA9C
 * Callers:
 *     BapdpProcessBCDCache @ 0x140B1C78C (BapdpProcessBCDCache.c)
 * Callees:
 *     BcdOpenStore @ 0x1408125C4 (BcdOpenStore.c)
 */

__int64 __fastcall BcdOpenStoreFromFile(unsigned __int16 *a1, __int64 *a2)
{
  if ( a1 )
    return BcdOpenStore(a1, 0, a2);
  else
    return 3221225711LL;
}
