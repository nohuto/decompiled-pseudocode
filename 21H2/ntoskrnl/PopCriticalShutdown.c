/*
 * XREFs of PopCriticalShutdown @ 0x1408E7854
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 */

int PopCriticalShutdown()
{
  __int64 v1; // [rsp+30h] [rbp-38h] BYREF
  int v2; // [rsp+38h] [rbp-30h]
  _DWORD v3[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v1 = 0xC000000400000006uLL;
  v4 = 0LL;
  v3[1] = 128;
  v3[0] = 1;
  PopCriticalShutdownInProgress = 1;
  return PopExecutePowerAction((__int64)v3, 0, &v1, 5, 1u);
}
