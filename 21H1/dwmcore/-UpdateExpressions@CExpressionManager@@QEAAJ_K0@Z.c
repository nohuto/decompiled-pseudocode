/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800423A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x180097758 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180097AAC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18009FEC0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A0060 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x1801AEBB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByVal@$00@@U1@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x1801AED04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AF1AC (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801AF320 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CDE18 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801D4134 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x1802049FC (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x180204A30 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(CExpressionManager *this, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v5; // esi
  bool v8; // r13
  unsigned int v9; // r12d
  LARGE_INTEGER v10; // r14
  bool v11; // zf
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rax
  CBaseExpression *v15; // rdi
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int j; // edi
  __int64 *v19; // rbx
  __int64 *m; // rdi
  _QWORD *v21; // rbx
  __int64 *v22; // rdi
  unsigned int v23; // ebx
  char v25; // al
  __int64 v26; // rax
  unsigned int *v27; // rbx
  __int64 v28; // r8
  unsigned int v29; // ebx
  unsigned int v30; // edx
  CBaseExpression *v31; // rcx
  int v32; // eax
  BOOL v33; // eax
  LARGE_INTEGER v34; // rcx
  __int64 Elapsed; // rax
  __int64 v36; // rdi
  unsigned int v37; // r12d
  char *i; // rbx
  LARGE_INTEGER v39; // r8
  unsigned int v40; // eax
  unsigned int v41; // edx
  int v42; // eax
  __int64 v43; // rcx
  __int64 **v44; // rax
  __int64 *k; // rax
  __int64 *v46; // rcx
  __int64 *v47; // rcx
  int v48; // eax
  double v49; // xmm2_8
  double v50; // xmm3_8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  double DurationAverage; // xmm0_8
  __int64 v57; // rax
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  __int64 v61; // rdx
  CInteractionTrackerBindingManager *v62; // rcx
  unsigned int v63; // eax
  int v64; // [rsp+90h] [rbp-29h] BYREF
  int v65; // [rsp+94h] [rbp-25h] BYREF
  int v66; // [rsp+98h] [rbp-21h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-19h] BYREF
  double v68; // [rsp+A8h] [rbp-11h] BYREF
  double v69; // [rsp+B0h] [rbp-9h] BYREF
  double v70; // [rsp+B8h] [rbp-1h] BYREF
  double v71; // [rsp+C0h] [rbp+7h] BYREF
  double v72; // [rsp+C8h] [rbp+Fh] BYREF
  double v73; // [rsp+D0h] [rbp+17h] BYREF
  double v74[7]; // [rsp+D8h] [rbp+1Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+120h] [rbp+67h] BYREF
  __int64 v76; // [rsp+130h] [rbp+77h]
  LARGE_INTEGER v77; // [rsp+138h] [rbp+7Fh] BYREF

  v76 = a3;
  v3 = *((_BYTE *)this + 416);
  v5 = 0;
  v77.QuadPart = 0LL;
  *((_BYTE *)this + 416) = v3 & 0xF3 | (2 * (v3 & 4));
  v8 = ((2 * (v3 & 4)) & 8) != 0;
  v9 = 0;
  v10.QuadPart = 0LL;
  if ( *((_DWORD *)this + 64) || v3 & 2 | (2 * (v3 & 4)) & 2 || *((_DWORD *)this + 40) )
  {
    *((_BYTE *)this + 416) = v3 & 0xF1 | (2 * (v3 & 4)) & 0xFD;
    if ( *((_DWORD *)this + 40) || CCommonRegistryData::LogExpressionPerfStats )
    {
      CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 88));
      if ( QueryPerformanceCounter(&PerformanceCount) )
        v10 = PerformanceCount;
      v77 = v10;
    }
    *((_BYTE *)this + 416) |= 1u;
    v11 = (*((_BYTE *)this + 416) & 8) == 0;
    *((_QWORD *)this + 2) = a2;
    *((_QWORD *)this + 3) = a3;
    if ( !v11 )
    {
      PerformanceCount.QuadPart = 0LL;
      if ( CCommonRegistryData::LogExpressionPerfStats )
      {
        v33 = QueryPerformanceCounter(&PerformanceCount);
        v34.QuadPart = 0LL;
        if ( v33 )
          v34 = PerformanceCount;
        PerformanceCount = v34;
      }
      v28 = *((unsigned int *)this + 41);
      v29 = 0;
      if ( *((_DWORD *)this + 8 * v28 + 48) )
      {
        do
        {
          v30 = v28;
          v31 = *(CBaseExpression **)(*((_QWORD *)this + 4 * (unsigned int)v28 + 21) + 8LL * v29);
          if ( v31 )
          {
            CBaseExpression::InsertInOrder(v31, *((_QWORD *)this + 3));
            v30 = *((_DWORD *)this + 41);
          }
          ++v29;
          LODWORD(v28) = v30;
        }
        while ( v29 < *((_DWORD *)this + 8 * v30 + 48) );
      }
      *((_DWORD *)this + 8 * (unsigned int)v28 + 48) = 0;
      v32 = 1 - *((_DWORD *)this + 41);
      *((_BYTE *)this + 416) &= ~8u;
      *((_DWORD *)this + 41) = v32;
      if ( CCommonRegistryData::LogExpressionPerfStats )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
        ++*((_DWORD *)this + 24);
        *((_QWORD *)this + 16) += Elapsed;
      }
    }
    v12 = *((unsigned int *)this + 41);
    v13 = 0;
    *(_QWORD *)((char *)this + 420) = 0LL;
    if ( *((_DWORD *)this + 8 * v12 + 48) )
    {
      do
      {
        v14 = *((_QWORD *)this + 4 * (unsigned int)v12 + 21);
        v15 = *(CBaseExpression **)(v14 + 8LL * v13);
        if ( v15 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v15 + 56LL))(
                 *(_QWORD *)(v14 + 8LL * v13),
                 90LL) )
          {
            v25 = *((_BYTE *)v15 + 540);
            if ( (v25 & 1) != 0 || (v25 & 6) != 0 )
            {
              v26 = *((_QWORD *)v15 + 6);
              if ( v26 )
              {
                ++*(_DWORD *)(v26 + 76);
                *(_BYTE *)(*((_QWORD *)v15 + 2) + 289LL) = 1;
              }
            }
          }
          v16 = *((_QWORD *)this + 3);
          LOBYTE(PerformanceCount.LowPart) = 0;
          CBaseExpression::CalculateValue(
            v15,
            (CExpressionManager *)((char *)this + 32),
            v16,
            (bool *)&PerformanceCount);
          *((_BYTE *)this + 416) |= 2 * (PerformanceCount.LowPart & 1);
          v17 = *((_DWORD *)this + 41);
        }
        else
        {
          ++v9;
          v17 = v12;
        }
        ++v13;
        LODWORD(v12) = v17;
      }
      while ( v13 < *((_DWORD *)this + 8 * v17 + 48) );
      if ( v9 > 0x100 )
      {
        v36 = 32LL * v17;
        v37 = 0;
        for ( i = (char *)this + 32 * (1 - v17); v37 < *(_DWORD *)((char *)this + v36 + 192); ++v37 )
        {
          v39 = *(LARGE_INTEGER *)(*(_QWORD *)((char *)this + v36 + 168) + 8LL * v37);
          PerformanceCount = v39;
          if ( v39.QuadPart )
          {
            v40 = *((_DWORD *)i + 48);
            v41 = v40 + 1;
            if ( v40 + 1 < v40 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
            }
            else if ( v41 > *((_DWORD *)i + 47) )
            {
              v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DynArrayImpl<1>::AddMultipleAndSet)(
                      i + 168,
                      8LL,
                      (LARGE_INTEGER)v39.QuadPart,
                      &PerformanceCount);
              if ( v42 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xC0u, 0LL);
            }
            else
            {
              *(LARGE_INTEGER *)(*((_QWORD *)i + 21) + 8LL * v40) = v39;
              *((_DWORD *)i + 48) = v41;
            }
          }
        }
        *(_DWORD *)((char *)this + v36 + 192) = 0;
        *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
      }
    }
    *((_BYTE *)this + 416) &= ~1u;
    for ( j = 0; j < *((_DWORD *)this + 64); ++j )
    {
      v27 = (unsigned int *)(*((_QWORD *)this + 29) + 16LL * j);
      CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v27 + 1), *v27);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v27 + 1) + 16LL))(*((_QWORD *)v27 + 1));
    }
    *((_DWORD *)this + 64) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 232, 16LL);
    v19 = (__int64 *)*((_QWORD *)this + 50);
    m = (__int64 *)*v19;
    while ( m != v19 )
    {
      CExpressionManager::SuspendAnimations(this, *((_DWORD *)m + 7), 1, 0);
      v44 = (__int64 **)m[2];
      if ( *((_BYTE *)v44 + 25) )
      {
        for ( k = (__int64 *)m[1]; !*((_BYTE *)k + 25); k = (__int64 *)k[1] )
        {
          if ( m != (__int64 *)k[2] )
            break;
          m = k;
        }
        m = k;
      }
      else
      {
        v46 = *v44;
        for ( m = (__int64 *)m[2]; !*((_BYTE *)v46 + 25); v46 = (__int64 *)*v46 )
          m = v46;
      }
    }
    v21 = (_QWORD *)*((_QWORD *)this + 50);
    v22 = (__int64 *)v21[1];
    while ( !*((_BYTE *)v22 + 25) )
    {
      std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
        (char *)this + 400,
        (char *)this + 400,
        v22[2]);
      v47 = v22;
      v22 = (__int64 *)*v22;
      std::_Deallocate<16,0>(v47, 32LL);
    }
    v21[1] = v21;
    *v21 = v21;
    v21[2] = v21;
    *((_QWORD *)this + 51) = 0LL;
    if ( v10.QuadPart )
    {
      v48 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v77);
      v49 = (double)(int)g_qpcFrequency.LowPart / 1000000.0;
      v50 = (double)v48;
      if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 1) != 0 && (qword_180346F08 & 1) == qword_180346F08 )
      {
        v67 = v76;
        v68 = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 88, 5LL) / v49;
        v69 = CExpressionPerformanceCounter::GetDurationAverage(v51, 4LL) / v49;
        v70 = CExpressionPerformanceCounter::GetDurationAverage(v52, 3LL) / v49;
        v71 = CExpressionPerformanceCounter::GetDurationAverage(v53, 2LL) / v49;
        v72 = CExpressionPerformanceCounter::GetDurationAverage(v54, 1LL) / v49;
        DurationAverage = CExpressionPerformanceCounter::GetDurationAverage(v55, 0LL);
        v77.LowPart = *((_DWORD *)this + 80);
        v57 = *((unsigned int *)this + 41) + 6LL;
        LOBYTE(PerformanceCount.LowPart) = v8;
        v73 = DurationAverage / v49;
        v64 = *((_DWORD *)this + 8 * v57);
        v65 = *((_DWORD *)this + 106);
        v66 = *((_DWORD *)this + 105);
        v74[0] = v50 / v49;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v58,
          (unsigned int)&unk_1802E8B17,
          v59,
          v60,
          (__int64)v74,
          (__int64)&v66,
          (__int64)&v65,
          (__int64)&v64,
          (__int64)&v77,
          (__int64)&PerformanceCount,
          (__int64)&v73,
          (__int64)&v72,
          (__int64)&v71,
          (__int64)&v70,
          (__int64)&v69,
          (__int64)&v68,
          (__int64)&v67);
      }
    }
  }
  v23 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    do
    {
      v61 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL * v23);
      v62 = *(CInteractionTrackerBindingManager **)(v61 + 632);
      if ( v62 && *(_DWORD *)(v61 + 168) == 2 && (*(_BYTE *)(v61 + 533) & 1) != 0 )
        CInteractionTrackerBindingManager::TryUpdateBoundTrackerInertiaCallbackValues(
          v62,
          (struct CInteractionTracker *)v61);
      v63 = *((_DWORD *)this + 72);
      ++v23;
    }
    while ( v23 < v63 );
    if ( v63 )
    {
      do
        CInteractionTracker::NotifyExpressionProcessingComplete(*(CInteractionTracker **)(*((_QWORD *)this + 33)
                                                                                        + 8LL * v5++));
      while ( v5 < *((_DWORD *)this + 72) );
    }
  }
  return 0LL;
}
