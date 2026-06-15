/*
 * XREFs of sub_1800C9420 @ 0x1800C9420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800465C0 @ 0x1800465C0 (sub_1800465C0.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BEB08 @ 0x1800BEB08 (sub_1800BEB08.c)
 *     sub_1800C25E4 @ 0x1800C25E4 (sub_1800C25E4.c)
 *     sub_1800CB3F4 @ 0x1800CB3F4 (sub_1800CB3F4.c)
 *     sub_1800CB468 @ 0x1800CB468 (sub_1800CB468.c)
 *     sub_1800CB4C8 @ 0x1800CB4C8 (sub_1800CB4C8.c)
 */

__int64 __fastcall sub_1800C9420(__int64 a1, __int64 a2, int a3)
{
  char v3; // r13
  char v4; // r14
  _UNKNOWN **v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // edx
  int v12; // r8d
  _UNKNOWN **v13; // rcx
  float *v14; // r15
  __m128 v15; // xmm0
  _DWORD *v16; // r12
  __m128 v17; // xmm1
  unsigned int v18; // eax
  float *v19; // rax
  __int64 v20; // rsi
  float *v21; // r12
  float v22; // xmm0_4
  __int64 v23; // rax
  int v24; // esi
  int v25; // r14d
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  float v29; // xmm1_4
  __int64 v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+40h] [rbp-78h] BYREF
  __int16 v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h] BYREF
  __int16 v35; // [rsp+58h] [rbp-60h]
  char v36; // [rsp+C0h] [rbp+8h]
  float *v37; // [rsp+C8h] [rbp+10h]

  v3 = 0;
  v4 = 0;
  v36 = 0;
  v37 = 0LL;
  v7 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEB08(*((_QWORD *)off_18019C348 + 2), 0x53u, (__int64)&unk_18015DEF0, a1 - 984, a2);
    v7 = (_UNKNOWN **)off_18019C348;
  }
  v8 = a1 - 648;
  v9 = *(_QWORD *)a2 - *(_QWORD *)(a1 - 648);
  if ( *(_QWORD *)a2 == *(_QWORD *)(a1 - 648) )
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)(v8 + 8);
  if ( v9 )
  {
    if ( v7 != &off_18019C348 && (*((_BYTE *)v7 + 28) & 0x40) != 0 && *((_BYTE *)v7 + 25) >= 4u )
      sub_1800CB3F4((unsigned int)v7[2], v8, a3, a1 - 984, a2, a1 - 648);
    v10 = (struct _RTL_CRITICAL_SECTION *)(a1 - 176);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 176));
    v12 = *(_DWORD *)(a1 - 132);
    if ( *(_DWORD *)(a2 + 16) == v12 )
    {
      v13 = (_UNKNOWN **)off_18019C348;
    }
    else
    {
      v13 = (_UNKNOWN **)off_18019C348;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800CB468(*((_QWORD *)off_18019C348 + 2), 86LL, &unk_18015DEF0, a1 - 984, v12, *(_DWORD *)(a2 + 16));
        v13 = (_UNKNOWN **)off_18019C348;
      }
      v3 = 1;
    }
    v14 = (float *)(a2 + 20);
    v15 = (__m128)*(unsigned int *)(a2 + 20);
    v16 = (_DWORD *)(a1 - 136);
    if ( v15.m128_f32[0] != *(float *)(a1 - 136) )
    {
      if ( v13 != &off_18019C348 && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      {
        v17 = (__m128)(unsigned int)*v16;
        v32 = a2 + 20;
        v33 = 4;
        v34 = a1 - 136;
        v35 = 4;
        sub_1800CB4C8(
          (unsigned int)v13[2],
          v11,
          v12,
          a1 - 984,
          *(_OWORD *)&_mm_cvtps_pd(v17),
          *(_OWORD *)&_mm_cvtps_pd(v15),
          (__int64)&v34,
          (__int64)&v32);
        v13 = (_UNKNOWN **)off_18019C348;
      }
      v36 = 1;
    }
    v18 = *(_DWORD *)(a1 - 24);
    if ( *(_DWORD *)(a2 + 24) == v18 )
    {
      v19 = (float *)sub_18006A1B0(saturated_mul(v18, 4uLL));
      v37 = v19;
      if ( v19 && (v20 = 0LL, *(_DWORD *)(a1 - 24)) )
      {
        v21 = v19;
        do
        {
          if ( *v14 == 0.0 )
            v22 = 1.0;
          else
            v22 = *(float *)(a2 + 4 * v20 + 28) / *v14;
          v21[v20] = v22;
          v23 = *(_QWORD *)(a1 - 16);
          if ( v22 == *(float *)(v23 + 4 * v20) )
          {
            v13 = (_UNKNOWN **)off_18019C348;
          }
          else
          {
            v13 = (_UNKNOWN **)off_18019C348;
            if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
              && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
              && *((_BYTE *)off_18019C348 + 25) >= 4u )
            {
              LODWORD(v31) = v20;
              sub_1800C25E4(
                *((_QWORD *)off_18019C348 + 2),
                0x58u,
                (__int64)&unk_18015DEF0,
                a1 - 984,
                v31,
                *(float *)(v23 + 4 * v20),
                v22);
              v13 = (_UNKNOWN **)off_18019C348;
            }
            v4 = 1;
          }
          v20 = (unsigned int)(v20 + 1);
        }
        while ( (unsigned int)v20 < *(_DWORD *)(a1 - 24) );
        v10 = (struct _RTL_CRITICAL_SECTION *)(a1 - 176);
        v16 = (_DWORD *)(a1 - 136);
      }
      else
      {
        v13 = (_UNKNOWN **)off_18019C348;
      }
    }
    if ( v10 )
    {
      LeaveCriticalSection(v10);
      v13 = (_UNKNOWN **)off_18019C348;
    }
    if ( v3 || v36 || v4 )
    {
      if ( v13 != &off_18019C348 && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      {
        sub_1800BB4B4((__int64)v13[2], 0x59u, (__int64)&unk_18015DEF0);
        v13 = (_UNKNOWN **)off_18019C348;
      }
      if ( v4 )
      {
        v24 = 0;
        v25 = 0;
        if ( v13 != &off_18019C348 && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
          sub_1800BB4B4((__int64)v13[2], 0x5Au, (__int64)&unk_18015DEF0);
        EnterCriticalSection(v10);
        v26 = *(_DWORD *)(a1 - 24);
        if ( *(_DWORD *)(a2 + 24) == v26 )
        {
          v27 = 0LL;
          if ( v26 )
          {
            v28 = *(_QWORD *)(a1 - 16);
            do
            {
              v29 = v37[v27];
              if ( *(float *)(v28 + 4 * v27) != v29 )
              {
                *(float *)(v28 + 4 * v27) = v29;
                v25 = v27;
              }
              v27 = (unsigned int)(v27 + 1);
            }
            while ( (unsigned int)v27 < *(_DWORD *)(a1 - 24) );
          }
          v24 = 1;
        }
        if ( v10 )
          LeaveCriticalSection(v10);
        if ( v24 )
          sub_1800465C0(a1 - 968, 1, a2, v25, 1);
        v13 = (_UNKNOWN **)off_18019C348;
      }
      if ( v3 )
      {
        sub_18002E7C0((__int64 *)(a1 - 984), *(_DWORD *)(a2 + 16), (__int64)&unk_180172B28, 1, 0LL);
        v13 = (_UNKNOWN **)off_18019C348;
      }
      if ( v36 )
      {
        if ( v13 != &off_18019C348 && (*((_BYTE *)v13 + 28) & 0x40) != 0 && *((_BYTE *)v13 + 25) >= 4u )
          sub_1800BB4B4((__int64)v13[2], 0x5Bu, (__int64)&unk_18015DEF0);
        EnterCriticalSection(v10);
        *v16 = *(_DWORD *)v14;
        if ( v10 )
          LeaveCriticalSection(v10);
        sub_1800465C0(a1 - 968, 0, a2, 0, 1);
      }
    }
    sub_180033A70(v37);
  }
  else if ( v7 != &off_18019C348 && (*((_BYTE *)v7 + 28) & 0x40) != 0 && *((_BYTE *)v7 + 25) >= 4u )
  {
    sub_1800BD7DC((__int64)v7[2], 0x54u, (__int64)&unk_18015DEF0, a1 - 984);
  }
  return 0LL;
}
