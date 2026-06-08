/*
 * XREFs of GetObjectTypeName @ 0x1C00071BC
 * Callers:
 *     AcpiParseCore @ 0x1C0027514 (AcpiParseCore.c)
 * Callees:
 *     <none>
 */

const char *__fastcall GetObjectTypeName(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return "INTEGER";
    case 1u:
      return "STRING";
    case 2u:
      return "BUFFER";
  }
  if ( a1 > 4u )
    return "UNKNOWN";
  return "PACKAGE";
}
