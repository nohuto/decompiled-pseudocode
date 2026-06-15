/*
 * XREFs of sub_18005AC34 @ 0x18005AC34
 * Callers:
 *     sub_1800591C4 @ 0x1800591C4 (sub_1800591C4.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005AC34(unsigned __int64 *a1)
{
  __int64 v2; // rcx
  int v3; // r9d
  int v4; // ebx
  int v5; // r9d
  int v7; // ebx
  __int64 *v8; // rax
  int v9; // eax
  int v10; // edx
  unsigned __int64 *v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 *v13; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall ***v14)(); // [rsp+80h] [rbp+17h]
  __int128 v15; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1)
    || (unsigned __int8)sub_18006C4AC(v2) && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&stru_18015BC78, &pClsid) < 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)sub_180022F30(a1, 0) )
  {
    v11 = a1;
    v12 = off_180154B98;
    v13 = a1;
    v14 = &v12;
    v4 = sub_18005B7B4((unsigned int)&v11, 0, (unsigned int)&v12, v3, 3);
    if ( v4 >= 0 )
    {
      if ( (unsigned int)sub_180047F60((__int64)a1) )
      {
        v13 = a1;
        v12 = off_180155C98;
        v14 = &v12;
        v4 = sub_18005B7B4((unsigned int)&v11, 1, (unsigned int)&v12, v5, 4);
        if ( v4 < 0 )
        {
          v10 = 1816;
          goto LABEL_12;
        }
      }
      return 0LL;
    }
    v10 = 1807;
  }
  else
  {
    v7 = sub_1800233B0(a1 + 207, 0LL);
    v8 = (__int64 *)sub_1800234A0(a1 + 19, 0LL);
    v9 = sub_180022EE0(v8, &xmmword_18015B810);
    v13 = a1;
    v12 = off_180154B98;
    v14 = &v12;
    v15 = xmmword_18015B810;
    v4 = sub_180059784(v7, &v15, 1, (int)&unk_18019D6E8, 1, v9 != -1, (__int64)&v12);
    if ( v4 >= 0 )
      return 0LL;
    v10 = 1745;
  }
LABEL_12:
  sub_18004BD84(
    (int)retaddr,
    v10,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v4);
  return (unsigned int)v4;
}
