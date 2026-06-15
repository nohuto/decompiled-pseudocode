/*
 * XREFs of sub_1800E0070 @ 0x1800E0070
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800462E4 @ 0x1800462E4 (sub_1800462E4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0070(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]

  sub_1800462E4(&v11, a1);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 160LL))(
         a1,
         *(_QWORD *)(a2 + 544),
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    v9 = 0;
  else
    sub_18004BD84((int)retaddr, 4894, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v8);
  EtwEventActivityIdControl(4LL, v12);
  return v9;
}
