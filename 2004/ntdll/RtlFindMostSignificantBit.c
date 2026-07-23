/*
 * XREFs of RtlFindMostSignificantBit @ 0x180085490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR __cdecl RtlFindMostSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // rdx
  CCHAR result; // al

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
