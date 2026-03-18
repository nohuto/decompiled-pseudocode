/*
 * XREFs of KiUpdateSpeculationControl @ 0x140300FE0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C3E50 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiSynchronizeStibpPairing @ 0x140516338 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14051655C (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

char __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  _KPRCB *PairPrcb; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // edx
  unsigned __int8 BpbCurrentSpecCtrl; // di
  bool v6; // r13
  char v7; // r15
  int v8; // esi
  char v9; // al
  int v10; // r11d
  struct _KPRCB *v11; // r9
  int v12; // ecx
  unsigned __int64 TrappedSecurityDomain; // r12
  __int64 v14; // r8
  __int64 BpbRetpolineExitSpecCtrl; // rdx
  unsigned __int8 BpbUserSpecCtrl; // cl
  int updated; // eax
  char v18; // di
  bool v19; // cf
  signed __int16 PairRegister; // ax
  signed __int16 v21; // tt
  unsigned __int8 v22; // al
  unsigned __int8 BpbTrappedRetpolineExitSpecCtrl; // al
  char v24; // cl
  int v26; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  BOOL v28; // [rsp+78h] [rbp+10h]
  BOOL v29; // [rsp+80h] [rbp+18h]

  PairPrcb = (_KPRCB *)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = KiSpeculationFeatures;
  v4 = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x100000) == 0 )
    return (char)PairPrcb;
  _disable();
  CurrentPrcb->BpbState &= 0xE1u;
  if ( (v4 & 1) != 0 )
  {
    LOBYTE(PairPrcb) = KiUpdateSpecCtrlEnhancedIBRS(CurrentPrcb, a1);
    _enable();
    return (char)PairPrcb;
  }
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  v6 = 0;
  v7 = 0;
  v8 = v4 & 0x2000000;
  if ( (v4 & 0x2000000) != 0 && (CurrentPrcb->BpbRetpolineState & 3) == 1 )
  {
    v7 = 1;
    BpbCurrentSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
    v6 = (CurrentPrcb->BpbTrappedBpbState & 0x10) != 0;
  }
  if ( (v4 & 0x400000) != 0 && KiSsbdMsr == 72 )
  {
    BpbCurrentSpecCtrl |= 4u;
    v9 = 4;
  }
  else
  {
    v9 = 0;
  }
  CurrentPrcb->BpbKernelSpecCtrl = v9;
  v10 = 0;
  CurrentPrcb->BpbUserSpecCtrl = v9;
  CurrentPrcb->BpbRetpolineExitSpecCtrl = v9;
  v11 = CurrentPrcb;
  v12 = *(_DWORD *)(a1 + 2172);
  TrappedSecurityDomain = CurrentPrcb->TrappedSecurityDomain;
  v28 = (v12 & 0x400000) != 0;
  v14 = *(_QWORD *)(a1 + 2528);
  v29 = (v12 & 0x800000) != 0;
  if ( (v12 & 0x400000) == 0 )
    v14 = 1LL;
  if ( (v26 & 0x200000) == 0 )
  {
    if ( !v14 )
    {
      if ( (v26 & 2) != 0 )
      {
        if ( (v26 & 0x40) != 0 )
        {
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 2u;
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        }
        else if ( (v26 & 0x10) != 0 )
        {
          CurrentPrcb->BpbRetpolineExitSpecCtrl |= 1u;
          CurrentPrcb->BpbKernelSpecCtrl |= 1u;
        }
      }
      goto LABEL_13;
    }
    if ( (v26 & 0x10) != 0 )
    {
      CurrentPrcb->BpbRetpolineExitSpecCtrl |= 1u;
      CurrentPrcb->BpbKernelSpecCtrl |= 1u;
      CurrentPrcb->BpbState |= 2u;
    }
    else
    {
      if ( (v26 & 0x42) == 0x42 )
      {
        CurrentPrcb->BpbRetpolineExitSpecCtrl |= 2u;
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
      CurrentPrcb->BpbState |= 8u;
    }
  }
  if ( !v14 || (v26 & 0x800000) == 0 )
  {
LABEL_13:
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl &= ~4u;
    goto LABEL_14;
  }
  CurrentPrcb->BpbRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl |= 4u;
  CurrentPrcb->BpbKernelSpecCtrl |= 4u;
  BpbCurrentSpecCtrl |= 4u;
LABEL_14:
  if ( (v26 & 0x42) == 0x42 && ((v26 & 0x10000) != 0 || (*(_DWORD *)(a1 + 2512) & 0x40000000) != 0) )
  {
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( v8 )
    {
      if ( (PEPROCESS)a1 != PsInitialSystemProcess )
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
    }
  }
  if ( (v26 & 0x800000) != 0 && (*(_DWORD *)(a1 + 2516) & 0x2000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 4u;
  if ( !TrappedSecurityDomain || TrappedSecurityDomain == v14 || TrappedSecurityDomain == *(_QWORD *)(a1 + 2536) )
    goto LABEL_19;
  if ( (BpbCurrentSpecCtrl & 1) == 0 )
  {
    if ( (v26 & 0x200000) != 0 || (v26 & 0x10) != 0 || v8 && (CurrentPrcb->BpbRetpolineState & 2) == 0 )
LABEL_53:
      CurrentPrcb->BpbState |= 4u;
LABEL_19:
    if ( !v6 )
      goto LABEL_20;
    goto LABEL_81;
  }
  if ( (v26 & 2) != 0 )
  {
    if ( (CurrentPrcb->PairRegister & 4) == 0 )
    {
      if ( !v8 || (CurrentPrcb->BpbRetpolineState & 1) != 0 )
      {
        if ( (v26 & 0x40) != 0 )
          BpbCurrentSpecCtrl = BpbCurrentSpecCtrl & 4 | 2;
      }
      else
      {
        BpbCurrentSpecCtrl &= 4u;
      }
    }
  }
  else
  {
    BpbCurrentSpecCtrl &= 4u;
  }
  if ( (BpbCurrentSpecCtrl & 1) != 0 )
    goto LABEL_53;
  v7 = 1;
LABEL_81:
  __writemsr(0x49u, 1uLL);
  CurrentPrcb->BpbState &= ~4u;
  CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
  CurrentPrcb->TrappedSecurityDomain = 0LL;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbCurrentSpecCtrl;
LABEL_20:
  LOWORD(PairPrcb) = CurrentPrcb->PairRegister;
  BpbRetpolineExitSpecCtrl = BpbCurrentSpecCtrl;
  if ( ((unsigned __int8)PairPrcb & 4) != 0 )
  {
    PairPrcb = CurrentPrcb->PairPrcb;
    if ( TrappedSecurityDomain == v14 )
    {
      LOWORD(PairPrcb) = PairPrcb->PairRegister;
      BpbUserSpecCtrl = CurrentPrcb->BpbUserSpecCtrl;
      if ( ((unsigned __int8)PairPrcb & 1) != 0 )
      {
        CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl & 0xFD;
        if ( v8 )
          CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
      }
      else
      {
        CurrentPrcb->BpbUserSpecCtrl = BpbUserSpecCtrl | 2;
        if ( v8 )
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
    }
    else
    {
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
    if ( !v14 )
    {
      updated = KiUpdateStibpPairing(a1, BpbCurrentSpecCtrl, 0LL, CurrentPrcb);
      v18 = BpbCurrentSpecCtrl & 0xFC;
      BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
      LOBYTE(BpbRetpolineExitSpecCtrl) = BpbRetpolineExitSpecCtrl & 3;
      v10 = updated;
      CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl | CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl & 0xFC;
      if ( v8 && (CurrentPrcb->BpbRetpolineState & 1) != 0 )
      {
        LOBYTE(BpbRetpolineExitSpecCtrl) = -(char)BpbRetpolineExitSpecCtrl;
        v19 = (_BYTE)BpbRetpolineExitSpecCtrl != 0;
      }
      else
      {
        v19 = (CurrentPrcb->BpbKernelSpecCtrl & 3) != 0;
      }
      v7 = 1;
      LOBYTE(PairPrcb) = v19 ? 2 : 0;
      BpbCurrentSpecCtrl = (unsigned __int8)PairPrcb | v18;
      if ( v28 )
        goto LABEL_29;
      goto LABEL_98;
    }
    if ( v29 )
    {
      _m_prefetchw((char *)&CurrentPrcb->2 + 14);
      PairRegister = CurrentPrcb->PairRegister;
      do
      {
        v21 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister | 0x100, PairRegister);
      }
      while ( v21 != PairRegister );
      v14 = PairRegister & 1;
      if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      {
        v22 = CurrentPrcb->BpbRetpolineExitSpecCtrl;
        if ( (v22 & 3) == 0 )
          CurrentPrcb->BpbRetpolineExitSpecCtrl = v22 | 2;
        BpbTrappedRetpolineExitSpecCtrl = CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl;
        if ( (BpbTrappedRetpolineExitSpecCtrl & 3) == 0 )
          CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbTrappedRetpolineExitSpecCtrl | 2;
        LOBYTE(PairPrcb) = BpbCurrentSpecCtrl | 2;
        v24 = CurrentPrcb->BpbRetpolineState & ((BpbCurrentSpecCtrl & 3) == 0);
        BpbCurrentSpecCtrl |= 2u;
        if ( !v24 )
          BpbCurrentSpecCtrl = BpbRetpolineExitSpecCtrl;
      }
      else
      {
        LOBYTE(PairPrcb) = CurrentPrcb->BpbKernelSpecCtrl;
        if ( ((unsigned __int8)PairPrcb & 3) == 0 )
        {
          LOBYTE(PairPrcb) = (unsigned __int8)PairPrcb | 2;
          CurrentPrcb->BpbKernelSpecCtrl = (unsigned __int8)PairPrcb;
        }
        if ( (BpbCurrentSpecCtrl & 3) == 0 )
          BpbCurrentSpecCtrl |= 2u;
      }
      v10 = v14;
LABEL_98:
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
  }
LABEL_29:
  if ( BpbCurrentSpecCtrl != CurrentPrcb->BpbCurrentSpecCtrl )
  {
    LOBYTE(PairPrcb) = BpbCurrentSpecCtrl;
    CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl;
    BpbRetpolineExitSpecCtrl = 0LL;
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  }
  if ( v7 )
    CurrentPrcb->BpbRetpolineState |= 2u;
  _mm_lfence();
  _enable();
  if ( v10 )
    LOBYTE(PairPrcb) = KiSynchronizeStibpPairing(CurrentPrcb, BpbRetpolineExitSpecCtrl, v14, v11);
  return (char)PairPrcb;
}
