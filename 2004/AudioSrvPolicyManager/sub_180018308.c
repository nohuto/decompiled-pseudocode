/*
 * XREFs of sub_180018308 @ 0x180018308
 * Callers:
 *     sub_180016FD0 @ 0x180016FD0 (sub_180016FD0.c)
 *     sub_180017100 @ 0x180017100 (sub_180017100.c)
 * Callees:
 *     sub_180019CA4 @ 0x180019CA4 (sub_180019CA4.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180018308(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r8

  v5 = 0;
  *a1 = 0LL;
  v6 = sub_180039DDC(136LL, &unk_18004FFC8);
  if ( v6 )
  {
    v7 = (_QWORD *)sub_180019CA4(v6);
    v8 = qword_18004FE68;
    v7[16] = (*a3 + 16LL) & -(__int64)(*a3 != 0LL);
    v7[15] = v8;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
