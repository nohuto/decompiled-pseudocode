/*
 * XREFs of TmIsTransactionActive @ 0x1403CD700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
