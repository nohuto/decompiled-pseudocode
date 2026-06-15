/*
 * XREFs of sub_180046210 @ 0x180046210
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

__int64 __fastcall sub_180046210(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp-28h] BYREF

  sub_1800462E4(v14, a1);
  v12 = 0LL;
  v5 = sub_180008448(v4, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"AudioServerGetAudioSession");
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 40LL))(a1, &v12);
  v10 = v7;
  if ( !v7 )
    *a2 = v12;
  if ( v7 < 0 )
    sub_18005E8F8("AudioServerGetAudioSession", 3002LL, (unsigned int)v7);
  sub_18000F690((__int64)pv, v8, v9);
  EtwEventActivityIdControl(4LL, v15);
  return v10;
}
