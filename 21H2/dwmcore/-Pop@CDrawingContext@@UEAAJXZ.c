/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C55B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180011FDC (-PopClipBounds@CDrawingContext@@AEAAXXZ.c)
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x180014344 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned int v19; // r12d
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  __int64 v22; // rcx
  int v23; // r8d
  bool v24; // r9
  int v25; // eax
  int v26; // r8d
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  int v31; // eax
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm2_4
  float v35; // xmm5_4
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r14
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  float v51; // xmm7_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int128 v59; // [rsp+30h] [rbp-39h]
  __m128 v60; // [rsp+30h] [rbp-39h]
  __m128 v61; // [rsp+30h] [rbp-39h]
  __int64 v62; // [rsp+40h] [rbp-29h]
  int v63; // [rsp+48h] [rbp-21h]

  v1 = *((_DWORD *)this + 80);
  if ( v1 )
  {
    v3 = 0;
    v59 = *(_OWORD *)(*((_QWORD *)this + 42) + 16LL * (unsigned int)(v1 - 1));
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147467259, 0x120Au);
  }
  if ( (_DWORD)v59 == 5 )
  {
    v5 = *((_DWORD *)this + 80);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      *((_DWORD *)this + 80) = v6;
      v59 = *(_OWORD *)(*((_QWORD *)this + 42) + 16 * v6);
    }
    if ( *((_QWORD *)&v59 + 1) )
    {
      v7 = *((_DWORD *)this + 104);
      if ( v7 )
        *((_DWORD *)this + 104) = v7 - 1;
    }
    v8 = *((_DWORD *)this + 88);
    if ( v8 )
      *((_DWORD *)this + 88) = v8 - 1;
    v9 = *((_DWORD *)this + 96);
    if ( v9 )
      *((_DWORD *)this + 96) = v9 - 1;
  }
  else if ( (_DWORD)v59 == 9 )
  {
    v11 = *((_DWORD *)this + 80);
    if ( v11 )
      *((_DWORD *)this + 80) = v11 - 1;
    v12 = *((_DWORD *)this + 204);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      v14 = 28 * v13;
      *((_DWORD *)this + 204) = v13;
      v15 = *((_QWORD *)this + 104);
      v59 = *(_OWORD *)(v14 + v15);
      v63 = *(_DWORD *)(v14 + v15 + 24);
      v62 = *(_QWORD *)(v14 + v15 + 16);
    }
    *((_BYTE *)this + 304) = v63;
    *(_QWORD *)((char *)this + 284) = v59;
    *((_DWORD *)this + 78) = DWORD2(v59);
    *((_DWORD *)this + 73) = HIDWORD(v59);
    *((_QWORD *)this + 37) = v62;
  }
  else
  {
    switch ( (int)v59 )
    {
      case 1:
        v36 = *((_DWORD *)this + 80);
        if ( v36 )
          *((_DWORD *)this + 80) = v36 - 1;
        v37 = *((_DWORD *)this + 728);
        if ( v37 )
          *((_DWORD *)this + 728) = v37 - 1;
        v38 = 88LL * (unsigned int)(*((_DWORD *)this + 218) - 1);
        --*(_DWORD *)(v38 + *((_QWORD *)this + 106));
        *((_BYTE *)this + 8025) = 1;
        return v3;
      case 2:
        v16 = *((_DWORD *)this + 80);
        if ( v16 )
          *((_DWORD *)this + 80) = v16 - 1;
        v17 = *((_QWORD *)this + 220);
        v18 = 112LL * (unsigned int)(*((_DWORD *)this + 446) - 1);
        v19 = *(_DWORD *)(v18 + v17 + 104);
        if ( *(_BYTE *)(v18 + v17 + 8) )
        {
          v20 = *(void (__fastcall ****)(_QWORD, __int64))(v18 + v17);
          if ( v20 )
            (**v20)(v20, 1LL);
        }
        *(_QWORD *)(v18 + v17) = 0LL;
        *(_BYTE *)(v18 + v17 + 8) = 0;
        if ( *(_BYTE *)(v18 + v17 + 96) )
        {
          v21 = *(void (__fastcall ****)(_QWORD, __int64))(v18 + v17 + 88);
          if ( v21 )
            (**v21)(v21, 1LL);
        }
        *(_QWORD *)(v18 + v17 + 88) = 0LL;
        *(_BYTE *)(v18 + v17 + 96) = 0;
        --*((_DWORD *)this + 446);
        v22 = 88LL * (unsigned int)(*((_DWORD *)this + 218) - 1);
        --*(_DWORD *)(v22 + *((_QWORD *)this + 106) + 4);
        v23 = *((_DWORD *)this + 218);
        if ( v23 && *(_DWORD *)(88LL * (unsigned int)(v23 - 1) + *((_QWORD *)this + 106) + 4) )
          v24 = v19 > *(_DWORD *)(112LL * (unsigned int)(*((_DWORD *)this + 446) - 1) + *((_QWORD *)this + 220) + 104);
        else
          v24 = v19 != 0;
        v25 = *((_DWORD *)this + 736);
        if ( v25 )
          *((_DWORD *)this + 736) = v25 - 1;
        --*(_DWORD *)(88LL * (unsigned int)(v23 - 1) + *((_QWORD *)this + 106) + 8);
        if ( !v24 )
          return v3;
        if ( *((_BYTE *)this + 8026) )
        {
          v54 = *((_DWORD *)this + 218);
          if ( !v54
            || !*(_DWORD *)(88LL * (unsigned int)(v54 - 1) + *((_QWORD *)this + 106) + 4)
            || !*(_DWORD *)(112LL * (unsigned int)(*((_DWORD *)this + 446) - 1) + *((_QWORD *)this + 220) + 104) )
          {
            *((_BYTE *)this + 8026) = 0;
          }
        }
        v26 = *((_DWORD *)this + 218);
        v27 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v29 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v30 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        if ( v26 && *(_DWORD *)(88LL * (unsigned int)(v26 - 1) + *((_QWORD *)this + 106)) )
        {
          v31 = *((_DWORD *)this + 728);
          if ( v31 )
          {
            v60 = *(__m128 *)(*((_QWORD *)this + 366) + 16LL * (unsigned int)(v31 - 1));
            LODWORD(v32) = *(_QWORD *)(*((_QWORD *)this + 366) + 16LL * (unsigned int)(v31 - 1) + 8);
            LODWORD(v33) = HIDWORD(*(_QWORD *)(*((_QWORD *)this + 366) + 16LL * (unsigned int)(v31 - 1)));
            v34 = v60.m128_f32[0];
            LODWORD(v35) = _mm_shuffle_ps(v60, v60, 255).m128_u32[0];
          }
          else
          {
            v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            v33 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
            v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
            v35 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          }
        }
        else
        {
          v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v33 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
          v32 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
          v35 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          if ( !v26 )
            goto LABEL_44;
        }
        if ( *(_DWORD *)(88LL * (unsigned int)(v26 - 1) + *((_QWORD *)this + 106) + 8) )
        {
          v50 = *((_DWORD *)this + 736);
          if ( v50 )
          {
            v61 = *(__m128 *)(*((_QWORD *)this + 370) + 16LL * (unsigned int)(v50 - 1));
            v30 = v61.m128_f32[0];
            LODWORD(v29) = HIDWORD(*(_QWORD *)(*((_QWORD *)this + 370) + 16LL * (unsigned int)(v50 - 1)));
            LODWORD(v28) = *(_QWORD *)(*((_QWORD *)this + 370) + 16LL * (unsigned int)(v50 - 1) + 8);
            LODWORD(v27) = _mm_shuffle_ps(v61, v61, 255).m128_u32[0];
          }
          if ( v30 > v34 )
            v34 = v30;
          v51 = v33;
          if ( v29 > v33 )
          {
            v33 = v29;
            v51 = v29;
          }
          v52 = v32;
          if ( v32 > v28 )
          {
            v32 = v28;
            v52 = v28;
          }
          v53 = v35;
          if ( v35 > v27 )
          {
            v35 = v27;
            v53 = v27;
          }
          if ( v52 <= v34 || v53 <= v51 )
          {
            v34 = 0.0;
            v35 = 0.0;
            v32 = 0.0;
            v33 = 0.0;
          }
        }
LABEL_44:
        if ( v32 > v34
          && v35 > v33
          && (v34 < *((float *)this + 45)
           || v33 < *((float *)this + 46)
           || *((float *)this + 47) < v32
           || *((float *)this + 48) < v35) )
        {
          *((_BYTE *)this + 8025) = 1;
        }
        return v3;
      case 3:
        CDrawingContext::PopClipBounds((CDrawingContext *)((char *)this - 16));
        return v3;
      case 4:
        v39 = *((_DWORD *)this + 80);
        if ( v39 )
          *((_DWORD *)this + 80) = v39 - 1;
        --*((_DWORD *)this + 218);
        return v3;
      case 6:
      case 7:
        v42 = *((_DWORD *)this + 80);
        if ( v42 )
        {
          v43 = (unsigned int)(v42 - 1);
          *((_DWORD *)this + 80) = v43;
          v59 = *(_OWORD *)(*((_QWORD *)this + 42) + 16 * v43);
        }
        v44 = (unsigned int)(v59 - 6);
        if ( (_DWORD)v59 != 6 )
        {
          if ( (_DWORD)v59 == 7 )
            return 0;
          v3 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, -2003292412, 0xFEFu);
          goto LABEL_105;
        }
        v3 = 0;
        v45 = (unsigned int)(*((_DWORD *)this + 118) - 1);
        v46 = *(_QWORD *)(*((_QWORD *)this + 56) + 8 * v45);
        *((_DWORD *)this + 118) = v45;
        v47 = *((_DWORD *)this + 218);
        if ( !v47
          || (v44 = *(unsigned int *)(88LL * (unsigned int)(v47 - 1) + *((_QWORD *)this + 106) + 12),
              v48 = *((_DWORD *)this + 750),
              v48 == (_DWORD)v44) )
        {
          v49 = 0LL;
        }
        else
        {
          v44 = (unsigned int)(v48 - 1);
          v49 = *(_QWORD *)(*((_QWORD *)this + 372) + 8 * v44);
        }
        if ( v46 == v49 )
        {
          --*((_DWORD *)this + 750);
        }
        else
        {
          v55 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v46 + 24LL))(v46, (char *)this - 16);
          v3 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, v55, 0x103Bu);
        }
        if ( v46 )
          (**(void (__fastcall ***)(__int64, __int64))v46)(v46, 1LL);
        if ( (v3 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, v3, 0xFE7u);
LABEL_105:
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0LL, v3, 0x121Eu);
          return v3;
        }
        break;
      case 8:
        v40 = *((_DWORD *)this + 80);
        if ( v40 )
          *((_DWORD *)this + 80) = v40 - 1;
        v41 = *((_DWORD *)this + 772);
        if ( v41 )
          *((_DWORD *)this + 772) = v41 - 1;
        return v3;
      case 10:
        v56 = CDrawingContext::PopLight((CDrawingContext *)((char *)this - 16));
        v3 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v56, 0x1232u);
        return v3;
      case 11:
        v4 = *((_DWORD *)this + 80);
        if ( v4 )
          *((_DWORD *)this + 80) = v4 - 1;
        --*((_DWORD *)this + 194);
        return v3;
      default:
        return v3;
    }
  }
  return v3;
}
