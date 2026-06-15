/*
 * XREFs of sub_180134610 @ 0x180134610
 * Callers:
 *     sub_180134870 @ 0x180134870 (sub_180134870.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060310 @ 0x180060310 (sub_180060310.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069C50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F06D0 @ 0x1800F06D0 (sub_1800F06D0.c)
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 *     sub_180137F48 @ 0x180137F48 (sub_180137F48.c)
 */

__int64 __fastcall sub_180134610(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a1 = off_18014B218;
  a1[1] = off_18014B2A0;
  a1[2] = off_180148268;
  sub_180137110(a1);
  v2 = a1[66];
  if ( v2 )
  {
    sub_1800472E0(v2, (a1[68] - v2) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[66] = 0LL;
    a1[67] = 0LL;
    a1[68] = 0LL;
  }
  sub_1800F06D0(a1 + 61);
  sub_180060310(v3, a1[59]);
  sub_1800472E0(a1[59], 0x38uLL);
  `eh vector destructor iterator'((char *)a1 + 272, 32LL, 6LL, (void (*)(void *))sub_180067CA0);
  v4 = a1[31];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( a1[30] )
    sub_180137F48();
  sub_18000F708(a1 + 27);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 7));
  v5 = a1[6];
  if ( v5 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_1800E3474((__int64)a1);
}
