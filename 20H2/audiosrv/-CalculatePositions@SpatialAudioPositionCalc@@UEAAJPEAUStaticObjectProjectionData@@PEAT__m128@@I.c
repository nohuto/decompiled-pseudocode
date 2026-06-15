/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x1800204A0
 * Callers:
 *     <none>
 * Callees:
 *     sinf_0 @ 0x18007415F (sinf_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x18012A228 (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        union __m128 *a3,
        int a4)
{
  unsigned __int8 *v4; // rbx
  union __m128 *v5; // rsi
  float v7; // xmm14_4
  float v8; // xmm6_4
  float v9; // xmm13_4
  __m128 v10; // xmm12
  float v11; // xmm10_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm10_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  __m128 v19; // xmm7
  float v20; // xmm6_4
  float v21; // xmm13_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  float v24; // xmm13_4
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm15
  __m128 v28; // xmm6
  __m128 v29; // xmm13
  __m128 v30; // xmm0
  __m128 v31; // xmm14
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm4
  __m128 v35; // xmm9
  __m128 v36; // xmm10
  unsigned int v37; // r10d
  __int64 v38; // r9
  int v39; // edx
  float v40; // xmm7_4
  int v41; // eax
  __m128 v42; // xmm3
  __m128 v43; // xmm3
  int v44; // eax
  __m128 v45; // xmm2
  int v46; // eax
  __m128 v47; // xmm0
  __m128 v48; // xmm3
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __m128 v51; // xmm4
  __m128 v52; // xmm1
  __m128 v53; // xmm2
  __m128 v54; // xmm3
  __m128 v55; // xmm2
  __m128 v56; // xmm3
  __m128 v57; // xmm3
  __m128 v59; // xmm2
  float v60; // [rsp+40h] [rbp-F8h]
  float v61; // [rsp+44h] [rbp-F4h]
  float v62; // [rsp+48h] [rbp-F0h]
  unsigned int v63; // [rsp+4Ch] [rbp-ECh]
  __int64 v64; // [rsp+50h] [rbp-E8h] BYREF
  _DWORD v65[3]; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v66; // [rsp+64h] [rbp-D4h]
  int v67; // [rsp+68h] [rbp-D0h]
  float v68; // [rsp+6Ch] [rbp-CCh]
  unsigned int v69; // [rsp+70h] [rbp-C8h]
  float v70; // [rsp+74h] [rbp-C4h]
  unsigned int v71; // [rsp+78h] [rbp-C0h]
  unsigned int v72; // [rsp+7Ch] [rbp-BCh]
  unsigned int v73; // [rsp+80h] [rbp-B8h]
  unsigned int v74; // [rsp+84h] [rbp-B4h]
  unsigned int v75; // [rsp+88h] [rbp-B0h]
  __int64 v76; // [rsp+148h] [rbp+10h] BYREF
  __int64 v77; // [rsp+150h] [rbp+18h] BYREF

  v4 = (unsigned __int8 *)&SpatialAudioPositionCalc::_offsetMapTable;
  v5 = a3;
  if ( a2 && a3 && a4 == 272 )
  {
    if ( *((_DWORD *)a2 + 27) )
    {
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)v65, a2);
      v34 = (__m128)v66;
      v33 = (__m128)v65[0];
      v35 = (__m128)v75;
      v31 = (__m128)v74;
      v29 = (__m128)v73;
      v27 = (__m128)v72;
      v10 = (__m128)v71;
      v36 = (__m128)v69;
      v61 = v70;
      v60 = v68;
      LODWORD(v77) = v67;
      LODWORD(v76) = v65[2];
      v63 = v66;
      v62 = *(float *)v65;
    }
    else
    {
      *(float *)&v77 = *((float *)a2 + 1) * 0.5;
      v7 = *(float *)&v77;
      v10 = (__m128)*(unsigned int *)a2;
      v8 = *((float *)a2 + 9);
      v9 = *((float *)a2 + 2) * 0.5;
      v10.m128_f32[0] = v10.m128_f32[0] * 0.5;
      v61 = v9;
      v11 = sinf_0(v8 * 0.017453292) * v10.m128_f32[0];
      v12 = sinf_0((float)(90.0 - v8) * 0.017453292);
      v13 = *((float *)a2 + 6);
      v14 = v11 / v12;
      v62 = v9;
      v63 = LODWORD(v9) ^ _xmm;
      v15 = sinf_0(v13 * 0.017453292) * v7;
      v16 = sinf_0((float)(90.0 - v13) * 0.017453292);
      v17 = 90.0 - *((float *)a2 + 7);
      *(float *)&v76 = v15 / v16;
      v18 = sinf_0(v17 * 0.017453292) * v9;
      v60 = v18 / sinf_0((float)(90.0 - v17) * 0.017453292);
      v19 = (__m128)LODWORD(FLOAT_180_0);
      v20 = 180.0 - *((float *)a2 + 8);
      v21 = sinf_0(v20 * 0.017453292) * v7;
      v22 = sinf_0((float)(90.0 - v20) * 0.017453292);
      v23 = *((float *)a2 + 10);
      v24 = v21 / v22;
      v25 = (__m128)LODWORD(v23);
      *(float *)&v64 = v24;
      v25.m128_f32[0] = sinf_0(v23 * 0.017453292);
      v27 = v25;
      v26 = (__m128)LODWORD(FLOAT_90_0);
      v27.m128_f32[0] = v27.m128_f32[0] * v14;
      v26.m128_f32[0] = sinf_0((float)(90.0 - v23) * 0.017453292);
      v28 = (__m128)*((unsigned int *)a2 + 11);
      v29 = v26;
      v29.m128_f32[0] = v26.m128_f32[0] * v14;
      v19.m128_f32[0] = (float)(180.0 - v28.m128_f32[0]) * 0.017453292;
      v30 = v19;
      v30.m128_f32[0] = sinf_0(v19.m128_f32[0]);
      v31 = v30;
      v31.m128_f32[0] = v30.m128_f32[0] * v14;
      v28.m128_f32[0] = (float)(v28.m128_f32[0] - 90.0) * 0.017453292;
      v32 = v28;
      v32.m128_f32[0] = sinf_0(v28.m128_f32[0]);
      v33 = (__m128)LODWORD(v62);
      v35 = v32;
      v34 = (__m128)v63;
      v35.m128_f32[0] = v32.m128_f32[0] * v14;
      v36 = (__m128)(unsigned int)v64;
    }
    v37 = 0;
    v38 = 0LL;
    while ( 1 )
    {
      v39 = dword_1801607B0[v38];
      v40 = FLOAT_1_0;
      if ( (v39 & 0x10) != 0 )
      {
        v40 = *((float *)a2 + 17);
      }
      else if ( (v39 & 0x20) != 0 )
      {
        v40 = *((float *)a2 + 18);
      }
      else if ( (v39 & 0x41) == 0x41 )
      {
        v40 = *((float *)a2 + 15);
      }
      else if ( (v39 & 0x42) == 0x42 )
      {
        v40 = *((float *)a2 + 16);
      }
      else if ( (v39 & 0x80u) != 0 )
      {
        v40 = *((float *)a2 + 13);
      }
      else if ( (v39 & 1) != 0 )
      {
        v40 = *((float *)a2 + 12);
      }
      else if ( (v39 & 2) != 0 )
      {
        v40 = *((float *)a2 + 14);
      }
      v41 = *v4;
      v42 = 0LL;
      if ( !*v4 )
        goto LABEL_25;
      switch ( v41 )
      {
        case 12:
          v43 = v27;
          break;
        case 13:
          v42 = v27;
          goto LABEL_25;
        case 15:
          v42 = v31;
          goto LABEL_25;
        case 14:
          v43 = v31;
          break;
        default:
          switch ( *v4 )
          {
            case 1u:
              v43 = (__m128)(unsigned int)v76;
              goto LABEL_24;
            case 2u:
              v42 = (__m128)(unsigned int)v76;
              break;
            case 3u:
              v43 = v33;
              goto LABEL_24;
            case 4u:
              v42 = v33;
              break;
            case 5u:
              v42 = v34;
              break;
            case 6u:
              v43 = (__m128)LODWORD(v60);
              goto LABEL_24;
            case 7u:
              v43 = (__m128)(unsigned int)v77;
              goto LABEL_24;
            case 8u:
              v42 = (__m128)(unsigned int)v77;
              break;
            case 9u:
              v43 = v36;
              goto LABEL_24;
            case 0xAu:
              v42 = v36;
              break;
            case 0xBu:
              v42 = (__m128)LODWORD(v61);
              break;
            case 0x10u:
              v43 = v29;
              goto LABEL_24;
            case 0x11u:
              v42 = v29;
              break;
            case 0x12u:
              v43 = v35;
              goto LABEL_24;
            case 0x13u:
              v42 = v35;
              break;
            case 0x14u:
              v43 = v10;
              goto LABEL_24;
            case 0x15u:
              v42 = v10;
              break;
            default:
              goto LABEL_25;
          }
          goto LABEL_25;
      }
LABEL_24:
      v42 = _mm_xor_ps(v43, (__m128)(unsigned int)_xmm);
LABEL_25:
      v44 = v4[1];
      v45 = 0LL;
      if ( v4[1] )
      {
        if ( v44 == 20 )
        {
          v59 = v10;
LABEL_53:
          v45 = _mm_xor_ps(v59, (__m128)(unsigned int)_xmm);
        }
        else if ( v44 == 21 )
        {
          v45 = v10;
        }
        else
        {
          switch ( v4[1] )
          {
            case 1u:
              v59 = (__m128)(unsigned int)v76;
              goto LABEL_53;
            case 2u:
              v45 = (__m128)(unsigned int)v76;
              break;
            case 3u:
              v59 = v33;
              goto LABEL_53;
            case 4u:
              v45 = v33;
              break;
            case 5u:
              v45 = v34;
              break;
            case 6u:
              v59 = (__m128)LODWORD(v60);
              goto LABEL_53;
            case 7u:
              v59 = (__m128)(unsigned int)v77;
              goto LABEL_53;
            case 8u:
              v45 = (__m128)(unsigned int)v77;
              break;
            case 9u:
              v59 = v36;
              goto LABEL_53;
            case 0xAu:
              v45 = v36;
              break;
            case 0xBu:
              v45 = (__m128)LODWORD(v61);
              break;
            case 0xCu:
              v59 = v27;
              goto LABEL_53;
            case 0xDu:
              v45 = v27;
              break;
            case 0xEu:
              v59 = v31;
              goto LABEL_53;
            case 0xFu:
              v45 = v31;
              break;
            case 0x10u:
              v59 = v29;
              goto LABEL_53;
            case 0x11u:
              v45 = v29;
              break;
            case 0x12u:
              v59 = v35;
              goto LABEL_53;
            case 0x13u:
              v45 = v35;
              break;
            default:
              break;
          }
        }
      }
      v46 = v4[2];
      v47 = 0LL;
      switch ( v46 )
      {
        case 19:
          v47 = v35;
          break;
        case 16:
          v47 = _mm_xor_ps(v29, (__m128)(unsigned int)_xmm);
          break;
        case 5:
          v47 = v34;
          break;
        case 11:
          v47 = (__m128)LODWORD(v61);
          break;
        case 6:
          v47 = _mm_xor_ps((__m128)LODWORD(v60), (__m128)(unsigned int)_xmm);
          break;
        default:
          switch ( v4[2] )
          {
            case 1u:
              v47 = _mm_xor_ps((__m128)(unsigned int)v76, (__m128)(unsigned int)_xmm);
              break;
            case 2u:
              v47 = (__m128)(unsigned int)v76;
              break;
            case 3u:
              v47 = _mm_xor_ps(v33, (__m128)(unsigned int)_xmm);
              break;
            case 4u:
              v47 = v33;
              break;
            case 7u:
              v47 = _mm_xor_ps((__m128)(unsigned int)v77, (__m128)(unsigned int)_xmm);
              break;
            case 8u:
              v47 = (__m128)(unsigned int)v77;
              break;
            case 9u:
              v47 = _mm_xor_ps(v36, (__m128)(unsigned int)_xmm);
              break;
            case 0xAu:
              v47 = v36;
              break;
            case 0xCu:
              v47 = _mm_xor_ps(v27, (__m128)(unsigned int)_xmm);
              break;
            case 0xDu:
              v47 = v27;
              break;
            case 0xEu:
              v47 = _mm_xor_ps(v31, (__m128)(unsigned int)_xmm);
              break;
            case 0xFu:
              v47 = v31;
              break;
            case 0x11u:
              v47 = v29;
              break;
            case 0x12u:
              v47 = _mm_xor_ps(v35, (__m128)(unsigned int)_xmm);
              break;
            case 0x14u:
              v47 = _mm_xor_ps(v10, (__m128)(unsigned int)_xmm);
              break;
            case 0x15u:
              v47 = v10;
              break;
            default:
              goto LABEL_37;
          }
          break;
      }
LABEL_37:
      v48 = _mm_unpacklo_ps(_mm_unpacklo_ps(v42, v47), _mm_unpacklo_ps(v45, (__m128)0LL));
      *v5 = v48;
      v49 = v48;
      if ( !*((_DWORD *)a2 + 27) )
      {
        v50 = (__m128)LODWORD(FLOAT_1_0);
        if ( (v39 & 0x10) != 0 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 24);
        }
        else if ( (v39 & 0x20) != 0 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 25);
        }
        else if ( (v39 & 0x41) == 0x41 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 22);
        }
        else if ( (v39 & 0x42) == 0x42 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 23);
        }
        else if ( (v39 & 0x80u) != 0 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 20);
        }
        else if ( (v39 & 1) != 0 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 19);
        }
        else if ( (v39 & 2) != 0 )
        {
          v50 = (__m128)*((unsigned int *)a2 + 21);
        }
        v49 = v48;
        if ( v50.m128_f32[0] != 1.0 )
        {
          v49 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v50, v50), _mm_unpacklo_ps(v50, (__m128)0LL)), v48);
          *v5 = v49;
        }
      }
      v51 = _mm_mul_ps(v49, (__m128)_xmm);
      v4 += 3;
      ++v37;
      ++v38;
      v52 = _mm_or_ps(_mm_and_ps(v51, DirectX::g_XMNegativeZero), DirectX::g_XMNoFraction);
      v53 = _mm_cmple_ps(_mm_and_ps(v51, DirectX::g_XMAbsMask), DirectX::g_XMNoFraction);
      v54 = _mm_and_ps(_mm_sub_ps(_mm_add_ps(v51, v52), v52), v53);
      v55 = _mm_andnot_ps(v53, v51);
      v34 = (__m128)v63;
      v56 = _mm_div_ps(_mm_xor_ps(v54, v55), (__m128)_xmm);
      v57 = _mm_shuffle_ps(v56, v56, 39);
      v57.m128_f32[0] = v40;
      v33 = (__m128)LODWORD(v62);
      *v5++ = _mm_shuffle_ps(v57, v57, 39);
      if ( v37 >= 0x11 )
        return 0LL;
    }
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v76) = -2147024809;
    v64 = (__int64)"SpatialAudioPositionCalc::CalculatePositions";
    LODWORD(v77) = 263;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019C480,
      (__int64)&v64,
      (__int64)&v77,
      (__int64)&v76);
  }
  return 2147942487LL;
}
