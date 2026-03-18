/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18025F570 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x180045C7C (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18004F31C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x18004F3E0 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x18004F468 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18004F718 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18004F74C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053434 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800E13F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800EF978 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801FDB2C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v5; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  LONGLONG v12; // rbx
  char v13; // dl
  int v14; // eax
  char v15; // r8
  bool v16; // zf
  unsigned int v17; // ecx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // r8
  char v21; // cl
  char v22; // al
  __int64 result; // rax
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // xmm0_8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  struct CChannelContext *v32; // rdx
  float GlobalPlaybackRate; // xmm0_4
  int v34; // eax
  char v35; // al
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  int v39; // r15d
  unsigned int v40; // ecx
  __int64 v41; // r12
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r15
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  int v48; // r15d
  unsigned int v49; // ecx
  __int64 v50; // r12
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rbx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // xmm1_8
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  unsigned int v60; // [rsp+20h] [rbp-89h]
  _QWORD v61[2]; // [rsp+30h] [rbp-79h] BYREF
  __int128 v62; // [rsp+40h] [rbp-69h] BYREF
  __int128 v63; // [rsp+50h] [rbp-59h]
  __int128 v64; // [rsp+60h] [rbp-49h]
  __int128 v65; // [rsp+70h] [rbp-39h]
  __int64 v66; // [rsp+80h] [rbp-29h] BYREF
  int v67; // [rsp+88h] [rbp-21h]
  char v68; // [rsp+8Ch] [rbp-1Dh]
  _BYTE v69[64]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v70; // [rsp+D0h] [rbp+27h] BYREF
  int v71; // [rsp+D8h] [rbp+2Fh]
  char v72; // [rsp+DCh] [rbp+33h]

  *a4 = 0;
  v5 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v5 + 216);
  if ( *(_BYTE *)(v8 + 581) && !*(_BYTE *)(v8 + 582) )
  {
    if ( (*((_BYTE *)this + 573) & 0x10) == 0 )
      goto LABEL_55;
    if ( *((int *)this + 134) >= 0 )
    {
      CKeyframeAnimation::SetProgress(this, 1.0);
      *((_BYTE *)this + 572) &= ~2u;
      v5 = *((_QWORD *)this + 2);
    }
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(*(CExpressionManager **)(v5 + 424), this);
  }
  v9 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v11 = v9;
  if ( v9 < 0 )
  {
    v60 = 1481;
    goto LABEL_104;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL)
      - Time::s_luBegin.QuadPart
      - (*((_QWORD *)this + 62)
       - Time::s_luBegin.QuadPart);
  if ( v12 < 0 )
    goto LABEL_26;
  if ( (*((_BYTE *)this + 573) & 1) == 0 )
  {
    if ( !*((_BYTE *)this + 148) )
      goto LABEL_55;
    v66 = 0LL;
    v67 = 18;
    v68 = 0;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    CExpressionValue::CopyFrom((CExpressionValue *)&v62, (CKeyframeAnimation *)((char *)this + 72));
    v24 = *((_DWORD *)a2 + 4);
    if ( ~v24 < 5 )
    {
      v48 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        v24,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x53u,
        0LL);
    }
    else
    {
      if ( *((_DWORD *)a2 + 12) != v24 )
        goto LABEL_34;
      memset_0(v69, 0, sizeof(v69));
      v50 = 5LL;
      v70 = 0LL;
      v71 = 18;
      v72 = 0;
      v51 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v61);
      v48 = v51;
      if ( v51 >= 0 )
      {
        v53 = v61[0];
        do
        {
          CExpressionValue::operator=(v53, v69);
          v53 += 80LL;
          --v50;
        }
        while ( v50 );
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v70);
        v24 = *((_DWORD *)a2 + 4);
