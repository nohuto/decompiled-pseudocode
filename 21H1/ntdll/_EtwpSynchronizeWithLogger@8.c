/*
 * XREFs of _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44
 * Callers:
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 *     _EtwpIncrementUmLoggerFile@16 @ 0x4B381859 (_EtwpIncrementUmLoggerFile@16.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 */

int __fastcall EtwpSynchronizeWithLogger(_DWORD *a1, int a2)
{
  int result; // eax
  int v5; // [esp-8h] [ebp-14h]

  v5 = a1[24];
  a1[55] |= a2;
  NtSetEvent(v5, 0);
  ZwWaitForSingleObject(a1[25], 0, 0);
  result = a1[8];
  a1[55] &= ~a2;
  a1[8] = 0;
  return result;
}
