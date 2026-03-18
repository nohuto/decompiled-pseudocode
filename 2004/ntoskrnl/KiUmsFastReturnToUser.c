/*
 * XREFs of KiUmsFastReturnToUser @ 0x1404096C0
 * Callers:
 *     KiUmsTrapEntry @ 0x1404099C0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140409BC0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140409D80 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

__int64 __fastcall KiUmsFastReturnToUser(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        __int64 a40,
        __int64 a41,
        __int64 a42,
        __int64 a43,
        __int64 a44,
        __int64 a45,
        __int64 a46,
        __int64 a47,
        __int64 a48,
        __int64 a49)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 p_Xmm1; // rbp
  __int64 v51; // rax
  ULONG v52; // ecx
  ULONG_PTR CombinedApcDisable; // r9
  ULONG_PTR CurrentIrql; // r8
  struct _KTHREAD *v55; // rcx
  struct _KTHREAD *v56; // rcx
  void *InstrumentationCallback; // rax
  unsigned __int8 BpbUserSpecCtrl; // al
  char v62; // [rsp+20h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  p_Xmm1 = (__int64)&CurrentThread->TrapFrame->Xmm1;
  v51 = CurrentThread->WaitBlock[3].SpareLong | (unsigned int)(unsigned __int8)(CurrentThread->ApcStateIndex | KeGetCurrentIrql());
  if ( (_DWORD)v51 )
  {
    v52 = 74;
    CombinedApcDisable = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( !(_DWORD)CurrentIrql )
    {
      v52 = 1;
      CurrentIrql = CurrentThread->ApcStateIndex;
      CombinedApcDisable = CurrentThread->CombinedApcDisable;
    }
    KiBugCheckDispatch(v52, CurrentThread->TrapFrame->Rip, CurrentIrql, CombinedApcDisable);
  }
  _disable();
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v51;
    *(_QWORD *)(p_Xmm1 - 72) = 0LL;
    *(_QWORD *)(p_Xmm1 - 64) = 0LL;
    *(_QWORD *)(p_Xmm1 - 56) = 0LL;
    *(_QWORD *)(p_Xmm1 - 48) = 0LL;
    *(_QWORD *)(p_Xmm1 - 40) = 0LL;
    *(_QWORD *)(p_Xmm1 - 32) = 0LL;
    *(_OWORD *)(p_Xmm1 - 16) = 0LL;
    *(_OWORD *)p_Xmm1 = 0LL;
    *(_OWORD *)(p_Xmm1 + 16) = 0LL;
    *(_OWORD *)(p_Xmm1 + 32) = 0LL;
    *(_OWORD *)(p_Xmm1 + 48) = 0LL;
    *(_OWORD *)(p_Xmm1 + 64) = 0LL;
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
    v51 = *(_QWORD *)(p_Xmm1 - 80);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v51;
    KiUpdateStibpPairing(0LL);
    v51 = *(_QWORD *)(p_Xmm1 - 80);
  }
  v55 = KeGetCurrentThread();
  if ( (v55->Header.LockNV & 0x8000000) != 0 )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v51;
    *(_QWORD *)(p_Xmm1 - 72) = 0LL;
    *(_QWORD *)(p_Xmm1 - 64) = 0LL;
    *(_QWORD *)(p_Xmm1 - 56) = 0LL;
    *(_QWORD *)(p_Xmm1 - 48) = 0LL;
    *(_QWORD *)(p_Xmm1 - 40) = 0LL;
    *(_QWORD *)(p_Xmm1 - 32) = 0LL;
    *(_OWORD *)(p_Xmm1 - 16) = 0LL;
    *(_OWORD *)p_Xmm1 = 0LL;
    *(_OWORD *)(p_Xmm1 + 16) = 0LL;
    *(_OWORD *)(p_Xmm1 + 32) = 0LL;
    *(_OWORD *)(p_Xmm1 + 48) = 0LL;
    *(_OWORD *)(p_Xmm1 + 64) = 0LL;
    v51 = KiRestoreSetContextState((__int64)v55, a2, a3, a4, v62);
  }
  v56 = KeGetCurrentThread();
  if ( (v56->Header.LockNV & 0x40010000) != 0 )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v51;
    if ( (v56->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v56 = KeGetCurrentThread();
    }
    if ( (v56->Header.Reserved1 & 0x40) != 0 )
      KiUmsExit(0LL);
    v51 = *(_QWORD *)(p_Xmm1 - 80);
  }
  _mm_setcsr(*(_DWORD *)(p_Xmm1 - 84));
  if ( *(_WORD *)(p_Xmm1 + 128) )
  {
    *(_QWORD *)(p_Xmm1 - 80) = v51;
    KiRestoreDebugRegisterState(v56);
    InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback && *(_WORD *)(p_Xmm1 + 240) == 51 )
      *(_QWORD *)(p_Xmm1 + 232) = InstrumentationCallback;
    v51 = *(_QWORD *)(p_Xmm1 - 80);
  }
  *(_QWORD *)(p_Xmm1 - 80) = v51;
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
      sysret
    }
  }
  return KiKernelSysretExit(
           *(_QWORD *)(p_Xmm1 + 232),
           0LL,
           *(_QWORD *)(p_Xmm1 + 256),
           *(_QWORD *)(p_Xmm1 + 216),
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49);
}
