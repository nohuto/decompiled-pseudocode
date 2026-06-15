/*
 * XREFs of sub_1800DE1D0 @ 0x1800DE1D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DE1D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v15; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+78h] [rbp-30h] BYREF

  sub_1800462E4(&v15, a1);
  v7 = sub_180008448(v6, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioServerGetChannelVolume");
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  v12 = v9;
  if ( v9 < 0 )
    sub_18005E8F8((__int64)"AudioServerGetChannelVolume", 3528, v9);
  sub_18000F690((__int64)pv, v10, v11);
  EtwEventActivityIdControl(4LL, v16);
  return v12;
}
