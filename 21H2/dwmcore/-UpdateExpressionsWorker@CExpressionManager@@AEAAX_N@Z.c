/*
 * XREFs of ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180050990
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180043280 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801FDC90 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18021B4CC (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 */

void __fastcall CExpressionManager::UpdateExpressionsWorker(CExpressionManager *this, char a2)
{
  unsigned int v4; // r13d
  __int64 v5; // rdx
  unsigned int v6; // ebp
  CBaseExpression *v7; // rsi
  char v8; // al
  unsigned __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r15d
  unsigned int v14; // edx
  __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rax
  char v18; // bp
  bool v19; // cc
  char v20; // cl
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // r14d
  unsigned int i; // r14d
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // esi
  char *v32; // r15
  char *v33; // r14
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ecx
  BOOL v39; // eax
  LARGE_INTEGER v40; // rcx
  __int64 v41; // rcx
  __int64 Elapsed; // rax
  bool v43; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46; // [rsp+48h] [rbp-50h] BYREF
  char v47; // [rsp+50h] [rbp-48h]

  v4 = 0;
  if ( (*((_BYTE *)this + 448) & 8) == 0 )
    goto LABEL_2;
  PerformanceCount.QuadPart = 0LL;
  if ( CCommonRegistryData::LogExpressionPerfStats )
  {
    v39 = QueryPerformanceCounter(&PerformanceCount);
    v40.QuadPart = 0LL;
    if ( v39 )
      v40 = PerformanceCount;
    PerformanceCount = v40;
  }
  v12 = *((unsigned int *)this + 41);
  v13 = 0;
  if ( *((_DWORD *)this + 8 * v12 + 48) )
  {
    v14 = CBaseExpression::s_recursionLevel;
    while ( 1 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 4 * (unsigned int)v12 + 21) + 8LL * v13);
      v16 = v12;
      if ( v15 )
        break;
LABEL_31:
      ++v13;
      LODWORD(v12) = v16;
      if ( v13 >= *((_DWORD *)this + 8 * v16 + 48) )
        goto LABEL_32;
    }
    v17 = *((_QWORD *)this + 3);
    v18 = 0;
    v19 = ++*(_DWORD *)(v15 + 156) <= 1;
    v46 = v17;
    v47 = a2;
    if ( v19 )
    {
      v20 = 0;
      if ( a2 && *(_QWORD *)(v15 + 224) != v17 )
      {
        *(_QWORD *)(v15 + 224) = v17;
        v20 = 1;
      }
      if ( (*(_QWORD *)(v15 + 160) != v17 || v20) && v14 <= 0x10 )
      {
        v18 = 1;
        v21 = (*(_BYTE *)(v15 + 232) & 2) == 0;
        CBaseExpression::s_recursionLevel = v14 + 1;
        if ( v21 )
        {
          for ( i = 0; i < *(_DWORD *)(v15 + 264); ++i )
            CBaseExpression::InsertInOrder(
              *(CBaseExpression **)(*(_QWORD *)(v15 + 240) + 8LL * i),
              (const struct ExpressionWalkContext *)&v46);
        }
        if ( *(_DWORD *)(v15 + 212) == 88 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(v15 + 184) + 16LL);
          if ( v41 )
            CInteractionTracker::InsertDependenciesForProperty(v41, &v46, *(unsigned int *)(v15 + 192));
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 200LL))(v15, &v46);
        if ( (*(_BYTE *)(v15 + 216) & 2) != 0 )
        {
          v23 = *(_QWORD *)(v15 + 16);
          v45 = v15;
          v24 = *(_QWORD *)(v23 + 424) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v23 + 424) + 164LL));
          v25 = *(_DWORD *)(v24 + 192);
          v26 = v25 + 1;
          if ( v25 + 1 < v25 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else if ( v26 > *(_DWORD *)(v24 + 188) )
          {
            v29 = DynArrayImpl<1>::AddMultipleAndSet(v24 + 168, 8u, v24, &v45);
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xC0u, 0LL);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v24 + 168) + 8LL * v25) = v15;
            *(_DWORD *)(v24 + 192) = v26;
          }
          v14 = CBaseExpression::s_recursionLevel;
          *(_QWORD *)(v15 + 160) = v46;
LABEL_29:
          CBaseExpression::s_recursionLevel = --v14;
LABEL_30:
          --*(_DWORD *)(v15 + 156);
          v16 = *((_DWORD *)this + 41);
          goto LABEL_31;
        }
        v17 = v46;
        v14 = CBaseExpression::s_recursionLevel;
      }
    }
    *(_QWORD *)(v15 + 160) = v17;
    if ( !v18 )
      goto LABEL_30;
    goto LABEL_29;
  }
LABEL_32:
  *((_DWORD *)this + 8 * (unsigned int)v12 + 48) = 0;
  v27 = 1 - *((_DWORD *)this + 41);
  *((_BYTE *)this + 448) &= ~8u;
  *((_DWORD *)this + 41) = v27;
  if ( CCommonRegistryData::LogExpressionPerfStats )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    ++*((_DWORD *)this + 24);
    *((_QWORD *)this + 16) += Elapsed;
  }
LABEL_2:
  v5 = *((unsigned int *)this + 41);
  v6 = 0;
  *(_QWORD *)((char *)this + 452) = 0LL;
  if ( *((_DWORD *)this + 8 * v5 + 48) )
  {
    do
    {
      v7 = *(CBaseExpression **)(*((_QWORD *)this + 4 * (unsigned int)v5 + 21) + 8LL * v6);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 90LL) )
        {
          v8 = *((_BYTE *)v7 + 572);
          if ( (v8 & 1) != 0 || (v8 & 6) != 0 )
          {
            v11 = *((_QWORD *)v7 + 6);
            if ( v11 )
            {
              ++*(_DWORD *)(v11 + 84);
              *(_BYTE *)(*((_QWORD *)v7 + 2) + 1273LL) = 1;
            }
          }
        }
        v9 = *((_QWORD *)this + 3);
        v43 = 0;
        CBaseExpression::CalculateValue(v7, (CExpressionManager *)((char *)this + 32), v9, &v43);
        *((_BYTE *)this + 448) |= 2 * v43;
        v10 = *((_DWORD *)this + 41);
      }
      else
      {
        ++v4;
        v10 = v5;
      }
      ++v6;
      LODWORD(v5) = v10;
    }
    while ( v6 < *((_DWORD *)this + 8 * v10 + 48) );
    if ( v4 > 0x100 )
    {
      v31 = 0;
      v32 = (char *)this + 32 * (1 - v10);
      v33 = (char *)this + 32 * v10;
      if ( *((_DWORD *)v33 + 48) )
      {
        do
        {
          v34 = *(_QWORD *)(*((_QWORD *)v33 + 21) + 8LL * v31);
          v45 = v34;
          if ( v34 )
          {
            v35 = *((_DWORD *)v32 + 48);
            v36 = v35 + 1;
            if ( (unsigned int)v36 < v35 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024362, 0xB5u, 0LL);
            }
            else if ( (unsigned int)v36 > *((_DWORD *)v32 + 47) )
            {
              v37 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v32 + 168), 8u, v36, &v45);
              if ( v37 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xC0u, 0LL);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v32 + 21) + 8LL * v35) = v34;
              *((_DWORD *)v32 + 48) = v36;
            }
          }
          ++v31;
        }
        while ( v31 < *((_DWORD *)v33 + 48) );
      }
      *((_DWORD *)v33 + 48) = 0;
      *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
    }
  }
}
