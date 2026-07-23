/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1403C79E0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1402A37B8 (KeExitRetpoline.c)
 *     KiUpdateSpeculationControl @ 0x1402C3600 (KiUpdateSpeculationControl.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1403F3144 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F31A4 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1403F31D0 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsMitigationDesired @ 0x1403F32DC (KiIsRfdsMitigationDesired.c)
 *     KiIsRfdsMitigationSupported @ 0x1403F32F4 (KiIsRfdsMitigationSupported.c)
 *     KiIsSrsoMitigationDesired @ 0x1403F3338 (KiIsSrsoMitigationDesired.c)
 *     KiIsSrsoMitigationSupported @ 0x1403F33E0 (KiIsSrsoMitigationSupported.c)
 *     KiIsTsaMitigationDesired @ 0x1403F3420 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1403F343C (KiIsTsaMitigationSupported.c)
 *     KiSetVirtualMitigationControl @ 0x1403F3520 (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x1404F1A90 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x1404F1AFC (HvlIsStibpPairingRecommended.c)
 *     KiAddSpecCtrlSsbdBit @ 0x14051B800 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14051B818 (KiDetectAmdNonArchSsbdSupport.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  signed __int32 v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r10
  __int16 v15; // r11
  __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned __int16 *p_BpbNmiSpecCtrl; // rcx
  unsigned __int64 v19; // rax
  unsigned __int16 *v20; // rcx
  signed __int32 v21; // eax
  int v22; // edi
  unsigned int i; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  char v30; // cl
  unsigned __int64 v31; // rax
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  signed __int32 v42; // eax
  unsigned int v43; // edi
  unsigned __int16 v44; // ax
  unsigned int v45; // eax
  _DWORD v47[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 BpbKernelSpecCtrl; // [rsp+80h] [rbp+48h] BYREF
  int v49; // [rsp+88h] [rbp+50h] BYREF
  int v50; // [rsp+90h] [rbp+58h] BYREF
  int v51; // [rsp+98h] [rbp+60h]

  CurrentPrcb = KeGetCurrentPrcb();
  BpbKernelSpecCtrl = 0;
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 2uLL);
  v4 = 0x10000000000LL;
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x10000000000uLL);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  v5 = 0x4000000000LL;
  v6 = 0x8000000000LL;
  v7 = 256LL;
  if ( (KiSpeculationFeatures & 0x80) != 0 && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x4000000000uLL);
    else
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000000000uLL);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x800000000uLL);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x400000000uLL);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(v4, CoreProcessorSet, 256LL, 0x8000000000LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v8 = 0x8000000000000LL;
  if ( (KiSpeculationFeatures & 0x800000) != 0 )
  {
    if ( !(unsigned int)KiIsRfdsMitigationSupported(0x8000000000000LL, &KiSpeculationFeatures, v7, v6) )
    {
      v9 = 0x4000000000000LL;
LABEL_32:
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v9);
      goto LABEL_35;
    }
    if ( !(unsigned int)KiIsRfdsMitigationDesired() )
    {
      v9 = 0x2000000000000LL;
      goto LABEL_32;
    }
    if ( !KiKvaShadow )
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v8);
  }
