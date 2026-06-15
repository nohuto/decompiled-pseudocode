/*
 * XREFs of sub_18011B0C8 @ 0x18011B0C8
 * Callers:
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC750 @ 0x1800BC750 (sub_1800BC750.c)
 *     sub_18011A554 @ 0x18011A554 (sub_18011A554.c)
 *     sub_18011CF10 @ 0x18011CF10 (sub_18011CF10.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011B0C8(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int64 a4,
        _BYTE *a5,
        char a6,
        signed __int64 a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12)
{
  signed int v14; // ebx
  signed __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  char *v18; // rsi
  int v19; // ebx
  __int64 *v20; // rax
  unsigned int v21; // eax
  int v22; // eax
  int v23; // edi
  int v24; // r9d
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  unsigned int v29; // eax
  int *v30; // rcx
  int v31; // r15d
  unsigned int v32; // edi
  unsigned int v33; // r12d
  unsigned int *v34; // rcx
  int v35; // eax
  int v37; // [rsp+20h] [rbp-D1h]
  int v38; // [rsp+28h] [rbp-C9h]
  LPVOID pv; // [rsp+60h] [rbp-91h] BYREF
  int v40; // [rsp+68h] [rbp-89h] BYREF
  int v41; // [rsp+6Ch] [rbp-85h] BYREF
  unsigned int v42; // [rsp+70h] [rbp-81h]
  int *v43; // [rsp+78h] [rbp-79h]
  unsigned int *v44; // [rsp+80h] [rbp-71h]
  __int128 *v45; // [rsp+88h] [rbp-69h] BYREF
  signed __int64 v46; // [rsp+90h] [rbp-61h]
  char *v47; // [rsp+98h] [rbp-59h]
  __int64 v48; // [rsp+A0h] [rbp-51h]
  __int64 v49; // [rsp+A8h] [rbp-49h]
  int *v50; // [rsp+B0h] [rbp-41h]
  __int64 v51; // [rsp+B8h] [rbp-39h]
  __int128 v52; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-21h] BYREF

  v48 = a4;
  v45 = a3;
  v40 = a2;
  v49 = a1;
  v44 = (unsigned int *)a9;
  v43 = a10;
  v50 = a12;
  v14 = 0;
  v15 = 100000LL;
  if ( a7 )
    v15 = a7;
  v46 = v15;
  v16 = (int)((double)*(int *)(a4 + 4) * (double)(int)v15 / 10000000.0 + 0.5);
  *a11 = v16;
  *a10 = v16;
  *a9 = v16;
  *a8 = v16;
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v47 = 0LL;
    pv = 0LL;
    v51 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &pv);
    if ( v14 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_6:
      v17 = 0LL;
LABEL_7:
      CoTaskMemFree(v17);
      return (unsigned int)v14;
    }
    v42 = *(unsigned __int16 *)(a4 + 16) + 64;
    v18 = (char *)CoTaskMemAlloc(v42);
    CoTaskMemFree(0LL);
    v47 = v18;
    if ( !v18 )
    {
      v14 = -2147024882;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_6;
    }
    *(_DWORD *)v18 = *(unsigned __int16 *)(a4 + 16) + 64;
    *((_DWORD *)v18 + 1) = MMDevAPI_9(pv);
    v19 = v40;
    *((_DWORD *)v18 + 2) = v40;
    if ( (unsigned int)sub_180022F30((_QWORD *)a1, v19) )
    {
      v52 = *v45;
      v20 = sub_18001E240(a1, &v53, v19, &v52, 1);
    }
    else
    {
      v52 = xmmword_18015B730;
      v20 = (__int64 *)&v52;
    }
    *(_OWORD *)(v18 + 12) = *(_OWORD *)v20;
    memcpy(v18 + 44, (const void *)a4, *(unsigned __int16 *)(a4 + 16) + 18LL);
    v14 = sub_18011A554(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 188), (__int64)v18, v42, v46, &v41);
    if ( v14 < 0 )
    {
LABEL_14:
      CoTaskMemFree(pv);
      pv = 0LL;
      v17 = v18;
      goto LABEL_7;
    }
    v21 = v41;
    *a11 = v41;
    *v43 = v21;
    *v44 = v21;
    *a8 = v21;
    if ( !v40 && !a7 )
    {
      if ( *(_DWORD *)(a1 + 188) == 1
        && (unsigned int)dword_18019DA08 > v46
        && (!a5 || !*a5)
        && (int)sub_18011A554(*(_QWORD *)(a1 + 16), 1, (__int64)v18, v42, (unsigned int)dword_18019DA08, &v40) >= 0 )
      {
        *a11 = v40;
      }
      if ( a5 )
      {
        v52 = *v45;
        v14 = sub_18011CF10(
                (_DWORD)a5,
                *(_DWORD *)(a4 + 8),
                *(unsigned __int16 *)(a4 + 12),
                (unsigned int)&v52,
                v37,
                v38);
        if ( v14 < 0 )
          goto LABEL_14;
        if ( *(_DWORD *)(a1 + 188) != 1 || (v22 = v40, !*a5) )
          v22 = *a8;
        *a11 = v22;
      }
      else if ( a6 )
      {
        v23 = -1;
        v14 = sub_1800BC750(0x61A8uLL, *(unsigned int *)(a4 + 8), (unsigned __int64 *)&v45);
        if ( v14 >= 0 )
        {
          if ( v45 )
          {
            v14 = -2147024362;
            v26 = ((unsigned __int64)v45 - 1) / (unsigned int)(10000000 * v24);
            v27 = v26 + 1;
            if ( v26 + 1 < v26 )
              goto LABEL_14;
            if ( v27 <= v25 )
              v23 = v26 + 1;
            v14 = v25 < v27 ? 0x80070216 : 0;
          }
          else
          {
            v23 = 0;
            v14 = 0;
          }
        }
        if ( v14 < 0 )
          goto LABEL_14;
        v28 = (v23 - 1) & 0xFFFFFFE0;
        do
        {
          v29 = *a8;
          v28 += 32;
          if ( v28 >= *a8 )
          {
            v30 = v43;
            goto LABEL_43;
          }
        }
        while ( (int)sub_18011A554(
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a1 + 188),
                       (__int64)v18,
                       v42,
                       (unsigned int)(int)((double)(int)v28 * 10000000.0 / (double)*(int *)(a4 + 4) + 0.5),
                       &v41) < 0
             || v28 != v41 );
        v30 = v43;
        *v43 = v41;
        v29 = *a8;
LABEL_43:
        if ( *v30 < v29 )
        {
          v31 = 0;
          while ( 1 )
          {
            v32 = 32 * (1 << v31);
            v33 = v32 * ((*v43 - 1) / v32 + 1);
            if ( v33 < *a8
              && (int)sub_18011A554(
                        *(_QWORD *)(v49 + 16),
                        *(_DWORD *)(v49 + 188),
                        (__int64)v18,
                        v42,
                        (unsigned int)(int)((double)(int)v33 * 10000000.0 / (double)*(int *)(v48 + 4) + 0.5),
                        &v41) >= 0
              && v41 == v33 )
            {
              break;
            }
            if ( ++v31 >= 3 )
            {
              v34 = v44;
              v32 = *v44;
              goto LABEL_50;
            }
          }
          v34 = v44;
          *v44 = v32;
LABEL_50:
          v35 = *a8;
          if ( v32 == *a8 )
          {
            *v34 = v35;
            *v43 = v35;
          }
        }
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v18);
  }
  *v50 = *a11;
  if ( *a11 > (unsigned int)*a8 )
    *a11 = *a8;
  return (unsigned int)v14;
}
