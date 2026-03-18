/*
 * XREFs of KxMcheckAlternateReturn @ 0x14040C940
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140A17A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 *     KiUmsTrapEntry @ 0x140410A40 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x140524BA0 (KiMcheckAlternateReturn.c)
 */

__int64 __fastcall KxMcheckAlternateReturn(__int64 a1, unsigned __int64 BpbState, __int64 a3, __int64 a4, char a5)
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
  ULONG64 v17; // rax
  bool v18; // zf
  struct _KTHREAD *v19; // r9
  struct _KTHREAD *v20; // rcx
  int v21; // r9d
  int v22; // r8d
  unsigned __int8 BpbUserSpecCtrl; // al
  unsigned __int8 v24; // cf
  __int64 v28; // [rsp+0h] [rbp-90h] BYREF
  __int64 v29; // [rsp+8h] [rbp-88h]
  __int64 v30; // [rsp+10h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-78h]
  __int64 v32; // [rsp+20h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-68h]
  __int64 v34; // [rsp+30h] [rbp-60h]
  __int64 v35; // [rsp+38h] [rbp-58h]
  __int64 v36; // [rsp+40h] [rbp-50h]
  __int64 v37; // [rsp+48h] [rbp-48h]
  __int64 v38; // [rsp+50h] [rbp-40h]
  __int64 v39; // [rsp+58h] [rbp-38h]
  __int64 v40; // [rsp+60h] [rbp-30h]
  __int64 v41; // [rsp+68h] [rbp-28h]
  __int64 v42; // [rsp+70h] [rbp-20h]
  __int64 v43; // [rsp+78h] [rbp-18h]
  __int128 v44; // [rsp+80h] [rbp-10h]
  __int128 v45; // [rsp+90h] [rbp+0h]
  __int128 v46; // [rsp+A0h] [rbp+10h]
  __int128 v47; // [rsp+B0h] [rbp+20h]
  __int128 v48; // [rsp+C0h] [rbp+30h]
  __int128 v49; // [rsp+D0h] [rbp+40h]
  __int64 v50; // [rsp+E0h] [rbp+50h]
  __int64 v51; // [rsp+E8h] [rbp+58h]
  __int64 v52; // [rsp+F0h] [rbp+60h]
  __int64 v53; // [rsp+F8h] [rbp+68h]
  __int64 v54; // [rsp+100h] [rbp+70h]
  __int16 v55; // [rsp+110h] [rbp+80h]
  char v56; // [rsp+180h] [rbp+F0h]

  BYTE3(v35) = 1;
  v36 = v5;
  v37 = a1;
  v38 = BpbState;
  v39 = a3;
  v40 = a4;
  v41 = v6;
  v42 = v7;
  if ( (v56 & 1) != 0 )
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
      HIDWORD(BpbState) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(BpbState) = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v15 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
      LODWORD(BpbState) = (unsigned __int8)BpbState;
    }
    if ( (BpbState & 2) != 0 )
    {
      v29 = 0x14040CA5FLL;
      v54 = 0x14040CB76LL;
      v53 = 0x14040CB6DLL;
      v52 = 0x14040CB64LL;
      v51 = 0x14040CB5BLL;
      v50 = 0x14040CB52LL;
      *((_QWORD *)&v49 + 1) = 0x14040CB49LL;
      *(_QWORD *)&v49 = 0x14040CB40LL;
      *((_QWORD *)&v48 + 1) = 0x14040CB37LL;
      *(_QWORD *)&v48 = 0x14040CB2ELL;
      *((_QWORD *)&v47 + 1) = 0x14040CB25LL;
      *(_QWORD *)&v47 = 0x14040CB1CLL;
      *((_QWORD *)&v46 + 1) = 0x14040CB13LL;
      *(_QWORD *)&v46 = 0x14040CB0ALL;
      *((_QWORD *)&v45 + 1) = 0x14040CB01LL;
      *(_QWORD *)&v45 = 0x14040CAF8LL;
      *((_QWORD *)&v44 + 1) = 0x14040CAEFLL;
      *(_QWORD *)&v44 = 0x14040CAE6LL;
      v43 = 0x14040CADDLL;
      v42 = 0x14040CAD4LL;
      v41 = 0x14040CACBLL;
      v40 = 0x14040CAC2LL;
      v39 = 0x14040CAB9LL;
      v38 = 0x14040CAB0LL;
      v37 = 0x14040CAA7LL;
      v36 = 0x14040CA9ELL;
      v35 = 0x14040CA95LL;
      v34 = 0x14040CA8CLL;
      v33 = 0x14040CA83LL;
      v32 = 0x14040CA7ALL;
      v31 = 0x14040CA71LL;
      v30 = 0x14040CA68LL;
    }
    _mm_lfence();
    __writegsbyte(0x853u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v15 = 3221225730LL;
      v17 = __readmsr(0xC0000102);
      BpbState = (unsigned __int64)HIDWORD(v17) << 32;
      if ( v17 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v17 )
      {
        BpbState = (unsigned __int64)CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        *(_QWORD *)(BpbState + 128) = v17;
      }
    }
    v18 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v55 = 0;
    if ( !v18 )
      *(double *)&v8 = KiSaveDebugRegisterState(v15);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
    {
      BpbState = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  HIDWORD(v35) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v44 = v8;
  v45 = v9;
  v46 = v10;
  v47 = v11;
  v48 = v12;
  v49 = v13;
  if ( (_BYTE)KeSmapEnabled && (v56 & 1) != 0 )
    __asm { stac }
  _enable();
  v19 = KeGetCurrentThread();
  if ( _bittest((const signed __int32 *)&v19->116, 8u) )
  {
    KiUmsTrapEntry();
    v19 = KeGetCurrentThread();
  }
  KiMcheckAlternateReturn(&v28, BpbState, a3, v19);
  _disable();
  if ( (v56 & 1) == 0 )
  {
    _mm_setcsr(HIDWORD(v35));
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
  v20 = KeGetCurrentThread();
  if ( (v20->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (v20->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v20 = KeGetCurrentThread();
    }
    if ( (v20->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(v20) = 1;
      KiUmsExit(v20);
    }
  }
  _mm_setcsr(HIDWORD(v35));
  if ( v55 )
    KiRestoreDebugRegisterState(v20);
  v21 = v40;
  v22 = v39;
  __writegsbyte(0x853u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v24 = _bittestandreset16(MK_FP(__GS__, 632LL), 2u);
  if ( v24 )
    __writemsr(0x49u, 1uLL);
  v24 = _bittestandreset16(MK_FP(__GS__, 632LL), 5u);
  if ( v24 )
  {
    v28 = 0x14040CD90LL;
    v53 = 0x14040CEA7LL;
    v52 = 0x14040CE9ELL;
    v51 = 0x14040CE95LL;
    v50 = 0x14040CE8CLL;
    *((_QWORD *)&v49 + 1) = 0x14040CE83LL;
    *(_QWORD *)&v49 = 0x14040CE7ALL;
    *((_QWORD *)&v48 + 1) = 0x14040CE71LL;
    *(_QWORD *)&v48 = 0x14040CE68LL;
    *((_QWORD *)&v47 + 1) = 0x14040CE5FLL;
    *(_QWORD *)&v47 = 0x14040CE56LL;
    *((_QWORD *)&v46 + 1) = 0x14040CE4DLL;
    *(_QWORD *)&v46 = 0x14040CE44LL;
    *((_QWORD *)&v45 + 1) = 0x14040CE3BLL;
    *(_QWORD *)&v45 = 0x14040CE32LL;
    *((_QWORD *)&v44 + 1) = 0x14040CE29LL;
    *(_QWORD *)&v44 = 0x14040CE20LL;
    v43 = 0x14040CE17LL;
    v42 = 0x14040CE0ELL;
    v41 = 0x14040CE05LL;
    v40 = 0x14040CDFCLL;
    v39 = 0x14040CDF3LL;
    v38 = 0x14040CDEALL;
    v37 = 0x14040CDE1LL;
    v36 = 0x14040CDD8LL;
    v35 = 0x14040CDCFLL;
    v34 = 0x14040CDC6LL;
    v33 = 0x14040CDBDLL;
    v32 = 0x14040CDB4LL;
    v31 = 0x14040CDABLL;
    v30 = 0x14040CDA2LL;
    v29 = 0x14040CD99LL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(v37, v38, v22, v21, a5);
}
