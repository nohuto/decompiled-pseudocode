/*
 * XREFs of sub_1800E0120 @ 0x1800E0120
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0120(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v11; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  sub_1800462E4(&v11, a1);
  v3 = sub_180008448(v2, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v3[1], v4, (struct _TP_TIMER *)L"AudioServerPreStartStream");
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v8 = v5;
  if ( v5 >= 0 )
    v8 = 0;
  else
    sub_18004BD84((int)retaddr, 3242, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v5);
  sub_18000F690((__int64)pv, v6, v7);
  EtwEventActivityIdControl(4LL, v12);
  return v8;
}
