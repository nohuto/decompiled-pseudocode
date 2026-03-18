/*
 * XREFs of RtlTestBit @ 0x1402F66C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return _bittest((const signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
