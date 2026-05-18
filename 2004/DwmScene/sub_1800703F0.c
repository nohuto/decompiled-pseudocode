/*
 * XREFs of sub_1800703F0 @ 0x1800703F0
 * Callers:
 *     sub_180071280 @ 0x180071280 (sub_180071280.c)
 * Callees:
 *     _Xtime_get_ticks @ 0x18011FA92 (_Xtime_get_ticks.c)
 */

bool __fastcall sub_1800703F0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  double v5; // xmm0_8
  __int64 v6; // rax
  int v7; // r8d
  __int128 v8; // rax
  bool result; // al

  v4 = 100 * Xtime_get_ticks();
  v5 = (double)(int)*a2;
  v6 = 864000000000000LL;
  if ( v5 <= 864000.0 )
    v6 = 1000000000LL * *a2;
  v7 = v4 + v6;
  v8 = (v4 + v6) * (__int128)0x112E0BE826D694B3LL;
  result = v5 > 864000.0;
  *((_QWORD *)&v8 + 1) = (*((_QWORD *)&v8 + 1) >> 63) + (*((__int64 *)&v8 + 1) >> 26);
  *(_QWORD *)a1 = *((_QWORD *)&v8 + 1);
  *(_DWORD *)(a1 + 8) = v7 - 1000000000 * DWORD2(v8);
  return result;
}
