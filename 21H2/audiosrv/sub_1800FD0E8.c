/*
 * XREFs of sub_1800FD0E8 @ 0x1800FD0E8
 * Callers:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FD274 @ 0x1800FD274 (sub_1800FD274.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800FD0E8(__int64 a1, __int64 a2)
{
  bool v2; // bl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-10h]
  __int64 v6; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 0LL, &v6) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, &unk_180172DA8, pvar) >= 0
      && LOWORD(pvar[0]) == 11 )
    {
      v2 = LOWORD(pvar[1]) == 0xFFFF;
    }
    PropVariantClear(pvar);
  }
  sub_18000F708(&v6);
  return v2;
}
