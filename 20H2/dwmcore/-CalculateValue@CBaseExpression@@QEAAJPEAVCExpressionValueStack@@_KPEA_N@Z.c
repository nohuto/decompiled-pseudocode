/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18007E910
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800274B4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18007E5D0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18007E910 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801C86EC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CC848 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D0CB8 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180024594 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180026A70 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800295A4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18006FCFC (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18007E910 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18007EE20 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18007F5C0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x18007F810 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C8114 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D06A8 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AA94C (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B0E18 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B0EAC (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801D92D8 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER v5; // rdi
  __int64 v7; // rax
  char v10; // si
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // esi
  char v15; // al
  CBaseExpression *v16; // rcx
  _DWORD *v17; // r12
  char v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // r13d
  bool v21; // r12
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rax
  struct CResource *v25; // rdx
  int v26; // eax
  int v27; // r12d
  unsigned int v28; // ecx
  BOOL v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  __int64 Elapsed; // rax
  _QWORD *v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int TracingCookie; // eax
  int v45; // eax
  __int64 v46; // rcx
  HANDLE EventW; // rsi
  __int64 v48; // rax
  _DWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // rcx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  bool v54[8]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER v55; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD *v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+50h] [rbp-B8h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER v60; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR Name[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h]
  int v63; // [rsp+C0h] [rbp-48h]
  char v64; // [rsp+C4h] [rbp-44h]

  v4.QuadPart = 0LL;
  v5.QuadPart = 0LL;
  *a4 = 0;
  v7 = *((_QWORD *)this + 38);
  v59 = a3;
  PerformanceCount.QuadPart = 0LL;
  v55.QuadPart = 0LL;
  v56 = 0LL;
  if ( *(int *)(v7 + 4) < 0 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v10 = 1;
    v56 = (_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 88LL);
    v29 = QueryPerformanceCounter(&PerformanceCount);
    a3 = v59;
    if ( v29 )
      v4 = PerformanceCount;
    PerformanceCount = v4;
  }
  else
  {
    v10 = 0;
  }
  v11 = *((_DWORD *)this + 66);
  *(_DWORD *)v54 = *((_DWORD *)a2 + 4);
  if ( !*((_QWORD *)this + 34) )
    *((_QWORD *)this + 34) = a3;
  (*(void (__fastcall **)(CBaseExpression *, bool *))(*(_QWORD *)this + 280LL))(this, &v54[4]);
  if ( !v54[4] && *((_BYTE *)this + 140) )
  {
    v13 = 0;
    goto LABEL_9;
  }
  *((_QWORD *)this + 20) = v59;
  if ( v10 )
  {
    if ( (*((_BYTE *)this + 208) & 2) != 0 )
    {
      v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
      v31 = *(_DWORD *)(*((_QWORD *)this + 38) + 4LL);
      ++*(_DWORD *)(v30 + 420);
      v12 = v31 >> 31;
      if ( (_BYTE)v12 )
        ++*(_DWORD *)(v30 + 424);
    }
  }
  if ( v56 )
  {
    if ( QueryPerformanceCounter(&v55) )
      v5 = v55;
    v55 = v5;
  }
  v15 = *((_BYTE *)this + 208);
  if ( (v15 & 0x20) != 0 )
    goto LABEL_15;
  v12 = 0LL;
  LODWORD(v57) = 0;
  if ( !*((_DWORD *)this + 60) )
  {
LABEL_50:
    *((_BYTE *)this + 208) = v15 | 0x20;
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v32 = *((_QWORD *)this + 27);
    v33 = *((_QWORD *)this + 20);
    v54[5] = 0;
    v60.QuadPart = v12;
    v34 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v32 + 8 * v12), a2, v33, &v54[5]);
    v13 = v34;
    if ( v34 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 27) + 8 * v60.QuadPart));
    v12 = (unsigned int)(v57 + 1);
    LODWORD(v57) = v12;
    if ( (unsigned int)v12 >= *((_DWORD *)this + 60) )
    {
      v15 = *((_BYTE *)this + 208);
      goto LABEL_50;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x2D0u, 0LL);
