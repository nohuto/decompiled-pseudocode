/*
 * XREFs of PspGetJobLimitInformationValidFlags @ 0x140706448
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobLimitInformationValidFlags(int a1, int a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return 255LL;
  result = 6324223LL;
  if ( a2 == 144 )
    return 0x7FFFLL;
  return result;
}
