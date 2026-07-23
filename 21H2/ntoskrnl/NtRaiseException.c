/*
 * XREFs of NtRaiseException @ 0x1403FEC40
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1403FEC40 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 *     KiRaiseException @ 0x1405220D0 (KiRaiseException.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __cdecl NtRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, BOOLEAN FirstChance)
{
  __int64 v3; // rbp
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v10; // cf
  _QWORD v13[87]; // [rsp-298h] [rbp-3D0h] BYREF
  char v15; // [rsp+160h] [rbp+28h]

  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 232);
  result = KiRaiseException(
             (_DWORD)ExceptionRecord,
             (_DWORD)ContextRecord,
             (unsigned int)v13,
             (int)v3 - 128,
             FirstChance);
  if ( !result )
  {
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v3 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v3 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v3 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v3 - 84));
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
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
    v6 = KeGetCurrentThread();
    if ( (v6->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v6->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v6 = KeGetCurrentThread();
      }
      if ( (v6->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v6);
      }
    }
    _mm_setcsr(*(_DWORD *)(v3 - 84));
    if ( *(_WORD *)(v3 + 128) )
      KiRestoreDebugRegisterState();
    v7 = *(_QWORD *)(v3 - 48);
    v8 = *(_QWORD *)(v3 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v10 )
      __writemsr(0x49u, 1uLL);
    v10 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v10 )
    {
      v13[21] = 0x1403FEE84LL;
      v13[52] = 0x1403FEF9BLL;
      v13[51] = 0x1403FEF92LL;
      v13[50] = 0x1403FEF89LL;
      v13[49] = 0x1403FEF80LL;
      v13[48] = 0x1403FEF77LL;
      v13[47] = 0x1403FEF6ELL;
      v13[46] = 0x1403FEF65LL;
      v13[45] = 0x1403FEF5CLL;
      v13[44] = 0x1403FEF53LL;
      v13[43] = 0x1403FEF4ALL;
      v13[42] = 0x1403FEF41LL;
      v13[41] = 0x1403FEF38LL;
      v13[40] = 0x1403FEF2FLL;
      v13[39] = 0x1403FEF26LL;
      v13[38] = 0x1403FEF1DLL;
      v13[37] = 0x1403FEF14LL;
      v13[36] = 0x1403FEF0BLL;
      v13[35] = 0x1403FEF02LL;
      v13[34] = 0x1403FEEF9LL;
      v13[33] = 0x1403FEEF0LL;
      v13[32] = 0x1403FEEE7LL;
      v13[31] = 0x1403FEEDELL;
      v13[30] = 0x1403FEED5LL;
      v13[29] = 0x1403FEECCLL;
      v13[28] = 0x1403FEEC3LL;
      v13[27] = 0x1403FEEBALL;
      v13[26] = 0x1403FEEB1LL;
      v13[25] = 0x1403FEEA8LL;
      v13[24] = 0x1403FEE9FLL;
      v13[23] = 0x1403FEE96LL;
      v13[22] = 0x1403FEE8DLL;
    }
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
    return KiKernelExit(*(_QWORD *)(v3 - 72), *(_QWORD *)(v3 - 64), v8, v7, v15);
  }
  return result;
}
