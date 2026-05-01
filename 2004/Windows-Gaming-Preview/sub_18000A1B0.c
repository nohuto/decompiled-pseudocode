/*
 * XREFs of sub_18000A1B0 @ 0x18000A1B0
 * Callers:
 *     sub_180009DAC @ 0x180009DAC (sub_180009DAC.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180003BA8 @ 0x180003BA8 (sub_180003BA8.c)
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 *     sub_18000F52C @ 0x18000F52C (sub_18000F52C.c)
 *     sub_18000F894 @ 0x18000F894 (sub_18000F894.c)
 *     sub_18001112C @ 0x18001112C (sub_18001112C.c)
 *     sub_180011718 @ 0x180011718 (sub_180011718.c)
 *     sub_180012258 @ 0x180012258 (sub_180012258.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18001610C @ 0x18001610C (sub_18001610C.c)
 *     sub_180016384 @ 0x180016384 (sub_180016384.c)
 *     sub_18003E910 @ 0x18003E910 (sub_18003E910.c)
 *     sub_18003EB10 @ 0x18003EB10 (sub_18003EB10.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_18000A1B0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // esi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // esi
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rsi
  int v42; // r12d
  int v43; // eax
  int v44; // ebx
  int v45; // r9d
  int v46; // edx
  __int64 v47; // r8
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  char v53; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v54[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  unsigned int v61; // [rsp+78h] [rbp-88h] BYREF
  int *v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  unsigned int v66; // [rsp+A0h] [rbp-60h] BYREF
  int *v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h]
  int v72; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v73; // [rsp+D4h] [rbp-2Ch]
  HANDLE hObject; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v75[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v76; // [rsp+F8h] [rbp-8h]
  _BYTE v77[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v78[7]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v79; // [rsp+148h] [rbp+48h]
  __int64 retaddr; // [rsp+188h] [rbp+88h]

  hObject = 0LL;
  v3 = sub_18003E910(a1, a2, &hObject);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = v3;
    v7 = 93;
LABEL_7:
    sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v6);
    goto LABEL_91;
  }
  v8 = sub_18003EB10(hObject, v4, v54);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = v8;
    v7 = 97;
    goto LABEL_7;
  }
  if ( !v54[0] )
  {
    v5 = -2147024891;
    v6 = -2147024891;
    v7 = 98;
    goto LABEL_7;
  }
  v59 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 112) + 80LL))(*(_QWORD *)(a1 + 112), &v59);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 102;
LABEL_12:
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v9);
    goto LABEL_89;
  }
  v9 = sub_18000F894(v59);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = 103;
    goto LABEL_12;
  }
  v56 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(a1 + 112) + 56LL))(
          *(_QWORD *)(a1 + 112),
          3LL,
          0LL,
          &v56);
  v5 = v11;
  if ( v11 < 0 )
  {
    sub_180003268(retaddr, 106, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v11);
    goto LABEL_87;
  }
  v55 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 56LL))(v56, &v55);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 109;
LABEL_44:
    sub_180003268(retaddr, v13, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v12);
    goto LABEL_85;
  }
  v65 = v55;
  v67 = &v57;
  v68 = 0;
  v69 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 56LL))(v55, &v66);
  *v67 = v14;
  if ( v14 >= 0 && v66 )
  {
    v15 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v65 + 48LL))(v65, 0LL, &v69);
    *v67 = v16;
  }
  v17 = 0;
  v18 = v66;
  while ( *v67 >= 0 && v17 != v18 )
  {
    if ( (int)sub_18000A924(a1, v69) < 0 )
      sub_180012300(retaddr, 114LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
    ++v17;
    if ( *v67 >= 0 && v17 < v66 )
    {
      v19 = v69;
      if ( v69 )
      {
        v69 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v65 + 48LL))(v65, v17, &v69);
      *v67 = v20;
    }
  }
  v21 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v57 < 0 )
    sub_180012300(retaddr, 116LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
  v22 = *(_QWORD *)(a1 + 112);
  v23 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 56LL))(v22, 0LL, 0LL, &v56);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 119;
    goto LABEL_44;
  }
  v24 = v56;
  v25 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v55);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 120;
    goto LABEL_44;
  }
  v60 = v55;
  v62 = &v57;
  v63 = 0;
  v64 = 0LL;
  v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 56LL))(v55, &v61);
  *v62 = v26;
  if ( v26 >= 0 && v61 )
  {
    v27 = v64;
    if ( v64 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v60 + 48LL))(v60, 0LL, &v64);
    *v62 = v28;
  }
  v29 = 0;
  v30 = v61;
  while ( *v62 >= 0 && v29 != v30 )
  {
    v58 = 0LL;
    v53 = 0;
    v31 = sub_180012258(v64, &v53);
    v32 = retaddr;
    if ( v31 >= 0 )
    {
      if ( !v53 )
        goto LABEL_59;
      v34 = sub_18000A924(a1, v64);
      v32 = retaddr;
      if ( v34 >= 0 )
        goto LABEL_59;
      v33 = 129LL;
    }
    else
    {
      v33 = 126LL;
    }
    sub_180012300(v32, v33, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
LABEL_59:
    ++v29;
    if ( *v62 >= 0 && v29 < v61 )
    {
      v35 = v64;
      if ( v64 )
      {
        v64 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v60 + 48LL))(v60, v29, &v64);
      *v62 = v36;
    }
  }
  v37 = v64;
  if ( v64 )
  {
    v64 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  if ( v57 < 0 )
    sub_180012300(retaddr, 132LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
  v75[0] = retaddr;
  v75[1] = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v75[2] = 0LL;
  v76 = 135;
  v38 = dword_18005AE98;
  if ( (dword_18005AE98 & 2) == 0 )
  {
    v58 = *(_QWORD *)sub_18000F52C(&dword_18005AE98, v77);
    v38 = v58;
  }
  LODWORD(v58) = 0;
  BYTE4(v58) = 3;
  v72 = 0;
  v73 = WORD2(v58);
  sub_180011718((unsigned int)&unk_18005AEA0, 11973136, (v38 >> 7) & 1, (v38 >> 8) & 1, (__int64)&v72, 1, 3);
  v40 = sub_180003BA8(1, v39);
  v41 = v40;
  v70 = v40;
  v71 = 0LL;
  v42 = 0;
  if ( v40 )
  {
    HIDWORD(v71) = *(_DWORD *)(v40 + 16);
    LODWORD(v71) = **(_DWORD **)(v40 + 8);
    *(_DWORD *)(v40 + 16) = v71;
    v42 = HIDWORD(v71);
    v41 = v70;
  }
  v43 = sub_18001610C(a1 + 216);
  v44 = v43;
  if ( v43 < 0 )
  {
    v45 = v43;
    v46 = 137;
    goto LABEL_74;
  }
  v78[0] = off_180048D30;
  v78[1] = a1;
  v79 = v78;
  v44 = sub_180016384(*(_QWORD *)(a1 + 216), v78);
  if ( v79 )
  {
    v48 = v78;
    LOBYTE(v48) = v79 != v78;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v79 + 32LL))(v79, v48);
    v79 = 0LL;
  }
  if ( v44 >= 0 )
  {
    v44 = 0;
  }
  else
  {
    v45 = v44;
    v46 = 145;
LABEL_74:
    sub_180003268(retaddr, v46, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v45);
  }
  if ( v44 < 0 )
    sub_18001112C((unsigned int)v44, &v70, v47, v75);
  if ( v41 )
    *(_DWORD *)(v41 + 16) = v42;
  v5 = 0;
LABEL_85:
  v49 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
LABEL_87:
  v50 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
LABEL_89:
  v51 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
LABEL_91:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v5;
}
