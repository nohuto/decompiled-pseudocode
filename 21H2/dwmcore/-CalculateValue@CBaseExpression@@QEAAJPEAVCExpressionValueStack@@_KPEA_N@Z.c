/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800732C0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800AAFA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800AC8FC (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801C924C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CD3E0 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D1848 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18006499C (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073600 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180074090 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074830 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180074A80 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A0C74 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A9870 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800ABEB8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC224 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B20C4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC6C4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D5288 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_84144442@@@details@wil@@QEAA_NXZ @ 0x1800F0388 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_84144442@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AB31C (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B17D8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B186C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801D9F08 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        LARGE_INTEGER *this,
        struct CExpressionValueStack *a2,
        LARGE_INTEGER a3,
        bool *a4)
{
  __int64 v4; // r12
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v8; // rax
  int v11; // ecx
  char v12; // si
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // ecx
  char QuadPart; // al
  __int64 v18; // r15
  LARGE_INTEGER v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  CBaseExpression *v23; // rcx
  __int64 Elapsed; // rax
  _DWORD *v25; // r15
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  CExpressionValue *v29; // rax
  struct CExpressionValue *v30; // rdx
  LARGE_INTEGER v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  LARGE_INTEGER v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  CExpressionValue *v39; // rax
  CExpressionValue *v40; // rcx
  CBaseExpression *v41; // rcx
  __int64 v42; // rax
  CExpressionValue *v43; // rax
  bool v44; // si
  __int64 v45; // rcx
  int v46; // r15d
  __int64 v47; // rcx
  LARGE_INTEGER v48; // rax
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rdx
  unsigned int TracingCookie; // eax
  int v53; // eax
  __int64 v54; // rcx
  HANDLE EventW; // rsi
  LARGE_INTEGER v56; // rax
  struct CResource *v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rax
  bool v64; // [rsp+30h] [rbp-D0h] BYREF
  char v65[7]; // [rsp+31h] [rbp-CFh] BYREF
  LARGE_INTEGER v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v67; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  DWORD LowPart; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v70; // [rsp+58h] [rbp-A8h] BYREF
  bool *v71; // [rsp+60h] [rbp-A0h]
  _BYTE v72[80]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+E0h] [rbp-20h]
  __int128 v76; // [rsp+F0h] [rbp-10h]
  CBaseExpression *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  char v79; // [rsp+10Ch] [rbp+Ch]

  v4 = 0LL;
  v5.QuadPart = 0LL;
  v6.QuadPart = 0LL;
  *a4 = 0;
  v8 = this[38];
  v71 = a4;
  v11 = *(_DWORD *)(v8.QuadPart + 4) >> 31;
  v70 = a3;
  PerformanceCount.QuadPart = 0LL;
  v66.QuadPart = 0LL;
  if ( (_BYTE)v11 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v12 = 1;
    v4 = *(_QWORD *)(this[2].QuadPart + 272) + 88LL;
    if ( QueryPerformanceCounter(&PerformanceCount) )
      v6 = PerformanceCount;
    PerformanceCount = v6;
  }
  else
  {
    v12 = 0;
  }
  v67 = *((_DWORD *)a2 + 4);
  LowPart = this[33].LowPart;
  if ( !this[34].QuadPart )
    this[34] = a3;
  (*(void (__fastcall **)(LARGE_INTEGER *, char *))(this->QuadPart + 280))(this, v65);
  if ( BYTE4(this[17].QuadPart) && !v65[0] )
  {
    v14 = 0;
    goto LABEL_114;
  }
  this[20] = a3;
  if ( v12 )
  {
    if ( (this[26].LowPart & 2) != 0 )
    {
      v15 = *(_QWORD *)(this[2].QuadPart + 272);
      v16 = *(_DWORD *)(this[38].QuadPart + 4);
      ++*(_DWORD *)(v15 + 420);
      v13 = v16 >> 31;
      if ( (_BYTE)v13 )
        ++*(_DWORD *)(v15 + 424);
    }
  }
  if ( v4 )
  {
    if ( QueryPerformanceCounter(&v66) )
      v5 = v66;
    v66 = v5;
  }
  QuadPart = this[26].QuadPart;
  if ( (QuadPart & 0x20) != 0 )
    goto LABEL_26;
  v18 = 0LL;
  if ( !this[30].LowPart )
  {
LABEL_25:
    LOBYTE(this[26].LowPart) = QuadPart | 0x20;
LABEL_26:
    v14 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v19 = this[27];
    v20 = this[20].QuadPart;
    v64 = 0;
    v21 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v19.QuadPart + 8 * v18), a2, v20, &v64);
    v14 = v21;
    if ( v21 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(this[27].QuadPart + 8 * v18));
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= this[30].LowPart )
    {
      QuadPart = this[26].QuadPart;
      goto LABEL_25;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2DFu, 0LL);
