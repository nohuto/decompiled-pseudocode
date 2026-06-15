/*
 * XREFs of sub_1800019C0 @ 0x1800019C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001C6C @ 0x180001C6C (sub_180001C6C.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800019C0(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int128 v14; // xmm6
  void *v15; // rcx
  int v16; // eax
  void *v17; // rcx
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  void *v23; // rcx
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  int v26[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID *p_pv; // [rsp+B8h] [rbp-50h]
  void *v29; // [rsp+C0h] [rbp-48h] BYREF
  char v30; // [rsp+C8h] [rbp-40h]
  _BYTE v31[56]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v32; // [rsp+108h] [rbp+0h]
  __int128 v33; // [rsp+118h] [rbp+10h] BYREF
  void *retaddr; // [rsp+170h] [rbp+68h]

  v32 = *a3;
  v33 = v32;
  EtwEventActivityIdControl(4LL, &v33);
  sub_180008448(v8, sub_1800B6240);
  sub_1800085F0(v31);
  v9 = sub_180043F70(a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84(retaddr, 4154LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v9);
    goto LABEL_16;
  }
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
          ::pv,
          a2,
          0LL,
          0LL,
          &v24);
  v10 = v11;
  if ( v11 < 0 )
  {
    v20 = 4157LL;
LABEL_25:
    sub_18004BD84(retaddr, v20, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v11);
    goto LABEL_15;
  }
  if ( !a5 )
    goto LABEL_12;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
  v11 = sub_18006E5E0(
          *((_DWORD *)a3 + 12),
          *((_DWORD *)a3 + 14),
          *((_DWORD *)a3 + 32),
          v24,
          v13 == 1,
          0,
          0,
          0LL,
          0,
          0,
          (__int64)&v27,
          0LL,
          0LL,
          0LL,
          0LL);
  v10 = v11;
  if ( v11 < 0 )
  {
    v20 = 4180LL;
    goto LABEL_25;
  }
  v14 = v27;
  p_pv = &pv;
  pv = 0LL;
  v29 = 0LL;
  v30 = 1;
  v10 = sub_180048308(v24, 0LL, &v27, &v29);
  if ( v30 )
  {
    v15 = *p_pv;
    *p_pv = v29;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  if ( v10 < 0 )
  {
    v21 = (unsigned int)v10;
    v22 = 4184LL;
    goto LABEL_22;
  }
  v27 = v14;
  v16 = sub_18004AE9C(v24, 0, (_DWORD)pv, (unsigned int)&v27, 0, (__int64)v26, 0LL, 0LL, 0LL);
  v10 = v16;
  if ( v16 < 0 )
  {
    v21 = (unsigned int)v16;
    v22 = 4188LL;
LABEL_22:
    sub_18004BD84(retaddr, v22, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v21);
    v23 = pv;
    pv = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    goto LABEL_15;
  }
  v17 = pv;
  v18 = *((_DWORD *)pv + 1);
  pv = 0LL;
  *a5 = (unsigned int)(int)((double)v26[0] * 10000000.0 / (double)v18 + 0.5);
  if ( v17 )
    CoTaskMemFree(v17);
LABEL_12:
  if ( a6 )
  {
    v11 = sub_180001C6C(v24, v12, a6);
    v10 = v11;
    if ( v11 < 0 )
    {
      v20 = 4196LL;
      goto LABEL_25;
    }
  }
  v10 = 0;
LABEL_15:
  sub_18000F708(&v24);
LABEL_16:
  sub_18000F690(v31);
  EtwEventActivityIdControl(4LL, &v33);
  return (unsigned int)v10;
}