LABEL_34:
        v25 = v66;
        *((_DWORD *)a2 + 4) = v24 + 1;
        v26 = *((_QWORD *)a2 + 3);
        v27 = 80LL * v24;
        if ( v67 == 18 )
        {
          *(_DWORD *)(v27 + v26 + 72) = 18;
LABEL_36:
          *(_DWORD *)(v27 + v26) = v62;
        }
        else
        {
          if ( v67 != 52 )
          {
            switch ( v67 )
            {
              case 11:
                *(_DWORD *)(v27 + v26 + 72) = 11;
                *(_BYTE *)(v27 + v26 + 76) = 1;
                Microsoft::WRL::ComPtr<CPathData>::operator=(v27 + v26 + 64, v25);
                break;
              case 17:
                *(_BYTE *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 17;
                goto LABEL_37;
              case 35:
                *(_DWORD *)(v27 + v26 + 4) = DWORD1(v62);
                *(_DWORD *)(v27 + v26 + 72) = 35;
                goto LABEL_36;
              case 42:
                *(_DWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 42;
                goto LABEL_37;
              case 69:
                *(_OWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 69;
                goto LABEL_37;
              case 70:
                *(_OWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 70;
                goto LABEL_37;
              case 71:
                *(_OWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 71;
                goto LABEL_37;
              case 104:
                v56 = v63;
                *(_OWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 104;
                *(_QWORD *)(v27 + v26 + 16) = v56;
                goto LABEL_37;
              case 265:
                v57 = v63;
                *(_OWORD *)(v27 + v26) = v62;
                *(_DWORD *)(v27 + v26 + 72) = 265;
                v58 = v64;
                *(_OWORD *)(v27 + v26 + 16) = v57;
                v59 = v65;
                *(_OWORD *)(v27 + v26 + 32) = v58;
                *(_OWORD *)(v27 + v26 + 48) = v59;
                goto LABEL_37;
              default:
                goto LABEL_38;
            }
            goto LABEL_38;
          }
          v28 = v62;
          *(_DWORD *)(v27 + v26 + 72) = 52;
          v29 = DWORD2(v62);
          *(_QWORD *)(v27 + v26) = v28;
          *(_DWORD *)(v27 + v26 + 8) = v29;
        }
LABEL_37:
        *(_BYTE *)(v27 + v26 + 76) = 1;
LABEL_38:
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0xE5u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(
        v54,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v48,
        0x5Cu,
        0LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v70);
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      v49,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v48,
      0x280u,
      0LL);
    v11 = v48;
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v48, 0x65Du, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
    goto LABEL_27;
  }
  if ( *((_DWORD *)this + 138) != 2 )
  {
    v30 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 160LL))(this);
    if ( v30 )
      ++*(_DWORD *)(v30 + 40);
  }
  v13 = *((_BYTE *)this + 572);
  v14 = *((_DWORD *)this + 138);
  if ( (v13 & 6) != 0 || (v15 = *((_BYTE *)this + 572), !*((_BYTE *)this + 148)) )
  {
    if ( v14 == 2 )
    {
      CKeyframeAnimation::Play(this, a2);
      *((_BYTE *)this + 572) |= 0x20u;
      v15 = *((_BYTE *)this + 572);
      v13 = v15;
      goto LABEL_9;
    }
    goto LABEL_44;
  }
  if ( v14 != 2 )
  {
LABEL_44:
    v31 = *((_QWORD *)this + 2);
    v32 = (struct CChannelContext *)*((_QWORD *)this + 6);
    v61[0] = v12;
    GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(*(CExpressionManager **)(v31 + 424), v32);
    v34 = TimeDelta::ToMilliseconds((TimeDelta *)v61);
    CKeyframeAnimation::UpdateTime(
      this,
      (int)(float)((float)((float)v34 * *((float *)this + 130)) * GlobalPlaybackRate));
    v15 = *((_BYTE *)this + 572);
    v13 = v15;
  }
LABEL_9:
  v16 = (*((_BYTE *)this + 573) & 1) == 0;
  *((_QWORD *)this + 62) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  if ( !v16 && *((_DWORD *)this + 121) < *((_DWORD *)this + 120) )
  {
    v15 = v13;
    if ( (v13 & 0x40) == 0 && (*((_DWORD *)this + 140) != 1 || (v13 & 0x10) != 0) )
      goto LABEL_21;
  }
  if ( (v15 & 8) == 0 )
  {
    CKeyframeAnimation::ProcessExpressionKeyFrames(this, a2);
    if ( *((_QWORD *)this + 47) )
    {
      v36 = CKeyframeAnimation::SampleStartingValue(this);
      v11 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x8D6u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v11, 0x60Bu, 0LL);
        goto LABEL_27;
      }
    }
    *((_BYTE *)this + 572) |= 8u;
  }
  v9 = CKeyframeAnimation::Calculate(this, a2);
  v11 = v9;
  if ( v9 < 0 )
  {
    v60 = 1550;
    goto LABEL_104;
  }
  v17 = *((_DWORD *)a2 + 4);
  v18 = *((_QWORD *)this + 48);
  if ( ~v17 < 5 )
  {
    v39 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v17,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x53u,
      0LL);
    goto LABEL_76;
  }
  if ( *((_DWORD *)a2 + 12) == v17 )
  {
    memset_0(&v62, 0, 0x40uLL);
    v41 = 5LL;
    v66 = 0LL;
    v67 = 18;
    v68 = 0;
    v42 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 80LL, 5LL, v61);
    v39 = v42;
    if ( v42 >= 0 )
    {
      v44 = v61[0];
      do
      {
        CExpressionValue::operator=(v44, &v62);
        v44 += 80LL;
        --v41;
      }
      while ( v41 );
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
      v17 = *((_DWORD *)a2 + 4);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xE5u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      v45,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v39,
      0x5Cu,
      0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v66);
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(
      v40,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v39,
      0x280u,
      0LL);
    v11 = v39;
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v39, 0x614u, 0LL);
    goto LABEL_27;
  }
