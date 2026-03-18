/*
 * XREFs of KiFastFailDispatch @ 0x1404080C0
 * Callers:
 *     KiBoundFault @ 0x140401B80 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x140405D00 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140406200 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DDF20 (KiUpdateStibpPairing.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KiRestoreDebugRegisterState @ 0x1403F6310 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1403FA370 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140407D00 (KiBugCheckDispatch.c)
 *     KiUmsExceptionEntry @ 0x140408A80 (KiUmsExceptionEntry.c)
 *     KiUmsExit @ 0x140408B40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 */

__int64 __fastcall KiFastFailDispatch(NTSTATUS a1, int a2, __int64 a3, ULONG_PTR a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r11
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
  unsigned __int8 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  _DWORD *v27; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v36; // [rsp+0h] [rbp-1D8h] BYREF
  int v37; // [rsp+20h] [rbp-1B8h]
  int v38; // [rsp+28h] [rbp-1B0h]
  __int128 v39; // [rsp+30h] [rbp-1A8h]
  __int128 v40; // [rsp+40h] [rbp-198h]
  __int128 v41; // [rsp+50h] [rbp-188h]
  __int128 v42; // [rsp+60h] [rbp-178h]
  __int128 v43; // [rsp+70h] [rbp-168h]
  __int128 v44; // [rsp+80h] [rbp-158h]
  __int128 v45; // [rsp+90h] [rbp-148h]
  __int128 v46; // [rsp+A0h] [rbp-138h]
  __int128 v47; // [rsp+B0h] [rbp-128h]
  __int128 v48; // [rsp+C0h] [rbp-118h]
  int v49; // [rsp+D0h] [rbp-108h]
  int v50; // [rsp+D8h] [rbp-100h]
  int v51; // [rsp+E0h] [rbp-F8h]
  int v52; // [rsp+E8h] [rbp-F0h]
  int v53; // [rsp+F0h] [rbp-E8h]
  int v54; // [rsp+F8h] [rbp-E0h]
  __int64 v55; // [rsp+100h] [rbp-D8h]
  __int64 v56; // [rsp+108h] [rbp-D0h]
  __int64 v57; // [rsp+110h] [rbp-C8h]
  __int64 v58; // [rsp+118h] [rbp-C0h]
  __int64 v59; // [rsp+120h] [rbp-B8h]
  __int64 v60; // [rsp+128h] [rbp-B0h]
  NTSTATUS v61[2]; // [rsp+138h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+140h] [rbp-98h]
  __int64 v63; // [rsp+148h] [rbp-90h]
  int v64; // [rsp+150h] [rbp-88h]
  ULONG_PTR v65; // [rsp+158h] [rbp-80h]
  __int64 v66; // [rsp+160h] [rbp-78h]
  __int64 v67; // [rsp+168h] [rbp-70h]

  v39 = v14;
  v40 = v15;
  v41 = v16;
  v42 = v17;
  v43 = v18;
  v44 = v19;
  v45 = v20;
  v46 = v21;
  v47 = v22;
  v48 = v23;
  v55 = v5;
  v56 = v7;
  v57 = v8;
  v58 = v11;
  v59 = v12;
  v60 = v13;
  if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 8u) && (*(_BYTE *)(v6 + 240) & 1) != 0 )
    KiUmsExceptionEntry(
      a1,
      a2,
      a3,
      a4,
      v37,
      v38,
      v39,
      DWORD2(v39),
      v40,
      DWORD2(v40),
      v41,
      DWORD2(v41),
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
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  v61[0] = a1;
  v61[1] = 1;
  v62 = 0LL;
  v63 = a3;
  v64 = a2;
  v65 = a4;
  v66 = v9;
  v67 = v10;
  v24 = *(_BYTE *)(v6 + 240) & 1;
  if ( !v24 )
    KiBugCheckDispatch(0x139u, v65, v6 - 128, (ULONG_PTR)v61);
  KiDispatchException(v61, (unsigned __int64)&v36, v6 - 128, v24, 0);
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
    KiInitiateUserApc(1LL, v25, v26, v27);
    _disable();
    __writecr8(0LL);
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
    KiRestoreSetContextState((__int64)CurrentThread, v25, v26, (__int64)v27, v37);
  v29 = KeGetCurrentThread();
  if ( (v29->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v29->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v29 = KeGetCurrentThread();
    }
    if ( (v29->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v29) = 1;
      KiUmsExit(v29);
    }
  }
  _mm_setcsr(*(_DWORD *)(v6 - 84));
  if ( *(_WORD *)(v6 + 128) )
    KiRestoreDebugRegisterState(v29);
  v30 = *(_QWORD *)(v6 - 48);
  v31 = *(_QWORD *)(v6 - 56);
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
  return KiKernelExit(*(_QWORD *)(v6 - 72), *(_QWORD *)(v6 - 64), v31, v30, a5);
}
