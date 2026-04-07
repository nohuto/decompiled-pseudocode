/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001DFD0
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BB80 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001CE00 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  LONG left; // r14d
  int v5; // r9d
  LONG top; // esi
  int v8; // ecx
  struct tagRECT v9; // xmm0
  LONG v10; // ebx
  int v11; // r10d
  LONG right; // edx
  int v13; // eax
  int v14; // r11d
  int v15; // edx
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  LONG v19; // ecx
  int v20; // r10d
  LONG v21; // r8d
  int v22; // ecx
  int v23; // r9d
  LONG v24; // ecx
  int v25; // r14d
  int v26; // edx
  unsigned int v27; // ebx
  __int64 v28; // r10
  int v29; // r13d
  __int64 v30; // r11
  int v31; // r12d
  int v32; // r9d
  int v33; // r8d
  int v34; // edx
  bool v35; // zf
  bool v36; // zf
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  __m128 v41; // xmm0
  float v42; // xmm7_4
  float v43; // xmm5_4
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  int v46; // r14d
  __m128 v47; // xmm0
  char v48; // si
  float v49; // xmm9_4
  float v50; // xmm2_4
  float v51; // xmm3_4
  float v52; // xmm8_4
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // eax
  LONG *p_top; // r9
  unsigned int v59; // r8d
  int v61; // ecx
  int v62; // r8d
  int v63; // edx
  int v64; // eax
  int v65; // r8d
  int v66; // edx
  struct tagRECT *v67; // rax
  float v68; // xmm10_4
  float v69; // xmm11_4
  float v70; // xmm1_4
  float v71; // xmm5_4
  int v72; // eax
  int v73; // eax
  int v74; // eax
  unsigned int v75; // [rsp+30h] [rbp-D0h]
  __m128 v76; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v77; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v79[4]; // [rsp+70h] [rbp-90h]
  _DWORD v80[4]; // [rsp+80h] [rbp-80h]
  _DWORD v81[4]; // [rsp+90h] [rbp-70h]
  _DWORD v82[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v75 = 0;
  if ( v5 < 0 )
    v5 = 0;
  v8 = a3[5].bottom - top;
  if ( v8 < 0 )
    v8 = 0;
  v9 = a3[2];
  rc = v9;
  v10 = v9.left;
  if ( rc.top + rc.left > v5 )
  {
    v11 = rc.left * v5 / (rc.top + rc.left);
    v10 = v11;
  }
  else
  {
    v11 = v5 - v9.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v8 )
  {
    v13 = rc.right * v8 / (rc.bottom + rc.right);
    right = v13;
  }
  else
  {
    v13 = v8 - rc.bottom;
  }
  v14 = this[1].left - a3[3].left;
  v15 = top + right;
  v80[0] = top;
  v79[1] = left + v10;
  v16 = a3[3].right + a3[3].bottom + this[1].bottom;
  v80[2] = top + v13;
  v17 = top + v8;
  v18 = a3[3].left + a3[3].top + this[1].right;
  v19 = this[4].left;
  v79[2] = left + v11;
  v20 = this[1].top - a3[3].right;
  v80[3] = v17;
  v79[0] = left;
  v80[1] = v15;
  v79[3] = left + v5;
  if ( (v19 & 1) != 0 )
  {
    v14 -= a3[2].left;
    v18 += a3[2].left;
  }
  if ( (v19 & 2) != 0 )
    v18 += a3[2].top;
  if ( (v19 & 4) != 0 )
  {
    v20 -= a3[2].right;
    v16 += a3[2].right;
  }
  if ( (v19 & 8) != 0 )
    v16 += a3[2].bottom;
  v21 = v9.left;
  rc = v9;
  v22 = v9.left + v9.top;
  if ( v9.left + v9.top > v18 )
  {
    v62 = v18 * v9.left;
    v63 = (v18 * v9.left) >> 31;
    if ( v22 == 2 )
      v64 = (v62 - v63) >> 1;
    else
      v64 = __SPAIR64__(v63, v62) / v22;
    v23 = v64;
    v21 = v64;
  }
  else
  {
    v23 = v18 - v9.top;
  }
  v24 = rc.right;
  v25 = rc.right + rc.bottom;
  if ( rc.right + rc.bottom > v16 )
  {
    v61 = v16 * rc.right;
    if ( v25 == 3 )
      v26 = v61 / 3;
    else
      v26 = v61 / v25;
    v24 = v26;
  }
  else
  {
    v26 = v16 - rc.bottom;
  }
  v82[3] = v20 + v16;
  v27 = 0;
  v81[3] = v14 + v18;
  v82[0] = v20;
  v81[0] = v14;
  v82[1] = v20 + v24;
  v81[1] = v14 + v21;
  v82[2] = v20 + v26;
  v81[2] = v14 + v23;
  while ( 1 )
  {
    v28 = v27 / 3;
    v29 = v80[v28];
    v30 = v27 % 3;
    v31 = v79[v30];
    v32 = v81[v30];
    v33 = v82[v28];
    v34 = v82[(unsigned int)(v28 + 1)] - v33;
    if ( v81[(unsigned int)(v30 + 1)] - v32 <= 0 || v34 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v30 )
    {
      if ( (_DWORD)v30 != 2 )
        goto LABEL_28;
      v35 = (this[4].left & 2) == 0;
    }
    else
    {
      v35 = (this[4].left & 1) == 0;
    }
    if ( !v35 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v28 )
    {
      if ( (_DWORD)v28 != 2 )
        break;
      v36 = (this[4].left & 8) == 0;
    }
    else
    {
      v36 = (this[4].left & 4) == 0;
    }
    if ( v36 )
      break;
LABEL_53:
    if ( ++v27 >= 9 )
      return v75;
  }
  v41 = 0LL;
  v37 = (float)v29;
  v38 = (float)v31;
  v39 = (float)(v79[(unsigned int)(v30 + 1)] - v31) + (float)v31;
  v40 = (float)(v80[(unsigned int)(v28 + 1)] - v29) + (float)v29;
  v41.m128_f32[0] = (float)v32;
  v42 = (float)v33;
  if ( (_DWORD)v30 == 1 )
  {
    v38 = v38 + 0.5;
    v39 = v39 - 0.5;
    if ( v38 > v39 )
      v39 = v38;
  }
  if ( (_DWORD)v28 == 1 )
  {
    v37 = v37 + 0.5;
    v40 = v40 - 0.5;
    if ( v37 > v40 )
      v40 = v37;
  }
  v43 = (float)(v81[(unsigned int)(v30 + 1)] - v32) + v41.m128_f32[0];
  *(_QWORD *)&v77 = __PAIR64__(LODWORD(v37), LODWORD(v38));
  v44 = _mm_shuffle_ps(v41, v41, 225);
  v44.m128_f32[0] = v42;
  v45 = _mm_shuffle_ps(v44, v44, 198);
  v46 = 0;
  v35 = this[3].left == 0x80000000;
  v45.m128_f32[0] = v43;
  *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v40), LODWORD(v39));
  v47 = _mm_shuffle_ps(v45, v45, 39);
  v47.m128_f32[0] = (float)v34 + v42;
  v75 = 0;
  v76 = _mm_shuffle_ps(v47, v47, 57);
  if ( v35 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v48 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v49 = v76.m128_f32[2];
      v50 = v76.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v48 = 1;
  }
  v65 = this[1].top;
  v66 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v66, v65);
  v67 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v67 )
  {
    if ( v48 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v67;
  }
  v49 = v76.m128_f32[2];
  v50 = v76.m128_f32[0];
  v68 = v76.m128_f32[2] - v76.m128_f32[0];
  if ( (float)(v76.m128_f32[2] - v76.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v51 = v76.m128_f32[1];
    v52 = v76.m128_f32[3];
  }
  else
  {
    v52 = v76.m128_f32[3];
    v51 = v76.m128_f32[1];
    v69 = v76.m128_f32[3] - v76.m128_f32[1];
    if ( (float)(v76.m128_f32[3] - v76.m128_f32[1]) > 0.0 )
    {
      v76.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v76.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v76.m128_f32[0])));
      v49 = fminf((float)rc.right, v76.m128_f32[2]);
      v76.m128_f32[2] = v49;
      v52 = fminf((float)rc.bottom, v76.m128_f32[3]);
      v76.m128_f32[3] = v52;
      *(float *)&v77 = *(float *)&v77
                     + (float)((float)((float)(v76.m128_f32[0] - v50) * (float)(*((float *)&v77 + 2) - *(float *)&v77))
                             / v68);
      v70 = (float)((float)(v76.m128_f32[1] - v51) * (float)(*((float *)&v77 + 3) - *((float *)&v77 + 1))) / v69;
      v50 = v76.m128_f32[0];
      v71 = *((float *)&v77 + 3) - (float)(*((float *)&v77 + 1) + v70);
      *((float *)&v77 + 1) = *((float *)&v77 + 1) + v70;
      *((float *)&v77 + 2) = (float)((float)((float)(v49 - v76.m128_f32[0])
                                           * (float)(*((float *)&v77 + 2) - *(float *)&v77))
                                   / v68)
                           + *(float *)&v77;
      v51 = v76.m128_f32[1];
      *((float *)&v77 + 3) = (float)((float)(v71 * (float)(v52 - v76.m128_f32[1])) / v69) + *((float *)&v77 + 1);
    }
  }
  if ( (float)(v49 - v50) > 0.0 && (float)(v52 - v51) > 0.0 )
  {
    v53 = *((_DWORD *)a2 + 6);
    v54 = v53 + 1;
    if ( v53 + 1 < v53 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v46 = -2147024362;
      v75 = -2147024362;
      goto LABEL_84;
    }
    if ( v54 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16LL * v53) = v77;
      *((_DWORD *)a2 + 6) = v54;
      goto LABEL_46;
    }
    v72 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v77);
    v75 = v72;
    v46 = v72;
    if ( v72 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v72, 0xC0u);
    if ( v46 < 0 )
    {
LABEL_84:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x35Du);
      goto LABEL_52;
    }
