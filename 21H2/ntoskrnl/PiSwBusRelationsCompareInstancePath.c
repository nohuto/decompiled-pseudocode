/*
 * XREFs of PiSwBusRelationsCompareInstancePath @ 0x1407709F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiSwBusRelationsCompareInstancePath(
        _RTL_AVL_TABLE *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString(a2, a3, 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
