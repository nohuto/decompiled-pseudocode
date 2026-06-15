/*
 * XREFs of sub_1800C4B80 @ 0x1800C4B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C4B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF

  v6 = (_QWORD *)a1;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioVolumeSetMasterVolumeLevelScalar");
  LODWORD(v6) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, v9, a3, a4);
  sub_18000F690((__int64)pv, v10, v11);
  return (unsigned int)v6;
}
