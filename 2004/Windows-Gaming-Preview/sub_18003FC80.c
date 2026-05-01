/*
 * XREFs of sub_18003FC80 @ 0x18003FC80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003FC80(__int64 a1, __int64 a2, _QWORD *a3)
{
  _BYTE *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // esi
  int v16; // r9d
  int v17; // edx
  _BYTE *v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r14d
  bool i; // cf
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  int v33; // r9d
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v39[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  _BYTE v49[4096]; // [rsp+80h] [rbp-80h] BYREF
  __int64 retaddr; // [rsp+10C8h] [rbp+FC8h]

  v48 = -2LL;
  v6 = 0LL;
  *a3 = 0LL;
  v7 = *(_QWORD *)(a2 + 24);
  v43 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v7 + 2 * v8) );
  v9 = sub_180041648(a1, v7, &v38);
  v10 = v9;
  if ( v9 < 0 )
  {
    sub_180003268(
      retaddr,
      388,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v9);
    return v10;
  }
  v12 = v49;
  v47 = 0LL;
  v39[0] = 4096;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)a1 + 96LL))(a1, v38, v49, v39);
  v15 = v13;
  if ( !v13 )
    goto LABEL_14;
  if ( v13 == -2147024774 )
  {
    v18 = operator new(v39[0], (const struct std::nothrow_t *)&unk_18005AF88);
    v12 = v18;
    if ( !v18 )
    {
      v15 = -2147024882;
      v16 = -2147024882;
      v17 = 402;
      goto LABEL_13;
    }
    v6 = v18;
    v47 = v18;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)a1 + 96LL))(a1, v38, v18, v39);
    v15 = v19;
    if ( v19 < 0 )
    {
      v16 = v19;
      v17 = 406;
      goto LABEL_13;
    }
LABEL_14:
    v44 = 0LL;
    v20 = sub_180042318(&v44, v12, v39[0]);
    v15 = v20;
    v21 = v44;
    if ( v20 >= 0 )
    {
      v15 = 0;
      *(_QWORD *)&v39[1] = 0LL;
      do
      {
LABEL_17:
        v22 = *(_QWORD *)&v39[1];
        if ( *(_QWORD *)&v39[1] )
        {
          *(_QWORD *)&v39[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 24LL))(v21, &v39[1]);
        if ( v23 )
        {
          if ( v23 != 1 )
            goto LABEL_59;
          goto LABEL_60;
        }
        v45 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, unsigned int *))(**(_QWORD **)&v39[1] + 24LL))(
                *(_QWORD *)&v39[1],
                &v45,
                &v41);
        v15 = v24;
        if ( v24 < 0 )
        {
          v34 = 423;
          goto LABEL_56;
        }
        v25 = sub_180042798(v45, v41, v43, (unsigned int)v8);
        v15 = 0;
        if ( v25 > 0 )
          goto LABEL_60;
      }
      while ( v25 );
      v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v39[1] + 40LL))(*(_QWORD *)&v39[1], &v38);
      v15 = v24;
      if ( v24 >= 0 )
      {
        v26 = 0;
        for ( i = (_WORD)v38 != 0; i; i = v26 < (unsigned __int16)v38 )
        {
          v46 = 0LL;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, __int64 *))(**(_QWORD **)&v39[1] + 56LL))(
                  *(_QWORD *)&v39[1],
                  v26,
                  &v42,
                  &v46,
                  &v40);
          if ( v15 < 0 )
          {
            v33 = v15;
            v34 = 450;
            goto LABEL_57;
          }
          v15 = 0;
          if ( v42 )
          {
            if ( v42 == 1 )
            {
              v31 = 0;
              if ( !*(_DWORD *)(a2 + 16) )
                goto LABEL_17;
              v29 = *(_QWORD *)(a2 + 8);
              while ( 1 )
              {
                v30 = v31;
                if ( *(_DWORD *)(v29 + 16LL * v31) == 1 )
                  break;
                if ( ++v31 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_17;
              }
            }
            else
            {
              if ( v42 != 2 )
              {
                v15 = -2147418113;
                v33 = -2147418113;
                v34 = 489;
                goto LABEL_57;
              }
              v32 = 0;
              if ( !*(_DWORD *)(a2 + 16) )
                goto LABEL_17;
              v29 = *(_QWORD *)(a2 + 8);
              while ( 1 )
              {
                v30 = v32;
                if ( *(_DWORD *)(v29 + 16LL * v32) == 2 )
                  break;
                if ( ++v32 >= *(_DWORD *)(a2 + 16) )
                  goto LABEL_17;
              }
            }
          }
          else
          {
            v28 = 0;
            if ( !*(_DWORD *)(a2 + 16) )
              goto LABEL_17;
            v29 = *(_QWORD *)(a2 + 8);
            while ( 1 )
            {
              v30 = v28;
              if ( !*(_DWORD *)(v29 + 16LL * v28) )
                break;
              if ( ++v28 >= *(_DWORD *)(a2 + 16) )
                goto LABEL_17;
            }
          }
          if ( !*(_QWORD *)(v29 + 16 * v30 + 8) || !sub_180042868(v46, (unsigned int)v40) )
            goto LABEL_17;
          ++v26;
        }
        v40 = 0LL;
        v43 = *(_QWORD *)&v39[1];
        v35 = sub_180042D0C(&v40, &v43);
        v15 = v35;
        if ( v35 < 0 )
        {
          sub_180003268(
            retaddr,
            517,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            v35);
          v36 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          }
          goto LABEL_61;
        }
        *a3 = v40;
        v15 = 0;
LABEL_59:
        if ( *a3 )
          goto LABEL_61;
LABEL_60:
        v15 = -2147023728;
        goto LABEL_61;
      }
      v34 = 438;
LABEL_56:
      v33 = v24;
LABEL_57:
      sub_180003268(
        retaddr,
        v34,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v33);
LABEL_61:
      v37 = *(_QWORD *)&v39[1];
      if ( *(_QWORD *)&v39[1] )
      {
        *(_QWORD *)&v39[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    else
    {
      sub_180003268(
        retaddr,
        412,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v20);
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_65;
  }
  if ( v13 < 0 )
  {
    v16 = v13;
    v17 = 397;
LABEL_13:
    sub_180003268(
      retaddr,
      v17,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v16);
  }
LABEL_65:
  if ( v6 )
    j_j__o_free(v6, v14);
  return (unsigned int)v15;
}
