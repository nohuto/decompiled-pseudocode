/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C000D550
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C00064C0 (Endpoint_TransferEventHandler.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000D328 (Bulk_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0017E20 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__m128i **a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (((*a1)[21].m128i_i64[0] & 0x4000000000000000LL) == 0 || (_DWORD)a2 != 199)
    && ((_mm_srli_si128((*a1)[21], 8).m128i_u8[0] & 0x20) == 0 || (_DWORD)a2 != 198) )
  {
    if ( (unsigned int)a2 > 0x24 )
      return 0;
    v2 = 0x150000045CLL;
    if ( !_bittest64(&v2, a2) )
      return 0;
  }
  return result;
}
