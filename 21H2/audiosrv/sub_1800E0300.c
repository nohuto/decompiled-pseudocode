/*
 * XREFs of sub_1800E0300 @ 0x1800E0300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0300(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioServerRequestSpatialDynamicObjects");
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)qword_18019F850 + 48LL))(
         qword_18019F850,
         a2,
         a3,
         a4);
  v12 = v9;
  if ( v9 < 0 )
    sub_18005E8F8((__int64)"AudioServerRequestSpatialDynamicObjects", 5564, v9);
  sub_18000F690((__int64)pv, v10, v11);
  return v12;
}
