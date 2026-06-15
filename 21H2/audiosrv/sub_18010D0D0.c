/*
 * XREFs of sub_18010D0D0 @ 0x18010D0D0
 * Callers:
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 *     sub_18010C578 @ 0x18010C578 (sub_18010C578.c)
 *     sub_18010CC1C @ 0x18010CC1C (sub_18010CC1C.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010D0D0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r14
  int v7; // ebx
  int v8; // edx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  __int128 v23; // [rsp+68h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v19 = a1 + 80;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v21 = v5;
  v17 = 0LL;
  v18 = 0LL;
  sub_1800C64A4((__int64 *)&v17, a3);
  v16 = 0LL;
  v6 = v17;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v17)(v17, &unk_18015E758, &v16);
  if ( v7 < 0 )
  {
    v8 = 191;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v7);
    sub_18000F708(&v16);
    sub_18000F708((__int64 *)&v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 48LL))(v16, &v23);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 194;
    goto LABEL_3;
  }
  try
  {
    sub_18010C578((__int64 **)(a1 + 160), (__int64)&v22, &v23, v11);
    v12 = v22;
    sub_1800C64A4((__int64 *)(v22 + 48), v6);
    *(_QWORD *)(v12 + 56) = *((_QWORD *)&v17 + 1);
    v14 = v18;
    *(_BYTE *)(v12 + 64) = v18;
  }
  catch ( std::bad_alloc )
  {
    sub_18004BD84(
      (int)retaddr,
      202,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      -2147024882);
    sub_18000F708(&v16);
    sub_18000F708((__int64 *)&v17);
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  sub_18010CC1C(v13, (__int64)&v23, v14);
  *(_OWORD *)(a1 + 136) = v23;
  v15 = sub_18010E270(a1);
  if ( v15 < 0 )
    sub_18006D26C(
      (int)retaddr,
      208,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v15);
  sub_18000F708(&v16);
  sub_18000F708((__int64 *)&v17);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
