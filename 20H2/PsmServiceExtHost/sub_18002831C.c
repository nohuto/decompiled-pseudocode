/*
 * XREFs of sub_18002831C @ 0x18002831C
 * Callers:
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180026FA4 @ 0x180026FA4 (sub_180026FA4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002831C(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // al
  unsigned int v7; // ebx

  sub_1800093A0(a1, 0);
  sub_180026FA4(a1);
  sub_18000A110(a1);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 - 16)
                                                                                                + 40LL)
                                                                                    + 80LL))(
         a1 + 488,
         *(unsigned int *)(a1 + 556),
         a1 + 24,
         *(unsigned int *)(a1 + 560),
         *(_QWORD *)(a1 - 32),
         a2);
  v7 = 0;
  if ( v6 )
    *a3 = *(_QWORD *)(a1 + 800);
  else
    v7 = -1073741394;
  sub_1800093A0(a1, 0);
  *(_QWORD *)(a1 + 648) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable(a1 + 680);
  sub_18000A110(a1);
  return v7;
}
