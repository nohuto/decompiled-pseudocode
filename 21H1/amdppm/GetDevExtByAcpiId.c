/*
 * XREFs of GetDevExtByAcpiId @ 0x1C0002C60
 * Callers:
 *     AcpiParseProcessorContainer @ 0x1C0026C7C (AcpiParseProcessorContainer.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetDevExtByAcpiId(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_1C0013410; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_1C0013410 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 5) == a1 )
      break;
  }
  return result;
}
