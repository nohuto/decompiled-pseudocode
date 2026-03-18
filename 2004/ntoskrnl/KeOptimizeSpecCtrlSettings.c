/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1403C3E50
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiUpdateSpeculationControl @ 0x140300FE0 (KiUpdateSpeculationControl.c)
 *     KeExitRetpoline @ 0x140329324 (KeExitRetpoline.c)
 *     HvlIsCoreSharingPossible @ 0x1404EC6F8 (HvlIsCoreSharingPossible.c)
 *     HvlIsStibpPairingRecommended @ 0x1404EC764 (HvlIsStibpPairingRecommended.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140516228 (KiDetectAmdNonArchSsbdSupport.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CoreProcessorSet; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // esi
  signed __int32 v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  signed __int32 v20; // eax
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  unsigned __int8 v24; // al
  unsigned __int8 BpbKernelSpecCtrl; // al
  int v26; // [rsp+50h] [rbp+8h] BYREF
  int v27; // [rsp+58h] [rbp+10h] BYREF
  int v28; // [rsp+60h] [rbp+18h]
  int v29; // [rsp+68h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( ((CoreProcessorSet - 1) & CoreProcessorSet) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( HvlHypervisorConnected && (unsigned __int8)((__int64 (*)(void))HvlIsCoreSharingPossible)() )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 2u);
  if ( (KiFeatureSettings & 0x80u) != 0 )
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x1000000u);
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb);
  v7 = 0x400000LL;
  if ( (KiSpeculationFeatures & 0x80u) != 0LL && (KiSpeculationFeatures & 0x100) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_69;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_12;
    if ( KiSsbdMsr != 72 )
LABEL_69:
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x400000u);
    else
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x800000u);
  }
