/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1403D5E00
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateSpeculationControl @ 0x14020C9F0 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x14024B6F8 (KeExitRetpoline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140418B44 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140418BA4 (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x140418BD8 (KiIsBranchConfusionPresent.c)
 *     KiIsRfdsMitigationDesired @ 0x140418C84 (KiIsRfdsMitigationDesired.c)
 *     KiIsRfdsMitigationSupported @ 0x140418C9C (KiIsRfdsMitigationSupported.c)
 *     KiIsSrsoMitigationDesired @ 0x140418CD8 (KiIsSrsoMitigationDesired.c)
 *     KiIsSrsoMitigationSupported @ 0x140418D80 (KiIsSrsoMitigationSupported.c)
 *     KiSetVirtualMitigationControl @ 0x140418DB8 (KiSetVirtualMitigationControl.c)
 *     HvlIsCoreSharingPossible @ 0x140543410 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x140543490 (HvlIsStibpPairingRecommended.c)
 *     KiAddSpecCtrlSsbdBit @ 0x140571314 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14057132C (KiDetectAmdNonArchSsbdSupport.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  signed __int32 v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int16 v14; // r10
  __int16 v15; // ax
  unsigned __int16 v16; // ax
  unsigned __int16 *p_BpbNmiSpecCtrl; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  signed __int32 v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  char v26; // cl
  unsigned __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  signed __int32 v37; // eax
  unsigned int v38; // edi
  unsigned __int16 v39; // ax
  unsigned int v40; // eax
  _DWORD v42[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 BpbKernelSpecCtrl; // [rsp+80h] [rbp+48h] BYREF
  int v44; // [rsp+88h] [rbp+50h] BYREF
  int v45; // [rsp+90h] [rbp+58h] BYREF
  int v46; // [rsp+98h] [rbp+60h]

  CurrentPrcb = KeGetCurrentPrcb();
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
    v11 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      v13 = *(_DWORD *)Argument & 0x80000000;
      v44 = 0;
      if ( v13 != v12 )
      {
        do
        {
          KeYieldProcessorEx(&v44, CoreProcessorSet, 0x80000000LL, v6);
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
      v39 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v39;
    }
    goto LABEL_160;
  }
  _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x1000000000uLL);
  CurrentPrcb->BpbFeatures |= 2u;
  v14 = 1024;
  if ( (KiSpeculationFeatures & 1) != 0 )
  {
    BpbKernelSpecCtrl = 1;
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
    {
      v15 = 3;
      BpbKernelSpecCtrl = 3;
    }
    else
    {
      v15 = BpbKernelSpecCtrl;
    }
    CurrentPrcb->BpbKernelSpecCtrl = v15;
    CurrentPrcb->BpbUserSpecCtrl = v15;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = v15;
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      KiAddSpecCtrlSsbdBit(&BpbKernelSpecCtrl, CoreProcessorSet, 0x80000000LL);
      v16 = BpbKernelSpecCtrl;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = v16;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v16;
    }
    p_BpbNmiSpecCtrl = &CurrentPrcb->BpbNmiSpecCtrl;
    CurrentPrcb->BpbNmiSpecCtrl = 1;
    if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
      KiAddSpecCtrlSsbdBit(p_BpbNmiSpecCtrl, CoreProcessorSet, v10);
    if ( (KiSpeculationFeatures & 0x4000) != 0 )
      *p_BpbNmiSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000) != 0 )
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
          CurrentPrcb->BpbKernelSpecCtrl |= v14;
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= v14;
          CurrentPrcb->BpbUserSpecCtrl |= v14;
          *p_BpbNmiSpecCtrl |= v14;
          goto LABEL_68;
        }
        v18 = 0x20000000000000LL;
      }
      else
      {
        v18 = 0x10000000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v18);
    }
