/*
 * XREFs of sub_1800D9830 @ 0x1800D9830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D9830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(
    pv,
    (struct _TP_TIMER *)v5[1],
    v6,
    (struct _TP_TIMER *)L"PolicyConfigGetSpatialSpeakerProtectionOverrideValue");
  LODWORD(a3) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)qword_18019EED0 + 296LL))(
                  qword_18019EED0,
                  a2,
                  a3);
  sub_18000F690((__int64)pv, v7, v8);
  return (unsigned int)a3;
}
