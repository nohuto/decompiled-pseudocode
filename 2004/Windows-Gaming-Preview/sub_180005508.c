/*
 * XREFs of sub_180005508 @ 0x180005508
 * Callers:
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_18000507C @ 0x18000507C (sub_18000507C.c)
 *     memcmp @ 0x180045C77 (memcmp.c)
 */

char *__fastcall sub_180005508(__int64 a1, __int64 a2, char *a3, void *a4, size_t Size, int a6)
{
  _DWORD *v6; // rdi
  int v7; // r12d
  char v8; // bl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // al
  const void **v15; // r8
  size_t v16; // r9
  size_t v17; // rdx
  unsigned __int64 v18; // rsi
  size_t v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  int v22; // ecx
  unsigned __int64 v23; // r8
  int v24; // esi
  unsigned __int64 v25; // r8
  bool v26; // zf
  const void **v27; // r8
  size_t v28; // r9
  bool v29; // di
  __int16 v30; // r9
  const void **v31; // r8
  size_t v32; // r9
  char *v34; // [rsp+20h] [rbp-50h]
  __int16 v35; // [rsp+28h] [rbp-48h] BYREF
  char v36; // [rsp+2Ah] [rbp-46h]
  int v37; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v38; // [rsp+30h] [rbp-40h]
  void *v39[2]; // [rsp+38h] [rbp-38h]
  __int16 v40; // [rsp+48h] [rbp-28h] BYREF
  char v41; // [rsp+4Ah] [rbp-26h]
  int v42; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v43; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  char *v45; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)(a2 + 4);
  v7 = -1;
  v35 = *(_WORD *)(a1 + 6);
  v8 = 0;
  v36 = *(_BYTE *)(a1 + 8);
  v37 = 0;
  v38 = 0;
  *(_OWORD *)v39 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / *(_QWORD *)(a1 + 16);
    v13 = (unsigned int)*v6;
    if ( v13 <= v12 || (_DWORD)v13 == (_DWORD)v12 )
      goto LABEL_9;
    *v6 = v12;
    v14 = *(_BYTE *)(a2 + 2);
    if ( v14 == 1 )
    {
      v15 = (const void **)&v45;
      LOWORD(v45) = *(_WORD *)v6;
      v16 = 2LL;
      v17 = 2LL;
    }
    else
    {
      if ( v14 != 2 )
      {
LABEL_9:
        v18 = (unsigned int)*v6;
        v19 = Size;
        v20 = v18 * *(_QWORD *)(a1 + 16);
        *(_OWORD *)Buf2 = 0LL;
        v42 = 0;
        v43 = 0;
        v34 = &a3[v20];
        v40 = *(_WORD *)(a1 + 6);
        v41 = *(_BYTE *)(a1 + 8);
        while ( v18 )
        {
          v21 = *(_QWORD *)(a1 + 32);
          v45 = &a3[(v18 >> 1) * *(_QWORD *)(a1 + 16)];
          sub_18000507C(&v40, (const void **)&v45, v21);
          if ( v19 == v43 )
            v22 = memcmp(Buf1, Buf2[1], v19);
          else
            v22 = v19 - v43;
          if ( v22 <= 0 )
          {
            v18 >>= 1;
          }
          else
          {
            a3 = v45;
            v18 += -1LL - (v18 >> 1);
          }
        }
        if ( a3 < v34 )
        {
          v23 = *(_QWORD *)(a1 + 32);
          v45 = a3;
          sub_18000507C(&v35, (const void **)&v45, v23);
          if ( v19 == v38 )
            v7 = memcmp(Buf1, v39[1], v19);
          else
            v7 = v19 - v38;
          goto LABEL_35;
        }
        return a3;
      }
      v16 = 4LL;
      v15 = (const void **)(a2 + 4);
      v17 = 4LL;
    }
    sub_1800018E0(*(void **)(a2 + 16), v17, v15, v16);
    goto LABEL_9;
  }
  v24 = 0;
  if ( !*v6 )
    return a3;
  while ( 1 )
  {
    v25 = *(_QWORD *)(a1 + 32);
    v45 = a3;
    if ( !sub_18000507C(&v35, (const void **)&v45, v25) )
      break;
    if ( Size == v38 )
      v7 = memcmp(Buf1, v39[1], Size);
    else
      v7 = Size - v38;
    v26 = v7 == 0;
    if ( v7 <= 0 )
      goto LABEL_36;
    a3 = v45;
    if ( (unsigned int)++v24 >= *v6 )
      goto LABEL_35;
  }
  if ( *v6 != v24 )
  {
    v26 = *(_BYTE *)(a2 + 2) == 1;
    *v6 = v24;
    if ( v26 )
    {
      LOWORD(v45) = v24;
      v27 = (const void **)&v45;
      v28 = 2LL;
LABEL_34:
      sub_1800018E0(*(void **)(a2 + 16), v28, v27, v28);
      goto LABEL_35;
    }
    if ( *(_BYTE *)(a2 + 2) == 2 )
    {
      v28 = 4LL;
      v27 = (const void **)v6;
      goto LABEL_34;
    }
  }
LABEL_35:
  v26 = v7 == 0;
LABEL_36:
  if ( !v26 )
    return a3;
  v29 = v36 != 0;
  if ( !v36 )
    goto LABEL_44;
  v30 = v37 + a6;
  if ( v37 == v37 + a6 )
    goto LABEL_44;
  v37 += a6;
  if ( v36 == 1 )
  {
    LOWORD(v45) = v30;
    v31 = (const void **)&v45;
    v32 = 2LL;
  }
  else
  {
    if ( v36 != 2 )
      goto LABEL_44;
    v32 = 4LL;
    v31 = (const void **)&v37;
  }
  sub_1800018E0(v39[0], v32, v31, v32);
LABEL_44:
  if ( v29 || *(_BYTE *)(a1 + 56) )
    v8 = 1;
  *(_BYTE *)(a1 + 56) = v8;
  return 0LL;
}
