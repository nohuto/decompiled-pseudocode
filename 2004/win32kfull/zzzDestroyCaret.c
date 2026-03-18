/*
 * XREFs of zzzDestroyCaret @ 0x1C005DB20
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C008A640 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalDestroyCaret @ 0x1C005FD5C (zzzInternalDestroyCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0090E5C (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 zzzDestroyCaret()
{
  if ( !(unsigned int)UT_CaretSet(0LL) )
    return 0LL;
  zzzInternalDestroyCaret();
  return 1LL;
}
