/*
 * XREFs of sub_18006B489 @ 0x18006B489
 * Callers:
 *     sub_18006B47D @ 0x18006B47D (sub_18006B47D.c)
 *     sub_18006B508 @ 0x18006B508 (sub_18006B508.c)
 *     sub_18006B5A5 @ 0x18006B5A5 (sub_18006B5A5.c)
 *     sub_18006B5B7 @ 0x18006B5B7 (sub_18006B5B7.c)
 *     sub_18006BA0E @ 0x18006BA0E (sub_18006BA0E.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B489(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_180195808, v4);
  return v5(a1, a2, a3, a4);
}
