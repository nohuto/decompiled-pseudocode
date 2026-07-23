/*
 * XREFs of NtContinueEx @ 0x1403FE810
 * Callers:
 *     NtContinue @ 0x1403FE800 (NtContinue.c)
 *     RtlContinue @ 0x14058FBC8 (RtlContinue.c)
 *     RtlContinueLongJump @ 0x14058FBE0 (RtlContinueLongJump.c)
 * Callees:
 *     KiContinueEx @ 0x140264660 (KiContinueEx.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE5A0 (KiRestoreDebugRegisterState.c)
 *     NtContinueEx @ 0x1403FE810 (NtContinueEx.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140403700 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x140413B00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __cdecl NtContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v12; // cf
  _QWORD v15[32]; // [rsp-298h] [rbp-3D0h] BYREF
  __int64 v16; // [rsp-198h] [rbp-2D0h]
  __int64 v17; // [rsp-190h] [rbp-2C8h]
  __int64 v18; // [rsp-188h] [rbp-2C0h]
  __int64 v19; // [rsp-180h] [rbp-2B8h]
  __int64 v20; // [rsp-178h] [rbp-2B0h]
  __int64 v21; // [rsp-170h] [rbp-2A8h]
  __int64 v22; // [rsp-168h] [rbp-2A0h]
  __int64 v23; // [rsp-160h] [rbp-298h]
  __int64 v24; // [rsp-158h] [rbp-290h]
  __int64 v25; // [rsp-150h] [rbp-288h]
  __int64 v26; // [rsp-148h] [rbp-280h]
  __int64 v27; // [rsp-140h] [rbp-278h]
  __int64 v28; // [rsp-138h] [rbp-270h]
  __int64 v29; // [rsp-130h] [rbp-268h]
  __int64 v30; // [rsp-128h] [rbp-260h]
  __int64 v31; // [rsp-120h] [rbp-258h]
  __int64 v32; // [rsp-118h] [rbp-250h]
  __int64 v33; // [rsp-110h] [rbp-248h]
  __int64 v34; // [rsp-108h] [rbp-240h]
  __int64 v35; // [rsp-100h] [rbp-238h]
  __int64 v36; // [rsp-F8h] [rbp-230h]
  char v38; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  result = KiContinueEx((unsigned __int64)ContextRecord, (unsigned __int64)ContinueArgument, (__int64)v15, v2 - 128);
  if ( result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v2 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v2 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v2 - 84));
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
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v2 - 48);
    v10 = *(_QWORD *)(v2 - 56);
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
      v15[21] = 0x1403FEA5FLL;
      v36 = 0x1403FEB76LL;
      v35 = 0x1403FEB6DLL;
      v34 = 0x1403FEB64LL;
      v33 = 0x1403FEB5BLL;
      v32 = 0x1403FEB52LL;
      v31 = 0x1403FEB49LL;
      v30 = 0x1403FEB40LL;
      v29 = 0x1403FEB37LL;
      v28 = 0x1403FEB2ELL;
      v27 = 0x1403FEB25LL;
      v26 = 0x1403FEB1CLL;
      v25 = 0x1403FEB13LL;
      v24 = 0x1403FEB0ALL;
      v23 = 0x1403FEB01LL;
      v22 = 0x1403FEAF8LL;
      v21 = 0x1403FEAEFLL;
      v20 = 0x1403FEAE6LL;
      v19 = 0x1403FEADDLL;
      v18 = 0x1403FEAD4LL;
      v17 = 0x1403FEACBLL;
      v16 = 0x1403FEAC2LL;
      v15[31] = 0x1403FEAB9LL;
      v15[30] = 0x1403FEAB0LL;
      v15[29] = 0x1403FEAA7LL;
      v15[28] = 0x1403FEA9ELL;
      v15[27] = 0x1403FEA95LL;
      v15[26] = 0x1403FEA8CLL;
      v15[25] = 0x1403FEA83LL;
      v15[24] = 0x1403FEA7ALL;
      v15[23] = 0x1403FEA71LL;
      v15[22] = 0x1403FEA68LL;
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
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), v10, v9, v38);
  }
  return result;
}
