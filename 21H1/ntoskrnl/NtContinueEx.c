/*
 * XREFs of NtContinueEx @ 0x1403F6580
 * Callers:
 *     NtContinue @ 0x1403F6570 (NtContinue.c)
 *     RtlContinue @ 0x140589E68 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x140589E80 (RtlContinueLongJump.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiContinueEx @ 0x14032EFA0 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

__int64 __fastcall NtContinueEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  _QWORD v17[39]; // [rsp+0h] [rbp-138h] BYREF

  v6 = *(_QWORD *)(v5 + 192);
  v7 = *(_QWORD *)(v5 + 200);
  v8 = *(_QWORD *)(v5 + 208);
  *(_QWORD *)(v5 - 80) = 0LL;
  v17[32] = v6;
  v17[33] = v7;
  v17[34] = v8;
  result = KiContinueEx(a1, a2, (unsigned __int64)v17, (_KTRAP_FRAME *)(v5 - 128));
  if ( (int)result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v5 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v5 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v5 - 84));
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
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState();
    v11 = KeGetCurrentThread();
    if ( (v11->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v11->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v11 = KeGetCurrentThread();
      }
      if ( (v11->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v11) = 1;
        KiUmsExit(v11);
      }
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      KiRestoreDebugRegisterState();
    v12 = *(_QWORD *)(v5 - 48);
    v13 = *(_QWORD *)(v5 - 56);
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
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v13, v12, a5);
  }
  return result;
}
