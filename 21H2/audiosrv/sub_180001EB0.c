/*
 * XREFs of sub_180001EB0 @ 0x180001EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180001EB0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  _BYTE pv[56]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v14; // [rsp+68h] [rbp-60h]
  __int128 v15; // [rsp+78h] [rbp-50h]
  __int128 v16; // [rsp+88h] [rbp-40h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a1 )
    v8 = *(_OWORD *)(a1 + 280);
  else
    v8 = xmmword_18015B730;
  v14 = v8;
  v15 = v8;
  v16 = v8;
  EtwEventActivityIdControl(4LL, &v16);
  sub_180008448(v9, sub_1800B6240);
  sub_1800085F0(pv);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 192LL))(a1, a2, a3, a4);
  v11 = v10;
  if ( v10 < 0 )
    sub_18004BD84(retaddr, 3570LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v10);
  else
    v11 = 0;
  sub_18000F690(pv);
  EtwEventActivityIdControl(4LL, &v16);
  return v11;
}
