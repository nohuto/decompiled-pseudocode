/*
 * XREFs of KxStartUserThread @ 0x1404073D0
 * Callers:
 *     KyStartUserThread @ 0x1404070F0 (KyStartUserThread.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KxStartUserThread @ 0x1404073D0 (KxStartUserThread.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KxStartUserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  signed __int16 *v17; // kr00_8
  void (__fastcall *v19)(); // [rsp-288h] [rbp-3C0h]
  char v20; // [rsp-278h] [rbp-3B0h]

  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  __writecr8(1uLL);
  v19();
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
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
    ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v6, v7, v8, v20);
  v10 = KeGetCurrentThread();
  if ( (v10->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v10->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v10 = KeGetCurrentThread();
    }
    if ( (v10->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v10) = 1;
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v10);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v11 = *(_QWORD *)(v5 - 48);
  v12 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 2144LL), 2u) )
    __writemsr(0x49u, 1uLL);
  v17 = MK_FP(__GS__, 2144LL);
  *v17 &= ~0x20u;
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v12, v11, a5);
}
