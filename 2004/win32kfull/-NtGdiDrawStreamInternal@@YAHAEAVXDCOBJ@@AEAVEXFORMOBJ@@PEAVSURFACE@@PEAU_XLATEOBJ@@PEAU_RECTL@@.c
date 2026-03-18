/*
 * XREFs of ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0085DA0
 * Callers:
 *     GreDrawStream @ 0x1C00850A0 (GreDrawStream.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00193E8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011B8F8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDrawStreamInternal(
        struct XDCOBJ *a1,
        struct EXFORMOBJ *a2,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int a7,
        char *a8,
        struct _DRAWSTREAMINFO *a9)
{
  unsigned int v9; // r12d
  char *v11; // rdx
  LONG left; // esi
  LONG top; // r15d
  LONG right; // edi
  LONG bottom; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  LONG v22; // r11d
  LONG v23; // r9d
  LONG v24; // r10d
  LONG v25; // ebx
  DC *v26; // rax
  __int64 v27; // rcx
  char *v28; // rdx
  char *v29; // r8
  __int64 v30; // rdx
  __int32 v31; // esi
  int v32; // edi
  int v33; // r15d
  int v34; // r14d
  char *v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r13
  __int32 v38; // r10d
  int v39; // r8d
  int v40; // r9d
  struct ECLIPOBJ *v41; // rdx
  __int32 v42; // ecx
  bool v43; // cc
  XDCOBJ *v44; // r15
  __m128i v45; // xmm1
  char *v46; // r14
  __int64 (__fastcall *v47)(int, int, int, int, int, __int64, int, __int64, __int64); // rbx
  __int64 v48; // rax
  bool v49; // al
  struct SURFACE *v50; // rsi
  struct _SURFOBJ *v51; // rdx
  char *v52; // rdi
  int v54; // eax
  struct REGION *v55; // rax
  int v56; // r10d
  struct _POINTL *v57; // rbx
  LONG v58; // eax
  LONG v59; // eax
  LONG v60; // [rsp+50h] [rbp-91h]
  int v61; // [rsp+50h] [rbp-91h]
  int v62; // [rsp+50h] [rbp-91h]
  __int64 v63; // [rsp+58h] [rbp-89h] BYREF
  int v64; // [rsp+60h] [rbp-81h]
  __int64 v65; // [rsp+68h] [rbp-79h]
  XDCOBJ *v66; // [rsp+70h] [rbp-71h]
  LONG v67; // [rsp+78h] [rbp-69h]
  LONG v68; // [rsp+7Ch] [rbp-65h]
  char *v69; // [rsp+80h] [rbp-61h]
  unsigned __int64 v70; // [rsp+88h] [rbp-59h]
  struct SURFACE *v71; // [rsp+90h] [rbp-51h]
  struct _DRAWSTREAMINFO *v72; // [rsp+98h] [rbp-49h]
  struct _XLATEOBJ *v73; // [rsp+A0h] [rbp-41h]
  __m128i v74; // [rsp+B0h] [rbp-31h] BYREF
  __m128i v75; // [rsp+C0h] [rbp-21h] BYREF

  v9 = 0;
  v11 = a8;
  v73 = a4;
  left = a5->left;
  top = a5->top;
  right = a5->right;
  bottom = a5->bottom;
  v74.m128i_i32[0] = a5->left;
  *(__int64 *)((char *)v74.m128i_i64 + 4) = __PAIR64__(right, top);
  v60 = a6->left;
  v75.m128i_i32[0] = a6->left;
  LODWORD(v65) = a6->top;
  v75.m128i_i32[1] = v65;
  v67 = a6->right;
  v75.m128i_i32[2] = v67;
  v68 = a6->bottom;
  v75.m128i_i32[3] = v68;
  v16 = *(_QWORD *)a1;
  v74.m128i_i32[3] = bottom;
  v63 = 0LL;
  v66 = a1;
  v17 = *(_QWORD *)(v16 + 496);
  v71 = a3;
  v18 = a7;
  v64 = a7;
  LODWORD(v16) = *(_DWORD *)(v17 + 116);
  v69 = a8;
  v72 = a9;
  if ( ((v16 & 8) != 0 || *(_QWORD *)(v17 + 224)) && (*(_WORD *)(v17 + 102) & 0x200) != 0 )
    goto LABEL_78;
  v19 = *(_DWORD *)(v17 + 112);
  if ( (v19 & 0x800) != 0 )
  {
    v54 = UserSurfaceAccessCheck(*(_QWORD *)(v17 + 648));
  }
  else
  {
    if ( (v19 & 0x10000000) == 0 )
      goto LABEL_5;
    v54 = UserScreenAccessCheck(v17, a8);
  }
  if ( !v54 )
  {
LABEL_78:
    EngSetLastError(5u);
    return v9;
  }
  bottom = v74.m128i_i32[3];
  right = v74.m128i_i32[2];
  top = v74.m128i_i32[1];
  left = v74.m128i_i32[0];
  v11 = v69;
  v18 = v64;
LABEL_5:
  v20 = *(_QWORD *)a2;
  v21 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  if ( (v21 & 1) == 0 )
    return v9;
  if ( (v21 & 2) != 0 )
  {
    if ( (v21 & 0x43) != 0x43 )
      bCvtPts1(*(_QWORD *)a2, &v63, 1LL);
  }
  else
  {
    v70 = (unsigned __int64)&v11[v18];
    if ( (unsigned __int64)v11 < v70 )
    {
      v57 = (struct _POINTL *)(v11 + 36);
      while ( v57[-5].y == 9 )
      {
        EXFORMOBJ::bXform(a2, v57 - 4);
        if ( (unsigned int)DC::bDpiScaledSurface(*(DC **)v66) )
          v57->x &= ~0x20u;
        v57 = (struct _POINTL *)((char *)v57 + 60);
        if ( (unsigned __int64)&v57[-5].y >= v70 )
        {
          v20 = *(_QWORD *)a2;
          goto LABEL_9;
        }
      }
      return v9;
    }
  }
LABEL_9:
  if ( (*(_BYTE *)(v20 + 32) & 0x43) == 0x43 )
  {
    v23 = v67;
    v22 = v68;
    v25 = v65;
    v24 = v60;
  }
  else
  {
    bCvtPts1(v20, &v75, 2LL);
    v22 = v75.m128i_i32[3];
    v23 = v75.m128i_i32[2];
    v24 = v75.m128i_i32[0];
    v25 = v75.m128i_i32[1];
  }
  if ( *((_DWORD *)a2 + 3) )
  {
    ++v24;
    ++v23;
  }
  if ( v24 > v23 )
  {
    v58 = v24;
    v24 = v23;
    v23 = v58;
  }
  if ( v25 > v22 )
  {
    v59 = v25;
    v25 = v22;
    v22 = v59;
  }
  if ( top != bottom && left != right )
  {
    v26 = *(DC **)v66;
    v27 = *(_DWORD *)(*(_QWORD *)v66 + 40LL) & 1;
    v65 = *(_QWORD *)(*(_QWORD *)v66 + 496LL);
    v28 = (char *)v26 + 8 * v27;
    LODWORD(v63) = *((_DWORD *)v28 + 254) + v63;
    HIDWORD(v63) += *((_DWORD *)v28 + 255);
    v29 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
    v61 = *((_DWORD *)v29 + 254);
    v9 = 0;
    if ( (unsigned __int64)(v61 + (__int64)left + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v61 + (__int64)right + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v30 = *((int *)v29 + 255);
      if ( (unsigned __int64)(v30 + top + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v30 + bottom + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v31 = v61 + left;
        v74.m128i_i32[0] = v31;
        v32 = *((_DWORD *)v29 + 254) + right;
        v33 = *((_DWORD *)v29 + 255) + top;
        *(__int64 *)((char *)v74.m128i_i64 + 4) = __PAIR64__(v32, v33);
        v34 = *((_DWORD *)v29 + 255) + bottom;
        v74.m128i_i32[3] = v34;
        v35 = (char *)v26 + 8 * (*((_DWORD *)v26 + 10) & 1);
        v62 = *((_DWORD *)v35 + 254);
        if ( (unsigned __int64)(v62 + (__int64)v24 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v62 + (__int64)v23 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v36 = *((int *)v35 + 255);
          v37 = v65;
          if ( (unsigned __int64)(v36 + v25 + 0x80000000LL) <= 0xFFFFFFFF
            && (unsigned __int64)(v36 + v22 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v38 = v62 + v24;
            v39 = v23 + v62;
            v40 = v25 + v36;
            v41 = (struct ECLIPOBJ *)(unsigned int)(v22 + v36);
            if ( v31 > v38
              || v32 < v39
              || v33 > v40
              || v34 < (int)v41
              || (v42 = *((_DWORD *)v26 + 250), v42 > v38)
              || *((_DWORD *)v26 + 252) < v39
              || *((_DWORD *)v26 + 251) > v40
              || *((_DWORD *)v26 + 253) < (int)v41 )
            {
              v44 = v66;
              v46 = (char *)v26 + 1752;
              v55 = XDCOBJ::prgnEffRao((DC **)v66);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v46, v55, (struct ERECTL *)&v74, v56);
              v45 = *(__m128i *)(v46 + 4);
              v74 = v45;
              v32 = v45.m128i_i32[2];
              v31 = v45.m128i_i32[0];
            }
            else
            {
              if ( v42 > v31 )
              {
                v31 = *((_DWORD *)v26 + 250);
                v74.m128i_i32[0] = v31;
              }
              if ( *((_DWORD *)v26 + 251) > v33 )
              {
                v33 = *((_DWORD *)v26 + 251);
                v74.m128i_i32[1] = v33;
              }
              if ( *((_DWORD *)v26 + 252) < v32 )
              {
                v32 = *((_DWORD *)v26 + 252);
                v74.m128i_i32[2] = v32;
              }
              if ( *((_DWORD *)v26 + 253) < v34 )
              {
                v34 = *((_DWORD *)v26 + 253);
                v74.m128i_i32[3] = v34;
              }
              if ( v32 < v31 )
                return 1;
              v43 = v34 < v33;
              v44 = v66;
              if ( v43 )
                v74.m128i_i32[1] = v34;
              v45 = v74;
              v46 = 0LL;
            }
            if ( v31 != v32 && v45.m128i_i32[1] != _mm_srli_si128(v45, 8).m128i_i32[1] )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v44 + 36LL) & 0xE0) != 0 )
              {
                v75 = v45;
                XDCOBJ::vAccumulateTight(v44, v41, (struct ERECTL *)&v75);
              }
              ++*(_DWORD *)(v37 + 92);
              v47 = EngDrawStream;
              v48 = *(_QWORD *)(v37 + 48);
              if ( *(_QWORD *)(v48 + 3408) )
                v47 = *(__int64 (__fastcall **)(int, int, int, int, int, __int64, int, __int64, __int64))(v48 + 3408);
              v49 = (*(_DWORD *)(*(_QWORD *)v44 + 36LL) & 0x200) != 0 && v48 && (*(_DWORD *)(v48 + 40) & 0x20000) != 0;
              if ( *(int *)(v37 + 112) >= 0 && (!v49 || *(_WORD *)(v37 + 100) != 3) )
                v47 = EngDrawStream;
              v50 = v71;
              v75.m128i_i64[0] = 0LL;
              v51 = 0LL;
              v52 = (char *)v71 + 24;
              if ( v71 )
                v51 = (struct _SURFOBJ *)((char *)v71 + 24);
              SURFREFVIEW::bMap((SURFREFVIEW *)&v75, v51);
              if ( v75.m128i_i64[0] )
              {
                if ( !v50 )
                  v52 = 0LL;
                if ( (unsigned int)v47(
                                     v37 + 24,
                                     (int)v52,
                                     (int)v46,
                                     (int)v73,
                                     (int)&v74,
                                     (__int64)&v63,
                                     v64,
                                     (__int64)v69,
                                     (__int64)v72) )
                  v9 = 1;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v75);
              return v9;
            }
            return 1;
          }
        }
      }
    }
  }
  return v9;
}
