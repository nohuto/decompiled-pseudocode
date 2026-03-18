/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0094580
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00940E0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vSteadyState@HFDBASIS32@@QEAAXJ@Z @ 0x1C0094810 (-vSteadyState@HFDBASIS32@@QEAAXJ@Z.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0094848 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C0142368 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v4; // r14
  int v7; // esi
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  int v10; // edx
  unsigned __int32 v11; // r10d
  __int32 v12; // r11d
  unsigned __int32 v13; // ebx
  int v14; // eax
  int v15; // r8d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  HFDBASIS32 *v19; // r9
  int v20; // r8d
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  int v24; // r11d
  int v25; // ecx
  int v26; // eax
  HFDBASIS32 *v27; // r10
  _DWORD *v28; // r9
  int v29; // ecx
  _DWORD *v30; // r10
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  __int64 result; // rax
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax

  *(_DWORD *)this = 1;
  v4 = (struct _RECTFX *)((char *)this + 36);
  v7 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = *(__m128i *)&a2->x;
  v9 = *(__m128i *)&a2[2].x;
  v10 = *(_OWORD *)&a2->x - v4->xLeft;
  v11 = _mm_srli_si128(*(__m128i *)&a2->x, 8).m128i_u32[0] - v4->xLeft;
  v12 = v9.m128i_i32[0] - v4->xLeft;
  v13 = _mm_srli_si128(v9, 8).m128i_u32[0] - v4->xLeft;
  v14 = *((_DWORD *)this + 10);
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v14;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)) - v14;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v14;
  if ( ((v10 | v11 | v12 | v13 | v15 | v18 | v17 | v16) & 0xFFFFC000) != 0 )
    return 0LL;
  v19 = (BEZIER32 *)((char *)this + 4);
  *((_DWORD *)this + 1) = v10 << 10;
  *((_DWORD *)this + 2) = (v13 - v10) << 10;
  *((_DWORD *)this + 3) = 6144 * (v13 + v11 - 2 * v12);
  *((_DWORD *)this + 4) = 6144 * (v12 + v10 - 2 * v11);
  *((_DWORD *)this + 5) = v15 << 10;
  *((_DWORD *)this + 6) = (v16 - v15) << 10;
  *((_DWORD *)this + 7) = 6144 * (v16 + v18 - 2 * v17);
  *((_DWORD *)this + 8) = 6144 * (v17 + v15 - 2 * v18);
  if ( !a3 || bIntersect(v4, a3) )
  {
    while ( 1 )
    {
      v20 = *((_DWORD *)this + 4);
      v21 = 65472 << v7;
      v22 = abs32(*((_DWORD *)this + 3));
      v23 = -v20;
      if ( v20 >= 0 )
        v23 = *((_DWORD *)this + 4);
      if ( v22 <= v23 )
      {
        v22 = *((_DWORD *)this + 4);
        if ( v20 < 0 )
          v22 = -*((_DWORD *)this + 4);
      }
      if ( v22 <= v21 )
      {
        v24 = *((_DWORD *)this + 8);
        v25 = -v24;
        v26 = abs32(*((_DWORD *)this + 7));
        if ( v24 >= 0 )
          v25 = *((_DWORD *)this + 8);
        if ( v26 <= v25 )
        {
          v26 = *((_DWORD *)this + 8);
          if ( v24 < 0 )
            v26 = -*((_DWORD *)this + 8);
        }
        if ( v26 <= v21 )
          break;
      }
      v7 += 2;
      v37 = (v20 + *((_DWORD *)this + 3)) >> 1;
      *((_DWORD *)this + 3) = v37;
      v38 = *((_DWORD *)this + 2) - (v37 >> v7);
      v39 = *((_DWORD *)this + 8) + *((_DWORD *)this + 7);
      *((_DWORD *)this + 2) = v38 >> 1;
      v40 = *((_DWORD *)this + 6);
      v39 >>= 1;
      *((_DWORD *)this + 7) = v39;
      *((_DWORD *)this + 6) = (v40 - (v39 >> v7)) >> 1;
      *(_DWORD *)this *= 2;
    }
  }
  HFDBASIS32::vSteadyState(v19, v7);
  HFDBASIS32::vSteadyState(v27, v7);
  v29 = v28[2];
  v31 = v30[2];
  v32 = v28[1];
  *v28 += v32;
  v28[1] = v29 + v32;
  v33 = v29 + v29 - v28[3];
  v28[3] = v29;
  v34 = v30[1];
  *v30 += v34;
  v30[1] = v31 + v34;
  v35 = v31 - v30[3];
  v28[2] = v33;
  --*(_DWORD *)this;
  result = 1LL;
  v30[2] = v31 + v35;
  v30[3] = v31;
  return result;
}
