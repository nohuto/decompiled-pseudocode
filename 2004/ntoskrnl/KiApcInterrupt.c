/*
 * XREFs of KiApcInterrupt @ 0x1403FB140
 * Callers:
 *     KiApcInterruptShadow @ 0x140A11C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

__int64 __fastcall KiApcInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  __int128 v13; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v15; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  bool v17; // zf
  unsigned __int8 CurrentIrql; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  struct _KTHREAD *v23; // rcx
  int v24; // r9d
  int v25; // r8d
  unsigned __int8 BpbUserSpecCtrl; // al
  _BYTE v30[360]; // [rsp+0h] [rbp-80h] BYREF
  char v31; // [rsp+170h] [rbp+F0h]

  v30[43] = 0;
  *(_QWORD *)&v30[48] = v5;
  *(_QWORD *)&v30[56] = a1;
  *(_QWORD *)&v30[64] = a2;
  *(_QWORD *)&v30[72] = a3;
  *(_QWORD *)&v30[80] = a4;
  *(_QWORD *)&v30[88] = v6;
  *(_QWORD *)&v30[96] = v7;
  if ( (v31 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x270u, v15);
    __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOBYTE(v15) = KeGetPcr()->Prcb.BpbState;
    __writegsbyte(0x852u, v15);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbKernelSpecCtrl);
      v15 = 72LL;
      HIDWORD(a2) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
    if ( (a2 & 8) != 0 )
    {
      a2 = 0LL;
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
    }
    else
    {
      if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
      {
        *(_QWORD *)&v30[240] = 0x1403FB382LL;
        *(_QWORD *)&v30[232] = 0x1403FB379LL;
        *(_QWORD *)&v30[224] = 0x1403FB370LL;
        *(_QWORD *)&v30[216] = 0x1403FB367LL;
        *(_QWORD *)&v30[208] = 0x1403FB35ELL;
        *(_QWORD *)&v30[200] = 0x1403FB355LL;
        *(_QWORD *)&v30[192] = 0x1403FB34CLL;
        *(_QWORD *)&v30[184] = 0x1403FB343LL;
        *(_QWORD *)&v30[176] = 0x1403FB33ALL;
        *(_QWORD *)&v30[168] = 0x1403FB331LL;
        *(_QWORD *)&v30[160] = 0x1403FB328LL;
        *(_QWORD *)&v30[152] = 0x1403FB31FLL;
        *(_QWORD *)&v30[144] = 0x1403FB316LL;
        *(_QWORD *)&v30[136] = 0x1403FB30DLL;
        *(_QWORD *)&v30[128] = 0x1403FB304LL;
        *(_QWORD *)&v30[120] = 0x1403FB2FBLL;
        *(_QWORD *)&v30[112] = 0x1403FB2F2LL;
        *(_QWORD *)&v30[104] = 0x1403FB2E9LL;
        *(_QWORD *)&v30[96] = 0x1403FB2E0LL;
        *(_QWORD *)&v30[88] = 0x1403FB2D7LL;
        *(_QWORD *)&v30[80] = 0x1403FB2CELL;
        *(_QWORD *)&v30[72] = 0x1403FB2C5LL;
        *(_QWORD *)&v30[64] = 0x1403FB2BCLL;
        *(_QWORD *)&v30[56] = 0x1403FB2B3LL;
        *(_QWORD *)&v30[48] = 0x1403FB2AALL;
        *(_QWORD *)&v30[40] = 0x1403FB2A1LL;
        *(_QWORD *)&v30[32] = 0x1403FB298LL;
        *(_QWORD *)&v30[24] = 0x1403FB28FLL;
        *(_QWORD *)&v30[16] = 0x1403FB286LL;
        *(_QWORD *)&v30[8] = 0x1403FB27DLL;
        *(_QWORD *)v30 = 0x1403FB274LL;
      }
      _mm_lfence();
    }
    __writegsbyte(0x853u, 0);
    v17 = (CurrentThread->Header.Reserved1 & 3) == 0;
    *(_WORD *)&v30[256] = 0;
    if ( !v17 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15, a2);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  *(_DWORD *)&v30[44] = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  *(_OWORD *)&v30[112] = v8;
  *(_OWORD *)&v30[128] = v9;
  *(_OWORD *)&v30[144] = v10;
  *(_OWORD *)&v30[160] = v11;
  *(_OWORD *)&v30[176] = v12;
  *(_OWORD *)&v30[192] = v13;
  __incgsdword(0x8000u);
  if ( (_BYTE)KeSmapEnabled && (v31 & 1) != 0 )
    __asm { stac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(1LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v30[41] = CurrentIrql;
  HalPerformEndOfInterrupt(0LL);
  _enable();
  if ( !KeGetPcr()->Prcb.IdleHalt )
    KiDeliverApc(0, 0LL, (_KTRAP_FRAME *)v30);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v30[41]);
  else
    __writecr8(v30[41]);
  _disable();
  if ( (v31 & 1) == 0 )
  {
    _mm_setcsr(*(unsigned int *)&v30[44]);
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  v22 = KeGetCurrentThread();
  if ( (v22->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)v22, v19, v20, v21, v30[32]);
  v23 = KeGetCurrentThread();
  if ( (v23->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v23->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v23 = KeGetCurrentThread();
    }
    if ( (v23->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v23) = 1;
      KiUmsExit(v23);
    }
  }
  _mm_setcsr(*(unsigned int *)&v30[44]);
  if ( *(_WORD *)&v30[256] )
    KiRestoreDebugRegisterState();
  v24 = *(_DWORD *)&v30[80];
  v25 = *(_DWORD *)&v30[72];
  __writegsbyte(0x853u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_DWORD *)&v30[56], *(_DWORD *)&v30[64], v25, v24, a5);
}
