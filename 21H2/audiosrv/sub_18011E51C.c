/*
 * XREFs of sub_18011E51C @ 0x18011E51C
 * Callers:
 *     sub_18011E704 @ 0x18011E704 (sub_18011E704.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011E51C(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  bool v6; // [rsp+20h] [rbp-48h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v9 = xmmword_18016D168;
  v10 = 2;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 48LL))(
         *(_QWORD *)(a1 + 40),
         &v9,
         pvar);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = 0;
    v4 = sub_180058F74(a1, &v6);
    if ( v4 < 0 )
      sub_18006D26C(
        (int)retaddr,
        3502,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v4);
    v3 = 0;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      3499,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v2);
  }
  PropVariantClear(pvar);
  return v3;
}