LABEL_12:
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
        && (unsigned __int8)HvlIsCoreSharingPossible(Argument, CoreProcessorSet, 0x400000LL)
        && (KiSpeculationFeatures & 0x40) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        CurrentPrcb->BpbRetpolineExitSpecCtrl = 2;
      }
    }
  }
  v8 = 0x80000000LL;
  if ( Argument )
  {
    v26 = 0;
    v9 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v10 = ~v9 & 0x80000000;
    if ( (v9 & 0x7FFFFFFF) != 0 )
    {
      while ( (*(_DWORD *)Argument & 0x80000000) != v10 )
      {
        KeYieldProcessorEx(&v26, CoreProcessorSet, v7, a4);
        v8 = 0x80000000LL;
      }
      v7 = 0x400000LL;
    }
    else
    {
      *(_DWORD *)Argument = v10 | *(_DWORD *)(Argument + 4);
    }
  }
  if ( (KiSpeculationFeatures & 0x40000) != 0 || (KiSpeculationFeatures & 0x80000) != 0 )
  {
    if ( (KiSpeculationFeatures & 0x800000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, v7);
      _InterlockedAnd((volatile signed __int32 *)&KiSpeculationFeatures, 0xFF7FFFFF);
    }
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v7) != 0 )
    {
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        BpbKernelSpecCtrl |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
      CurrentPrcb->BpbUserSpecCtrl = BpbKernelSpecCtrl;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x100000u);
    CurrentPrcb->BpbFeatures |= 2u;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_24;
    CurrentPrcb->BpbKernelSpecCtrl = 1;
    CurrentPrcb->BpbUserSpecCtrl = 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = 1;
    if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v7) != 0 || (KiSpeculationFeatures & 0x800000) != 0 )
    {
      v24 = CurrentPrcb->BpbKernelSpecCtrl;
      if ( KiSsbdMsr == 72 )
        v24 |= 4u;
      CurrentPrcb->BpbKernelSpecCtrl = v24;
      CurrentPrcb->BpbUserSpecCtrl = v24;
      CurrentPrcb->BpbRetpolineExitSpecCtrl = v24;
    }
    if ( (KiSpeculationFeatures & 0x800000) != 0 )
    {
LABEL_24:
      if ( (KiSpeculationFeatures & 0x10) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 2) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (((unsigned int)KiSpeculationFeatures & (unsigned int)v7) != 0 || (KiSpeculationFeatures & 0x800000) != 0)
        && KiSsbdMsr == 72 )
      {
        CurrentPrcb->BpbNmiSpecCtrl |= 4u;
      }
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( Argument )
        {
          v27 = 0;
          v11 = _InterlockedDecrement((volatile signed __int32 *)Argument);
          v12 = ~v11 & 0x80000000;
          if ( (v11 & 0x7FFFFFFF) != 0 )
          {
            while ( (*(_DWORD *)Argument & 0x80000000) != v12 )
            {
              KeYieldProcessorEx(&v27, CoreProcessorSet, v7, a4);
              v8 = 0x80000000LL;
            }
          }
          else
          {
            *(_DWORD *)Argument = v12 | *(_DWORD *)(Argument + 4);
          }
        }
        if ( (KiSpeculationFeatures & 0x2000000) != 0 )
        {
          CurrentPrcb->BpbRetpolineState |= 4u;
          KeExitRetpoline();
        }
        if ( (KiSpeculationFeatures & 2) != 0
          && !HvlHypervisorConnected
          && ((KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x20000u);
          CurrentPrcb->BpbFeatures |= 1u;
        }
        v13 = 0LL;
        if ( (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && (KiSpeculationFeatures & 0x10) != 0
          && (KiSpeculationFeatures & 0x1000000) == 0 )
        {
          a4 = CurrentPrcb->CoreProcessorSet;
          v14 = a4 - ((a4 >> 1) & 0x5555555555555555LL);
          CoreProcessorSet = v14 & 0x3333333333333333LL;
          v15 = ((v14 & 0x3333333333333333LL)
               + ((v14 >> 2) & 0x3333333333333333LL)
               + (((v14 & 0x3333333333333333LL) + ((v14 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
          v8 = 0x101010101010101LL;
          if ( (0x101010101010101LL * v15) >> 56 == 2
            && (!HvlHypervisorConnected
             || !(unsigned __int8)HvlIsCoreSharingPossible(0x101010101010101LL, CoreProcessorSet, 0LL)
             || (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsStibpPairingRecommended()) )
          {
            v16 = CurrentPrcb->GroupIndex + 1;
            _BitScanForward64(&v17, __ROR8__(a4, v16));
            v18 = ((_BYTE)v17 + v16) & 0x3F;
            v19 = v18 + (CurrentPrcb->Group << 6);
            v28 = v18;
            CurrentPrcb->PairPrcb = (_KPRCB *)KeGetPrcb(KiProcessorNumberToIndexMappingTable[v19]);
            CurrentPrcb->PairRegister = 6;
            v13 = 1LL;
          }
        }
        if ( (KiFeatureSettings & 0x20) != 0 && (KiSpeculationFeatures & 2) != 0 && (KiSpeculationFeatures & 0x40) != 0
          || (KiSpeculationFeatures & 2) != 0
          && (KiSpeculationFeatures & 0x40) != 0
          && !(_DWORD)v13
          && (KiSpeculationFeatures & 0x1000000) == 0
          && HvlHypervisorConnected
          && (unsigned __int8)HvlIsCoreSharingPossible(v8, CoreProcessorSet, v13) )
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x10000u);
        }
        if ( CurrentPrcb->CpuVendor != 1 || (KiSpeculationFeatures & 0x10) != 0 || (KiFeatureSettings & 0x40) != 0 )
        {
          if ( Argument )
          {
            v20 = _InterlockedDecrement((volatile signed __int32 *)Argument);
            v21 = ~v20 & 0x80000000;
            if ( (v20 & 0x7FFFFFFF) != 0 )
            {
              v29 = 0;
              while ( (*(_DWORD *)Argument & 0x80000000) != v21 )
                KeYieldProcessorEx(&v29, CoreProcessorSet, v13, a4);
            }
            else
            {
              *(_DWORD *)Argument = v21 | *(_DWORD *)(Argument + 4);
            }
          }
          KiUpdateSpeculationControl((__int64)KeGetCurrentThread()->ApcState.Process);
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)&KiSpeculationFeatures, 0x200000u);
        }
        LODWORD(v7) = 0x400000;
      }
    }
  }
  v22 = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = v22;
  if ( (_BYTE)v22 )
    __writemsr(0x48u, v22);
  if ( ((unsigned int)KiSpeculationFeatures & (unsigned int)v7) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, KiSsbdBit | __readmsr(KiSsbdMsr));
  return 0LL;
}
