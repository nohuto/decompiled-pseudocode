/*
 * XREFs of NtRaiseException @ 0x1403FEA60
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     NtRaiseException @ 0x1403FEA60 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403520 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 *     KiRaiseException @ 0x140521E90 (KiRaiseException.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall NtRaiseException(int a1, int a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  *(_QWORD *)(v5 + 80) = *(_QWORD *)(v5 + 232);
  result = KiRaiseException(a1, a2, (unsigned int)v15, (int)v5 - 128, a3);
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
    if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
      ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      ((void (*)(void))KiRestoreSetContextState)();
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
        ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    if ( *(_WORD *)(v5 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v5 - 48);
    v10 = *(_QWORD *)(v5 - 56);
    __writegsbyte(0x856u, 0);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsword(0x864u, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
    if ( v12 )
      __writemsr(0x49u, 1uLL);
    v12 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
    if ( v12 )
    {
      v15[21] = 0x1403FECA4LL;
      v15[52] = 0x1403FEDBBLL;
      v15[51] = 0x1403FEDB2LL;
      v15[50] = 0x1403FEDA9LL;
      v15[49] = 0x1403FEDA0LL;
      v15[48] = 0x1403FED97LL;
      v15[47] = 0x1403FED8ELL;
      v15[46] = 0x1403FED85LL;
      v15[45] = 0x1403FED7CLL;
      v15[44] = 0x1403FED73LL;
      v15[43] = 0x1403FED6ALL;
      v15[42] = 0x1403FED61LL;
      v15[41] = 0x1403FED58LL;
      v15[40] = 0x1403FED4FLL;
      v15[39] = 0x1403FED46LL;
      v15[38] = 0x1403FED3DLL;
      v15[37] = 0x1403FED34LL;
      v15[36] = 0x1403FED2BLL;
      v15[35] = 0x1403FED22LL;
      v15[34] = 0x1403FED19LL;
      v15[33] = 0x1403FED10LL;
      v15[32] = 0x1403FED07LL;
      v15[31] = 0x1403FECFELL;
      v15[30] = 0x1403FECF5LL;
      v15[29] = 0x1403FECECLL;
      v15[28] = 0x1403FECE3LL;
      v15[27] = 0x1403FECDALL;
      v15[26] = 0x1403FECD1LL;
      v15[25] = 0x1403FECC8LL;
      v15[24] = 0x1403FECBFLL;
      v15[23] = 0x1403FECB6LL;
      v15[22] = 0x1403FECADLL;
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
    return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v10, v9, a5);
  }
  return result;
}
