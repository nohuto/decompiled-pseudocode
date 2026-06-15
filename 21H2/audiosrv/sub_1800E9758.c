/*
 * XREFs of sub_1800E9758 @ 0x1800E9758
 * Callers:
 *     sub_1800E9758 @ 0x1800E9758 (sub_1800E9758.c)
 *     sub_1800EA7C0 @ 0x1800EA7C0 (sub_1800EA7C0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E9758 @ 0x1800E9758 (sub_1800E9758.c)
 */

__int64 __fastcall sub_1800E9758(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rbx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800472E0((__int64)v6, 0x48uLL) )
  {
    sub_1800E9758(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    v7 = v6[8];
    if ( v7 )
    {
      if ( *(_QWORD *)v7 )
      {
        SetThreadpoolTimer(*(PTP_TIMER *)v7, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v7, 1);
        CloseThreadpoolTimer(*(PTP_TIMER *)v7);
      }
      v8 = *(std::_Ref_count_base **)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( v8 )
        sub_180052600(v8);
      v9 = *(std::_Ref_count_base **)(v7 + 16);
      if ( v9 )
        sub_180052600(v9);
      sub_18006A148((void *)v7);
    }
    v10 = v6[7];
    if ( v10 >= 8 )
      sub_1800472E0(v6[4], 2 * v10 + 2);
    v6[6] = 0LL;
    v6[7] = 7LL;
    *((_WORD *)v6 + 16) = 0;
  }
  return result;
}
