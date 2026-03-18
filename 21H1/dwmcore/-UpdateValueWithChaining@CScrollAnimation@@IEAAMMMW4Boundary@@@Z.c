/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180205F7C
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1802072E0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180207A20 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801CCB20 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CDA94 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801D0A0C (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801D0ACC (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180205000 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180205B50 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180205EC8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180215C64 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180215D18 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x180216E90 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180216FE8 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, double a2, float a3, unsigned int a4)
{
  bool v4; // bl
  __int64 v6; // rax
  __m128 v7; // xmm7
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct CChainingHelper *ActiveChainingHelper; // r14
  InteractionSourceManager *v12; // rsi
  unsigned int v13; // r13d
  unsigned __int8 ShouldChainForAxis; // r12
  __int64 v15; // rcx
  unsigned int v16; // ecx
  char v17; // al
  unsigned int v18; // eax
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // cl
  __int64 v24; // r9
  struct CManipulation *v25; // rax
  __int64 v26; // rcx
  bool ShouldChainAllForAxis; // al
  __int64 v28; // rcx
  int v29; // edx
  int v30; // edx
  __int64 v31; // r9
  struct CManipulation *v32; // rax
  __int64 v33; // rcx
  bool v34; // al
  int v35; // eax
  int v36; // edx
  __int64 v37; // r9
  struct CManipulation *v38; // rax
  __int64 v39; // rcx
  bool v40; // al
  __int64 v41; // r9
  struct CManipulation *v42; // rax
  __int64 v43; // rcx
  bool v44; // al
  __int64 v45; // r9
  struct CManipulation *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  struct CManipulation *v49; // rax
  __int64 v50; // rcx
  bool v51; // al
  float v52; // xmm0_4
  float v53; // xmm3_4
  __int64 v54; // rcx
  int v56; // [rsp+28h] [rbp-B9h]
  int v57; // [rsp+98h] [rbp-49h] BYREF
  int v58; // [rsp+9Ch] [rbp-45h] BYREF
  int v59; // [rsp+A0h] [rbp-41h] BYREF
  int v60; // [rsp+A4h] [rbp-3Dh] BYREF
  int v61; // [rsp+A8h] [rbp-39h] BYREF
  int v62; // [rsp+ACh] [rbp-35h] BYREF
  float v63; // [rsp+B0h] [rbp-31h] BYREF
  unsigned int v64; // [rsp+B4h] [rbp-2Dh] BYREF
  int v65; // [rsp+B8h] [rbp-29h] BYREF
  unsigned __int64 v66; // [rsp+BCh] [rbp-25h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-19h]
  wchar_t *v68; // [rsp+D0h] [rbp-11h] BYREF
  _QWORD v69[6]; // [rsp+D8h] [rbp-9h] BYREF
  struct CManipulation *ActiveManipulation; // [rsp+148h] [rbp+67h] BYREF
  int v71; // [rsp+150h] [rbp+6Fh]
  float v72; // [rsp+158h] [rbp+77h]

  v72 = a3;
  v71 = LODWORD(a2);
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 328);
  v7 = *(__m128 *)&a2;
  if ( v6 )
    v9 = *(_QWORD *)(v6 + 16);
  else
    v9 = 0LL;
  v67 = v9;
  if ( v6 )
    v10 = *(_QWORD *)(v6 + 16);
  else
    v10 = 0LL;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v10 + 192));
  if ( ActiveChainingHelper )
  {
    v12 = (InteractionSourceManager *)(v9 + 192);
    v13 = 0;
    if ( InteractionSourceManager::HasActiveManipulation(v12) )
      v13 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v12) + 103);
    ShouldChainForAxis = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v12);
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v12) && ActiveManipulation )
      ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                             v15,
                             *(_DWORD *)(a1 + 316),
                             (__int64)ActiveManipulation,
                             0);
    if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
    {
      v16 = *(unsigned __int8 *)(a1 + 428);
      v17 = *(_BYTE *)(a1 + 428);
      v64 = a4;
      LODWORD(ActiveManipulation) = v17 & 1;
      v58 = ShouldChainForAxis;
      v59 = v71;
      v60 = *(_DWORD *)(a1 + 424);
      v61 = *(_DWORD *)(a1 + 416);
      v62 = *(_DWORD *)(a1 + 420);
      v63 = v72;
      v65 = *(_DWORD *)(a1 + 412);
      v18 = *(_DWORD *)(a1 + 408);
      v57 = (v16 >> 1) & 1;
      v19 = *(_DWORD *)(a1 + 316);
      v66 = __PAIR64__(v18, v13);
      v68 = (wchar_t *)ScrollAxisToString(v19);
      v69[0] = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        byte_1802EACBA,
        v21,
        v22,
        (__int64)v69,
        &v68,
        (__int64)&v66 + 4,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v63,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&ActiveManipulation);
    }
    v23 = *(_BYTE *)(a1 + 428);
    if ( (v23 & 2) == 0 && v13 == 2 )
    {
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
        && InteractionSourceManager::HasActiveManipulation(v12) )
      {
        v25 = InteractionSourceManager::TryGetActiveManipulation(v12);
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v26, *(_DWORD *)(a1 + 316), (__int64)v25);
      }
      else
      {
        ShouldChainAllForAxis = 0;
      }
      LOBYTE(v24) = ShouldChainForAxis;
      LOBYTE(v56) = ShouldChainAllForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        ActiveChainingHelper,
        *(unsigned int *)(a1 + 316),
        a4,
        v24,
        v56);
      v28 = 3LL * *(int *)(a1 + 316);
      *((_BYTE *)ActiveChainingHelper + 4 * v28) &= 0xFAu;
      *((_DWORD *)ActiveChainingHelper + v28 + 2) = 0;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      *(_BYTE *)(a1 + 428) |= 2u;
      v23 = *(_BYTE *)(a1 + 428);
    }
    v29 = *(_DWORD *)(a1 + 408);
    if ( v29 )
    {
      v30 = v29 - 2;
      if ( !v30 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
        v35 = *(_DWORD *)(a1 + 412);
        if ( v35 && ShouldChainForAxis )
        {
          if ( v35 == 1 || (v36 = *(_DWORD *)(a1 + 412), v35 == 3) )
          {
            v36 = *(_DWORD *)(a1 + 412);
            if ( a4 == v35 && (float)((float)(a3 - *(float *)(a1 + 416)) > 0.0) < 0.0 )
            {
              if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
                && InteractionSourceManager::HasActiveManipulation(v12) )
              {
                v38 = InteractionSourceManager::TryGetActiveManipulation(v12);
                v40 = CInteractionTracker::ShouldChainAllForAxis(v39, *(_DWORD *)(a1 + 316), (__int64)v38);
              }
              else
              {
                v40 = 0;
              }
              LOBYTE(v37) = v40;
              CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 316), a4, v37);
              v36 = *(_DWORD *)(a1 + 412);
            }
          }
          if ( (unsigned int)(v36 - 2) <= 1 && a4 == v36 && (float)((float)(a3 - *(float *)(a1 + 416)) > 0.0) > 0.0 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v42 = InteractionSourceManager::TryGetActiveManipulation(v12);
              v44 = CInteractionTracker::ShouldChainAllForAxis(v43, *(_DWORD *)(a1 + 316), (__int64)v42);
            }
            else
            {
              v44 = 0;
            }
            LOBYTE(v41) = v44;
            CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 316), a4, v41);
          }
          if ( !a4 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v46 = InteractionSourceManager::TryGetActiveManipulation(v12);
              v4 = CInteractionTracker::ShouldChainAllForAxis(v47, *(_DWORD *)(a1 + 316), (__int64)v46);
            }
            LOBYTE(v45) = ShouldChainForAxis;
            LOBYTE(v56) = v4;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              ActiveChainingHelper,
              *(unsigned int *)(a1 + 316),
              0LL,
              v45,
              v56);
            goto LABEL_79;
          }
          goto LABEL_77;
        }
        if ( a4 && ShouldChainForAxis )
        {
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
            && InteractionSourceManager::HasActiveManipulation(v12) )
          {
            v49 = InteractionSourceManager::TryGetActiveManipulation(v12);
            v51 = CInteractionTracker::ShouldChainAllForAxis(v50, *(_DWORD *)(a1 + 316), (__int64)v49);
          }
          else
          {
            v51 = 0;
          }
          LOBYTE(v48) = v51;
          CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 316), a4, v48);
        }
        else if ( (*(_BYTE *)(a1 + 428) & 1) == 0 )
        {
          v52 = *(float *)(a1 + 424);
          if ( v52 != 0.0 )
          {
            v53 = a3 - *(float *)(a1 + 416);
            if ( (float)(v53 > 0.0) != (float)(v52 > 0.0) && v53 != 0.0 )
            {
              v54 = 3LL * *(int *)(a1 + 316);
              *((_BYTE *)ActiveChainingHelper + 4 * v54) &= 0xFAu;
              *((_DWORD *)ActiveChainingHelper + v54 + 2) = 0;
              *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
              *(_DWORD *)(a1 + 424) = 0;
            }
          }
        }