LABEL_27:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802CE578, 2u, v14, 0x412u, 0LL);
LABEL_110:
    v60 = *((_DWORD *)a2 + 4);
    if ( v60 > v67 )
    {
      v61 = v60 - v67;
      do
      {
        --v60;
        --v61;
      }
      while ( v61 );
      *((_DWORD *)a2 + 4) = v60;
    }
    goto LABEL_114;
  }
  if ( !LowPart )
    CBaseExpression::NotifyAnimationStarted((CBaseExpression *)this);
  v14 = (*(__int64 (__fastcall **)(LARGE_INTEGER *, struct CExpressionValueStack *, LARGE_INTEGER, bool *))(this->QuadPart + 256))(
          this,
          a2,
          v70,
          v71);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, v14, 0x419u, 0LL);
    goto LABEL_110;
  }
  if ( v5.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v66);
    ++*(_DWORD *)(v4 + 4);
    v5.QuadPart = 0LL;
    *(_QWORD *)(v4 + 32) += Elapsed;
    v66.QuadPart = 0LL;
  }
  v25 = &CExpressionValueStack::s_emptyValue;
  if ( v14 == 1 )
  {
    v64 = 1;
LABEL_42:
    v31 = this[22];
    v78 = 18;
    v77 = 0LL;
    v79 = 0;
    *(_OWORD *)Name = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    if ( !v31.QuadPart || (v23 = *(CBaseExpression **)(v31.QuadPart + 16)) == 0LL )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, -2147024890, 0x43Cu, 0LL);
      if ( v77 )
        (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v77 + 16LL))(v77);
      goto LABEL_110;
    }
    v32 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, WCHAR *))(*(_QWORD *)v23 + 144LL))(
            v23,
            this[23].LowPart,
            Name);
    v14 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, v32, 0x43Eu, 0LL);
LABEL_63:
      v41 = v77;
      if ( v77 )
      {
        v77 = 0LL;
        (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v41 + 16LL))(v41);
      }
      goto LABEL_110;
    }
    v34 = this[24];
    if ( v34.QuadPart )
    {
      if ( *(_BYTE *)(v34.QuadPart + 4) )
      {
        v35 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v34.QuadPart);
        v14 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, v35, 0x444u, 0LL);
          goto LABEL_63;
        }
      }
    }
    if ( v78 != this[18].LowPart )
    {
      v14 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, -2147024809, 0x449u, 0LL);
      goto LABEL_63;
    }
    if ( v64 )
    {
      v36 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
      v14 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_1802CE578, 2u, v36, 0x44Eu, 0LL);
        goto LABEL_63;
      }
    }
    else
    {
      v38 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v38 < *((_DWORD *)a2 + 12) )
      {
        v40 = (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v38);
      }
      else
      {
        v39 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v39);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
        v40 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      }
      CExpressionValue::CopyFrom(v40, (const struct CExpressionValue *)Name);
    }
    v23 = v77;
    if ( v77 )
    {
      v77 = 0LL;
      (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_60;
  }
  v26 = *((_DWORD *)a2 + 4);
  v64 = 0;
  if ( !v26 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)this);
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802CE578, 2u, -2147467259, 0x432u, 0LL);
    goto LABEL_110;
  }
  v28 = (unsigned int)(v26 - 1);
  if ( (unsigned int)v28 < *((_DWORD *)a2 + 12) )
  {
    v30 = (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v28);
  }
  else
  {
    v29 = CExpressionValue::CExpressionValue((CExpressionValue *)Name);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v29);
    CExpressionValue::~CExpressionValue((CExpressionValue *)Name);
    v30 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  if ( !CBaseExpression::IsExpressionValueValid(v23, v30) )
    goto LABEL_42;
