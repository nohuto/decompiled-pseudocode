/*
 * XREFs of sub_1800591C4 @ 0x1800591C4
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 * Callees:
 *     sub_180047F60 @ 0x180047F60 (sub_180047F60.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800591C4(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 56LL))(a1) )
    goto LABEL_6;
  v2 = sub_18005B9E8(a1, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = 1409;
  }
  else
  {
    if ( !(unsigned int)sub_180047F60((__int64)a1) || (v2 = sub_18005B9E8(a1, 1LL), v3 = v2, v2 >= 0) )
    {
      v3 = 0;
      goto LABEL_5;
    }
    v7 = 1413;
  }
  sub_18004BD84(
    (int)retaddr,
    v7,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v2);
LABEL_5:
  if ( v3 < 0 )
  {
    v8 = 2194;
LABEL_19:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v3);
    return (unsigned int)v3;
  }
LABEL_6:
  v3 = sub_18005AC34(a1);
  if ( v3 < 0 )
  {
    v8 = 2195;
    goto LABEL_19;
  }
  v11 = xmmword_18015BBA8;
  v3 = sub_180059458(a1, 0LL, &v11);
  if ( v3 < 0 )
  {
    v8 = 2196;
    goto LABEL_19;
  }
  v11 = xmmword_18015BC68;
  v3 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int128 *, _QWORD))sub_1800592F4)(a1, v4, &v11, 0LL);
  if ( v3 < 0 )
  {
    v8 = 2197;
    goto LABEL_19;
  }
  v11 = xmmword_18015BC58;
  v3 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int128 *, __int64))sub_1800592F4)(a1, v5, &v11, 1LL);
  if ( v3 < 0 )
  {
    v8 = 2198;
    goto LABEL_19;
  }
  v11 = xmmword_18015BBF8;
  v3 = sub_180059458(a1, 0LL, &v11);
  if ( v3 < 0 )
  {
    v8 = 2199;
    goto LABEL_19;
  }
  if ( !a1[54] )
    return 0LL;
  v11 = xmmword_18015BBA8;
  v9 = sub_180059458(a1, 3LL, &v11);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  sub_18004BD84(
    (int)retaddr,
    2202,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v9);
  return v10;
}
