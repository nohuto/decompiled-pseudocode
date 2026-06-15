/*
 * XREFs of sub_180061CC0 @ 0x180061CC0
 * Callers:
 *     StartAddress @ 0x180061C30 (StartAddress.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 *     sub_180061E00 @ 0x180061E00 (sub_180061E00.c)
 *     sub_180062110 @ 0x180062110 (sub_180062110.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180061CC0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  void *v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // r9
  unsigned int v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  if ( !a2 )
    sub_180061D94(1LL, 2147500037LL, 0LL, a4);
  v5 = (void *)sub_18006A18C(544LL, &unk_18019F848);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x220uLL);
    v5 = (void *)sub_180062110(v6);
  }
  qword_18019E678 = (__int64)v5;
  if ( !v5 )
    return 14LL;
  v7 = sub_180061E00(a1);
  if ( !v7 )
  {
    sub_180061D94(4LL, 0LL, 0LL, v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E678 + 104LL))(qword_18019E678);
  }
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v14 = 0;
    v12 = (int *)&v10;
    v10 = v7;
    v13 = 4;
    sub_1800521E8((__int64)&dword_18019C4B8, byte_180169B60, 0LL, 0LL, 3, (__int64)v11);
  }
  return v7;
}
