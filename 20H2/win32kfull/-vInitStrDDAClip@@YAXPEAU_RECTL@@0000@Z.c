/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C0067408
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C006AEAC (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     STR_DIV @ 0x1C0067A30 (STR_DIV.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDAClip(
        struct _RECTL *a1,
        struct _RECTL *a2,
        __m128i *a3,
        struct _RECTL *a4,
        struct _RECTL *a5)
{
  LONG top; // r12d
  LONG left; // r8d
  int v8; // edi
  struct _RECTL *v9; // rax
  struct _RECTL *v10; // r15
  LONG v11; // edx
  LONG v13; // ecx
  __int64 right; // r8
  __int64 v15; // rdx
  int v16; // r10d
  int v17; // edx
  int v18; // ecx
  int v19; // r9d
  LONG v20; // r11d
  LONG v21; // r8d
  unsigned int v22; // r12d
  struct _RECTL *v23; // rdi
  unsigned int v24; // r15d
  int v25; // eax
  LONG v26; // r13d
  LONG v27; // r9d
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  int v31; // r10d
  unsigned int v32; // r13d
  int v33; // r8d
  int v34; // ecx
  int v35; // r9d
  LONG v36; // r11d
  LONG v37; // edx
  struct _RECTL *v38; // r12
  int v39; // esi
  unsigned int v40; // edi
  int v41; // eax
  LONG v42; // r15d
  int v43; // eax
  LONG v44; // r9d
  LONG v45; // r9d
  LONG v46; // ecx
  bool v47; // zf
  LONG v48; // ecx
  __m128i v49; // xmm0
  int v50; // eax
  __m128i v51; // xmm0
  LONG bottom; // eax
  LONG v53; // eax
  unsigned __int64 v54; // [rsp+20h] [rbp-71h]
  unsigned __int64 v55; // [rsp+20h] [rbp-71h]
  unsigned int v56[4]; // [rsp+28h] [rbp-69h] BYREF
  LONG v57; // [rsp+38h] [rbp-59h]
  struct _RECTL *v58; // [rsp+40h] [rbp-51h]
  LONG v59; // [rsp+48h] [rbp-49h]
  unsigned __int64 v60; // [rsp+50h] [rbp-41h]
  struct _RECTL *v61; // [rsp+58h] [rbp-39h]
  __int128 v62; // [rsp+60h] [rbp-31h] BYREF
  __m128i v63; // [rsp+70h] [rbp-21h] BYREF
  __int128 v64; // [rsp+80h] [rbp-11h] BYREF
  __int128 v65; // [rsp+90h] [rbp-1h] BYREF

  top = a2->top;
  left = a2->left;
  v8 = 0;
  v61 = a2;
  v59 = left;
  v9 = a4;
  v58 = a4;
  v10 = a2;
  v11 = a3->m128i_i32[1];
  v13 = a3->m128i_i32[0];
  v57 = top;
  v64 = 0LL;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  if ( __PAIR64__(top, left) )
  {
    LODWORD(v64) = a1->left - left;
    DWORD1(v64) = a1->top - top;
    DWORD2(v64) = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)&v64;
    HIDWORD(v64) = bottom - top;
    DWORD2(v65) = v10->right - left;
    v53 = v10->bottom;
    v10 = (struct _RECTL *)&v65;
    v61 = (struct _RECTL *)&v65;
    HIDWORD(v65) = v53 - top;
    v9 = a4;
  }
  if ( v13 || v11 )
  {
    v49 = *a3;
    a3 = (__m128i *)&v62;
    LODWORD(v62) = v49.m128i_i32[0];
    DWORD2(v62) = v49.m128i_i32[2] - v13;
    DWORD1(v62) = v49.m128i_i32[1] - v11;
    HIDWORD(v62) = v49.m128i_i32[3] - v11;
    v50 = _mm_cvtsi128_si32(v49);
    v63 = *(__m128i *)a4;
    v51 = v63;
    v63.m128i_i32[2] -= v13;
    v63.m128i_i32[1] -= v11;
    LODWORD(v62) = v50 - v13;
    v63.m128i_i32[3] -= v11;
    v63.m128i_i32[0] = _mm_cvtsi128_si32(v51) - v13;
    v9 = (struct _RECTL *)&v63;
    v58 = (struct _RECTL *)&v63;
  }
  ERECTL::operator*=(v9, a3);
  right = (unsigned int)v10->right;
  v15 = (unsigned int)(a3->m128i_i32[2] - a3->m128i_i32[0]);
  *(_QWORD *)v56 = 0LL;
  STR_DIV(v56, v15, right);
  v17 = v56[0];
  v18 = ((v16 - 1) >> 1) + v56[1];
  v54 = __PAIR64__(v18, v56[0]);
  if ( v18 >= v16 )
  {
    v17 = v56[0] + 1;
    v18 -= v16;
    LODWORD(v54) = v56[0] + 1;
    HIDWORD(v54) = v18;
  }
  a5->left = -1;
  v19 = 0;
  a5->right = -1;
  v20 = 0;
  v21 = 0;
  if ( a1->right > 0 )
  {
    v22 = v56[0];
    v23 = v58;
    v24 = v56[1];
    while ( 1 )
    {
      v18 += v24;
      v25 = v17 - v19;
      v17 += v22;
      v26 = v20;
      v20 += v25;
      v60 = v54;
      v54 = __PAIR64__(v18, v17);
      if ( v18 >= v16 )
      {
        ++v17;
        v18 -= v16;
        v54 = __PAIR64__(v18, v17);
      }
      v27 = a5->left;
      if ( a5->left == -1 )
      {
        v27 = -1;
        if ( v23->left >= v26 )
        {
          v27 = -1;
          if ( v23->left <= v20 )
          {
            a5->left = v21;
            v27 = v21;
          }
        }
      }
      v28 = v23->right;
      if ( v28 <= v20 && v28 >= v26 )
        a5->right = v21;
      if ( ++v21 >= a1->right )
        break;
      v19 = v60;
    }
    v29 = a5->right;
    v8 = 0;
    v10 = v61;
    top = v57;
    if ( v27 != -1 )
      goto LABEL_21;
    if ( v29 != -1 )
    {
      a5->left = 0;
LABEL_21:
      if ( v29 == -1 )
        v29 = v21;
      v30 = v29 + 1;
      goto LABEL_24;
    }
  }
  a5->left = 0;
  v30 = 0;
LABEL_24:
  a5->right = v30;
  STR_DIV(v56, (unsigned int)(a3->m128i_i32[3] - a3->m128i_i32[1]), (unsigned int)v10->bottom);
  v32 = v56[0];
  v33 = v56[0];
  v34 = ((v31 - 1) >> 1) + v56[1];
  v55 = __PAIR64__(v34, v56[0]);
  if ( v34 >= v31 )
  {
    v33 = v56[0] + 1;
    v34 -= v31;
    LODWORD(v55) = v56[0] + 1;
    HIDWORD(v55) = v34;
  }
  v35 = 0;
  a5->top = -1;
  v36 = 0;
  a5->bottom = -1;
  v37 = 0;
  if ( a1->bottom <= 0 )
    goto LABEL_52;
  v38 = v58;
  v39 = -1;
  v40 = v56[1];
  while ( 1 )
  {
    v34 += v40;
    v41 = v33 - v35;
    v33 += v32;
    v42 = v36;
    v36 += v41;
    v60 = v55;
    v55 = __PAIR64__(v34, v33);
    if ( v34 >= v31 )
    {
      ++v33;
      v34 -= v31;
      v55 = __PAIR64__(v34, v33);
    }
    v43 = v39;
    if ( v39 == -1 )
    {
      v45 = v38->top;
      v43 = -1;
      if ( v45 >= v42 )
      {
        v43 = -1;
        if ( v45 <= v36 )
        {
          v39 = v37;
          a5->top = v37;
          v43 = v37;
        }
      }
    }
    v44 = v38->bottom;
    if ( v44 <= v36 && v44 >= v42 )
      a5->bottom = v37;
    if ( ++v37 >= a1->bottom )
      break;
    v35 = v60;
  }
  v46 = a5->bottom;
  v8 = 0;
  top = v57;
  v47 = v43 == -1;
  if ( v43 != -1 )
    goto LABEL_40;
  if ( v46 == -1 )
  {
LABEL_52:
    v43 = 0;
    goto LABEL_45;
  }
  v47 = 1;
LABEL_40:
  if ( v47 )
    v43 = 0;
  if ( v46 == -1 )
    v46 = v37;
  v8 = v46 + 1;
LABEL_45:
  v48 = v59;
  a5->left += v59;
  a5->right += v48;
  a5->top = top + v43;
  a5->bottom = top + v8;
}