LABEL_35:
  if ( ((unsigned __int64)KiSpeculationFeatures & v8) != 0 )
  {
    CurrentPrcb->BpbState |= v7;
    CurrentPrcb->VerwSelector = 24;
  }
  v10 = 0x80000000LL;
  if ( Argument )
  {
    v49 = 0;
    v11 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      if ( (*(_DWORD *)Argument & 0x80000000) != v12 )
      {
        do
        {
          KeYieldProcessorEx(&v49, CoreProcessorSet, 0x80000000LL, v6);
          v10 = 0x80000000LL;
        }
        while ( (*(_DWORD *)Argument & 0x80000000) != v12 );
        v6 = 0x8000000000LL;
        v5 = 0x4000000000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = v12 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (KiSpeculationFeatures & 0x400000000LL) != 0 || (KiSpeculationFeatures & 0x800000000LL) != 0 )
  {
    if ( ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v5);
      _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFF7FFFFFFFFFuLL);
    }
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      KiAddSpecCtrlSsbdBit(&BpbKernelSpecCtrl, CoreProcessorSet, 0x80000000LL);
      v44 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v44;
    }
    goto LABEL_169;
  }
  _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
  CurrentPrcb->BpbFeatures |= 2u;
  v13 = 0x2000LL;
  v14 = 0x4000LL;
  v15 = 1024;
  if ( (KiSpeculationFeatures & 1) != 0 )
  {
    BpbKernelSpecCtrl = 1;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
    {
      v16 = 3;
      BpbKernelSpecCtrl = 3;
    }
    else
    {
      v16 = BpbKernelSpecCtrl;
    }
    CurrentPrcb->BpbKernelSpecCtrl = v16;
    CurrentPrcb->BpbUserSpecCtrl = v16;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v16;
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      KiAddSpecCtrlSsbdBit(&BpbKernelSpecCtrl, 0x2000LL, 0x80000000LL);
      v17 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v17;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v17;
    }
    p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
      KiAddSpecCtrlSsbdBit(p_BpbNmiSpecCtrl, v13, v10);
    if ( ((unsigned __int64)KiSpeculationFeatures & v14) != 0 )
      *p_BpbNmiSpecCtrl |= 2u;
    if ( ((unsigned __int64)KiSpeculationFeatures & v13) != 0 )
      *p_BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) != 0 )
      {
        if ( BYTE12(KiSpeculationFeatures) )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
          CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
          goto LABEL_68;
        }
        if ( (KiSpeculationFeatures & 0x20000) != 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
          CurrentPrcb->BpbKernelSpecCtrl |= v15;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= v15;
          CurrentPrcb->BpbUserSpecCtrl |= v15;
          *p_BpbNmiSpecCtrl |= v15;
          goto LABEL_68;
        }
        v19 = 0x20000000000000LL;
      }
      else
      {
        v19 = 0x10000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v19);
    }
