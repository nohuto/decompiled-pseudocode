/*
 * XREFs of sub_180001280 @ 0x180001280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int sub_180001280()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_18005A0C8 = 0LL;
  xmmword_18005A0D8 = 0LL;
  InitializeCriticalSectionEx(&stru_18005A0E8, 0, 0);
  byte_18005A038 = 1;
  xmmword_18005A110 = 0LL;
  xmmword_18005A120 = 0LL;
  xmmword_18005A130 = 0LL;
  xmmword_18005A140 = 0LL;
  return atexit(sub_180047180);
}
