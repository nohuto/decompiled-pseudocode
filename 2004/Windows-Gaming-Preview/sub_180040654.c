/*
 * XREFs of sub_180040654 @ 0x180040654
 * Callers:
 *     sub_18003F9D0 @ 0x18003F9D0 (sub_18003F9D0.c)
 *     sub_18003FAB0 @ 0x18003FAB0 (sub_18003FAB0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180041098 @ 0x180041098 (sub_180041098.c)
 *     sub_18004122C @ 0x18004122C (sub_18004122C.c)
 *     sub_180041430 @ 0x180041430 (sub_180041430.c)
 *     sub_180041648 @ 0x180041648 (sub_180041648.c)
 *     sub_180042318 @ 0x180042318 (sub_180042318.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_180042868 @ 0x180042868 (sub_180042868.c)
 *     sub_180042D0C @ 0x180042D0C (sub_180042D0C.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180040654(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE *v9; // rbx
  _BYTE *v10; // r12
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // r9d
  int v15; // edx
  _BYTE *v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r14
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  bool i; // cf
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // r9d
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+4Ch] [rbp-B4h]
  int v55; // [rsp+50h] [rbp-B0h]
  unsigned int v56; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  int v59; // [rsp+60h] [rbp-A0h]
  __int64 v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v65; // [rsp+90h] [rbp-70h]
  _BYTE *v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  __int64 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+C8h] [rbp-38h]
  _BYTE v73[4096]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+1128h] [rbp+1028h]

  v72 = -2LL;
  v65 = a4;
  v54 = a3;
  v61 = a2;
  v60 = a1;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v67 = v5;
  v6 = sub_180041648(a1, a2, &v50);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_180003268(
      retaddr,
      645,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v6);
    return v7;
  }
  v9 = v73;
  v10 = 0LL;
  v66 = 0LL;
  v53 = 4096;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, unsigned int *))(*(_QWORD *)a1 + 96LL))(a1, v50, v73, &v53);
  v13 = v11;
  if ( v11 )
  {
    if ( v11 != -2147024774 )
    {
      if ( v11 >= 0 )
        goto LABEL_82;
      v14 = v11;
      v15 = 653;
      goto LABEL_13;
    }
    v16 = operator new(v53, (const struct std::nothrow_t *)&unk_18005AF88);
    v9 = v16;
    if ( !v16 )
    {
      v13 = -2147024882;
      v14 = -2147024882;
      v15 = 658;
      goto LABEL_13;
    }
    v10 = v16;
    v66 = v16;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, unsigned int *))(*(_QWORD *)a1 + 96LL))(
            a1,
            v50,
            v16,
            &v53);
    v13 = v17;
    if ( v17 < 0 )
    {
      v14 = v17;
      v15 = 662;
LABEL_13:
      sub_180003268(
        retaddr,
        v15,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v14);
      goto LABEL_82;
    }
  }
  v62 = 0LL;
  v18 = sub_180042318(&v62, v9, v53);
  v13 = v18;
  v20 = v62;
  v21 = 0LL;
  if ( v18 < 0 )
  {
    sub_180003268(
      retaddr,
      666,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v18);
    goto LABEL_80;
  }
  v22 = 0LL;
  v51 = 0LL;
  v23 = 0LL;
  v71 = 0LL;
  v24 = 0LL;
  v68 = 0LL;
  v25 = 0LL;
  v69 = 0LL;
  v26 = 0LL;
  v70 = 0LL;
  while ( 1 )
  {
    if ( v22 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 16LL))(v22, v22, v19, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, &v51, v19, v21);
    v59 = v27;
    if ( v27 )
    {
LABEL_56:
      if ( v23 )
        goto LABEL_57;
      if ( v27 == 1 )
      {
LABEL_75:
        v13 = -2147023728;
        goto LABEL_76;
      }
      v46 = v65;
LABEL_74:
      v13 = 0;
      if ( *v46 )
        goto LABEL_76;
      goto LABEL_75;
    }
    v63 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v51 + 24LL))(v51, &v63, &v56);
    if ( v13 < 0 )
    {
      v44 = 680;
LABEL_69:
      v45 = v13;
      goto LABEL_70;
    }
    v28 = sub_180042798(v63, v56, v61, (unsigned int)v67);
    v21 = 0LL;
    if ( v28 > 0 )
      break;
    if ( v28 )
      goto LABEL_48;
    v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v51 + 40LL))(
            v51,
            &v50,
            v19,
            0LL);
    v13 = v29;
    v21 = 0LL;
    if ( v29 < 0 )
    {
      v45 = v29;
      v44 = 702;
LABEL_70:
      sub_180003268(
        retaddr,
        v44,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v45);
      goto LABEL_76;
    }
    v19 = (unsigned __int16)v50;
    if ( (_WORD)v50 && !v54 )
    {
LABEL_48:
      v22 = v51;
    }
    else
    {
      v30 = 0LL;
      for ( i = (_WORD)v50 != 0; ; i = (unsigned int)v30 < (unsigned __int16)v50 )
      {
        v55 = v30;
        if ( !i )
          break;
        v64 = 0LL;
        v52 = 0LL;
        v32 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64 *, unsigned int *))(*(_QWORD *)v51 + 56LL))(
                v51,
                v30,
                &v57,
                &v64,
                &v58);
        v13 = v32;
        if ( v32 < 0 )
        {
          v45 = v32;
          v44 = 723;
          goto LABEL_70;
        }
        if ( v57 )
        {
          if ( v57 == 1 )
          {
            if ( !v25 )
            {
              v13 = sub_18004122C(v60, v54, &v52);
              if ( v13 < 0 )
              {
                v44 = 738;
                goto LABEL_69;
              }
              v36 = v52;
              if ( v52 )
              {
                j_j__o_free(0LL, v35);
                v25 = v36;
                v69 = v36;
              }
            }
          }
          else
          {
            if ( v57 != 2 )
            {
              v13 = -2147418113;
              v44 = 754;
              goto LABEL_69;
            }
            if ( !v26 )
            {
              v13 = sub_180041430(v60, v54, &v52);
              if ( v13 < 0 )
              {
                v44 = 747;
                goto LABEL_69;
              }
              v38 = v52;
              if ( v52 )
              {
                j_j__o_free(0LL, v37);
                v26 = v38;
                v70 = v38;
              }
            }
          }
        }
        else if ( !v24 )
        {
          v13 = sub_180041098(v60, v54, &v52);
          if ( v13 < 0 )
          {
            v44 = 729;
            goto LABEL_69;
          }
          v34 = v52;
          if ( v52 )
          {
            j_j__o_free(0LL, v33);
            v24 = v34;
            v68 = v34;
          }
        }
        v39 = sub_180042868(v64, v58);
        v21 = 0LL;
        if ( !v39 )
          goto LABEL_48;
        v30 = (unsigned int)(v55 + 1);
        v19 = (unsigned __int16)v50;
      }
      v22 = v51;
      if ( v23 != v51 )
      {
        v40 = v51;
        if ( v51 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
          v22 = v51;
          v19 = (unsigned __int16)v50;
          v21 = 0LL;
        }
        v41 = v23;
        v23 = v40;
        v71 = v40;
        if ( v41 )
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v41 + 16LL))(v41, v22, v19, 0LL);
          v22 = v51;
          v19 = (unsigned __int16)v50;
          v21 = 0LL;
        }
      }
      if ( (_WORD)v19 )
      {
        v27 = v59;
        goto LABEL_56;
      }
    }
  }
  if ( !v23 )
    goto LABEL_75;
LABEL_57:
  v52 = 0LL;
  v61 = v23;
  v42 = sub_180042D0C(&v52, &v61);
  v13 = v42;
  if ( v42 >= 0 )
  {
    v46 = v65;
    *v65 = v52;
    goto LABEL_74;
  }
  sub_180003268(
    retaddr,
    788,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    v42);
  v43 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
LABEL_76:
  j_j__o_free(v26, v22);
  j_j__o_free(v25, v47);
  j_j__o_free(v24, v48);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v49 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
LABEL_80:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_82:
  if ( v10 )
    j_j__o_free(v10, v12);
  return (unsigned int)v13;
}
