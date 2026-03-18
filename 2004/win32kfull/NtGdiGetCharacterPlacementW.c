/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C02AEDD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     GreGetCharacterPlacementW @ 0x1C02BC170 (GreGetCharacterPlacementW.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(HDC a1, const void *a2, int a3, int a4, __m128i *a5, int a6)
{
  int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // rsi
  const void *v12; // r10
  _BYTE *v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  char *v17; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r8
  ULONG64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rcx
  size_t v29; // r12
  __int64 v30; // r13
  __int64 v31; // rdi
  const void *v32; // rdx
  const void *v33; // rdx
  const void *v34; // rdx
  const void *v35; // rdx
  const void *v36; // rdx
  const void *v37; // rdx
  int CharacterPlacementW; // [rsp+34h] [rbp-B4h]
  unsigned int v39; // [rsp+38h] [rbp-B0h]
  unsigned int v40; // [rsp+3Ch] [rbp-ACh]
  unsigned int v41; // [rsp+40h] [rbp-A8h]
  unsigned int v42; // [rsp+44h] [rbp-A4h]
  unsigned int v43; // [rsp+48h] [rbp-A0h]
  unsigned int v44; // [rsp+4Ch] [rbp-9Ch]
  __m128i v45[4]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int16 *v46; // [rsp+A0h] [rbp-48h]
  __int64 v47; // [rsp+A8h] [rbp-40h]

  v7 = a3;
  v8 = 0;
  CharacterPlacementW = 0;
  v9 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v10 = 0LL;
  v47 = 0LL;
  v11 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( v7 < 0 )
    return 0LL;
  if ( a4 < -1 )
    return 0LL;
  v12 = a2;
  if ( !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[63] = v13[63];
    v45[0] = *a5;
    v45[1] = a5[1];
    v45[2] = a5[2];
    v45[3] = a5[3];
    v7 = a3;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v45[3], 8));
    if ( a3 > v14 )
      v7 = v14;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v15 = (unsigned int)(2 * v7);
  v16 = 4 * v7;
  if ( a5 )
  {
    v9 = 64;
    if ( v45[0].m128i_i64[1] )
    {
      v39 = 64;
      v9 = ((v15 + 3) & 0xFFFFFFFC) + 64;
      if ( (((_DWORD)v15 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
    }
    if ( v45[1].m128i_i64[0] )
    {
      v40 = v9;
      v9 += v16;
      if ( v9 < v40 )
        return 0LL;
    }
    v17 = (char *)v45[1].m128i_i64[1];
    if ( v45[1].m128i_i64[1] )
    {
      v41 = v9;
      v9 += v16;
      if ( v9 < v41 )
        return 0LL;
    }
    if ( v45[2].m128i_i64[0] )
    {
      v42 = v9;
      v9 += v16;
      if ( v9 < v42 )
        return 0LL;
    }
    if ( v45[2].m128i_i64[1] )
    {
      v43 = v9;
      v9 += (v7 + 3) & 0xFFFFFFFC;
      if ( v9 < v43 )
        return 0LL;
    }
    if ( v45[3].m128i_i64[0] )
    {
      v44 = v9;
      v9 += v15;
      if ( v9 < v44 )
        return 0LL;
    }
  }
  else
  {
    v17 = (char *)v45[1].m128i_i64[1];
  }
  if ( v9 <= 40960000 - (int)v15 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v15);
    v15 = (unsigned int)(2 * v7);
    v12 = a2;
  }
  if ( v11 )
  {
    v46 = (unsigned __int16 *)(v11 + v9);
    if ( a5 )
    {
      v10 = v11;
      v47 = v11;
      if ( v45[0].m128i_i64[1] )
        v19 = v11 + v39;
      else
        v19 = 0LL;
      *(_QWORD *)(v11 + 8) = v19;
      if ( v45[1].m128i_i64[0] )
        v20 = v11 + v40;
      else
        v20 = 0LL;
      *(_QWORD *)(v11 + 16) = v20;
      if ( v17 )
        v21 = v11 + v41;
      else
        v21 = 0LL;
      *(_QWORD *)(v11 + 24) = v21;
      if ( v45[2].m128i_i64[0] )
        v22 = v11 + v42;
      else
        v22 = 0LL;
      *(_QWORD *)(v11 + 32) = v22;
      if ( v45[2].m128i_i64[1] )
        v23 = v11 + v43;
      else
        v23 = 0LL;
      *(_QWORD *)(v11 + 40) = v23;
      if ( v45[3].m128i_i64[0] )
        v24 = v11 + v44;
      else
        v24 = 0LL;
      *(_QWORD *)(v11 + 48) = v24;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v7;
    }
    v25 = (unsigned int)v15;
    v26 = (ULONG64)v12 + v15;
    if ( v26 < (unsigned __int64)v12 || v26 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v11 + v9), v12, v25);
    if ( (a6 & 0x200000) != 0 && a5 && v17 )
    {
      v27 = (unsigned int)(4 * v7);
      v28 = *(void **)(v10 + 24);
      if ( &v17[v27] < v17 || (unsigned __int64)&v17[v27] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v17, (unsigned int)(4 * v7));
    }
    CharacterPlacementW = GreGetCharacterPlacementW(a1, v46, v10, a6);
    if ( CharacterPlacementW && a5 )
    {
      a5[3].m128i_i32[3] = *(_DWORD *)(v10 + 60);
      v29 = *(int *)(v10 + 56);
      a5[3].m128i_i32[2] = v29;
      v30 = (unsigned int)(2 * v29);
      v31 = (unsigned int)(4 * v29);
      if ( v45[0].m128i_i64[1] )
      {
        v32 = *(const void **)(v10 + 8);
        if ( v45[0].m128i_i64[1] + v30 > MmUserProbeAddress
          || (unsigned __int64)(v45[0].m128i_i64[1] + v30) <= v45[0].m128i_i64[1] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v45[0].m128i_i64[1], v32, (unsigned int)v30);
      }
      if ( v45[1].m128i_i64[0] )
      {
        v33 = *(const void **)(v10 + 16);
        if ( v31 + v45[1].m128i_i64[0] > MmUserProbeAddress
          || (unsigned __int64)(v31 + v45[1].m128i_i64[0]) <= v45[1].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v45[1].m128i_i64[0], v33, (unsigned int)(4 * v29));
      }
      if ( v17 )
      {
        v34 = *(const void **)(v10 + 24);
        if ( (unsigned __int64)&v17[v31] > MmUserProbeAddress || &v17[v31] <= v17 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v17, v34, (unsigned int)(4 * v29));
      }
      if ( v45[2].m128i_i64[0] )
      {
        v35 = *(const void **)(v10 + 32);
        if ( v31 + v45[2].m128i_i64[0] > MmUserProbeAddress
          || (unsigned __int64)(v31 + v45[2].m128i_i64[0]) <= v45[2].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v45[2].m128i_i64[0], v35, (unsigned int)(4 * v29));
      }
      if ( v45[2].m128i_i64[1] )
      {
        v36 = *(const void **)(v10 + 40);
        if ( v29 + v45[2].m128i_i64[1] > MmUserProbeAddress || v29 + v45[2].m128i_i64[1] <= v45[2].m128i_i64[1] )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove((void *)v45[2].m128i_i64[1], v36, v29);
      }
      if ( v45[3].m128i_i64[0] )
      {
        v37 = *(const void **)(v10 + 48);
        if ( v45[3].m128i_i64[0] + v30 > MmUserProbeAddress
          || (unsigned __int64)(v45[3].m128i_i64[0] + v30) <= v45[3].m128i_i64[0] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)v45[3].m128i_i64[0], v37, (unsigned int)v30);
      }
      v8 = 1;
    }
    else
    {
      v8 = 1;
    }
    FreeTmpBuffer(v11);
  }
  return CharacterPlacementW & (unsigned int)-(v8 != 0);
}
