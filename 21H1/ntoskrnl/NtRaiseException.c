/*
 * XREFs of NtRaiseException @ 0x1403F6840
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 *     KiRaiseException @ 0x14051C390 (KiRaiseException.c)
 */

__int64 __fastcall NtRaiseException(int a1, int a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v14; // [rsp+0h] [rbp-138h] BYREF

  *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 232);
  result = KiRaiseException(a1, a2, (unsigned int)&v14, (int)v5 - 128, a3);
  if ( !(_DWORD)result )
  {
    if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
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
    v8 = KeGetCurrentThread();
    if ( (v8->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v8->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v8 = KeGetCurrentThread();
      }
      if ( (v8->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v8) = 1;
        KiUmsExit(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v5 - 48);
    v10 = *(_QWORD *)(v5 - 56);
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
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v10, v9, a5);
  }
  return result;
}
