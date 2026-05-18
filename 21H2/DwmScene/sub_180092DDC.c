/*
 * XREFs of sub_180092DDC @ 0x180092DDC
 * Callers:
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_1800F5BE8 @ 0x1800F5BE8 (sub_1800F5BE8.c)
 */

__int64 __fastcall sub_180092DDC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F5BE8(v4, a2, &v6);
}
