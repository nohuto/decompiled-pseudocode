/*
 * XREFs of sub_1800F69B8 @ 0x1800F69B8
 * Callers:
 *     sub_1800F6F40 @ 0x1800F6F40 (sub_1800F6F40.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F69B8(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v22[4]; // [rsp+50h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]

  v19 = 0LL;
  GetSystemTimePreciseAsFileTime(&v19);
  if ( (v19 & 0x8000000000000000uLL) != 0LL )
  {
    v11 = -2147483637;
    sub_18004BD84((int)retaddr, 59, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", -2147483637);
    return v11;
  }
  v9 = *a1;
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(
          v9,
          (unsigned int)v19 | (HIDWORD(v19) << 32),
          &v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = a1[2];
    v21 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 88LL))(v12, v18, &v21);
    v11 = v13;
    if ( v13 < 0 )
    {
      sub_18004BD84((int)retaddr, 67, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v13);
LABEL_13:
      sub_18000F708(&v21);
      goto LABEL_14;
    }
    v14 = a1[1];
    v20 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v14 + 88LL))(v14, v18, v21, &v20);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 56LL))(v20, v22);
      v11 = v15;
      if ( v15 >= 0 )
      {
        *a2 = v22[0];
        *a3 = v22[1];
        *a4 = v22[2];
        *a5 = v22[3];
        v11 = 0;
        goto LABEL_12;
      }
      v16 = 73;
    }
    else
    {
      v16 = 70;
    }
    sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v15);
LABEL_12:
    sub_18000F708(&v20);
    goto LABEL_13;
  }
  sub_18004BD84((int)retaddr, 62, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\hmdmanager.cpp", v10);
LABEL_14:
  sub_18000F708(&v18);
  return v11;
}
