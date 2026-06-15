/*
 * XREFs of sub_1800F0AF8 @ 0x1800F0AF8
 * Callers:
 *     sub_1800F0A20 @ 0x1800F0A20 (sub_1800F0A20.c)
 *     sub_1800F0A90 @ 0x1800F0A90 (sub_1800F0A90.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     j_unknown_libname_207 @ 0x18006FC2C (j_unknown_libname_207.c)
 *     sub_1800701D0 @ 0x1800701D0 (sub_1800701D0.c)
 *     sub_1800712C0 @ 0x1800712C0 (sub_1800712C0.c)
 *     sub_1800713A8 @ 0x1800713A8 (sub_1800713A8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 *     sub_1800BC750 @ 0x1800BC750 (sub_1800BC750.c)
 *     sub_1800EFF1C @ 0x1800EFF1C (sub_1800EFF1C.c)
 *     sub_1800F0078 @ 0x1800F0078 (sub_1800F0078.c)
 *     sub_1800F03E8 @ 0x1800F03E8 (sub_1800F03E8.c)
 *     sub_1800F0470 @ 0x1800F0470 (sub_1800F0470.c)
 *     sub_1800F04DC @ 0x1800F04DC (sub_1800F04DC.c)
 *     sub_1800F0540 @ 0x1800F0540 (sub_1800F0540.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 *     sub_1800F1624 @ 0x1800F1624 (sub_1800F1624.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall sub_1800F0AF8(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 **a6)
{
  struct _RTL_CRITICAL_SECTION *v7; // r15
  __int64 *v8; // r12
  void **v9; // rbx
  __int64 *v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  char *v14; // r10
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  __int64 *v22; // r13
  __int64 **v23; // rdx
  __int64 *v24; // rdi
  __int64 **v25; // rdx
  __int64 *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  void **v29; // rdi
  __int64 *v30; // rcx
  void ***v31; // rdx
  unsigned int v32; // [rsp+40h] [rbp-D8h] BYREF
  void **v33; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-C8h] BYREF
  SIZE_T v35; // [rsp+58h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-B0h] BYREF
  __int64 **v38; // [rsp+70h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+88h] [rbp-90h]
  _QWORD v42[8]; // [rsp+90h] [rbp-88h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h]

  v40 = a1;
  v32 = a2;
  v34 = a3;
  v39 = a4;
  v37 = a5;
  v38 = a6;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v41 = v7;
  v42[0] = &v34;
  v42[1] = &v39;
  v42[2] = &v37;
  v42[3] = &v32;
  v8 = (__int64 *)(a1 + 56);
  sub_1800713A8((__int64 **)&v33, *(__int64 **)(a1 + 56), *(__int64 **)(a1 + 64), (__int64)v42);
  v9 = v33;
  if ( v33 != *(void ***)(a1 + 64) )
  {
    sub_1800F03E8(&v38, *((__int64 ***)*v33 + 6), *((__int64 ***)*v33 + 7), &v37);
    if ( v38 == *((__int64 ***)*v9 + 7) )
    {
      v38 = (__int64 **)*v9;
      sub_1800F0470(&v33, &v37, (__int64 *)&v38);
      v29 = v33;
      v30 = (__int64 *)((char *)*v9 + 48);
      v31 = (void ***)*((_QWORD *)*v9 + 7);
      if ( *((void ****)*v9 + 8) == v31 )
      {
        sub_1800EFF1C(v30, (__int64)v31, (__int64 *)&v33);
        v26 = (__int64 *)v33;
      }
      else
      {
        v26 = 0LL;
        *v31 = v33;
        v30[1] += 8LL;
      }
      *a6 = (__int64 *)v29;
      if ( !v26 )
        goto LABEL_43;
      sub_18000F708(v26);
LABEL_42:
      sub_18006A148(v26);
LABEL_43:
      if ( v7 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
    sub_18004BD84(
      (int)retaddr,
      452,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      -2147418113);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147549183LL;
  }
  sub_1800F04DC(&v33);
  v10 = (__int64 *)v33;
  sub_18002A504(v33, 0LL);
  v36 = v39;
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)v39 + v11) );
  *v10 = 0LL;
  if ( v11 + 1 < v11 )
  {
    v13 = -2147024362;
LABEL_30:
    sub_18004BD84((int)retaddr, 398, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v13);
    sub_1800F070C((__int64)v10);
    sub_18006A148(v10);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v13;
  }
  *v10 = 0LL;
  v13 = sub_1800BC750(v11 + 1, 2uLL, &v35);
  if ( v13 >= 0 )
  {
    v13 = sub_1800BB868(v12, 0, v35, (void **)v10);
    v14 = (char *)v36;
  }
  if ( v13 < 0 )
    goto LABEL_30;
  sub_18002A0F0((char *)*v10, v11 + 1, v14, v11);
  *((_DWORD *)v10 + 2) = v32;
  *((_DWORD *)v10 + 3) = v34;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37);
  *((_DWORD *)v10 + 4) = v15;
  v16 = *(_QWORD *)qword_18019EE50;
  if ( v34 == 4 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64 *))(v16 + 32))(
            qword_18019EE50,
            v39,
            v15,
            v10 + 3);
    v18 = v17;
    if ( v17 < 0 )
    {
      sub_18004BD84((int)retaddr, 404, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v17);
      sub_1800F070C((__int64)v10);
      sub_18006A148(v10);
      if ( v7 )
        LeaveCriticalSection(v7);
      return v18;
    }
    goto LABEL_17;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(v16 + 40))(
          qword_18019EE50,
          v32,
          v34,
          v15,
          v10 + 3);
  v21 = v20;
  if ( v20 >= 0 )
  {
LABEL_17:
    sub_1800F0540(&v36, (__int64 *)v10[3], (__int64 *)v10[4]);
    sub_1800F1624(v10 + 3, &v36, v36, v10[4]);
    v36 = v10;
    sub_1800F0470(&v35, &v37, (__int64 *)&v36);
    v22 = (__int64 *)v35;
    v23 = (__int64 **)v10[7];
    if ( (__int64 **)v10[8] == v23 )
    {
      sub_1800EFF1C(v10 + 6, (__int64)v23, (__int64 *)&v35);
      v24 = (__int64 *)v35;
    }
    else
    {
      v24 = 0LL;
      v35 = 0LL;
      *v23 = v22;
      v10[7] += 8LL;
    }
    v25 = (__int64 **)v8[1];
    if ( (__int64 **)v8[2] == v25 )
    {
      sub_1800F0078(v8, (__int64)v25, (__int64 *)&v33);
      v26 = (__int64 *)v33;
    }
    else
    {
      v26 = 0LL;
      v33 = 0LL;
      *v25 = v10;
      v8[1] += 8LL;
    }
    sub_1800712C0(v42, v40);
    v27 = sub_1800701D0((__int64)v42);
    if ( v27 < 0 )
      sub_18006D26C((int)retaddr, 435, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v27);
    j_unknown_libname_207((__int64)v42, v28);
    *v38 = v22;
    if ( v24 )
    {
      sub_18000F708(v24);
      sub_18006A148(v24);
    }
    if ( !v26 )
      goto LABEL_43;
    sub_1800F070C((__int64)v26);
    goto LABEL_42;
  }
  sub_18004BD84((int)retaddr, 408, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v20);
  sub_1800F070C((__int64)v10);
  sub_18006A148(v10);
  if ( v7 )
    LeaveCriticalSection(v7);
  return v21;
}
