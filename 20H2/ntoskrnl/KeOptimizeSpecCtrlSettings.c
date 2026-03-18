/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1403C6E50
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x1403599C8 (KeExitRetpoline.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1403F1C64 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F1CBC (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1403F1CE4 (KiIsBranchConfusionPresent.c)
 *     HvlIsCoreSharingPossible @ 0x1404EFF70 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x1404EFFDC (HvlIsStibpPairingRecommended.c)
 *     KiAddSpecCtrlSsbdBit @ 0x140519B90 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140519BA4 (KiDetectAmdNonArchSsbdSupport.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CoreProcessorSet; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  signed __int32 v8; // eax
  unsigned int v9; // esi
  __int64 v10; // r8
  char v11; // al
  char v12; // al
  unsigned __int8 *p_BpbNmiSpecCtrl; // rcx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  int v16; // esi
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rax
  unsigned int i; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int32 v28; // eax
  unsigned int v29; // esi
  char v30; // al
  unsigned int v31; // eax
  _DWORD v33[6]; // [rsp+20h] [rbp-18h] BYREF
  char BpbKernelSpecCtrl; // [rsp+70h] [rbp+38h] BYREF
  int v35; // [rsp+78h] [rbp+40h] BYREF
  int v36; // [rsp+80h] [rbp+48h] BYREF
  int v37; // [rsp+88h] [rbp+50h]

  CurrentPrcb = KeGetCurrentPrcb();
  BpbKernelSpecCtrl = 0;
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x1000000u);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb);
  v6 = 0x400000LL;
  if ( (KiSpeculationFeatures & 0x80u) != 0LL && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_16;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_17;
    if ( KiSsbdMsr != 72 )
LABEL_16:
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x400000u);
    else
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x800000u);
  }
