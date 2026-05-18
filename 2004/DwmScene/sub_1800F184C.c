/*
 * XREFs of sub_1800F184C @ 0x1800F184C
 * Callers:
 *     sub_18008C298 @ 0x18008C298 (sub_18008C298.c)
 *     sub_1800F16C4 @ 0x1800F16C4 (sub_1800F16C4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800A0E7C @ 0x1800A0E7C (sub_1800A0E7C.c)
 *     sub_1800A4E64 @ 0x1800A4E64 (sub_1800A4E64.c)
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C9444 @ 0x1800C9444 (sub_1800C9444.c)
 *     sub_1800CC2A8 @ 0x1800CC2A8 (sub_1800CC2A8.c)
 *     sub_1800CC680 @ 0x1800CC680 (sub_1800CC680.c)
 *     sub_1800CC9FC @ 0x1800CC9FC (sub_1800CC9FC.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800F0A78 @ 0x1800F0A78 (sub_1800F0A78.c)
 *     sub_1800F0CF4 @ 0x1800F0CF4 (sub_1800F0CF4.c)
 *     sub_1800F0F30 @ 0x1800F0F30 (sub_1800F0F30.c)
 *     sub_1800F101C @ 0x1800F101C (sub_1800F101C.c)
 *     sub_1800F1080 @ 0x1800F1080 (sub_1800F1080.c)
 *     sub_1800F10E4 @ 0x1800F10E4 (sub_1800F10E4.c)
 *     sub_1800F1148 @ 0x1800F1148 (sub_1800F1148.c)
 *     sub_1800F11AC @ 0x1800F11AC (sub_1800F11AC.c)
 *     sub_1800F26D0 @ 0x1800F26D0 (sub_1800F26D0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800F184C(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r12d
  _QWORD *v5; // r15
  __int64 *v6; // r14
  volatile signed __int32 *v7; // rbx
  int v8; // ecx
  char v9; // al
  __int64 *v10; // r15
  volatile signed __int32 *v11; // rbx
  __int64 *v12; // r15
  volatile signed __int32 *v13; // rbx
  __int64 *v14; // r15
  volatile signed __int32 *v15; // rbx
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int64 *v32; // rax
  _QWORD *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rcx
  __int64 *v36; // rdx
  __int64 result; // rax
  __int64 v38; // rcx
  __int64 *v39; // rcx
  char v40; // di
  __int64 v41; // rax
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  __int64 *v44; // rcx
  char v45; // al
  __int64 v46; // rdx
  char v47; // di
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  __int64 *v50; // rcx
  char v51; // al
  __int64 v52; // rdx
  char v53; // di
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  __int64 *v56; // rcx
  char v57; // al
  __int64 v58; // rdx
  char v59; // di
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  __int64 v62; // r15
  __int64 *v63; // r14
  __int64 *v64; // rsi
  __int64 *v65; // rdi
  __int64 *v66; // rbx
  __int64 *v67; // rax
  volatile signed __int32 *v68; // rbx
  __int64 v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // rbx
  volatile signed __int32 *v74; // rbx
  _QWORD *v75; // [rsp+40h] [rbp-C0h]
  __int64 *v76; // [rsp+40h] [rbp-C0h]
  __int128 v77; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v79; // [rsp+68h] [rbp-98h] BYREF
  __int128 v80; // [rsp+78h] [rbp-88h] BYREF
  __int128 v81; // [rsp+88h] [rbp-78h] BYREF
  char v82; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v83; // [rsp+A0h] [rbp-60h]
  char v84; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v85; // [rsp+B0h] [rbp-50h]
  char v86; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v87; // [rsp+C0h] [rbp-40h]
  char v88; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v91; // [rsp+E0h] [rbp-20h]
  __int64 v92; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v95; // [rsp+100h] [rbp+0h]
  __int64 v96; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v97; // [rsp+110h] [rbp+10h]
  __int64 v98; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v99; // [rsp+120h] [rbp+20h]
  _BYTE v100[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v101; // [rsp+130h] [rbp+30h]
  _BYTE v102[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v103; // [rsp+140h] [rbp+40h]
  _BYTE v104[8]; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v105; // [rsp+150h] [rbp+50h]
  _BYTE v106[8]; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v107; // [rsp+160h] [rbp+60h]
  __int64 v108; // [rsp+168h] [rbp+68h] BYREF
  __int64 v109; // [rsp+178h] [rbp+78h] BYREF
  __int64 v110; // [rsp+188h] [rbp+88h] BYREF
  __int64 v111; // [rsp+198h] [rbp+98h] BYREF
  __int64 v112; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v113; // [rsp+1B8h] [rbp+B8h] BYREF
  int v114; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v115; // [rsp+1D0h] [rbp+D0h]
  _QWORD v116[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v117[5]; // [rsp+1F8h] [rbp+F8h] BYREF
  int v118; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v119; // [rsp+228h] [rbp+128h] BYREF
  int v120; // [rsp+230h] [rbp+130h] BYREF
  __int64 v121; // [rsp+234h] [rbp+134h]
  int v122; // [rsp+23Ch] [rbp+13Ch]
  int v123; // [rsp+240h] [rbp+140h]
  int v124; // [rsp+244h] [rbp+144h]
  char v125; // [rsp+248h] [rbp+148h]
  __int128 v126; // [rsp+24Ch] [rbp+14Ch]
  __int128 v127; // [rsp+25Ch] [rbp+15Ch]
  int v128; // [rsp+26Ch] [rbp+16Ch]
  char v129; // [rsp+270h] [rbp+170h]
  int v130; // [rsp+274h] [rbp+174h]
  __int128 v131; // [rsp+280h] [rbp+180h] BYREF
  __int128 v132; // [rsp+290h] [rbp+190h] BYREF

  v117[4] = a2;
  v119 = 0;
  sub_18006187C(*a2 + 24, (__int64)a2);
  v4 = sub_18006AB3C(*a2);
  v5 = (_QWORD *)sub_18006AB04(*a2);
  v75 = v5;
  v6 = (__int64 *)(a1 + 48);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    sub_18001EE70(v5, &v98, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 48), &v98);
    v7 = v99;
    if ( v99 )
    {
      if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    sub_18006294C(*v6, 1, 0);
    v120 = 0;
    v121 = 2LL;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v125 = 0;
    v126 = 0LL;
    v127 = 0LL;
    v128 = 65793;
    v129 = 1;
    v130 = 3;
    if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
    {
      HIDWORD(v121) = *(_DWORD *)(a1 + 112);
      LODWORD(v121) = *(_DWORD *)(a1 + 116);
      LOBYTE(v128) = *(_BYTE *)(a1 + 125);
      v8 = *(_DWORD *)(a1 + 120);
      BYTE1(v128) = ((v8 - 1) & 0xFFFFFFFD) == 0;
      BYTE2(v128) = (unsigned int)(v8 - 2) <= 1;
    }
    sub_1800C7110((_QWORD *)*v6, (__int64)&v120, 0LL);
    v9 = *(_BYTE *)(a1 + 124);
    if ( (v9 & 2) != 0 )
    {
      LODWORD(v121) = 1;
      sub_18001EE70(v5, &v90, 1u);
      v10 = (__int64 *)(a1 + 64);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 64), &v90);
      v11 = v91;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
      sub_18006294C(*v10, 1, 0);
      sub_1800C7110((_QWORD *)*v10, (__int64)&v120, 0LL);
      v9 = *(_BYTE *)(a1 + 124);
      v5 = v75;
    }
    if ( (v9 & 4) != 0 )
    {
      LODWORD(v121) = 1;
      v129 = 0;
      sub_18001EE70(v5, &v96, 1u);
      v12 = (__int64 *)(a1 + 80);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 80), &v96);
      v13 = v97;
      if ( v97 )
      {
        if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      sub_18006294C(*v12, 1, 0);
      sub_1800C7110((_QWORD *)*v12, (__int64)&v120, 0LL);
      v9 = *(_BYTE *)(a1 + 124);
    }
    if ( (v9 & 8) != 0 )
    {
      LODWORD(v121) = *(_DWORD *)(a1 + 116);
      v129 = 0;
      sub_18001EE70(v75, &v94, 1u);
      v14 = (__int64 *)(a1 + 96);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), &v94);
      v15 = v95;
      if ( v95 )
      {
        if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      sub_18006294C(*v14, 1, 0);
      sub_1800C7110((_QWORD *)*v14, (__int64)&v120, 0LL);
    }
    v5 = v75;
  }
  v16 = *(__int64 **)(*v6 + 128);
  v17 = v16;
  v18 = (__int64 *)v16[1];
  if ( *((_BYTE *)v18 + 25) )
    goto LABEL_34;
  do
  {
    if ( *((_DWORD *)v18 + 8) >= v4 )
    {
      v17 = v18;
      v18 = (__int64 *)*v18;
    }
    else
    {
      v18 = (__int64 *)v18[2];
    }
  }
  while ( !*((_BYTE *)v18 + 25) );
  if ( v17 == v16 || v4 < *((_DWORD *)v17 + 8) )
LABEL_34:
    v17 = *(__int64 **)(*v6 + 128);
  if ( v17 == v16 )
    sub_1800C6F90((_QWORD *)*v6, a2);
  v19 = *(_QWORD *)(a1 + 64);
  if ( v19 )
  {
    v20 = *(__int64 **)(v19 + 128);
    v21 = v20;
    v22 = (__int64 *)v20[1];
    if ( *((_BYTE *)v22 + 25) )
      goto LABEL_45;
    do
    {
      if ( *((_DWORD *)v22 + 8) >= v4 )
      {
        v21 = v22;
        v22 = (__int64 *)*v22;
      }
      else
      {
        v22 = (__int64 *)v22[2];
      }
    }
    while ( !*((_BYTE *)v22 + 25) );
    if ( v21 == v20 || v4 < *((_DWORD *)v21 + 8) )
LABEL_45:
      v21 = *(__int64 **)(v19 + 128);
    if ( v21 == v20 )
      sub_1800C6F90(*(_QWORD **)(a1 + 64), a2);
  }
  v23 = *(_QWORD *)(a1 + 80);
  if ( v23 )
  {
    v24 = *(__int64 **)(v23 + 128);
    v25 = v24;
    v26 = (__int64 *)v24[1];
    if ( *((_BYTE *)v26 + 25) )
      goto LABEL_56;
    do
    {
      if ( *((_DWORD *)v26 + 8) >= v4 )
      {
        v25 = v26;
        v26 = (__int64 *)*v26;
      }
      else
      {
        v26 = (__int64 *)v26[2];
      }
    }
    while ( !*((_BYTE *)v26 + 25) );
    if ( v25 == v24 || v4 < *((_DWORD *)v25 + 8) )
LABEL_56:
      v25 = *(__int64 **)(v23 + 128);
    if ( v25 == v24 )
      sub_1800C6F90(*(_QWORD **)(a1 + 80), a2);
  }
  v27 = *(_QWORD *)(a1 + 96);
  if ( v27 )
  {
    v28 = *(__int64 **)(v27 + 128);
    v29 = v28;
    v30 = (__int64 *)v28[1];
    if ( *((_BYTE *)v30 + 25) )
      goto LABEL_67;
    do
    {
      if ( *((_DWORD *)v30 + 8) >= v4 )
      {
        v29 = v30;
        v30 = (__int64 *)*v30;
      }
      else
      {
        v30 = (__int64 *)v30[2];
      }
    }
    while ( !*((_BYTE *)v30 + 25) );
    if ( v29 == v28 || v4 < *((_DWORD *)v29 + 8) )
LABEL_67:
      v29 = *(__int64 **)(v27 + 128);
    if ( v29 == v28 )
      sub_1800C6F90(*(_QWORD **)(a1 + 96), a2);
  }
  v77 = 0LL;
  sub_1800F26D0(a1, &v77, 1LL);
  if ( (_QWORD)v77 && !*(_QWORD *)(a1 + 176) )
  {
    sub_1800F0CF4(v5, &v92, 1);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 176), &v92);
    v31 = v93;
    if ( v93 )
    {
      if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v132 = 0LL;
    sub_1800A4E64(*(_QWORD *)(a1 + 16), &v132);
    v32 = sub_1800C9444(v77, v117);
    v33 = (_QWORD *)sub_1800A0E7C(v132, v32);
    v114 = *(_DWORD *)(a1 + 128);
    v115 = *(_QWORD *)(a1 + 136);
    sub_1800CC2A8(v116, (__int64 *)(a1 + 144));
    v116[3] = *(_QWORD *)(a1 + 168);
    sub_1800CCAB0(*(_QWORD *)(a1 + 176), (__int64)&v114, v33);
    v34 = (volatile signed __int32 *)*((_QWORD *)&v132 + 1);
    if ( *((_QWORD *)&v132 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v132 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      }
    }
  }
  v35 = *(_QWORD *)(a1 + 176);
  if ( v35 && !sub_1800CC9FC(v35, v4) && (_QWORD)v77 )
    sub_1800CC680(*(_QWORD *)(a1 + 176), a2);
  v36 = (__int64 *)(a1 + 480);
  v76 = (__int64 *)(a1 + 480);
  result = *(_QWORD *)(a1 + 480);
  v38 = *(_QWORD *)(result + 8);
  if ( *(_BYTE *)(v38 + 25) )
    goto LABEL_91;
  do
  {
    if ( *(_DWORD *)(v38 + 32) >= v4 )
    {
      result = v38;
      v38 = *(_QWORD *)v38;
    }
    else
    {
      v38 = *(_QWORD *)(v38 + 16);
    }
  }
  while ( !*(_BYTE *)(v38 + 25) );
  if ( result == *v36 || v4 < *(_DWORD *)(result + 32) )
LABEL_91:
    result = *v36;
  if ( result == *v36 || !*(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)*a2 + 192LL))(*a2, &v118);
    v81 = 0LL;
    if ( (v118 & 0x20) != 0 )
    {
      v39 = (__int64 *)sub_1800F26D0(a1, v100, 5LL);
      v40 = 1;
      v41 = *v39;
    }
    else
    {
      v83 = 0LL;
      v39 = (__int64 *)&v82;
      v40 = 2;
      v41 = 0LL;
    }
    *(_QWORD *)&v81 = v41;
    *((_QWORD *)&v81 + 1) = v39[1];
    *v39 = 0LL;
    v39[1] = 0LL;
    if ( (v40 & 2) != 0 )
    {
      v40 &= ~2u;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          v42 = v83;
          (**(void (__fastcall ***)(volatile signed __int32 *))v83)(v83);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
        }
      }
    }
    if ( (v40 & 1) != 0 )
    {
      v40 &= ~1u;
      v43 = v101;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
    v80 = 0LL;
    if ( (v118 & 0x10) != 0 )
    {
      v44 = (__int64 *)sub_1800F26D0(a1, v102, 4LL);
      v45 = 4;
      v46 = *v44;
    }
    else
    {
      v85 = 0LL;
      v44 = (__int64 *)&v84;
      v45 = 8;
      v46 = 0LL;
    }
    v47 = v45 | v40;
    *(_QWORD *)&v80 = v46;
    *((_QWORD *)&v80 + 1) = v44[1];
    *v44 = 0LL;
    v44[1] = 0LL;
    if ( (v47 & 8) != 0 )
    {
      v47 &= ~8u;
      if ( v85 )
      {
        if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
        {
          v48 = v85;
          (**(void (__fastcall ***)(volatile signed __int32 *))v85)(v85);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
        }
      }
    }
    if ( (v47 & 4) != 0 )
    {
      v47 &= ~4u;
      v49 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        }
      }
    }
    v79 = 0LL;
    if ( (v118 & 8) != 0 )
    {
      v50 = (__int64 *)sub_1800F26D0(a1, v104, 3LL);
      v51 = 16;
      v52 = *v50;
    }
    else
    {
      v87 = 0LL;
      v50 = (__int64 *)&v86;
      v51 = 32;
      v52 = 0LL;
    }
    v53 = v51 | v47;
    *(_QWORD *)&v79 = v52;
    *((_QWORD *)&v79 + 1) = v50[1];
    *v50 = 0LL;
    v50[1] = 0LL;
    if ( (v53 & 0x20) != 0 )
    {
      v53 &= ~0x20u;
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          v54 = v87;
          (**(void (__fastcall ***)(volatile signed __int32 *))v87)(v87);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
        }
      }
    }
    if ( (v53 & 0x10) != 0 )
    {
      v53 &= ~0x10u;
      v55 = v105;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        }
      }
    }
    v78 = 0LL;
    if ( (v118 & 4) != 0 )
    {
      v56 = (__int64 *)sub_1800F26D0(a1, v106, 2LL);
      v57 = 64;
      v58 = *v56;
    }
    else
    {
      v89 = 0LL;
      v56 = (__int64 *)&v88;
      v57 = 0x80;
      v58 = 0LL;
    }
    v59 = v57 | v53;
    *(_QWORD *)&v78 = v58;
    *((_QWORD *)&v78 + 1) = v56[1];
    *v56 = 0LL;
    v56[1] = 0LL;
    if ( v59 < 0 )
    {
      v59 &= ~0x80u;
      if ( v89 )
      {
        if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
        {
          v60 = v89;
          (**(void (__fastcall ***)(volatile signed __int32 *))v89)(v89);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
        }
      }
    }
    if ( (v59 & 0x40) != 0 )
    {
      v61 = v107;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v61)(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
        }
      }
    }
    v131 = 0LL;
    sub_1800F0A78(*a2, (__int64 *)&v131);
    v62 = v131;
    v63 = sub_1800F1080(&v108, &v80);
    v64 = sub_1800F101C(&v109, &v79);
    v65 = sub_1800F10E4(&v110, &v78);
    v66 = sub_1800F1148(&v111, &v81);
    v67 = sub_1800F11AC(&v112, &v77);
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v62 + 40LL))(
      v62,
      v67,
      v66,
      v65,
      v64,
      v63);
    v119 = v4;
    sub_1800F0F30(v76, (__int64)&v113, &v119);
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v113 + 40), &v131);
    v68 = (volatile signed __int32 *)*((_QWORD *)&v131 + 1);
    if ( *((_QWORD *)&v131 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v131 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v68)(v68);
        result = (unsigned int)_InterlockedDecrement(v68 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      }
    }
    if ( *((_QWORD *)&v78 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v69 = *((_QWORD *)&v78 + 1);
        (***((void (__fastcall ****)(_QWORD))&v78 + 1))(*((_QWORD *)&v78 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v69 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v78 + 1) + 8LL))(*((_QWORD *)&v78 + 1));
      }
    }
    if ( *((_QWORD *)&v79 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v79 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v70 = *((_QWORD *)&v79 + 1);
        (***((void (__fastcall ****)(_QWORD))&v79 + 1))(*((_QWORD *)&v79 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v79 + 1) + 8LL))(*((_QWORD *)&v79 + 1));
      }
    }
    if ( *((_QWORD *)&v80 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v80 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v71 = *((_QWORD *)&v80 + 1);
        (***((void (__fastcall ****)(_QWORD))&v80 + 1))(*((_QWORD *)&v80 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v80 + 1) + 8LL))(*((_QWORD *)&v80 + 1));
      }
    }
    if ( *((_QWORD *)&v81 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v81 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v72 = *((_QWORD *)&v81 + 1);
        (***((void (__fastcall ****)(_QWORD))&v81 + 1))(*((_QWORD *)&v81 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v81 + 1) + 8LL))(*((_QWORD *)&v81 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v77 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v77 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v73 = *((_QWORD *)&v77 + 1);
      (***((void (__fastcall ****)(_QWORD))&v77 + 1))(*((_QWORD *)&v77 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v73 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v77 + 1) + 8LL))(*((_QWORD *)&v77 + 1));
    }
  }
  v74 = (volatile signed __int32 *)a2[1];
  if ( v74 )
  {
    result = (unsigned int)_InterlockedDecrement(v74 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v74)(v74);
      result = (unsigned int)_InterlockedDecrement(v74 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
    }
  }
  return result;
}
