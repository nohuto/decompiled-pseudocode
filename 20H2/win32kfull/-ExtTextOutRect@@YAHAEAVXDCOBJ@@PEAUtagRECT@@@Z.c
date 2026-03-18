/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009CEFC
 * Callers:
 *     GreExtTextOutRect @ 0x1C0098944 (GreExtTextOutRect.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009CCDC (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D310 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A1194 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *this, struct tagRECT *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  LONG left; // ecx
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // r9d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r12
  int v19; // r8d
  BOOL v20; // r15d
  int v21; // r9d
  int v22; // edx
  int v23; // eax
  struct REGION *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // rcx
  __int32 v32; // eax
  __int32 v33; // eax
  __m128i *v34; // r13
  __int64 v35; // [rsp+60h] [rbp-19h] BYREF
  int v36; // [rsp+68h] [rbp-11h]
  int v37; // [rsp+6Ch] [rbp-Dh]
  __m128i v38; // [rsp+70h] [rbp-9h] BYREF
  __m128i v39; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (*(_DWORD *)(v3 + 36) & 0x10000) != 0 )
    return 0;
  v5 = 1;
  v36 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 208LL);
  v37 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v35, this, 0x204u, 0x80000000);
  v6 = *(_DWORD *)(v35 + 32);
  if ( (v6 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           this,
                           0,
                           0,
                           2u,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 213LL),
                           0LL,
                           0);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v39.m128i_i32[0] = a2->left;
  *(__int64 *)((char *)v39.m128i_i64 + 4) = __PAIR64__(right, top);
  v39.m128i_i32[3] = bottom;
  if ( (v6 & 0x43) != 0x43 )
  {
    bCvtPts1(v35, &v39);
    bottom = v39.m128i_i32[3];
    right = v39.m128i_i32[2];
    top = v39.m128i_i32[1];
    left = v39.m128i_i32[0];
  }
  if ( v37 )
  {
    ++left;
    ++right;
    v39.m128i_i32[0] = left;
    v39.m128i_i32[2] = right;
  }
  if ( left > right )
  {
    v32 = left;
    v39.m128i_i32[0] = right;
    left = right;
    v39.m128i_i32[2] = v32;
    right = v32;
  }
  if ( top > bottom )
  {
    v33 = top;
    v39.m128i_i32[1] = bottom;
    top = bottom;
    v39.m128i_i32[3] = v33;
    bottom = v33;
  }
  if ( left == right || top == bottom )
    return v5;
  v11 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate(this, (struct ERECTL *)&v39);
    v11 = *(_QWORD *)this;
  }
  v12 = *(_QWORD *)(v11 + 496);
  if ( !v12 )
    return v5;
  if ( ((*(_DWORD *)(v12 + 116) & 8) != 0 || *(_QWORD *)(v12 + 224)) && (*(_WORD *)(v12 + 102) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck((struct SURFACE *)v12) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v13 = *(_QWORD *)this;
  v14 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v15 = *(int *)(*(_QWORD *)this + 8 * v14 + 1016);
  if ( (unsigned __int64)(v15 + v39.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v15 + v39.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v16 = *(int *)(v13 + 8 * v14 + 1020);
    if ( (unsigned __int64)(v16 + v39.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v16 + v39.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v17 = (unsigned int)(v15 + v39.m128i_i32[0]);
      v38.m128i_i64[0] = 0LL;
      v39.m128i_i32[0] = v17;
      v18 = 0LL;
      v19 = *(_DWORD *)(v13 + 8 * v14 + 1016) + v39.m128i_i32[2];
      v20 = 0;
      v21 = *(_DWORD *)(v13 + 8 * v14 + 1020) + v39.m128i_i32[1];
      *(__int64 *)((char *)v39.m128i_i64 + 4) = __PAIR64__(v19, v21);
      v22 = v39.m128i_i32[3] + *(_DWORD *)(v13 + 8 * v14 + 1020);
      v39.m128i_i32[3] = v22;
      if ( (int)v17 >= *(_DWORD *)(v13 + 1000) && v19 <= *(_DWORD *)(v13 + 1008) && v21 >= *(_DWORD *)(v13 + 1004) )
        v20 = v22 <= *(_DWORD *)(v13 + 1012);
      v23 = *(_DWORD *)(v13 + 520);
      if ( (v23 & 1) != 0 && (v23 & 2) == 0 )
      {
        v34 = &v39;
        do
        {
          if ( !(unsigned int)bFToL(v17, (char *)&v39 + 4 * (unsigned int)v18, 6LL) )
            break;
          LODWORD(v18) = v18 + 1;
          v34 = (__m128i *)((char *)v34 + 4);
        }
        while ( (unsigned int)v18 < 4 );
        v18 = v38.m128i_i64[0];
      }
      if ( !v20 )
      {
        v18 = v13 + 1752;
        v24 = DC::prgnRao((DC *)v13) ? DC::prgnRao((DC *)v13) : DC::prgnVisSnap((DC *)v13);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v13 + 1752), v24, (struct ERECTL *)&v39, 2);
        v39 = *(__m128i *)(v13 + 1756);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v39) )
          return v5;
      }
      v25 = *(_QWORD *)this;
      v26 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v27 = *(_QWORD *)this + 1592LL;
      v28 = (struct ECLIPOBJ *)*(unsigned int *)(v26 + 152);
      if ( (((unsigned __int8)v28 | *(_BYTE *)(*(_QWORD *)this + 316LL)) & 8) != 0 )
      {
        *(_DWORD *)(v26 + 152) = (unsigned int)v28 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v27,
          *(_QWORD *)this,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)this + 88LL),
          *(_QWORD *)(v12 + 128),
          v12,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
        v25 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v25 + 36) & 0xE0) != 0 && (*(_DWORD *)(v27 + 120) & 0x100) == 0 )
      {
        v38 = v39;
        XDCOBJ::vAccumulateTight(this, v28, &v38);
      }
      ++*(_DWORD *)(v12 + 92);
      v29 = *(_QWORD *)this + 1176LL;
      if ( (*(_DWORD *)(v12 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v12 + 48) + 2832LL))(
                               v12 + 24,
                               0LL,
                               0LL,
                               v18,
                               0LL,
                               &v39,
                               0LL,
                               0LL,
                               v27,
                               v29,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v12 + 24,
                               0LL,
                               0LL,
                               v18,
                               0LL,
                               &v39,
                               0LL,
                               0LL,
                               v27,
                               v29,
                               61680);
    }
  }
  return 0LL;
}
