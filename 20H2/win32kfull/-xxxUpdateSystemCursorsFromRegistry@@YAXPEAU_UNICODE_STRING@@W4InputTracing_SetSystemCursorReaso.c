/*
 * XREFs of ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C007A444
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0079A50 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 */

unsigned __int8 *__fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1, unsigned int a2)
{
  signed int i; // ebx
  unsigned __int8 *result; // rax

  for ( i = 0; i < 19; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, i, a2);
  return result;
}
