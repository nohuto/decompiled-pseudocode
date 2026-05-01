/*
 * XREFs of sub_180005AF0 @ 0x180005AF0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_180005BB4 @ 0x180005BB4 (sub_180005BB4.c)
 *     sub_180005C04 @ 0x180005C04 (sub_180005C04.c)
 *     sub_180005C38 @ 0x180005C38 (sub_180005C38.c)
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006B648 @ 0x18006B648 (sub_18006B648.c)
 */

__int64 __fastcall sub_180005AF0(__int64 *P)
{
  __int64 v2; // rcx

  if ( P[178] )
    sub_18006B648(P);
  if ( P[107] )
  {
    (*(void (**)(void))(*(_QWORD *)(P[6] + 40) + 176LL))();
    P[107] = 0LL;
  }
  v2 = P[132];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(P[6] + 40) + 192LL))(v2, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(P[6] + 40) + 176LL))(P[132]);
    P[132] = 0LL;
  }
  sub_180005C38(P);
  sub_180006AB4(P);
  sub_180005BB4(P);
  sub_180005C04(P[7], 0xFFFFFFFFLL, 0LL);
  return sub_1800265B0(P);
}
