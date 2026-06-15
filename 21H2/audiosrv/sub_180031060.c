/*
 * XREFs of sub_180031060 @ 0x180031060
 * Callers:
 *     sub_180031050 @ 0x180031050 (sub_180031050.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E3CDC @ 0x1800E3CDC (sub_1800E3CDC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031060(__int64 a1, _QWORD *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // r14
  _OWORD *v6; // rbx
  char *v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  _WORD *v10; // rax
  _WORD *v11; // r9
  int v12; // ebp
  unsigned __int64 v13; // rax
  _WORD *v14; // rdx
  int v15; // r10d
  __int64 v16; // r8
  unsigned __int64 v17; // rdi
  char *v18; // rsi
  __int16 v19; // cx
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  LPVOID v23; // rsi
  size_t v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rdi
  LPVOID v27; // rsi
  size_t v28; // rbx
  LPMALLOC ppMalloc; // [rsp+60h] [rbp+8h] BYREF
  _OWORD *v31; // [rsp+70h] [rbp+18h]

  v4 = (_OWORD *)sub_18006A18C(96LL, &unk_18019F848);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  v31 = v5;
  v7 = *(char **)a1;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&v7[2 * v8] );
  *(_QWORD *)v5 = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 >= v8 )
  {
    if ( is_mul_ok(v9, 2uLL) )
    {
      v10 = CoTaskMemAlloc(2 * v9);
      v11 = v10;
      *(_QWORD *)v5 = v10;
      if ( !v10 )
        goto LABEL_41;
      v12 = 0;
      if ( v9 > 0x7FFFFFFF )
        goto LABEL_40;
      if ( v8 < 0x7FFFFFFF )
      {
        if ( !v7 )
        {
          v7 = (char *)&unk_18015C744;
          v8 = 0LL;
        }
        if ( v9 )
        {
          v13 = v9;
          v14 = v11;
          v15 = 0;
          v16 = 0LL;
          v17 = v8 - v9;
          v18 = (char *)(v7 - (char *)v11);
          while ( v17 + v13 )
          {
            v19 = *(_WORD *)&v18[(_QWORD)v14];
            if ( !v19 )
              break;
            *v14++ = v19;
            ++v16;
            if ( !--v13 )
            {
              --v14;
              --v16;
              v15 = -2147024774;
              break;
            }
          }
          *v14 = 0;
          v20 = v9 - v16;
          if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
            memset(&v11[v16 + 1], 0, 2 * v20 - 2);
        }
        goto LABEL_20;
      }
      if ( v8 != -1LL )
LABEL_40:
        *v10 = 0;
    }
    else
    {
      v12 = -2147024362;
    }
LABEL_20:
    if ( v12 < 0 )
      goto LABEL_32;
    v21 = *(_QWORD *)(a1 + 16);
    if ( !v21 )
      goto LABEL_26;
    v22 = *(unsigned __int16 *)(v21 + 16);
    v23 = CoTaskMemAlloc(v22 + 18);
    *((_QWORD *)v5 + 2) = v23;
    if ( v23 )
    {
      v24 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v24 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v23);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset(*((void **)v5 + 2), 0, v24);
      v12 = 0;
      memcpy(*((void **)v5 + 2), *(const void **)(a1 + 16), v22 + 18);
LABEL_26:
      v25 = *(_QWORD *)(a1 + 24);
      if ( !v25 )
      {
LABEL_31:
        v5[4] = *(_OWORD *)(a1 + 64);
        v5[3] = *(_OWORD *)(a1 + 48);
        *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 8);
        *((_QWORD *)v5 + 4) = *(_QWORD *)(a1 + 32);
        *((_QWORD *)v5 + 5) = *(_QWORD *)(a1 + 40);
        v5[5] = *(_OWORD *)(a1 + 80);
        v6 = 0LL;
        *a2 = v5;
        goto LABEL_32;
      }
      v26 = *(unsigned __int16 *)(v25 + 16);
      v27 = CoTaskMemAlloc(v26 + 18);
      *((_QWORD *)v5 + 3) = v27;
      if ( v27 )
      {
        v28 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v28 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v27);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset(*((void **)v5 + 3), 0, v28);
        v12 = 0;
        memcpy(*((void **)v5 + 3), *(const void **)(a1 + 24), v26 + 18);
        goto LABEL_31;
      }
    }
LABEL_41:
    v12 = -2147024882;
    goto LABEL_32;
  }
  v12 = -2147024362;
LABEL_32:
  if ( v6 )
    sub_1800E3CDC(v6);
  return (unsigned int)v12;
}
