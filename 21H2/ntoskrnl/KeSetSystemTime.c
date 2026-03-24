/*
 * XREFs of KeSetSystemTime @ 0x1403A7A48
 * Callers:
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140998FC8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1402ECF00 (KeGenericCallDpc.c)
 */

char __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v4[0] = 0;
  v6 = 0LL;
  v5 = a1;
  *(_QWORD *)&v6 = a2;
  v7 = 0LL;
  v4[1] = a3;
  return KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v4);
}
