/*
 * XREFs of sub_1800057C8 @ 0x1800057C8
 * Callers:
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_180004F80 @ 0x180004F80 (sub_180004F80.c)
 *     sub_18000507C @ 0x18000507C (sub_18000507C.c)
 *     sub_180005508 @ 0x180005508 (sub_180005508.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memcmp @ 0x180045C77 (memcmp.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

char __fastcall sub_1800057C8(__int64 a1, void *Buf1, size_t Size, void *a4, size_t a5, int a6)
{
  __int64 v6; // rdi
  void *v8; // r15
  const void *v10; // r14
  char *v11; // rdi
  char v12; // r12
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v17; // esi
  size_t v18; // r9
  size_t v19; // rdx
  unsigned int *v20; // r8
  unsigned __int64 v21; // r8
  char v23; // si
  __int64 v24; // rcx
  int v25; // r15d
  void *v26; // r12
  __int64 v28; // rax
  char v29; // dl
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  unsigned __int64 v32; // r8
  char *v33; // rcx
  size_t v34; // rdx
  size_t v35; // r8
  unsigned __int64 v36; // r8
  size_t v37; // r9
  size_t v38; // rdx
  unsigned int *v39; // r8
  __int16 v40; // [rsp+30h] [rbp-50h] BYREF
  void *Src; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 v42; // [rsp+40h] [rbp-40h] BYREF
  char v43; // [rsp+42h] [rbp-3Eh]
  unsigned int v44; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int16 v45; // [rsp+48h] [rbp-38h]
  void *Buf2[2]; // [rsp+50h] [rbp-30h]
  __int16 v47; // [rsp+60h] [rbp-20h] BYREF
  char v48; // [rsp+62h] [rbp-1Eh]
  int v49; // [rsp+64h] [rbp-1Ch]
  __int16 v50; // [rsp+68h] [rbp-18h]
  __int128 v51; // [rsp+70h] [rbp-10h]
  __int16 v52; // [rsp+C0h] [rbp+40h] BYREF
  void *v53; // [rsp+C8h] [rbp+48h]
  void *v54; // [rsp+D8h] [rbp+58h]

  v54 = a4;
  v53 = Buf1;
  v6 = *(_QWORD *)(a1 + 24);
  v8 = a4;
  v10 = Buf1;
  if ( !v6 )
    return 0;
  v42 = *(_WORD *)(a1 + 2);
  v11 = (char *)(v6 + 10);
  v12 = 0;
  v43 = *(_BYTE *)(a1 + 4);
  v44 = 0;
  v45 = 0;
  *(_OWORD *)Buf2 = 0LL;
  LOBYTE(v52) = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)(a1 + 32);
    Src = v11;
    if ( !sub_18000507C((__int16 *)&v42, (const void **)&Src, v21) )
    {
      v11 = (char *)Src;
      *(_QWORD *)(a1 + 32) = Src;
      goto LABEL_29;
    }
    if ( Size == v45 )
      v13 = memcmp(v10, Buf2[1], Size);
    else
      v13 = Size - v45;
    if ( v13 < 0 )
    {
      Src = v11;
      goto LABEL_29;
    }
    if ( !v13 )
      break;
    v11 = (char *)Src;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v14 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / *(_QWORD *)(a1 + 16);
      v15 = v44;
      if ( v44 > v14 && v44 != (_DWORD)v14 )
      {
        v15 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / *(_QWORD *)(a1 + 16);
        v44 = v15;
        if ( v43 == 1 )
        {
          v40 = v14;
          sub_1800018E0(Buf2[0], 2uLL, &v40, 2uLL);
        }
        else if ( v43 == 2 )
        {
          sub_1800018E0(Buf2[0], 4uLL, &v44, 4uLL);
          v15 = v44;
        }
      }
      v11 += *(_QWORD *)(a1 + 16) * v15;
    }
    else
    {
      v16 = v44;
      v17 = 0;
      v47 = *(_WORD *)(a1 + 6);
      v48 = *(_BYTE *)(a1 + 8);
      v49 = 0;
      v50 = 0;
      v51 = 0LL;
      if ( v44 )
      {
        do
        {
          if ( !sub_18000507C(&v47, (const void **)&Src, *(_QWORD *)(a1 + 32)) )
            break;
          ++v17;
        }
        while ( v17 < v16 );
        v11 = (char *)Src;
        v8 = v54;
      }
      if ( v16 != v17 )
      {
        v44 = v17;
        if ( v43 == 1 )
        {
          v18 = 2LL;
          v40 = v17;
          v19 = 2LL;
          v20 = (unsigned int *)&v40;
        }
        else
        {
          if ( v43 != 2 )
            goto LABEL_26;
          v19 = 4LL;
          v20 = &v44;
          v18 = 4LL;
        }
        sub_1800018E0(Buf2[0], v19, v20, v18);
      }
LABEL_26:
      v10 = v53;
    }
  }
  Src = sub_180005508(a1, (__int64)&v42, (char *)Src, v8, a5, a6);
  v11 = (char *)Src;
  if ( !Src )
    return 1;
  v12 = 1;
  LOBYTE(v52) = 1;
LABEL_29:
  v23 = v43;
  v24 = 0LL;
  if ( v12 )
  {
    v26 = Buf2[0];
    v25 = v44;
  }
  else
  {
    v25 = 1;
    v44 = 1;
    v26 = 0LL;
    v45 = Size;
    Buf2[0] = 0LL;
    Buf2[1] = (void *)v10;
    if ( v42 )
      v24 = v42;
    else
      v24 = (unsigned __int16)Size + 2LL;
    if ( v43 == 1 )
    {
      v24 += 2LL;
    }
    else if ( v43 == 2 )
    {
      v24 += 4LL;
    }
  }
  v28 = *(unsigned __int16 *)(a1 + 6);
  v29 = *(_BYTE *)(a1 + 8);
  v49 = a6;
  v50 = a5;
  v47 = v28;
  v48 = v29;
  *(_QWORD *)&v51 = 0LL;
  *((_QWORD *)&v51 + 1) = v54;
  if ( !(_WORD)v28 )
    v28 = (unsigned __int16)a5 + 2LL;
  if ( v29 == 1 )
  {
    v28 += 2LL;
  }
  else if ( v29 == 2 )
  {
    v28 += 4LL;
  }
  v30 = *(_QWORD *)(a1 + 40);
  v31 = v28 + v24;
  v32 = *(_QWORD *)(a1 + 32);
  if ( ((v30 - v32) & -(__int64)(v32 < v30)) >= v28 + v24 )
  {
    v33 = &v11[v31];
    v34 = v30 - v31 - (_QWORD)v11;
    v35 = v32 - (_QWORD)v11;
    if ( v35 )
    {
      if ( !v33 || !v11 )
      {
        *(_DWORD *)o__errno(v33, v34) = 22;
        goto LABEL_52;
      }
      if ( v34 >= v35 )
      {
        memmove(v33, v11, v35);
      }
      else
      {
        *(_DWORD *)((__int64 (*)(void))o__errno)() = 34;
LABEL_52:
        o__invalid_parameter_noinfo();
      }
    }
    v36 = v31 + *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v36;
    if ( (_BYTE)v52 )
    {
      if ( v23 )
      {
        v44 = v25 + 1;
        if ( v23 == 1 )
        {
          v37 = 2LL;
          v52 = v25 + 1;
          v38 = 2LL;
          v39 = (unsigned int *)&v52;
        }
        else
        {
          if ( v23 != 2 )
            goto LABEL_65;
          v39 = &v44;
          v37 = 4LL;
          v38 = 4LL;
        }
        sub_1800018E0(v26, v38, v39, v37);
      }
    }
    else
    {
      sub_180004F80((__int64)&v42, &Src, v36);
    }
LABEL_65:
    sub_180004F80((__int64)&v47, &Src, *(_QWORD *)(a1 + 32));
    *(_BYTE *)(a1 + 56) = 1;
    return 1;
  }
  return 0;
}
