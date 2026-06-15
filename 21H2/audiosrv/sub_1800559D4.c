/*
 * XREFs of sub_1800559D4 @ 0x1800559D4
 * Callers:
 *     sub_1800690C0 @ 0x1800690C0 (sub_1800690C0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180055C94 @ 0x180055C94 (sub_180055C94.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800559D4(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 v13; // rax
  char *v14; // rax
  char *v15; // rcx
  _QWORD *v16; // r15
  __int64 v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rdx
  __int64 v23; // r10
  int v24; // eax
  _QWORD *v25; // r14
  unsigned __int64 v26; // r15
  unsigned int v27; // eax
  unsigned __int16 *v29; // rax
  __int64 v30; // r8
  int v31; // edx
  int v32; // ecx
  unsigned __int16 *v33; // rax
  __int64 v34; // r9
  int v35; // r8d
  int v36; // ecx
  __int64 v37; // rax
  unsigned __int64 v38; // kr10_8
  _QWORD *v39; // r12
  __int64 *v40; // r14
  unsigned int v41; // edi
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rbp
  unsigned __int64 v44; // rbx
  bool v45; // cc
  __int64 *v46; // r15
  __int64 v47; // r9
  unsigned __int16 *v48; // rax
  __int64 v49; // r8
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 i; // rdx
  __int64 v55; // r9
  unsigned __int16 *v56; // rax
  __int64 v57; // r10
  int v58; // r8d
  int v59; // ecx
  void *v60; // [rsp+40h] [rbp-48h]
  __int64 v61[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v62; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v63; // [rsp+A0h] [rbp+18h]
  char *v64; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v7 = sub_180055C94(v5, v6, a2);
  v63 = v7;
  if ( v7 )
  {
    v8 = v7;
    v10 = v7;
    v9 = 4LL * v7;
    if ( !is_mul_ok(v10, 4uLL) )
      v9 = -1LL;
    v60 = (void *)sub_18006A1B0(v9, &unk_18019F848);
    v11 = 8 * v8;
    if ( !is_mul_ok(v8, 8uLL) )
      v11 = -1LL;
    v12 = (_QWORD *)sub_18006A1B0(v11, &unk_18019F848);
    v13 = 16 * v8;
    if ( !is_mul_ok(v8, 0x10uLL) )
      v13 = -1LL;
    v14 = (char *)sub_18006A1B0(v13, &unk_18019F848);
    v64 = v14;
    v15 = v14;
    if ( !v60 || !v12 || !v14 )
    {
      v4 = -2147024882;
      goto LABEL_30;
    }
    v16 = (_QWORD *)(v5 + 8);
    v17 = 0LL;
    v18 = v16;
    if ( (unsigned __int64)v16 < v6 )
    {
      while ( 1 )
      {
        if ( v4 < 0 )
          goto LABEL_27;
        v19 = *v18;
        if ( *v18 )
        {
          if ( a2 )
          {
            v29 = *(unsigned __int16 **)(v19 + 32);
            if ( !v29 )
              goto LABEL_17;
            v30 = a2 - (_QWORD)v29;
            do
            {
              v31 = *(unsigned __int16 *)((char *)v29 + v30);
              v32 = *v29 - v31;
              if ( v32 )
                break;
              ++v29;
            }
            while ( v31 );
            if ( v32 )
            {
LABEL_39:
              v15 = v64;
              goto LABEL_17;
            }
          }
          v61[0] = 0LL;
          LODWORD(v62) = 2;
          v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *, __int64 *))v19)(&v62, v19, dword_18015B910, v61);
          if ( v4 < 0 )
            goto LABEL_39;
          v12[v17] = v61[0];
          v20 = 2LL * (unsigned int)v17;
          v17 = (unsigned int)(v17 + 1);
          v15 = v64;
          *(_OWORD *)&v64[8 * v20] = *(_OWORD *)*(_QWORD *)(*v18 + 8LL);
        }
LABEL_17:
        if ( (unsigned __int64)++v18 >= v6 )
        {
          if ( v4 < 0 )
            goto LABEL_27;
          break;
        }
      }
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD *, void *, unsigned int))(*(_QWORD *)a1 + 80LL))(
           a1,
           a2,
           v15,
           v12,
           v60,
           v63);
    if ( v4 >= 0 )
    {
      v17 = 0LL;
      v21 = 0LL;
      v22 = (v6 - (unsigned __int64)v16 + 7) >> 3;
      if ( (unsigned __int64)v16 > v6 )
        v22 = 0LL;
      if ( !v22 )
      {
LABEL_30:
        sub_180033A70(v60);
        sub_180033A70(v64);
        sub_180033A70(v12);
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_31;
      }
      do
      {
        v23 = *v16;
        if ( *v16 )
        {
          if ( !a2 )
            goto LABEL_25;
          v33 = *(unsigned __int16 **)(v23 + 32);
          if ( v33 )
          {
            v34 = a2 - (_QWORD)v33;
            do
            {
              v35 = *(unsigned __int16 *)((char *)v33 + v34);
              v36 = *v33 - v35;
              if ( v36 )
                break;
              ++v33;
            }
            while ( v35 );
            if ( !v36 )
            {
LABEL_25:
              v24 = *((_DWORD *)v60 + v17);
              v17 = (unsigned int)(v17 + 1);
              *(_DWORD *)(*(_QWORD *)(v23 + 24) + 8LL) = v24;
            }
          }
        }
        ++v16;
        ++v21;
      }
      while ( v21 < v22 );
    }
LABEL_27:
    if ( (_DWORD)v17 )
    {
      v25 = v12;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v25 + 16LL))(*v25);
        ++v25;
        --v17;
      }
      while ( v17 );
    }
    goto LABEL_30;
  }
LABEL_31:
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v27 = sub_180055C94(v6, v26, a2);
  if ( v27 )
  {
    v38 = v27;
    v37 = 8LL * v27;
    if ( !is_mul_ok(v38, 8uLL) )
      v37 = -1LL;
    v39 = (_QWORD *)sub_18006A1B0(v37, &unk_18019F848);
    if ( !v39 )
      v4 = -2147024882;
    if ( v4 >= 0 )
    {
      v40 = (__int64 *)(v6 + 8);
      v62 = 0LL;
      v41 = 0;
      v42 = v26 - (v6 + 8);
      v43 = 0LL;
      v44 = (v42 + 7) >> 3;
      v45 = (unsigned __int64)v40 <= v26;
      v46 = v40;
      if ( !v45 )
        v44 = 0LL;
      if ( v44 )
      {
        do
        {
          v47 = *v46;
          if ( *v46 )
          {
            if ( !a2 )
              goto LABEL_61;
            v48 = *(unsigned __int16 **)(v47 + 32);
            if ( v48 )
            {
              v49 = a2 - (_QWORD)v48;
              do
              {
                v50 = *(unsigned __int16 *)((char *)v48 + v49);
                v51 = *v48 - v50;
                if ( v51 )
                  break;
                ++v48;
              }
              while ( v50 );
              if ( !v51 )
              {
LABEL_61:
                v52 = (*(__int64 (**)(void))(v47 + 8))();
                v53 = v41++;
                v39[v53] = v52;
              }
            }
          }
          ++v46;
          ++v43;
        }
        while ( v43 < v44 );
      }
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64 *, unsigned int))(*(_QWORD *)a1 + 64LL))(
             a1,
             a2,
             v39,
             &v62,
             v41);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; i < v44; ++i )
        {
          v55 = *v40;
          if ( *v40 )
          {
            if ( !a2 )
              goto LABEL_72;
            v56 = *(unsigned __int16 **)(v55 + 32);
            if ( v56 )
            {
              v57 = a2 - (_QWORD)v56;
              do
              {
                v58 = *(unsigned __int16 *)((char *)v56 + v57);
                v59 = *v56 - v58;
                if ( v59 )
                  break;
                ++v56;
              }
              while ( v58 );
              if ( !v59 )
LABEL_72:
                *(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL) = v62;
            }
          }
          ++v40;
        }
      }
    }
    sub_180033A70(v39);
  }
  return (unsigned int)v4;
}
