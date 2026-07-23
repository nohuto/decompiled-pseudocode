/*
 * XREFs of KiExceptionDispatch @ 0x140409080
 * Callers:
 *     KiDivideErrorFault @ 0x140401B00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x140401F00 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140402800 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140402B40 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404033C0 (KiInvalidOpcodeFault.c)
 *     KiSegmentNotPresentFault @ 0x1404044C0 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x140404880 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140404BC0 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140405540 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140405900 (KiAlignmentFault.c)
 *     KiXmmException @ 0x140406740 (KiXmmException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiRaiseAssertion @ 0x140407840 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140407B80 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140408100 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140A12E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiExceptionDispatchOnExceptionStack @ 0x1403F7F10 (KiExceptionDispatchOnExceptionStack.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiUmsExceptionEntry @ 0x140409D80 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

__int64 __fastcall KiExceptionDispatch(int a1, unsigned int a2, void *a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int128 v14; // xmm6
  __int128 v15; // xmm7
  __int128 v16; // xmm8
  __int128 v17; // xmm9
  __int128 v18; // xmm10
  __int128 v19; // xmm11
  __int128 v20; // xmm12
  __int128 v21; // xmm13
  __int128 v22; // xmm14
  __int128 v23; // xmm15
  __int64 v24; // r8
  unsigned __int64 CurrentIrql; // r10
  char *v26; // r10
  char *IsrStack; // r10
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  _BYTE v39[32]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-1B8h]
  int v41; // [rsp+28h] [rbp-1B0h]
  __int128 v42; // [rsp+30h] [rbp-1A8h]
  __int128 v43; // [rsp+40h] [rbp-198h]
  __int128 v44; // [rsp+50h] [rbp-188h]
  __int128 v45; // [rsp+60h] [rbp-178h]
  __int128 v46; // [rsp+70h] [rbp-168h]
  __int128 v47; // [rsp+80h] [rbp-158h]
  __int128 v48; // [rsp+90h] [rbp-148h]
  __int128 v49; // [rsp+A0h] [rbp-138h]
  __int128 v50; // [rsp+B0h] [rbp-128h]
  __int128 v51; // [rsp+C0h] [rbp-118h]
  int v52; // [rsp+D0h] [rbp-108h]
  int v53; // [rsp+D8h] [rbp-100h]
  int v54; // [rsp+E0h] [rbp-F8h]
  int v55; // [rsp+E8h] [rbp-F0h]
  int v56; // [rsp+F0h] [rbp-E8h]
  int v57; // [rsp+F8h] [rbp-E0h]
  __int64 v58; // [rsp+100h] [rbp-D8h]
  __int64 v59; // [rsp+108h] [rbp-D0h]
  __int64 v60; // [rsp+110h] [rbp-C8h]
  __int64 v61; // [rsp+118h] [rbp-C0h]
  __int64 v62; // [rsp+120h] [rbp-B8h]
  __int64 v63; // [rsp+128h] [rbp-B0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+138h] [rbp-A0h] BYREF

  v42 = v14;
  v43 = v15;
  v44 = v16;
  v45 = v17;
  v46 = v18;
  v47 = v19;
  v48 = v20;
  v49 = v21;
  v50 = v22;
  v51 = v23;
  v58 = v5;
  v59 = v7;
  v60 = v8;
  v61 = v11;
  v62 = v12;
  v63 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      (_DWORD)a3,
      a4,
      v40,
      v41,
      v42,
      DWORD2(v42),
      v43,
      DWORD2(v43),
      v44,
      DWORD2(v44),
      v45,
      DWORD2(v45),
      v46,
      DWORD2(v46),
      v47,
      DWORD2(v47),
      v48,
      DWORD2(v48),
      v49,
      DWORD2(v49),
      v50,
      DWORD2(v50),
      v51,
      DWORD2(v51),
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  ExceptionRecord.ExceptionCode = a1;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = a3;
  ExceptionRecord.NumberParameters = a2;
  ExceptionRecord.ExceptionInformation[0] = a4;
  ExceptionRecord.ExceptionInformation[1] = v9;
  ExceptionRecord.ExceptionInformation[2] = v10;
  LOBYTE(a4) = *(_BYTE *)(v6 + 240) & 1;
  LOBYTE(v40) = 1;
  v24 = v6 - 128;
  if ( (_BYTE)a4 )
    goto LABEL_14;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_DWORD *)(v6 + 248) & 0x200) == 0 )
    CurrentIrql = 2LL;
  if ( CurrentIrql < 2
    || KeGetPcr()->Prcb.ExceptionStackActive
    || (v26 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80, v39 <= v26) && v39 >= v26 - 24576
    || (IsrStack = (char *)KeGetPcr()->Prcb.IsrStack, v39 <= IsrStack) && v39 >= IsrStack - 24576 )
  {
LABEL_14:
    KiDispatchException(&ExceptionRecord, (unsigned __int64)v39, v24, a4, v40);
  }
  else
  {
    KiExceptionDispatchOnExceptionStack((int)&ExceptionRecord, (int)v39, v24, a4, v40, v41, v42, *((__int64 *)&v42 + 1));
  }
  _disable();
  if ( (*(_BYTE *)(v6 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v6 - 84));
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
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v28, v29, v30, v40);
  v32 = KeGetCurrentThread();
  if ( (v32->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v32->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v32 = KeGetCurrentThread();
    }
    if ( (v32->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v32) = 1;
      KiUmsExit(v32);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v32);
  v33 = *(_QWORD *)(v6 - 48);
  v34 = *(_QWORD *)(v6 - 56);
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v34, v33, a5);
}