LABEL_68:
    if ( ((unsigned __int64)KiSpeculationFeatures & v6) == 0 )
      goto LABEL_160;
  }
  if ( (KiSpeculationFeatures & 0x10) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 1;
  }
  else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
  {
    CurrentPrcb->BpbNmiSpecCtrl = 2;
  }
  v19 = (__int64)&CurrentPrcb->PrcbPad12c[2];
  if ( (KiSpeculationFeatures & 0x4000) != 0 )
    *(_WORD *)v19 |= 2u;
  if ( (KiSpeculationFeatures & 0x2000) != 0 )
  {
    v19 = (__int64)&CurrentPrcb->PrcbPad12c[2];
    CurrentPrcb->BpbNmiSpecCtrl |= 0x80u;
  }
  if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 || ((unsigned __int64)KiSpeculationFeatures & v6) != 0 )
    KiAddSpecCtrlSsbdBit(v19, CoreProcessorSet, v10);
  if ( (KiSpeculationFeatures & 1) == 0 )
  {
    if ( Argument )
    {
      v20 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v21 = v10 & ~v20;
      if ( (v20 & 0x7FFFFFFF) != 0 )
      {
        v22 = v10 & *(_DWORD *)Argument;
        v45 = 0;
        while ( v22 != v21 )
        {
          KeYieldProcessorEx(&v45, CoreProcessorSet, v10, v6);
          v22 = *(_DWORD *)Argument & 0x80000000;
        }
      }
      else
      {
        *(_DWORD *)Argument = v21 | *(_DWORD *)(Argument + 4);
      }
    }
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    {
      CurrentPrcb->BpbRetpolineState |= 4u;
      KeExitRetpoline(v19, CoreProcessorSet, v10);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x4000) == 0
      && !HvlHypervisorConnected
      && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x200000000uLL);
      CurrentPrcb->BpbFeatures |= 1u;
    }
    v23 = 0LL;
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && (KiSpeculationFeatures & 0x10) != 0
      && (KiSpeculationFeatures & 0x4000) == 0
      && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
    {
      v10 = CurrentPrcb->CoreProcessorSet;
      v24 = v10 - ((v10 >> 1) & 0x5555555555555555LL);
      CoreProcessorSet = v24 & 0x3333333333333333LL;
      v25 = ((v24 & 0x3333333333333333LL)
           + ((v24 >> 2) & 0x3333333333333333LL)
           + (((v24 & 0x3333333333333333LL) + ((v24 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
      v19 = 0x101010101010101LL;
      if ( (0x101010101010101LL * v25) >> 56 == 2
        && (!HvlHypervisorConnected
         || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, CoreProcessorSet, v10, 0LL)
         || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
      {
        v26 = CurrentPrcb->GroupIndex + 1;
        _BitScanForward64(&v27, __ROR8__(v10, v26));
        v28 = ((_BYTE)v27 + v26) & 0x3F;
        v29 = v28 + (CurrentPrcb->Group << 6);
        v46 = v28;
        CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[v29]);
        v23 = 1LL;
        CurrentPrcb->PairRegister = 6;
      }
    }
    if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
      || (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && !(_DWORD)v23
      && (KiSpeculationFeatures & 0x10000000000LL) == 0
      && HvlHypervisorConnected
      && (unsigned __int8)HvlIsCoreSharingPossible(v19, CoreProcessorSet, v10, v23) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x100000000uLL);
    }
    if ( (KiSpeculationFeatures & 2) != 0
      && (KiSpeculationFeatures & 0x40) != 0
      && (KiSpeculationFeatures & 0x4000) != 0
      && !(_DWORD)v23
      && (KiSpeculationFeatures & 0x10000000000LL) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x80000000000uLL);
    }
    if ( CurrentPrcb->CpuVendor == 1 && (KiSpeculationFeatures & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x2000000000uLL);
LABEL_127:
      v5 = 0x4000000000LL;
      goto LABEL_160;
    }
    if ( (unsigned int)KiIsBranchConfusionPresent(CurrentPrcb, CoreProcessorSet, v10, v23) )
    {
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x8000uLL);
      if ( (unsigned int)KiIsBranchConfusionMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
      {
        if ( (unsigned int)KiIsBranchConfusionMitigationSupported(v31, &KiSpeculationFeatures) )
          goto LABEL_134;
        v34 = 0x200000000000LL;
      }
      else
      {
        v34 = 0x100000000000LL;
      }
      _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v34);
    }
LABEL_134:
    if ( (KiSpeculationFeatures & 0x200000) == 0 )
      goto LABEL_140;
    if ( (unsigned int)KiIsSrsoMitigationSupported(v31, &KiSpeculationFeatures) )
    {
      if ( (unsigned int)KiIsSrsoMitigationDesired(CurrentPrcb, &KiSpeculationFeatures) )
        goto LABEL_140;
      v35 = 0x800000000000LL;
    }
    else
    {
      v35 = 0x1000000000000LL;
    }
    _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v35);
LABEL_140:
    if ( (KiSpeculationFeatures & 0x10000) != 0 )
    {
      if ( (KiFeatureSettings & 0x800000) == 0 )
      {
        v36 = 0x10000000000000LL;
LABEL_148:
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, v36);
        goto LABEL_149;
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
          v36 = 0x20000000000000LL;
          goto LABEL_148;
        }
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000000uLL);
        CurrentPrcb->BpbKernelSpecCtrl |= 0x400u;
        CurrentPrcb->BpbRetpolineExitSpecCtrl |= 0x400u;
        CurrentPrcb->BpbUserSpecCtrl |= 0x400u;
        CurrentPrcb->BpbNmiSpecCtrl |= 0x400u;
      }
    }
LABEL_149:
    if ( Argument )
    {
      v37 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v38 = ~v37 & 0x80000000;
      if ( (v37 & 0x7FFFFFFF) != 0 )
      {
        v42[0] = 0;
        while ( (*(_DWORD *)Argument & 0x80000000) != v38 )
          KeYieldProcessorEx(v42, v30, v32, v33);
      }
      else
      {
        *(_DWORD *)Argument = v38 | *(_DWORD *)(Argument + 4);
      }
    }
    KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
    goto LABEL_127;
  }
LABEL_160:
  v40 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v40;
  if ( (_WORD)v40 )
    __writemsr(0x48u, v40);
  if ( ((unsigned __int64)KiSpeculationFeatures & v5) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  KiSetVirtualMitigationControl(CurrentPrcb);
  return 0LL;
}