LABEL_76:
        if ( !a4 )
        {
LABEL_79:
          *(float *)(a1 + 420) = a3;
          *(_DWORD *)(a1 + 412) = a4;
          *(_DWORD *)(a1 + 408) = v13;
          return v7;
        }
LABEL_77:
        if ( ShouldChainForAxis )
          v7 = CInteractionTracker::ClampValueToBoundary(v67, *(unsigned int *)(a1 + 316), a2);
        goto LABEL_79;
      }
      if ( v30 != 1 )
        goto LABEL_76;
      if ( *(_DWORD *)(a1 + 412) && ShouldChainForAxis )
      {
        if ( v13 != 2 )
          goto LABEL_76;
        if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
          && InteractionSourceManager::HasActiveManipulation(v12) )
        {
          v32 = InteractionSourceManager::TryGetActiveManipulation(v12);
          v34 = CInteractionTracker::ShouldChainAllForAxis(v33, *(_DWORD *)(a1 + 316), (__int64)v32);
        }
        else
        {
          v34 = 0;
        }
        LOBYTE(v31) = ShouldChainForAxis;
        LOBYTE(v56) = v34;
        CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
          ActiveChainingHelper,
          *(unsigned int *)(a1 + 316),
          a4,
          v31,
          v56);
        goto LABEL_75;
      }
      if ( v13 != 2 )
        goto LABEL_76;
      *(_BYTE *)(a1 + 428) = v23 | 1;
    }
    else
    {
      *(_BYTE *)(a1 + 428) = v23 | 1;
      if ( v13 != 2 )
        goto LABEL_76;
    }
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 420);
LABEL_75:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
    goto LABEL_76;
  }
  return v7;
}
