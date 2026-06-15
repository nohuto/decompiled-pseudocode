/*
 * XREFs of sub_1800C8AF8 @ 0x1800C8AF8
 * Callers:
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 * Callees:
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180046F70 @ 0x180046F70 (sub_180046F70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 *     sub_1800C2540 @ 0x1800C2540 (sub_1800C2540.c)
 */

__int64 __fastcall sub_1800C8AF8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  int v6; // ebx
  int v7; // edx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // rbx
  unsigned int *v14; // rax
  unsigned int v15; // edi
  int v16; // edx
  int v17; // r9d
  __int64 v18; // r14
  int v19; // eax
  float v20; // xmm0_4
  unsigned __int64 v21; // rcx
  float *v22; // rax
  void *v23; // rcx
  float *v24; // rdx
  __int64 v25; // rcx
  float v26; // xmm6_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rax
  float v32; // xmm0_4
  __int64 v33; // rcx
  double v34[6]; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+30h] [rbp+0h] BYREF
  int v36; // [rsp+34h] [rbp+4h] BYREF
  float v37; // [rsp+38h] [rbp+8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+48h]

  v3 = *a3;
  v35 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v3 + 48))(a3, &v35);
  if ( v6 < 0 )
  {
    v7 = 1841;
LABEL_3:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v6);
    return (unsigned int)v6;
  }
  v9 = *a3;
  v36 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v9 + 152))(a3, &v36);
  if ( v6 < 0 )
  {
    v7 = 1845;
    goto LABEL_3;
  }
  v6 = sub_18002E7C0((__int64 *)a1, v36, (__int64)&unk_180172B28, 1, 0LL);
  if ( v6 < 0 )
  {
    v7 = 1847;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, float *))(*a3 + 80))(a3, &v37);
  if ( v6 < 0 )
  {
    v7 = 1851;
    goto LABEL_3;
  }
  v10 = (4LL * v35 + 16) & -(__int64)(4 * (unsigned __int64)v35 < 4 * (unsigned __int64)v35 + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = (unsigned int *)o_malloc(v10);
      v13 = v14;
      if ( !v14 )
        goto LABEL_20;
      *v14 = 56797;
    }
    else
    {
      v11 = v10 + 15;
      if ( v10 + 15 < v10 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = &v35;
      if ( v34 == (double *)-48LL )
        goto LABEL_21;
      v35 = 52428;
    }
    v13 += 4;
  }
  else
  {
    v13 = 0LL;
  }
LABEL_20:
  if ( !v13 )
  {
LABEL_21:
    v15 = -2147024882;
    v16 = 1854;
    v17 = -2147024882;
    goto LABEL_35;
  }
  v18 = 0LL;
  if ( !v35 )
  {
LABEL_25:
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    v20 = v37;
    *(float *)(a1 + 848) = v37;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800C2540(*((_QWORD *)off_18019C348 + 2), 0x25u, (__int64)&unk_18015DEF0, v20);
    }
    v21 = v35;
    *(_DWORD *)(a1 + 960) = v35;
    v22 = (float *)sub_18006A1B0(saturated_mul(v21, 4uLL));
    v23 = *(void **)(a1 + 968);
    v24 = v22;
    *(_QWORD *)(a1 + 968) = v22;
    if ( v23 )
    {
      sub_180033A70(v23);
      v24 = *(float **)(a1 + 968);
    }
    if ( v24 )
    {
      v25 = 0LL;
      v26 = 0.0;
      if ( *(_DWORD *)(a1 + 960) )
      {
        do
        {
          v27 = *(float *)&v13[v25];
          v24[v25] = v27;
          v28 = fmaxf(v27, v26);
          v29 = *(_DWORD *)(a1 + 960);
          v25 = (unsigned int)(v25 + 1);
          v26 = v28;
        }
        while ( (unsigned int)v25 < v29 );
        if ( v28 > 0.0 )
        {
          v30 = 0LL;
          if ( v29 )
          {
            do
            {
              v31 = *(_QWORD *)(a1 + 968);
              v32 = *(float *)(v31 + 4 * v30) / v26;
              *(float *)(v31 + 4 * v30) = v32;
              if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
                && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
                && *((_BYTE *)off_18019C348 + 25) >= 4u )
              {
                v33 = *((_QWORD *)off_18019C348 + 2);
                v34[4] = v32;
                sub_1800C24EC(v33, 0x26u, (__int64)&unk_18015DEF0, v30);
              }
              v30 = (unsigned int)(v30 + 1);
            }
            while ( (unsigned int)v30 < *(_DWORD *)(a1 + 960) );
          }
        }
      }
      if ( a1 != -808 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
      v15 = 0;
    }
    else
    {
      v15 = -2147024882;
      sub_18004BD84((int)retaddr, 1871, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", -2147024882);
      if ( a1 != -808 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    }
    goto LABEL_48;
  }
  while ( 1 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned int *))(*a3 + 112))(a3, (unsigned int)v18, &v13[v18]);
    v15 = v19;
    if ( v19 < 0 )
      break;
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= v35 )
      goto LABEL_25;
  }
  v17 = v19;
  v16 = 1858;
LABEL_35:
  sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v17);
LABEL_48:
  if ( v13 )
    sub_180046F70((__int64)v13);
  return v15;
}
