/*
 * XREFs of sub_1C001C46C @ 0x1C001C46C
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001853C @ 0x1C001853C (sub_1C001853C.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0036B2C @ 0x1C0036B2C (sub_1C0036B2C.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C005C2E8 @ 0x1C005C2E8 (sub_1C005C2E8.c)
 */

__int64 __fastcall sub_1C001C46C(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+50h] [rbp-98h] BYREF
  _DWORD v12[2]; // [rsp+54h] [rbp-94h] BYREF
  unsigned __int16 v13; // [rsp+5Ch] [rbp-8Ch]
  int v14; // [rsp+64h] [rbp-84h]

  v6 = sub_1C0011220(a2);
  sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1768843588, *((_QWORD *)v6 + 145), *(unsigned __int16 *)(a3 + 4));
  sub_1C001D340(v12, 0LL, 84LL);
  if ( (sub_1C000F050(a1)[640] & 0x8000000) != 0 )
    sub_1C001853C(a1, 0x32u);
  v11 = 1;
  v7 = sub_1C0011220(a2);
  v8 = sub_1C000F050(a1);
  if ( *((_QWORD *)v8 + 533) )
    v9 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, int *))v8 + 533))(
           *((_QWORD *)v8 + 529),
           *((_QWORD *)v7 + 145),
           &v11);
  else
    v9 = -1073741822;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( v12[0] == 1 )
    {
      v6[705] = 1073807361;
    }
    else if ( v12[0] == 3 )
    {
      v6[705] = v12[1] != 0 ? 1073807365 : 1073807360;
    }
    sub_1C0018990(a1, a2, 2017740856, 0);
    sub_1C004A608(a1, *(unsigned __int16 *)(a3 + 4), 31, (unsigned int)&v11, 88, v9, v14, (__int64)aBusC, 6513, 0);
    sub_1C005C2E8(a1, &unk_1C00626D0, *(unsigned __int16 *)(a3 + 4), &v11, 88);
    sub_1C0036B2C(a1, a3, v13);
  }
  v6[355] &= ~0x40000000u;
  return v9;
}
