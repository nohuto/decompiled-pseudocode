/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180098610
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802108D0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001C058 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800423A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180098D98 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800993C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800994BC (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180099A30 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18009A844 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18009FFE0 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800CA0D4 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800CF964 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B5658 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  LONGLONG v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rax
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  _QWORD *v24; // r13
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 *v27; // r9
  __int64 v28; // r10
  __int64 *v29; // r11
  __int64 *i; // rax
  __int64 *v31; // rcx
  float v32; // xmm1_4
  int v33; // edx
  __int64 v34; // r8
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  int v38; // eax
  float v39; // xmm1_4
  bool v40; // cl
  int v41; // r9d
  int v42; // r10d
  float v43; // xmm1_4
  int v44; // edx
  bool v45; // zf
  __int64 v46; // rcx
  char v47; // al
  __int64 v48; // rcx
  const struct CExpressionValue *v49; // r15
  char v50; // cl
  char v51; // al
  int v52; // r8d
  int v53; // eax
  __int64 v54; // rax
  char v55; // al
  int v56; // eax
  __m128 v57; // xmm2
  __m128 v58; // rt1
  int v59; // eax
  int v60; // ecx
  __int64 j; // rbx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r12
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r13
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v70; // r15d
  __int64 v71; // rcx
  __int64 v72; // r12
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // xmm1_8
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  unsigned int v82; // [rsp+20h] [rbp-99h]
  __int64 v83; // [rsp+30h] [rbp-89h] BYREF
  bool v84; // [rsp+38h] [rbp-81h] BYREF
  __int128 v85; // [rsp+40h] [rbp-79h] BYREF
  __int128 v86; // [rsp+50h] [rbp-69h]
  __int128 v87; // [rsp+60h] [rbp-59h]
  __int128 v88; // [rsp+70h] [rbp-49h]
  __int64 v89; // [rsp+80h] [rbp-39h]
  int v90; // [rsp+88h] [rbp-31h]
  char v91; // [rsp+8Ch] [rbp-2Dh]
  _BYTE v92[64]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v93; // [rsp+D0h] [rbp+17h]
  int v94; // [rsp+D8h] [rbp+1Fh]
  char v95; // [rsp+DCh] [rbp+23h]

  *a4 = 0;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v9 = v7;
  if ( v7 < 0 )
  {
    v82 = 1449;
    goto LABEL_134;
  }
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL)
      - Time::s_luBegin.QuadPart
      - (*((_QWORD *)this + 58)
       - Time::s_luBegin.QuadPart);
  if ( v10 < 0 )
    goto LABEL_13;
  if ( (*((_BYTE *)this + 541) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 130) != 2 )
    {
      v16 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 168LL))(this);
      if ( v16 )
        ++*(_DWORD *)(v16 + 40);
    }
    v17 = *((_DWORD *)this + 130);
    if ( (*((_BYTE *)this + 540) & 6) != 0 || !*((_BYTE *)this + 140) )
    {
      if ( v17 != 2 )
      {
LABEL_23:
        if ( v10 == 0x7FFFFFFFFFFFFFFFLL )
        {
          LODWORD(v22) = 0x7FFFFFFF;
        }
        else
        {
          v18 = 1000000 * v10;
          if ( Time::s_luFreq.QuadPart == 10000000 )
            v19 = v18 / 10000000;
          else
            v19 = v18 / Time::s_luFreq.QuadPart;
          v20 = 500LL;
          if ( v19 < 0 )
            v20 = -500LL;
          v21 = (__int64)((unsigned __int128)((v20 + v19) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
          v22 = (v21 >> 63) + v21;
        }
        v23 = *((_QWORD *)this + 6);
        v24 = *(_QWORD **)(*((_QWORD *)this + 2) + 272LL);
        if ( !v23 )
          goto LABEL_78;
        v25 = v24[57];
        v26 = HIBYTE(v23) ^ (0x100000001B3LL
                           * (BYTE6(v23) ^ (0x100000001B3LL
                                          * (BYTE5(v23) ^ (0x100000001B3LL
                                                         * (BYTE4(v23) ^ (0x100000001B3LL
                                                                        * (BYTE3(v23) ^ (0x100000001B3LL
                                                                                       * (BYTE2(v23) ^ (0x100000001B3LL * (BYTE1(v23) ^ (0x100000001B3LL * ((unsigned __int8)v23 ^ 0xCBF29CE484222325uLL))))))))))))));
        v27 = (__int64 *)v24[55];
        v28 = 2 * ((0x100000001B3LL * v26) & v24[60]);
        v29 = *(__int64 **)(v25 + 16 * ((0x100000001B3LL * v26) & v24[60]));
        for ( i = v29; ; i = (__int64 *)*i )
        {
          v31 = v29 == v27 ? (__int64 *)v24[55] : **(__int64 ***)(v25 + 8 * v28 + 8);
          if ( i == v31 )
            break;
          if ( i[2] == *((_QWORD *)this + 6) )
            goto LABEL_35;
        }
        i = (__int64 *)v24[55];
LABEL_35:
        if ( i == v27 )
LABEL_78:
          v32 = *(float *)&FLOAT_1_0;
        else
          v32 = *((float *)i + 6);
        v33 = (int)(float)((float)((float)(int)v22 * *((float *)this + 122)) * v32);
        if ( *((char *)this + 540) < 0 )
        {
          if ( *((_DWORD *)this + 133) == 4 )
          {
            v34 = *((_QWORD *)this + 45);
            v35 = 0.0;
            v36 = *(_DWORD *)(v34 + 112);
            if ( v36 > 0 )
              v35 = (float)*(int *)(*(_QWORD *)(v34 + 104) + 24LL * (unsigned int)(v36 - 1)) / 1000.0;
            v37 = (float)(v35 * *((float *)this + 129)) * 1000.0;
            *(float *)&v83 = v37;
            if ( (LODWORD(v37) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v57 = 0LL;
              v57.m128_f32[0] = (float)(int)v37 - v37;
              v58.m128_f32[0] = FLOAT_N0_5;
              LODWORD(v83) = _mm_cmple_ss(v57, v58).m128_u32[0];
              v38 = (int)v37 - v83;
            }
            else
            {
              *(float *)&v83 = v37 + 6291456.25;
              v38 = (int)((_DWORD)v83 << 10) >> 11;
            }
            v39 = *(float *)(v34 + 136);
            v40 = (*(_BYTE *)(v34 + 140) & 0x10) != 0;
            if ( v39 == 1.0 )
            {
              v41 = *(_DWORD *)(v34 + 120);
              v42 = v41;
            }
            else
            {
              v42 = *(_DWORD *)(v34 + 120);
              v41 = (int)(float)((float)v42 * v39);
            }
            v43 = *(float *)(v34 + 132);
            if ( v43 == 0.0 )
              v44 = 0;
            else
              v44 = (int)(float)((float)v42 * v43);
            *(_DWORD *)(v34 + 80) = v44;
            *(_DWORD *)(v34 + 84) = v41;
            *(_DWORD *)(v34 + 88) = v42;
            *(_BYTE *)(v34 + 96) = v40;
            *(_DWORD *)(v34 + 92) = v44;
            *(_BYTE *)(v34 + 140) |= 0x20u;
            *(_DWORD *)(v34 + 92) = v38;
          }
          else
          {
            v52 = *((_DWORD *)this + 113);
            v53 = *((_DWORD *)this + 112);
            if ( v52 < v53 )
            {
              v59 = v53 - v52;
              v60 = v33;
              if ( v33 >= v59 )
                v60 = v59;
              v33 -= v60;
              *((_DWORD *)this + 113) = v60 + v52;
            }
            v54 = *((_QWORD *)this + 45);
            if ( (*(_BYTE *)(v54 + 140) & 2) != 0 )
              *(_DWORD *)(v54 + 92) += v33;
          }
        }
LABEL_48:
        v45 = (*((_BYTE *)this + 541) & 1) == 0;
        v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
        *((_QWORD *)this + 58) = v46;
        if ( v45 || *((_DWORD *)this + 113) >= *((_DWORD *)this + 112) )
        {
          v47 = *((_BYTE *)this + 540);
        }
        else
        {
          v46 = *((unsigned __int8 *)this + 540);
          v47 = v46;
          if ( (v46 & 0x40) == 0 && (*((_DWORD *)this + 132) != 1 || (v46 & 0x10) != 0) )
            goto LABEL_58;
        }
        if ( (v47 & 8) == 0 )
        {
          for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 98); j = (unsigned int)(j + 1) )
            CBaseExpression::CalculateValue(
              *(CBaseExpression **)(*((_QWORD *)this + 46) + 8 * j),
              a2,
              *((_QWORD *)this + 20),
              &v84);
          if ( *((_QWORD *)this + 44) )
          {
            v62 = CKeyframeAnimation::SampleStartingValue(this);
            v9 = v62;
            if ( v62 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v62, 0x8A0u, 0LL);
LABEL_53:
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v9, 0x5EBu, 0LL);
                goto LABEL_14;
              }
              v7 = CKeyframeAnimation::Calculate(this, a2);
              v9 = v7;
              if ( v7 < 0 )
              {
                v82 = 1518;
                goto LABEL_134;
              }
              v48 = *((unsigned int *)a2 + 4);
              v49 = (const struct CExpressionValue *)*((_QWORD *)this + 45);
              if ( (unsigned int)~*((_DWORD *)a2 + 4) < 5 )
              {
                v9 = -2147418113;
                MilInstrumentationCheckHR_MaybeFailFast(
                  v48,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  -2147418113,
                  0x52u,
                  0LL);
              }
              else
              {
                if ( *((_DWORD *)a2 + 12) != (_DWORD)v48 )
                {
LABEL_57:
                  *((_DWORD *)a2 + 4) = v48 + 1;
                  CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v48), v49);
LABEL_58:
                  v50 = *((_BYTE *)this + 540);
                  if ( (v50 & 0x20) != 0 )
                  {
                    CKeyframeAnimation::Pause(this);
                    v50 = *((_BYTE *)this + 540);
                  }
                  v51 = *((_BYTE *)this + 541);
                  if ( (v51 & 2) == 0 )
                  {
                    if ( (v51 & 1) != 0 && *((_DWORD *)this + 113) < *((_DWORD *)this + 112) )
                    {
                      if ( *((_DWORD *)this + 132) != 1 || (v50 & 0x10) != 0 )
                      {
                        if ( (v50 & 0x40) == 0 )
                          goto LABEL_111;
                      }
                      else
                      {
                        *((_BYTE *)this + 540) = v50 | 0x10;
                      }
                    }
LABEL_13:
                    v9 = 0;
                    goto LABEL_14;
                  }
                  --*((_DWORD *)a2 + 4);
                  v7 = CKeyframeAnimation::Reset(this, 1, a2);
                  v9 = v7;
                  if ( v7 >= 0 )
                  {
                    v55 = *((_BYTE *)this + 540) & 0xFE;
                    *((_BYTE *)this + 540) = v55;
                    if ( (v55 & 0x20) != 0 )
                    {
                      CKeyframeAnimation::Play(this, a2);
                      CKeyframeAnimation::Pause(this);
                    }
                    else
                    {
                      *((_QWORD *)this + 65) = 0LL;
                    }
                    goto LABEL_13;
                  }
                  v82 = 1544;
LABEL_134:
                  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v82, 0LL);
                  goto LABEL_14;
                }
                memset_0(&v85, 0, 0x40uLL);
                v64 = 5LL;
                v89 = 0LL;
                v90 = 18;
                v91 = 0;
                v65 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, &v83);
                v9 = v65;
                if ( v65 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0xE5u, 0LL);
                }
                else
                {
                  v67 = v83;
                  do
                  {
                    CExpressionValue::operator=(v67, &v85);
                    v67 += 80LL;
                    --v64;
                  }
                  while ( v64 );
                }
                if ( v9 >= 0 )
                {
                  v48 = *((unsigned int *)a2 + 4);
                  goto LABEL_57;
                }
                MilInstrumentationCheckHR_MaybeFailFast(
                  v68,
                  &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                  1u,
                  v9,
                  0x5Bu,
                  0LL);
              }
              MilInstrumentationCheckHR_MaybeFailFast(
                v63,
                &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v9,
                0x270u,
                0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v9, 0x5F4u, 0LL);
              goto LABEL_14;
            }
          }
          *((_BYTE *)this + 540) |= 8u;
        }
        v9 = 0;
        goto LABEL_53;
      }
      CKeyframeAnimation::Play(this, a2);
      *((_BYTE *)this + 540) |= 0x20u;
    }
    if ( v17 == 2 )
      goto LABEL_48;
    goto LABEL_23;
  }
  if ( !*((_BYTE *)this + 140) )
  {
LABEL_111:
    v9 = 1;
    goto LABEL_14;
  }
  v89 = 0LL;
  v90 = 18;
  v91 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  CExpressionValue::CopyFrom((CExpressionValue *)&v85, (CKeyframeAnimation *)((char *)this + 64));
  v11 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)~*((_DWORD *)a2 + 4) < 5 )
  {
    v70 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v11,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)a2 + 12) != (_DWORD)v11 )
    {
LABEL_7:
      v12 = v89;
      *((_DWORD *)a2 + 4) = v11 + 1;
      v13 = *((_QWORD *)a2 + 3);
      v14 = 80LL * (unsigned int)v11;
      if ( v90 == 18 )
      {
        *(_DWORD *)(v14 + v13 + 72) = 18;
LABEL_9:
        *(_DWORD *)(v14 + v13) = v85;
LABEL_10:
        *(_BYTE *)(v14 + v13 + 76) = 1;
      }
      else
      {
        switch ( v90 )
        {
          case 11:
            *(_DWORD *)(v14 + v13 + 72) = 11;
            *(_BYTE *)(v14 + v13 + 76) = 1;
            Microsoft::WRL::ComPtr<CPathData>::operator=(v14 + v13 + 64, v12);
            break;
          case 17:
            *(_BYTE *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 17;
            goto LABEL_10;
          case 35:
            *(_DWORD *)(v14 + v13 + 4) = DWORD1(v85);
            *(_DWORD *)(v14 + v13 + 72) = 35;
            goto LABEL_9;
          case 42:
            *(_DWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 42;
            goto LABEL_10;
          case 52:
            v56 = DWORD2(v85);
            *(_QWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 8) = v56;
            *(_DWORD *)(v14 + v13 + 72) = 52;
            goto LABEL_10;
          case 69:
            *(_OWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 69;
            goto LABEL_10;
          case 70:
            *(_OWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 70;
            goto LABEL_10;
          case 71:
            *(_OWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 71;
            goto LABEL_10;
          case 104:
            v78 = v86;
            *(_OWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 104;
            *(_QWORD *)(v14 + v13 + 16) = v78;
            goto LABEL_10;
          case 265:
            v79 = v86;
            *(_OWORD *)(v14 + v13) = v85;
            *(_DWORD *)(v14 + v13 + 72) = 265;
            v80 = v87;
            *(_OWORD *)(v14 + v13 + 16) = v79;
            v81 = v88;
            *(_OWORD *)(v14 + v13 + 32) = v80;
            *(_OWORD *)(v14 + v13 + 48) = v81;
            goto LABEL_10;
          default:
            break;
        }
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      goto LABEL_13;
    }
    memset_0(v92, 0, sizeof(v92));
    v72 = 5LL;
    v93 = 0LL;
    v94 = 18;
    v95 = 0;
    v73 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, &v83);
    v70 = v73;
    if ( v73 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0xE5u, 0LL);
    }
    else
    {
      v75 = v83;
      do
      {
        CExpressionValue::operator=(v75, v92);
        v75 += 80LL;
        --v72;
      }
      while ( v72 );
    }
    if ( v70 >= 0 )
    {
      LODWORD(v11) = *((_DWORD *)a2 + 4);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      v76,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v70,
      0x5Bu,
      0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    v71,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v70,
    0x270u,
    0LL);
  v9 = v70;
  MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v70, 0x63Du, 0LL);
  if ( v89 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
LABEL_14:
  *a4 = *((_BYTE *)this + 540) & 1;
  result = (unsigned int)v9;
  *((_BYTE *)this + 540) &= 0x99u;
  return result;
}
