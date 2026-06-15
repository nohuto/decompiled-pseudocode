/*
 * XREFs of sub_1800CD1A0 @ 0x1800CD1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD1A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  v6 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioSessionSetIconPath");
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 208LL))(v3, a2, a3);
  sub_18000F690((__int64)pv, v8, v9);
  return (unsigned int)v3;
}
