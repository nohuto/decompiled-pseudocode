/*
 * XREFs of ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180268A44
 * Callers:
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x180269130 (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800A875C (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800C6448 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor @ 0x1800E2598 (floor.c)
 */

__int64 __fastcall CColorKeyBitmap::InitColorKey(CColorKeyBitmap *this, const struct PixelFormatInfo *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r12d
  const __m128i *v6; // rbx
  __m128i v7; // xmm6
  const __m128i *v8; // r15
  struct _D3DCOLORVALUE v9; // xmm0
  int v10; // eax
  int v11; // eax
  unsigned __int8 v12; // di
  unsigned __int8 v13; // r14
  int v14; // ebx
  int v15; // ebx
  unsigned __int8 v16; // al
  __m128 v17; // xmm0
  int v18; // eax
  int v19; // ebx
  unsigned __int8 v20; // al
  int v21; // eax
  unsigned __int8 v22; // di
  unsigned __int8 v23; // r14
  int v24; // ebx
  int v25; // ebx
  unsigned __int8 v26; // al
  __m128 v27; // xmm0
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  unsigned __int8 v31; // al
  int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // edx
  __int16 v35; // bx
  unsigned __int32 v36; // eax
  int v37; // ecx
  unsigned __int32 v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  int v41; // r11d
  __int16 v42; // r11
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int v48; // r10d
  __int16 v49; // r10
  unsigned int v50; // eax
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // edx
  int v55; // r9d
  __int16 v56; // r9
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // ecx
  D3DVALUE r; // xmm0_4
  unsigned int v62; // edx
  int v63; // ebx
  __int16 v64; // bx
  unsigned int v65; // eax
  int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // ecx
  unsigned int v69; // edx
  __int16 v70; // r11
  __int16 v71; // r11
  unsigned int v72; // eax
  int v73; // ecx
  unsigned int v74; // edx
  unsigned int v75; // ecx
  unsigned int v76; // edx
  __int16 v77; // r10
  __int16 v78; // r10
  unsigned int v79; // eax
  int v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // edx
  __int16 v84; // r9
  __int16 v85; // r9
  unsigned int v86; // eax
  int v87; // edi
  unsigned int v88; // edx
  unsigned int v89; // ecx
  unsigned int v91; // [rsp+20h] [rbp-40h]
  __m128i v92; // [rsp+30h] [rbp-30h]
  struct _D3DCOLORVALUE v93; // [rsp+40h] [rbp-20h] BYREF

  v3 = *((unsigned int *)a2 + 2);
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 1 )
    {
      v91 = 213;
LABEL_4:
      v4 = -2003292288;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292288, v91, 0LL);
      return v4;
    }
    v6 = (const __m128i *)((char *)this + 56);
    v7 = _mm_loadu_si128((const __m128i *)((char *)this + 56));
    v8 = (const __m128i *)((char *)this + 72);
    *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)((char *)this + 72));
    v92 = v7;
  }
  else
  {
    v6 = (const __m128i *)((char *)this + 56);
    v8 = (const __m128i *)((char *)this + 72);
    v7 = _mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                            &v93,
                                            (const struct _D3DCOLORVALUE *)((char *)this + 56)));
    v92 = v7;
    *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                                                                                &v93,
                                                                                                (const struct _D3DCOLORVALUE *)((char *)this + 72)));
  }
  v10 = *(_DWORD *)a2;
  *(struct _D3DCOLORVALUE *)&v93.r = *(struct _D3DCOLORVALUE *)&v9.r;
  switch ( v10 )
  {
    case 2:
      *(__m128i *)((char *)this + 108) = v7;
      *(struct _D3DCOLORVALUE *)((char *)this + 140) = *(struct _D3DCOLORVALUE *)&v9.r;
      return v4;
    case 10:
      v33 = HIWORD(v92.m128i_i32[0]) & 0x8000;
      v34 = v92.m128i_i32[0] & 0x7FFFFFFF;
      if ( (v92.m128i_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v36 = v92.m128i_i32[0] & 0x7FFFFFFF;
        if ( v34 >= 0x38800000 )
        {
          v39 = v34 - 939520001;
        }
        else
        {
          v37 = 113 - (v34 >> 23);
          if ( v37 >= 24 )
            v38 = 0;
          else
            v38 = (v92.m128i_i32[0] & 0x7FFFFF | 0x800000u) >> v37;
          v36 = v38;
          v39 = v38 + 4095;
        }
        v35 = ((((v36 >> 13) & 1) + v39) >> 13) | v33;
      }
      else
      {
        v35 = v33 | 0x7FFF;
      }
      v40 = v92.m128i_i32[1] & 0x7FFFFFFF;
      v41 = HIWORD(v92.m128i_i32[1]) & 0x8000;
      if ( (v92.m128i_i32[1] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v43 = v92.m128i_i32[1] & 0x7FFFFFFF;
        if ( v40 >= 0x38800000 )
        {
          v46 = v40 - 939520001;
        }
        else
        {
          v44 = 113 - (v40 >> 23);
          if ( v44 >= 24 )
            v45 = 0;
          else
            v45 = (v92.m128i_i32[1] & 0x7FFFFF | 0x800000u) >> v44;
          v43 = v45;
          v46 = v45 + 4095;
        }
        v42 = ((((v43 >> 13) & 1) + v46) >> 13) | v41;
      }
      else
      {
        v42 = v41 | 0x7FFF;
      }
      v47 = v92.m128i_i32[2] & 0x7FFFFFFF;
      v48 = HIWORD(v92.m128i_i32[2]) & 0x8000;
      if ( (v92.m128i_i32[2] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v50 = v92.m128i_i32[2] & 0x7FFFFFFF;
        if ( v47 >= 0x38800000 )
        {
          v53 = v47 - 939520001;
        }
        else
        {
          v51 = 113 - (v47 >> 23);
          if ( v51 >= 24 )
            v52 = 0;
          else
            v52 = (v92.m128i_i32[2] & 0x7FFFFF | 0x800000u) >> v51;
          v50 = v52;
          v53 = v52 + 4095;
        }
        v49 = ((((v50 >> 13) & 1) + v53) >> 13) | v48;
      }
      else
      {
        v49 = v48 | 0x7FFF;
      }
      v54 = v92.m128i_i32[3] & 0x7FFFFFFF;
      v55 = HIWORD(v92.m128i_i32[3]) & 0x8000;
      if ( (v92.m128i_i32[3] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v57 = v92.m128i_i32[3] & 0x7FFFFFFF;
        if ( v54 >= 0x38800000 )
        {
          v60 = v54 - 939520001;
        }
        else
        {
          v58 = 113 - (v54 >> 23);
          if ( v58 >= 24 )
            v59 = 0;
          else
            v59 = (v92.m128i_i32[3] & 0x7FFFFF | 0x800000u) >> v58;
          v57 = v59;
          v60 = v59 + 4095;
        }
        v56 = ((((v57 >> 13) & 1) + v60) >> 13) | v55;
      }
      else
      {
        v56 = v55 | 0x7FFF;
      }
      r = v93.r;
      *((_WORD *)this + 50) = v35;
      *((_WORD *)this + 52) = v49;
      *((_WORD *)this + 53) = v56;
      v62 = LODWORD(r) & 0x7FFFFFFF;
      *((_WORD *)this + 51) = v42;
      v63 = HIWORD(LODWORD(r)) & 0x8000;
      if ( (LODWORD(r) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v65 = LODWORD(r) & 0x7FFFFFFF;
        if ( v62 >= 0x38800000 )
        {
          v68 = v62 - 939520001;
        }
        else
        {
          v66 = 113 - (v62 >> 23);
          if ( v66 >= 24 )
            v67 = 0;
          else
            v67 = (LODWORD(r) & 0x7FFFFF | 0x800000u) >> v66;
          v65 = v67;
          v68 = v67 + 4095;
        }
        v64 = ((((v65 >> 13) & 1) + v68) >> 13) | v63;
      }
      else
      {
        v64 = v63 | 0x7FFF;
      }
      v69 = LODWORD(v93.g) & 0x7FFFFFFF;
      v70 = HIWORD(v93.dvG) & 0x8000;
      if ( (LODWORD(v93.g) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v72 = LODWORD(v93.g) & 0x7FFFFFFF;
        if ( v69 >= 0x38800000 )
        {
          v75 = v69 - 939520001;
        }
        else
        {
          v73 = 113 - (v69 >> 23);
          if ( v73 >= 24 )
            v74 = 0;
          else
            v74 = (LODWORD(v93.g) & 0x7FFFFF | 0x800000u) >> v73;
          v72 = v74;
          v75 = v74 + 4095;
        }
        v71 = ((((v72 >> 13) & 1) + v75) >> 13) | v70;
      }
      else
      {
        v71 = v70 | 0x7FFF;
      }
      v76 = LODWORD(v93.b) & 0x7FFFFFFF;
      v77 = HIWORD(v93.dvB) & 0x8000;
      if ( (LODWORD(v93.b) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v79 = LODWORD(v93.b) & 0x7FFFFFFF;
        if ( v76 >= 0x38800000 )
        {
          v82 = v76 - 939520001;
        }
        else
        {
          v80 = 113 - (v76 >> 23);
          if ( v80 >= 24 )
            v81 = 0;
          else
            v81 = (LODWORD(v93.b) & 0x7FFFFF | 0x800000u) >> v80;
          v79 = v81;
          v82 = v81 + 4095;
        }
        v78 = ((((v79 >> 13) & 1) + v82) >> 13) | v77;
      }
      else
      {
        v78 = v77 | 0x7FFF;
      }
      v83 = LODWORD(v93.a) & 0x7FFFFFFF;
      v84 = HIWORD(v93.dvA) & 0x8000;
      if ( (LODWORD(v93.a) & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v86 = LODWORD(v93.a) & 0x7FFFFFFF;
        if ( v83 >= 0x38800000 )
        {
          v89 = v83 - 939520001;
        }
        else
        {
          v87 = 113 - (v83 >> 23);
          if ( v87 >= 24 )
            v88 = 0;
          else
            v88 = (LODWORD(v93.a) & 0x7FFFFF | 0x800000u) >> v87;
          v86 = v88;
          v89 = v88 + 4095;
        }
        v85 = ((((v86 >> 13) & 1) + v89) >> 13) | v84;
      }
      else
      {
        v85 = v84 | 0x7FFF;
      }
      *((_WORD *)this + 66) = v64;
      *((_WORD *)this + 67) = v71;
      *((_WORD *)this + 68) = v78;
      *((_WORD *)this + 69) = v85;
      break;
    case 28:
      *(struct _D3DCOLORVALUE *)&v93.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v6);
      v21 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v93.r, *(__m128 *)&v93.r, 255).m128_f32[0] * 255.0) + 0.5);
      v22 = -1;
      if ( v21 <= 255 )
      {
        v23 = 0;
        if ( v21 >= 0 )
          v23 = v21;
      }
      else
      {
        v23 = -1;
      }
      v24 = ((v23 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v93.r)) << 8;
      v25 = (Convert_scRGB_Channel_To_sRGB_Byte(v93.g) | v24) << 8;
      v26 = Convert_scRGB_Channel_To_sRGB_Byte(v93.b);
      v27 = (__m128)_mm_loadu_si128(v8);
      v28 = v26 | v25;
      *(struct _D3DCOLORVALUE *)&v93.r = (struct _D3DCOLORVALUE)v27;
      *((_BYTE *)this + 98) = v28;
      *((_BYTE *)this + 96) = BYTE2(v28);
      *((_BYTE *)this + 97) = BYTE1(v28);
      *((_BYTE *)this + 99) = HIBYTE(v28);
      v29 = (int)floor((float)(_mm_shuffle_ps(v27, v27, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v29 <= 255 )
      {
        v22 = 0;
        if ( v29 >= 0 )
          v22 = v29;
      }
      v30 = ((v22 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v93.r)) << 8;
      v31 = Convert_scRGB_Channel_To_sRGB_Byte(v93.g);
      v32 = Convert_scRGB_Channel_To_sRGB_Byte(v93.b) | ((v31 | v30) << 8);
      *((_BYTE *)this + 130) = v32;
      *((_BYTE *)this + 128) = BYTE2(v32);
      *((_BYTE *)this + 131) = HIBYTE(v32);
      *((_BYTE *)this + 129) = BYTE1(v32);
      break;
    default:
      if ( (unsigned int)(v10 - 87) > 1 )
      {
        v91 = 287;
        goto LABEL_4;
      }
      *(struct _D3DCOLORVALUE *)&v93.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(v6);
      v11 = (int)floor((float)(_mm_shuffle_ps(*(__m128 *)&v93.r, *(__m128 *)&v93.r, 255).m128_f32[0] * 255.0) + 0.5);
      v12 = -1;
      if ( v11 <= 255 )
      {
        v13 = 0;
        if ( v11 >= 0 )
          v13 = v11;
      }
      else
      {
        v13 = -1;
      }
      v14 = ((v13 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v93.r)) << 8;
      v15 = (Convert_scRGB_Channel_To_sRGB_Byte(v93.g) | v14) << 8;
      v16 = Convert_scRGB_Channel_To_sRGB_Byte(v93.b);
      v17 = (__m128)_mm_loadu_si128(v8);
      *(struct _D3DCOLORVALUE *)&v93.r = (struct _D3DCOLORVALUE)v17;
      *((_DWORD *)this + 23) = v16 | v15;
      v18 = (int)floor((float)(_mm_shuffle_ps(v17, v17, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v18 <= 255 )
      {
        v12 = 0;
        if ( v18 >= 0 )
          v12 = v18;
      }
      v19 = ((v12 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v93.r)) << 8;
      v20 = Convert_scRGB_Channel_To_sRGB_Byte(v93.g);
      *((_DWORD *)this + 31) = Convert_scRGB_Channel_To_sRGB_Byte(v93.b) | ((v20 | v19) << 8);
      break;
  }
  return v4;
}