LABEL_46:
    v55 = *((_DWORD *)a2 + 14);
    v56 = v55 + 1;
    if ( v55 + 1 < v55 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v46 = -2147024362;
      v75 = -2147024362;
      goto LABEL_89;
    }
    if ( v56 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*((_QWORD *)a2 + 4) + 16LL * v55) = v76;
      *((_DWORD *)a2 + 14) = v56;
      goto LABEL_49;
    }
    v73 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 32, 16LL, 1LL, &v76);
    v75 = v73;
    v46 = v73;
    if ( v73 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0xC0u);
    if ( v46 >= 0 )
    {
LABEL_49:
      v57 = *((_DWORD *)a2 + 22);
      p_top = &this[4].top;
      v59 = v57 + 1;
      if ( v57 + 1 < v57 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        v46 = -2147024362;
        v75 = -2147024362;
      }
      else
      {
        if ( v59 <= *((_DWORD *)a2 + 21) )
        {
          v46 = 0;
          v75 = 0;
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v57) = *p_top;
          *((_DWORD *)a2 + 22) = v59;
          goto LABEL_52;
        }
        v74 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
        v75 = v74;
        v46 = v74;
        if ( v74 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0xC0u);
        if ( v46 >= 0 )
          goto LABEL_53;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x361u);
    }
    else
    {
LABEL_89:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x360u);
    }
  }
LABEL_52:
  if ( v46 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x31Du);
  return (unsigned int)v46;
}