LABEL_15:
  *((_DWORD *)a2 + 4) = v17 + 1;
  v19 = *(_DWORD *)(v18 + 72);
  v20 = *((_QWORD *)a2 + 3) + 80LL * v17;
  switch ( v19 )
  {
    case 18:
      *(_DWORD *)v20 = *(_DWORD *)v18;
      *(_DWORD *)(v20 + 72) = 18;
      goto LABEL_20;
    case 35:
      *(_DWORD *)(v20 + 72) = 35;
      *(_QWORD *)v20 = *(_QWORD *)v18;
      goto LABEL_20;
    case 17:
      *(_BYTE *)v20 = *(_BYTE *)v18;
      *(_DWORD *)(v20 + 72) = 17;
LABEL_20:
      *(_BYTE *)(v20 + 76) = 1;
      goto LABEL_21;
  }
  switch ( v19 )
  {
    case 11:
      v47 = *(_QWORD *)(v18 + 64);
      *(_DWORD *)(v20 + 72) = 11;
      *(_BYTE *)(v20 + 76) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(v20 + 64, v47);
      break;
    case 42:
      *(_DWORD *)(v20 + 72) = 42;
      *(_DWORD *)v20 = *(_DWORD *)v18;
      goto LABEL_20;
    case 52:
      *(_DWORD *)(v20 + 72) = 52;
      *(_QWORD *)v20 = *(_QWORD *)v18;
      *(_DWORD *)(v20 + 8) = *(_DWORD *)(v18 + 8);
      goto LABEL_20;
    case 69:
      *(_DWORD *)(v20 + 72) = 69;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      goto LABEL_20;
    case 70:
      *(_DWORD *)(v20 + 72) = 70;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      goto LABEL_20;
    case 71:
      *(_DWORD *)(v20 + 72) = 71;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      goto LABEL_20;
    case 104:
      *(_DWORD *)(v20 + 72) = 104;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      *(_QWORD *)(v20 + 16) = *(_QWORD *)(v18 + 16);
      goto LABEL_20;
    case 265:
      *(_DWORD *)(v20 + 72) = 265;
      *(_OWORD *)v20 = *(_OWORD *)v18;
      *(_OWORD *)(v20 + 16) = *(_OWORD *)(v18 + 16);
      *(_OWORD *)(v20 + 32) = *(_OWORD *)(v18 + 32);
      *(_OWORD *)(v20 + 48) = *(_OWORD *)(v18 + 48);
      goto LABEL_20;
    default:
      break;
  }
LABEL_21:
  v21 = *((_BYTE *)this + 572);
  if ( (v21 & 0x20) != 0 )
  {
    CKeyframeAnimation::Pause(this);
    v21 = *((_BYTE *)this + 572);
  }
  v22 = *((_BYTE *)this + 573);
  if ( (v22 & 2) != 0 )
  {
    --*((_DWORD *)a2 + 4);
    v9 = CKeyframeAnimation::Reset(this, 1, a2);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v35 = *((_BYTE *)this + 572) & 0xFE;
      *((_BYTE *)this + 572) = v35;
      if ( (v35 & 0x20) != 0 )
      {
        CKeyframeAnimation::Play(this, a2);
        CKeyframeAnimation::Pause(this);
      }
      else
      {
        *((_QWORD *)this + 69) = 0LL;
      }
      goto LABEL_26;
    }
    v60 = 1576;
LABEL_104:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v60, 0LL);
    goto LABEL_27;
  }
  if ( (v22 & 1) == 0 || *((_DWORD *)this + 121) >= *((_DWORD *)this + 120) )
    goto LABEL_26;
  if ( *((_DWORD *)this + 140) == 1 && (v21 & 0x10) == 0 )
  {
    *((_BYTE *)this + 572) = v21 | 0x10;
    goto LABEL_26;
  }
  if ( (v21 & 0x40) == 0 )
  {
LABEL_55:
    v11 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v11 = 0;
LABEL_27:
  *a4 = *((_BYTE *)this + 572) & 1;
  result = v11;
  *((_BYTE *)this + 572) &= 0x99u;
  return result;
}
