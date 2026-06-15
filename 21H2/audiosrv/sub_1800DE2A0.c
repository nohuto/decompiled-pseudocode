/*
 * XREFs of sub_1800DE2A0 @ 0x1800DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_180043F70 @ 0x180043F70 (sub_180043F70.c)
 *     sub_180045410 @ 0x180045410 (sub_180045410.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006E470 @ 0x18006E470 (sub_18006E470.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800DD7D0 @ 0x1800DD7D0 (sub_1800DD7D0.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DE2A0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int128 v22; // xmm6
  unsigned __int16 *v23; // rax
  void *v24; // rdx
  int v25; // edx
  int v26; // eax
  __int128 v27; // xmm6
  __int64 v28; // rbx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // r9d
  int v33; // edx
  unsigned __int16 *v34; // rax
  void *v35; // rdx
  __int64 v36; // rdi
  double v37; // xmm6_8
  __int128 v38; // xmm8
  void *v39; // rdx
  int v40; // eax
  __int128 v41; // xmm7
  int v42; // eax
  int v43; // edx
  unsigned __int16 *v44; // rax
  void *v45; // rdx
  int v46; // r9d
  void *v47; // rdx
  void *v48; // rcx
  void *v49; // rcx
  unsigned __int16 *v50; // r9
  int v51; // r8d
  int v52; // edx
  void *v53; // rax
  void *v54; // rcx
  void *v55; // rcx
  __int64 v56; // rbx
  __int128 v58; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v59; // [rsp+98h] [rbp-70h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v62[2]; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID pv[2]; // [rsp+C8h] [rbp-40h] BYREF
  void *Src[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v65; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v67[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v68; // [rsp+118h] [rbp+10h] BYREF
  __int64 v69; // [rsp+128h] [rbp+20h] BYREF
  LPVOID v70; // [rsp+130h] [rbp+28h] BYREF
  __int128 v71; // [rsp+138h] [rbp+30h] BYREF
  __int64 v72; // [rsp+148h] [rbp+40h]
  __int128 v73; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v74; // [rsp+168h] [rbp+60h]
  struct _TP_TIMER *v75[7]; // [rsp+178h] [rbp+70h] BYREF
  __int128 v76; // [rsp+1B0h] [rbp+A8h]
  __int128 v77; // [rsp+1C0h] [rbp+B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h]

  v76 = *(_OWORD *)a3;
  v77 = v76;
  EtwEventActivityIdControl(4LL, &v77);
  v9 = sub_180008448(v8, sub_1800B6240);
  sub_1800085F0(v75, (struct _TP_TIMER *)v9[1], v10, (struct _TP_TIMER *)L"AudioServerGetCurrentSharedModeEnginePeriod");
  v11 = sub_180043F70(a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v60 = 0LL;
    v15 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, unsigned __int64 **))(*(_QWORD *)::pv + 24LL))(
            ::pv,
            a2,
            0LL,
            0LL,
            &v60);
    v12 = v15;
    if ( v15 < 0 )
    {
      sub_18004BD84((int)retaddr, 4307, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v15);
LABEL_84:
      sub_18000F708((__int64 *)&v60);
      goto LABEL_85;
    }
    v70 = 0LL;
    *(_QWORD *)&v58 = &v70;
    *((_QWORD *)&v58 + 1) = 0LL;
    LOBYTE(v59) = 1;
    v12 = (*(__int64 (__fastcall **)(unsigned __int64, char *))(*(_QWORD *)v60[2] + 40LL))(v60[2], (char *)&v58 + 8);
    if ( (_BYTE)v59 )
      sub_18002A504((void **)v58, *((void **)&v58 + 1));
    if ( v12 < 0 )
    {
      v16 = v12;
      v17 = 4310;
LABEL_11:
      sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v16);
      goto LABEL_82;
    }
    v18 = (*(__int64 (__fastcall **)(unsigned __int64 *))(*v60 + 56))(v60);
    v19 = sub_18006E5E0(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            v60,
            v18 == 1,
            0,
            *(_DWORD *)(a3 + 52),
            0LL,
            0,
            0,
            &v66,
            &v65,
            &v68,
            0LL,
            0LL);
    v12 = v19;
    if ( v19 < 0 )
    {
      v16 = v19;
      v17 = 4331;
      goto LABEL_11;
    }
    v69 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
            qword_18019EE50,
            v70,
            &v69);
    v12 = v20;
    if ( v20 < 0 )
    {
      sub_18004BD84((int)retaddr, 4337, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v20);
LABEL_81:
      sub_18000F708(&v69);
LABEL_82:
      if ( v70 )
        CoTaskMemFree(v70);
      goto LABEL_84;
    }
    v67[0] = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v69 + 80LL))(v69, &v71);
    v22 = v66;
    if ( v21 >= 0 )
    {
      v59 = v67;
      v73 = v66;
      v74 = v67;
      sub_18006E470((__int64)&v58, v71, *((__int64 *)&v71 + 1), (__int64)&v73);
    }
    Src[0] = 0LL;
    v62[0] = 0LL;
    *((_QWORD *)&v58 + 1) = 0LL;
    LOBYTE(v59) = 1;
    if ( v67[0] )
    {
      *(_QWORD *)&v58 = v62;
      v23 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67[0] + 48LL))(v67[0]);
      v12 = sub_180048714(v23, (_QWORD *)&v58 + 1);
      if ( (_BYTE)v59 )
      {
        v24 = *(void **)v58;
        *(_QWORD *)v58 = *((_QWORD *)&v58 + 1);
        if ( v24 )
          CoTaskMemFree(v24);
      }
      if ( v12 < 0 )
      {
        v25 = 4359;
LABEL_72:
        sub_18004BD84((int)retaddr, v25, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
        goto LABEL_74;
      }
      *(_QWORD *)&v66 = 0LL;
      v26 = sub_18001F490(
              (unsigned __int16 *)v62[0],
              (unsigned int)*((unsigned __int16 *)v62[0] + 8) + 18,
              (__int64 *)&v66,
              0.0,
              0);
      v12 = v26;
      if ( v26 < 0 )
      {
        sub_18004BD84((int)retaddr, 4364, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v26);
LABEL_38:
        sub_18000F708((__int64 *)&v66);
LABEL_74:
        v54 = v62[0];
        v62[0] = 0LL;
        if ( v54 )
          CoTaskMemFree(v54);
        v55 = Src[0];
        Src[0] = 0LL;
        if ( v55 )
          CoTaskMemFree(v55);
        v56 = v71;
        if ( (_QWORD)v71 )
        {
          sub_1800CD58C((__int64 *)v71, *((__int64 **)&v71 + 1));
          sub_1800472E0(v56, (v72 - v56) & 0xFFFFFFFFFFFFFFF8uLL);
          v71 = 0LL;
          v72 = 0LL;
        }
        sub_18000F708(v67);
        goto LABEL_81;
      }
      v27 = v65;
      v61 = 0LL;
      v28 = v66;
      v29 = sub_180048E60(v60, (__int64)&v65, *(_DWORD *)(a3 + 52), v66, &v61);
      v12 = v29;
      if ( v29 < 0 )
      {
        sub_18004BD84((int)retaddr, 4368, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v29);
LABEL_37:
        sub_18000F708(&v61);
        goto LABEL_38;
      }
      *(_OWORD *)pv = v27;
      *(_QWORD *)&v65 = 0LL;
      v30 = sub_180048B1C(v60, (__int128 *)pv, *(_DWORD *)(a3 + 52), v61, &v65, 0LL);
      v12 = v30;
      if ( v30 < 0 )
      {
        sub_18004BD84((int)retaddr, 4371, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v30);
LABEL_36:
        sub_18000F708((__int64 *)&v65);
        goto LABEL_37;
      }
      v68 = v27;
      pv[0] = 0LL;
      v31 = sub_18011A900((_DWORD)v60, (unsigned int)&v68, *(_DWORD *)(a3 + 52), v65, (__int64)pv);
      v12 = v31;
      if ( v31 < 0 )
      {
        v32 = v31;
        v33 = 4374;
LABEL_35:
        sub_18004BD84((int)retaddr, v33, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v32);
        sub_18000F708((__int64 *)pv);
        goto LABEL_36;
      }
      *(_QWORD *)&v58 = Src;
      *((_QWORD *)&v58 + 1) = 0LL;
      LOBYTE(v59) = 1;
      v34 = (unsigned __int16 *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv[0] + 40LL))(pv[0]);
      v12 = sub_180048714(v34, (_QWORD *)&v58 + 1);
      if ( (_BYTE)v59 )
      {
        v35 = *(void **)v58;
        *(_QWORD *)v58 = *((_QWORD *)&v58 + 1);
        if ( v35 )
          CoTaskMemFree(v35);
      }
      if ( v12 < 0 )
      {
        v32 = v12;
        v33 = 4376;
        goto LABEL_35;
      }
      v36 = v67[0];
      v37 = (double)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28) + 4);
      *a5 = (int)((double)(*(int (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36) * v37 / 10000000.0 + 0.5);
      sub_18000F708((__int64 *)pv);
      sub_18000F708((__int64 *)&v65);
      sub_18000F708(&v61);
      sub_18000F708((__int64 *)&v66);
LABEL_68:
      v50 = (unsigned __int16 *)Src[0];
      v51 = *((_DWORD *)Src[0] + 1);
      v52 = *((_DWORD *)v62[0] + 1);
      if ( v51 != v52 )
        *a5 = sub_1800DD7D0(*a5, v52, v51);
      v53 = (void *)sub_180045410(v50[8] + 18LL);
      *a4 = v53;
      if ( v53 )
      {
        memcpy(v53, Src[0], *((unsigned __int16 *)Src[0] + 8) + 18LL);
        v12 = 0;
        goto LABEL_74;
      }
      v12 = -2147024882;
      v25 = 4414;
      goto LABEL_72;
    }
    pv[0] = 0LL;
    v38 = v68;
    *(_QWORD *)&v58 = pv;
    v12 = sub_180020090((__int64)v60, *(_DWORD *)(a3 + 52), (__int64 *)&v68, (_QWORD *)&v58 + 1);
    if ( (_BYTE)v59 )
    {
      v39 = *(void **)v58;
      *(_QWORD *)v58 = *((_QWORD *)&v58 + 1);
      if ( v39 )
        CoTaskMemFree(v39);
    }
    if ( v12 < 0 )
    {
      sub_18004BD84((int)retaddr, 4385, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v12);
      goto LABEL_64;
    }
    v61 = 0LL;
    v40 = sub_18001F490((unsigned __int16 *)pv[0], (unsigned int)*((unsigned __int16 *)pv[0] + 8) + 18, &v61, 0.0, 0);
    v12 = v40;
    if ( v40 < 0 )
    {
      sub_18004BD84((int)retaddr, 4388, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v40);
LABEL_63:
      sub_18000F708(&v61);
LABEL_64:
      v48 = pv[0];
      pv[0] = 0LL;
      if ( v48 )
        CoTaskMemFree(v48);
      goto LABEL_74;
    }
    v41 = v65;
    v68 = v65;
    *(_QWORD *)&v66 = 0LL;
    v42 = sub_18011A900((_DWORD)v60, (unsigned int)&v68, *(_DWORD *)(a3 + 52), v61, (__int64)&v66);
    v12 = v42;
    if ( v42 < 0 )
    {
      v43 = 4391;
LABEL_61:
      v46 = v42;
      goto LABEL_62;
    }
    *(_QWORD *)&v58 = Src;
    *((_QWORD *)&v58 + 1) = 0LL;
    LOBYTE(v59) = 1;
    v44 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v66 + 40LL))(v66);
    v12 = sub_180048714(v44, (_QWORD *)&v58 + 1);
    if ( (_BYTE)v59 )
    {
      v45 = *(void **)v58;
      *(_QWORD *)v58 = *((_QWORD *)&v58 + 1);
      if ( v45 )
        CoTaskMemFree(v45);
    }
    if ( v12 >= 0 )
    {
      v68 = v22;
      v65 = v41;
      v58 = v38;
      *(_QWORD *)&v73 = v62;
      *((_QWORD *)&v73 + 1) = 0LL;
      LOBYTE(v74) = 1;
      v12 = sub_1800D5E18(
              v60,
              *(_DWORD *)(a3 + 52),
              (unsigned __int16 *)pv[0],
              &v58,
              &v65,
              &v68,
              *(_DWORD *)(a3 + 68),
              (_QWORD *)&v73 + 1);
      if ( (_BYTE)v74 )
      {
        v47 = *(void **)v73;
        *(_QWORD *)v73 = *((_QWORD *)&v73 + 1);
        if ( v47 )
          CoTaskMemFree(v47);
      }
      if ( v12 >= 0 )
      {
        v58 = v22;
        v42 = sub_18004AE9C((__int64)v60, *(_DWORD *)(a3 + 52), (__int64)v62[0], &v58, 0, a5, 0LL, 0LL, 0LL);
        v12 = v42;
        if ( v42 >= 0 )
        {
          sub_18000F708((__int64 *)&v66);
          sub_18000F708(&v61);
          v49 = pv[0];
          pv[0] = 0LL;
          if ( v49 )
            CoTaskMemFree(v49);
          goto LABEL_68;
        }
        v43 = 4399;
        goto LABEL_61;
      }
      v46 = v12;
      v43 = 4397;
    }
    else
    {
      v46 = v12;
      v43 = 4393;
    }
LABEL_62:
    sub_18004BD84((int)retaddr, v43, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v46);
    sub_18000F708((__int64 *)&v66);
    goto LABEL_63;
  }
  sub_18004BD84((int)retaddr, 4302, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", v11);
LABEL_85:
  sub_18000F690((__int64)v75, v13, v14);
  EtwEventActivityIdControl(4LL, &v77);
  return (unsigned int)v12;
}