LABEL_60:
  if ( *((_DWORD *)a2 + 4) != v67 + 1 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, -2147467259, 0x462u, 0LL);
    goto LABEL_110;
  }
  if ( v4 )
  {
    v5.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v70) )
      v5 = v70;
    v66 = v5;
  }
  v42 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v42 < *((_DWORD *)a2 + 12) )
  {
    v25 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v42);
  }
  else
  {
    v43 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v43);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
  }
  v44 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_84144442>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_84144442>::GetImpl'::`2'::impl)
    && v25[18] != this[18].LowPart )
  {
    v14 = -2147024809;
    v46 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024809, 0x1EBu, 0LL);
LABEL_77:
    MilInstrumentationCheckHR_MaybeFailFast(v47, &dword_1802CE578, 2u, v46, 0x46Fu, 0LL);
    goto LABEL_110;
  }
  v48 = this[38];
  v47 = *(_DWORD *)(v48.QuadPart + 4) >> 31;
  if ( *(int *)(v48.QuadPart + 4) < 0 )
    v44 = (unsigned __int8)CExpressionValue::operator==(&this[8]) == 0;
  switch ( v25[18] )
  {
    case 0xB:
      v51 = *((_QWORD *)v25 + 8);
      this[17].LowPart = 11;
      BYTE4(this[17].QuadPart) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(&this[16], v51);
      break;
    case 0x11:
      LOBYTE(this[8].LowPart) = *(_BYTE *)v25;
      this[17].LowPart = 17;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x12:
      this[8].LowPart = *v25;
      this[17].LowPart = 18;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x23:
      this[17].LowPart = 35;
      this[8] = *(LARGE_INTEGER *)v25;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x2A:
      this[17].LowPart = 42;
      this[8].LowPart = *v25;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x34:
      this[17].LowPart = 52;
      this[8] = *(LARGE_INTEGER *)v25;
      this[9].LowPart = v25[2];
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x45:
      this[17].LowPart = 69;
      goto LABEL_86;
    case 0x46:
      this[17].LowPart = 70;
      goto LABEL_86;
    case 0x47:
      this[17].LowPart = 71;
LABEL_86:
      v49 = *(_OWORD *)v25;
      BYTE4(this[17].QuadPart) = 1;
      *(_OWORD *)&this[8].LowPart = v49;
      break;
    case 0x68:
      this[17].LowPart = 104;
      *(_OWORD *)&this[8].LowPart = *(_OWORD *)v25;
      this[10] = *(LARGE_INTEGER *)(v25 + 4);
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x109:
      this[17].LowPart = 265;
      *(_OWORD *)&this[8].LowPart = *(_OWORD *)v25;
      *(_OWORD *)&this[10].LowPart = *((_OWORD *)v25 + 1);
      *(_OWORD *)&this[12].LowPart = *((_OWORD *)v25 + 2);
      v50 = *((_OWORD *)v25 + 3);
      BYTE4(this[17].QuadPart) = 1;
      *(_OWORD *)&this[14].LowPart = v50;
      break;
    default:
      break;
  }
  if ( v44 )
  {
    CBaseExpression::LogSetOutputValue((CBaseExpression *)this);
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)this);
    v53 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v46 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x212u, 0LL);
      goto LABEL_104;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (this[26].LowPart & 3) != 3 )
    goto LABEL_103;
  v56 = this[22];
  if ( !v56.QuadPart || (v57 = *(struct CResource **)(v56.QuadPart + 16)) == 0LL )
  {
    v14 = -2147024890;
    v46 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024890, 0x223u, 0LL);
    goto LABEL_77;
  }
  v58 = CBaseExpression::SetOutputValueOnTarget((CBaseExpression *)this, v57);
  v46 = v58;
  if ( v58 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v58, 0x224u, 0LL);
  else
LABEL_103:
    v46 = 0;
LABEL_104:
  v14 = v46;
  if ( v46 < 0 )
    goto LABEL_77;
  if ( v5.QuadPart )
  {
    v59 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v66);
    ++*(_DWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 64) += v59;
  }
  --*((_DWORD *)a2 + 4);
  v14 = 0;
LABEL_114:
  if ( v6.QuadPart )
  {
    v62 = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    ++*(_DWORD *)v4;
    *(_QWORD *)(v4 + 24) += v62;
  }
  return (unsigned int)v14;
}
