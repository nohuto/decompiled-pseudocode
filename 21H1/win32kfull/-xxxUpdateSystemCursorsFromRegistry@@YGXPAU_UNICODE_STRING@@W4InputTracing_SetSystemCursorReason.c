/*
 * XREFs of ?xxxUpdateSystemCursorsFromRegistry@@YGXPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DC8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
 */

int __fastcall xxxUpdateSystemCursorsFromRegistry(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 19; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, i, a2);
  return result;
}
