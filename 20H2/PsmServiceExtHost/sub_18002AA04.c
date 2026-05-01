/*
 * XREFs of sub_18002AA04 @ 0x18002AA04
 * Callers:
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800299B8 @ 0x1800299B8 (sub_1800299B8.c)
 */

__int64 __fastcall sub_18002AA04(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9
  __int64 v3; // rbx

  result = sub_1800299B8(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 776) + 88LL);
    sub_1800223EC(v3);
    *(_DWORD *)(v3 + 340) &= ~4u;
    sub_1800260A0(v3);
    return RtlWakeConditionVariable(v3 + 320);
  }
  return result;
}