LABEL_16:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_180288F50, 2u, v13, 0x403u, 0LL);
    goto LABEL_46;
  }
  if ( !v11 )
    CBaseExpression::NotifyAnimationStarted(this);
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, bool *))(*(_QWORD *)this + 256LL))(
          this,
          a2,
          v59,
          a4);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, &dword_180288F50, 2u, v13, 0x40Au, 0LL);
    goto LABEL_46;
  }
  if ( v5.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v55);
    v17 = v56;
    ++v56[1];
    *((_QWORD *)v17 + 4) += Elapsed;
    v5.QuadPart = 0LL;
    v55.QuadPart = 0LL;
  }
  else
  {
    v17 = v56;
  }
  if ( v13 == 1 )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    if ( CBaseExpression::IsExpressionValueValid(
           v16,
           (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1))) )
    {
      goto LABEL_24;
    }
  }
  memset_0(Name, 0, sizeof(Name));
  v37 = (_QWORD *)*((_QWORD *)this + 22);
  v62 = 0LL;
  v63 = 18;
  v64 = 0;
  if ( !v37 || (v37 = (_QWORD *)v37[2]) == 0LL )
  {
    v13 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v37, &dword_180288F50, 2u, -2147024890, 0x424u, 0LL);
    v42 = v62;
    if ( !v62 )
      goto LABEL_46;
    goto LABEL_80;
  }
  v38 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, WCHAR *))(*v37 + 144LL))(v37, *((unsigned int *)this + 46), Name);
  v13 = v38;
  if ( v38 < 0 )
  {
    v53 = 1062;
    goto LABEL_76;
  }
  v40 = *((_QWORD *)this + 24);
  if ( v40 )
  {
    if ( *(_BYTE *)(v40 + 4) )
    {
      v38 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v40);
      v13 = v38;
      if ( v38 < 0 )
      {
        v53 = 1068;
LABEL_76:
        v41 = v38;
        goto LABEL_78;
      }
    }
  }
  if ( v63 != *((_DWORD *)this + 36) )
  {
    v13 = -2147024809;
    v41 = -2147024809;
    v53 = 1073;
LABEL_78:
    MilInstrumentationCheckHR_MaybeFailFast(v39, &dword_180288F50, 2u, v41, v53, 0LL);
    v42 = v62;
    if ( v62 )
    {
      v62 = 0LL;
LABEL_80:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
LABEL_46:
    v20 = *(_DWORD *)v54;
    goto LABEL_47;
  }
  if ( v18 )
  {
    v38 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
    v13 = v38;
    if ( v38 < 0 )
    {
      v53 = 1078;
      goto LABEL_76;
    }
  }
  else
  {
    CExpressionValue::CopyFrom(
      (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)),
      (const struct CExpressionValue *)Name);
  }
  v19 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_24:
  v20 = *(_DWORD *)v54;
  if ( *((_DWORD *)a2 + 4) != *(_DWORD *)v54 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180288F50, 2u, -2147467259, 0x44Au, 0LL);
    goto LABEL_47;
  }
  if ( v17 )
  {
    v5.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v60) )
      v5 = v60;
    v55 = v5;
  }
  v21 = 0;
  v22 = *((_QWORD *)a2 + 3) + 80LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
    v21 = (unsigned __int8)CExpressionValue::operator==((char *)this + 64) == 0;
  v23 = *(_DWORD *)(v22 + 72);
  if ( v23 == 18 )
  {
    *((_DWORD *)this + 16) = *(_DWORD *)v22;
    *((_DWORD *)this + 34) = 18;
LABEL_30:
    *((_BYTE *)this + 140) = 1;
  }
  else
  {
    switch ( v23 )
    {
      case 11:
        v43 = *(_QWORD *)(v22 + 64);
        *((_DWORD *)this + 34) = 11;
        *((_BYTE *)this + 140) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 128, v43);
        break;
      case 17:
        *((_BYTE *)this + 64) = *(_BYTE *)v22;
        *((_DWORD *)this + 34) = 17;
        goto LABEL_30;
      case 35:
        *((_DWORD *)this + 34) = 35;
        *((_QWORD *)this + 8) = *(_QWORD *)v22;
        goto LABEL_30;
      case 42:
        *((_DWORD *)this + 34) = 42;
        *((_DWORD *)this + 16) = *(_DWORD *)v22;
        goto LABEL_30;
      case 52:
        *((_DWORD *)this + 34) = 52;
        *((_QWORD *)this + 8) = *(_QWORD *)v22;
        *((_DWORD *)this + 18) = *(_DWORD *)(v22 + 8);
        goto LABEL_30;
      case 69:
        *((_DWORD *)this + 34) = 69;
        *((_OWORD *)this + 4) = *(_OWORD *)v22;
        goto LABEL_30;
      case 70:
        *((_DWORD *)this + 34) = 70;
        *((_OWORD *)this + 4) = *(_OWORD *)v22;
        goto LABEL_30;
      case 71:
        *((_DWORD *)this + 34) = 71;
        *((_OWORD *)this + 4) = *(_OWORD *)v22;
        goto LABEL_30;
      case 104:
        *((_DWORD *)this + 34) = 104;
        *((_OWORD *)this + 4) = *(_OWORD *)v22;
        *((_QWORD *)this + 10) = *(_QWORD *)(v22 + 16);
        goto LABEL_30;
      case 265:
        *((_DWORD *)this + 34) = 265;
        *((_OWORD *)this + 4) = *(_OWORD *)v22;
        *((_OWORD *)this + 5) = *(_OWORD *)(v22 + 16);
        *((_OWORD *)this + 6) = *(_OWORD *)(v22 + 32);
        *((_OWORD *)this + 7) = *(_OWORD *)(v22 + 48);
        goto LABEL_30;
      default:
        break;
    }
  }
  if ( v21 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v45 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
    v27 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x203u, 0LL);
      goto LABEL_37;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 208) & 3) != 3 )
  {
LABEL_36:
    v27 = 0;
    goto LABEL_37;
  }
  v24 = *((_QWORD *)this + 22);
  if ( v24 )
  {
    v25 = *(struct CResource **)(v24 + 16);
    if ( v25 )
    {
      v26 = CBaseExpression::SetOutputValueOnTarget(this, v25);
      v27 = v26;
      if ( v26 >= 0 )
        goto LABEL_36;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v26, 0x215u, 0LL);
LABEL_37:
      v13 = v27;
      if ( v27 >= 0 )
      {
        if ( v5.QuadPart )
        {
          v48 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v55);
          v49 = v56;
          ++v56[5];
          *((_QWORD *)v49 + 8) += v48;
        }
        --*((_DWORD *)a2 + 4);
        v13 = 0;
        goto LABEL_9;
      }
      goto LABEL_104;
    }
  }
  v13 = -2147024890;
  v27 = -2147024890;
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024890, 0x214u, 0LL);
LABEL_104:
  MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180288F50, 2u, v27, 0x457u, 0LL);
LABEL_47:
  v28 = *((_DWORD *)a2 + 4);
  if ( v28 > v20 )
  {
    v50 = v28 - v20;
    do
    {
      --v28;
      --v50;
    }
    while ( v50 );
    *((_DWORD *)a2 + 4) = v28;
  }
LABEL_9:
  if ( v4.QuadPart )
  {
    v51 = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    v52 = v56;
    ++*v56;
    *((_QWORD *)v52 + 3) += v51;
  }
  return (unsigned int)v13;
}
