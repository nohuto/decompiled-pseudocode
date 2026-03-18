/*
 * XREFs of Endpoint_HaltedCompletionCode @ 0x1C0006D5C
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006B04 (Control_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000AE90 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0040AA8 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_HaltedCompletionCode(__m128i **a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 1;
  if ( (!_bittest64((*a1)[21].m128i_i64, 0x3Eu) || (_DWORD)a2 != 199)
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
