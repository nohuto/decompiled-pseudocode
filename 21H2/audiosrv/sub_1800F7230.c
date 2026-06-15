/*
 * XREFs of sub_1800F7230 @ 0x1800F7230
 * Callers:
 *     sub_1800F6F4C @ 0x1800F6F4C (sub_1800F6F4C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800717A0 @ 0x1800717A0 (sub_1800717A0.c)
 *     sub_1800718D4 @ 0x1800718D4 (sub_1800718D4.c)
 *     sub_180071FF4 @ 0x180071FF4 (sub_180071FF4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F7230(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  BOOL v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = a3;
  v16 = a2;
  v14[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a3,
         0LL,
         0LL,
         v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 56LL))(v14[0]) != 0;
    v12 = 18;
    v8 = sub_1800718D4((__int64 *)(a1 + 16));
    v5 = sub_1800717A0(v8, &v16, &v12, &v17, &v18);
    v6 = v5;
    if ( v5 >= 0 )
    {
      sub_1800C64A4((__int64 *)(a1 + 24), a2);
      v13 = 0LL;
      sub_1800DA7C4(v9, (__int64)&v13);
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 80LL))(v13, *(_QWORD *)(a1 + 24), v10);
      sub_180071FF4(*(_QWORD *)(a1 + 16));
      *(_DWORD *)(a1 + 32) = 1;
      v6 = 0;
      sub_18000F708(&v13);
      goto LABEL_7;
    }
    v7 = 26;
  }
  else
  {
    v7 = 23;
  }
  sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dialogsession.cpp", v5);
LABEL_7:
  sub_18000F708(v14);
  return v6;
}