LABEL_17:
  if ( (KiSpeculationFeatures & 4) == 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x80000u);
  if ( (KiFeatureSettings & 4) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x40000u);
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x40000u);
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0
        && (unsigned __int8)HvlIsCoreSharingPossible(Argument, CoreProcessorSet, a3, 0x400000LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v7 = 0x80000000LL;
  if ( Argument )
  {
    v35 = 0;
    v8 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v9 = ~v8 & 0x80000000;
    if ( (v8 & 0x7FFFFFFF) != 0 )
    {
      if ( (*(_DWORD *)Argument & 0x80000000) != v9 )
      {
        do
        {
          KeYieldProcessorEx(&v35, 0x80000000LL, a3, v6);
          v7 = 0x80000000LL;
        }
        while ( (*(_DWORD *)Argument & 0x80000000) != v9 );
        v6 = 0x400000LL;
      }
    }
    else
    {
      *(_DWORD *)Argument = v9 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (KiSpeculationFeatures & 0x40000) != 0 || (KiSpeculationFeatures & 0x80000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x800000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, v6);
      _InterlockedAnd((volatile signed __int32 *)&KiSpeculationFeatures, 0xFF7FFFFF);
    }
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v6) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      KiAddSpecCtrlSsbdBit(&BpbKernelSpecCtrl, 0x80000000LL);
      v30 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v30;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x100000u);
    CurrentPrcb->BpbFeatures |= 2u;
    v10 = 0x2000LL;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_49;
    BpbKernelSpecCtrl = 1;
    v11 = 1;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      v11 = 3;
    BpbKernelSpecCtrl = v11;
    CurrentPrcb->BpbKernelSpecCtrl = v11;
    CurrentPrcb->BpbUserSpecCtrl = v11;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v11;
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v6) != 0 || (KiSpeculationFeatures & 0x800000) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      KiAddSpecCtrlSsbdBit(&BpbKernelSpecCtrl, 0x80000000LL);
      v12 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v12;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v12;
    }
    p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v6) != 0 || (KiSpeculationFeatures & 0x800000) != 0 )
      KiAddSpecCtrlSsbdBit(p_BpbNmiSpecCtrl, v7);
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      *p_BpbNmiSpecCtrl |= 2u;
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v10) != 0 )
      *p_BpbNmiSpecCtrl |= 0x80u;
    if ( (KiSpeculationFeatures & 0x800000) != 0 )
    {
LABEL_49:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      v14 = (__int64)&CurrentPrcb->PrcbPad11[1] + 4;
      if ( (KiSpeculationFeatures & 0x4000) != 0 )
        *(_BYTE *)v14 |= 2u;
      if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v10) != 0 )
      {
        v14 = (__int64)&CurrentPrcb->PrcbPad11[1] + 4;
        CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
      }
      if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v6) != 0 || (KiSpeculationFeatures & 0x800000) != 0 )
        KiAddSpecCtrlSsbdBit(v14, v7);
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( Argument )
        {
          v36 = 0;
          v15 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v16 = v7 & ~v15;
          if ( (v15 & 0x7FFFFFFF) != 0 )
          {
            for ( i = v7 & *(_DWORD *)Argument; i != v16; i = *(_DWORD *)Argument & 0x80000000 )
              KeYieldProcessorEx(&v36, v7, v10, v6);
          }
          else
          {
            *(_DWORD *)Argument = v16 | *(_DWORD *)(Argument + 4);
          }
        }
        if ( (KiSpeculationFeatures & 0x2000000) != 0 )
        {
          CurrentPrcb->BpbRetpolineState |= 4u;
          KeExitRetpoline(v14, v7);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x20000u);
          CurrentPrcb->BpbFeatures |= 1u;
        }
        v17 = 0LL;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0
          && (KiSpeculationFeatures & 0x4000) == 0
          && (KiSpeculationFeatures & 0x1000000) == 0 )
        {
          v6 = CurrentPrcb->CoreProcessorSet;
          v18 = v6 - ((v6 >> 1) & 0x5555555555555555LL);
          v7 = v18 & 0x3333333333333333LL;
          v19 = ((v18 & 0x3333333333333333LL)
               + ((v18 >> 2) & 0x3333333333333333LL)
               + (((v18 & 0x3333333333333333LL) + ((v18 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
          v14 = 0x101010101010101LL;
          if ( (0x101010101010101LL * v19) >> 56 == 2
            && (!HvlHypervisorConnected
             || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, v7, 0LL, v6)
             || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
          {
            v20 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v21, __ROR8__(v6, v20));
            v22 = ((_BYTE)v21 + v20) & 0x3F;
            v23 = v22 + (CurrentPrcb->Group << 6);
            v37 = v22;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[v23]);
            CurrentPrcb->PairRegister = 6;
            v17 = 1LL;
          }
        }
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !(_DWORD)v17
          && (KiSpeculationFeatures & 0x1000000) == 0
          && HvlHypervisorConnected
          && (unsigned __int8)HvlIsCoreSharingPossible(v14, v7, v17, v6) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x10000u);
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x4000) != 0
          && !(_DWORD)v17
          && (KiSpeculationFeatures & 0x1000000) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x8000000u);
        }
        if ( CurrentPrcb->CpuVendor != 1 || (KiSpeculationFeatures & 0x10) != 0 || (KiFeatureSettings & 0x40) != 0 )
        {
          if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb, v7, v17, v6) )
          {
            _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x8000u);
            if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
            {
              if ( !(unsigned int)KiIsBranchConfusionMitigationSupported() )
                _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x20000000u);
            }
            else
            {
              _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x10000000u);
            }
          }
          if ( Argument )
          {
            v28 = _InterlockedDecrement((volatile signed __int32 *)Argument);
            v29 = ~v28 & 0x80000000;
            if ( (v28 & 0x7FFFFFFF) != 0 )
            {
              v33[0] = 0;
              while ( (*(_DWORD *)Argument & 0x80000000) != v29 )
                KeYieldProcessorEx(v33, v25, v26, v27);
            }
            else
            {
              *(_DWORD *)Argument = v29 | *(_DWORD *)(Argument + 4);
            }
          }
          KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x200000u);
        }
        LODWORD(v6) = 0x400000;
      }
    }
  }
  v31 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v31;
  if ( (_BYTE)v31 )
    __writemsr(0x48u, v31);
  if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v6) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  return 0LL;
}
