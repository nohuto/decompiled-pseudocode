/*
 * XREFs of sub_1800C4940 @ 0x1800C4940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C4940(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (_QWORD *)a1;
  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"AudioVolumeQueryHardwareSupport");
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 192LL))(*v3, a2);
  sub_18000F690((__int64)pv, v6, v7);
  return (unsigned int)v3;
}
