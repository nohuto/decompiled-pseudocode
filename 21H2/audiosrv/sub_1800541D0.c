/*
 * XREFs of sub_1800541D0 @ 0x1800541D0
 * Callers:
 *     sub_180001520 @ 0x180001520 (sub_180001520.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *sub_1800541D0()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  InitializeCriticalSectionEx(&stru_18019EF00, 0, 0);
  qword_18019EF28 = 0LL;
  result = &stru_18019EF00;
  dword_18019EF50 = 10;
  xmmword_18019EF30 = 0LL;
  xmmword_18019EF40 = 0LL;
  return result;
}
