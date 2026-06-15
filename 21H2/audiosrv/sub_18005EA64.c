/*
 * XREFs of sub_18005EA64 @ 0x18005EA64
 * Callers:
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 * Callees:
 *     sub_18005E734 @ 0x18005E734 (sub_18005E734.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180068850 @ 0x180068850 (sub_180068850.c)
 */

__int64 __fastcall sub_18005EA64(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  int v5; // ebx

  v5 = sub_18005E734(a1, a2, a3);
  if ( v5 < 0 || (v5 = sub_180068850(a1, a2), v5 < 0) )
    sub_18005E8F8((__int64)"CMeterHardware::Initialize", 381, v5);
  return (unsigned int)v5;
}