LABEL_68:
    if ( ((unsigned __int64)KiSpeculationFeatures & v6) == 0 )
    {
      v5 = 0x4000000000LL;
      goto LABEL_169;
    }
  }
  if ( (KiSpeculationFeatures & 0x10) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 1;
  }
  else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 2;
  }
  v20 = &CurrentPrcb->BpbNmiSpecCtrl;
  if ( ((unsigned __int64)KiSpeculationFeatures & v14) != 0 )
    *v20 |= 2u;
  if ( ((unsigned __int64)KiSpeculationFeatures & v13) != 0 )
  {
    v20 = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
  }
  v5 = 0x4000000000LL;
  if ( (KiSpeculationFeatures & 0x4000000000LL) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
    KiAddSpecCtrlSsbdBit(v20, v13, v10);
  if ( (KiSpeculationFeatures & 1) == 0 )
  {
    if ( Argument )
    {
      v50 = 0;
      v21 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v22 = v10 & ~v21;
      if ( (v21 & 0x7FFFFFFF) != 0 )
      {
        for ( i = v10 & *(_DWORD *)Argument; i != v22; i = *(_DWORD *)Argument & 0x80000000 )
          KeYieldProcessorEx(&v50, v13, v10, v6);
      }
      else
      {
        *(_DWORD *)Argument = v22 | *(_DWORD *)(Argument + 4);
      }
    }
    v24 = 0x20000000000LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    {
      CurrentPrcb->BpbRetpolineState |= 4u;
      KeExitRetpoline(0x20000000000LL, v13, v10);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x4000) == 0
      && !HvlHypervisorConnected
      && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
      CurrentPrcb->BpbFeatures |= 1u;
    }
    v25 = 0LL;
    if ( (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 0x10) != 0 )
    {
      v26 = 0x10000000000LL;
      if ( (KiSpeculationFeatures & 0x4000) != 0 || (KiSpeculationFeatures & 0x10000000000LL) != 0 )
        goto LABEL_108;
      v10 = CurrentPrcb->CoreProcessorSet;
      v27 = v10 - ((v10 >> 1) & 0x5555555555555555LL);
      v28 = v27 & 0x3333333333333333LL;
      v29 = ((v27 & 0x3333333333333333LL)
           + ((v27 >> 2) & 0x3333333333333333LL)
           + (((v27 & 0x3333333333333333LL) + ((v27 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
      v24 = 0x101010101010101LL;
      if ( (0x101010101010101LL * v29) >> 56 == 2
        && (!HvlHypervisorConnected
         || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, v28, v10, 0LL)
         || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
      {
        v30 = CurrentPrcb->GroupIndex + 1;
        _BitScanForward64(&v31, __ROR8__(v10, v30));
        v32 = ((_BYTE)v31 + v30) & 0x3F;
        v33 = v32 + (CurrentPrcb->Group << 6);
        v51 = v32;
        CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[v33]);
        v25 = 1LL;
        CurrentPrcb->PairRegister = 6;
      }
    }
    v26 = 0x10000000000LL;
LABEL_108:
    if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
      || (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && !(_DWORD)v25
      && (KiSpeculationFeatures & 0x10000000000LL) == 0
      && HvlHypervisorConnected
      && (unsigned __int8)HvlIsCoreSharingPossible(v24, 0x10000000000LL, v10, v25) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && (KiSpeculationFeatures & 0x4000) != 0
      && !(_DWORD)v25
      && ((unsigned __int64)KiSpeculationFeatures & v26) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
    }
    if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
LABEL_128:
      v5 = 0x4000000000LL;
      goto LABEL_169;
    }
    if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb, v26, v10) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
      if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
      {
        if ( (unsigned int)KiIsBranchConfusionMitigationSupported(v35, &KiSpeculationFeatures) )
          goto LABEL_135;
        v38 = 0x200000000000LL;
      }
      else
      {
        v38 = 0x100000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v38);
    }
LABEL_135:
    if ( (KiSpeculationFeatures & 0x2000000) == 0 )
      goto LABEL_142;
    if ( (unsigned int)KiIsTsaMitigationDesired() )
    {
      if ( (unsigned int)KiIsTsaMitigationSupported(CurrentPrcb) )
      {
        CurrentPrcb->BpbFeatures |= 0x40u;
LABEL_142:
        if ( (KiSpeculationFeatures & 0x200000) == 0 )
          goto LABEL_148;
        if ( (unsigned int)KiIsSrsoMitigationSupported(v35, &KiSpeculationFeatures) )
        {
          if ( (unsigned int)KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
            goto LABEL_148;
          v40 = 0x800000000000LL;
        }
        else
        {
          v40 = 0x1000000000000LL;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v40);
LABEL_148:
        if ( (KiSpeculationFeatures & 0x10000) != 0 )
        {
          if ( (KiFeatureSettings & 0x800000) == 0 )
          {
            v41 = 0x10000000000000LL;
LABEL_156:
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v41);
            goto LABEL_157;
          }
          if ( BYTE12(KiSpeculationFeatures) )
          {
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000000uLL);
            CurrentPrcb->BpbFeatures ^= (CurrentPrcb->BpbFeatures ^ (16 * BYTE12(KiSpeculationFeatures))) & 0x30;
          }
          else
          {
            if ( (KiSpeculationFeatures & 0x20000) == 0 )
            {
              v41 = 0x20000000000000LL;
              goto LABEL_156;
            }
            _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
            CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
            CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
            CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
            CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
          }
        }
LABEL_157:
        if ( Argument )
        {
          v42 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v43 = ~v42 & 0x80000000;
          if ( (v42 & 0x7FFFFFFF) != 0 )
          {
            v47[0] = 0;
            while ( (*(_DWORD *)Argument & 0x80000000) != v43 )
              KeYieldProcessorEx(v47, v34, v36, v37);
          }
          else
          {
            *(_DWORD *)Argument = v43 | *(_DWORD *)(Argument + 4);
          }
        }
        KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
        goto LABEL_128;
      }
      v39 = 0x400000000000000LL;
    }
    else
    {
      v39 = 0x200000000000000LL;
    }
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v39);
    goto LABEL_142;
  }
LABEL_169:
  v45 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v45;
  if ( (_WORD)v45 )
    __writemsr(0x48u, v45);
  if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  KiSetVirtualMitigationControl(CurrentPrcb);
  return 0LL;
}
