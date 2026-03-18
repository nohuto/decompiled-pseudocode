/*
 * XREFs of KiSystemCall64 @ 0x1404085C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403F8030 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1403FAD70 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1403FB600 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140409000 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiUmsCallEntry @ 0x140409BC0 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 *     PsAltSystemCallDispatch @ 0x14057D6F0 (PsAltSystemCallDispatch.c)
 *     PerfInfoLogSysCallEntry @ 0x1405A4E30 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405A4ED0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x1408B9BD0 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1408B9CF0 (KiTrackSystemCallExit.c)
 */

__int64 __fastcall KiSystemCall64(
        void *a1,
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
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // r10
  __int64 v52; // r11
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm2
  __int128 v56; // xmm3
  __int128 v57; // xmm4
  __int128 v58; // xmm5
  unsigned __int64 v59; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al
  struct _KTHREAD *CurrentThread; // rbx
  bool v62; // zf
  char v63; // al
  __int64 v64; // rdx
  bool v65; // cc
  __int64 result; // rax
  ULONG64 v67; // rax
  _QWORD *Object; // rdx
  unsigned int v69; // eax
  void *v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int128 *v73; // r10
  __int128 *v74; // r11
  __int64 v75; // r10
  __int64 v76; // rax
  __int64 (__fastcall *v77)(_QWORD, _QWORD); // r10
  __int64 v78; // rbx
  __int64 v79; // rdi
  __int64 (__fastcall *v80)(_QWORD, _QWORD); // rsi
  struct _KTHREAD *v82; // r11
  struct _KTHREAD *v83; // rcx
  struct _KTHREAD *v84; // rcx
  void *InstrumentationCallback; // rax
  unsigned __int8 v86; // al
  unsigned __int8 v87; // cf
  struct _KTHREAD *v89; // rcx
  struct _KTHREAD *v90; // rcx
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v93; // rsi
  __int64 v94; // rcx
  __int64 CombinedApcDisable; // r9
  __int64 CurrentIrql; // r8
  __int64 v97; // rax
  __int64 v98; // rax
  void *v99; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v100; // [rsp+30h] [rbp-1B8h]
  __int64 v101; // [rsp+38h] [rbp-1B0h]
  __int64 v102; // [rsp+40h] [rbp-1A8h]
  __int64 (__fastcall *v103)(void *, __int64, __int64, __int64); // [rsp+48h] [rbp-1A0h]
  __int64 v104; // [rsp+50h] [rbp-198h]
  __int64 v105; // [rsp+58h] [rbp-190h] BYREF
  __int64 v106; // [rsp+60h] [rbp-188h]
  __int64 v107; // [rsp+68h] [rbp-180h]
  __int64 v108; // [rsp+70h] [rbp-178h]
  __int64 v109; // [rsp+78h] [rbp-170h] BYREF
  __int64 v110; // [rsp+80h] [rbp-168h]
  __int64 v111; // [rsp+88h] [rbp-160h]
  __int64 v112; // [rsp+90h] [rbp-158h]
  __int64 v113; // [rsp+98h] [rbp-150h]
  __int64 v114; // [rsp+A0h] [rbp-148h]
  __int64 v115; // [rsp+A8h] [rbp-140h]
  __int64 v116; // [rsp+B0h] [rbp-138h]
  __int64 v117; // [rsp+B8h] [rbp-130h]
  __int64 v118; // [rsp+C0h] [rbp-128h]
  __int128 v119; // [rsp+C8h] [rbp-120h]
  __int128 v120; // [rsp+D8h] [rbp-110h]
  __int128 v121; // [rsp+E8h] [rbp-100h]
  __int128 v122; // [rsp+F8h] [rbp-F0h]
  __int128 v123; // [rsp+108h] [rbp-E0h]
  __int128 v124; // [rsp+118h] [rbp-D0h]
  __int64 v125; // [rsp+128h] [rbp-C0h]
  __int64 v126; // [rsp+130h] [rbp-B8h]
  __int64 v127; // [rsp+138h] [rbp-B0h]
  __int64 v128; // [rsp+140h] [rbp-A8h]
  __int64 v129; // [rsp+148h] [rbp-A0h]
  __int64 v130; // [rsp+158h] [rbp-90h]
  _KTRAP_FRAME *v131; // [rsp+190h] [rbp-58h]
  __int64 v132; // [rsp+1B0h] [rbp-38h]
  void *v133; // [rsp+1C0h] [rbp-28h]
  __int64 v134; // [rsp+1C8h] [rbp-20h]
  __int64 v135; // [rsp+1D0h] [rbp-18h]
  void *StackLimit; // [rsp+1D8h] [rbp-10h]
  __int64 v137; // [rsp+1E0h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+1E8h] [rbp+0h] BYREF

  __asm { swapgs }
  __writegsqword(0x10u, (unsigned __int64)&retaddr);
  v137 = 43LL;
  StackLimit = KeGetPcr()->NtTib.StackLimit;
  v135 = v52;
  v134 = 51LL;
  v133 = a1;
  v132 = v50;
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  v111 = v49;
  v112 = v51;
  v113 = a2;
  v59 = *(_QWORD *)&KeGetCurrentThread()->Process[2].ActiveProcessors.Count;
  __writegsqword(0x270u, v59);
  __writegsbyte(0x851u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
  LOBYTE(v59) = KeGetPcr()->Prcb.BpbState;
  __writegsbyte(0x852u, v59);
  BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbKernelSpecCtrl);
    v59 = 72LL;
    HIDWORD(a2) = 0;
    __writemsr(0x48u, BpbKernelSpecCtrl);
  }
  LODWORD(a2) = KeGetPcr()->Prcb.BpbState;
  if ( (a2 & 8) != 0 )
  {
    a2 = 0LL;
    v59 = 73LL;
    __writemsr(0x49u, 1uLL);
  }
  else
  {
    if ( (a2 & 2) != 0 && (KeGetPcr()->Prcb.BpbFeatures & 4) == 0 )
    {
      v104 = 0x1404086D9LL;
      v129 = 0x1404087F0LL;
      v128 = 0x1404087E7LL;
      v127 = 0x1404087DELL;
      v126 = 0x1404087D5LL;
      v125 = 0x1404087CCLL;
      *((_QWORD *)&v124 + 1) = 0x1404087C3LL;
      *(_QWORD *)&v124 = 0x1404087BALL;
      *((_QWORD *)&v123 + 1) = 0x1404087B1LL;
      *(_QWORD *)&v123 = 0x1404087A8LL;
      *((_QWORD *)&v122 + 1) = 0x14040879FLL;
      *(_QWORD *)&v122 = 0x140408796LL;
      *((_QWORD *)&v121 + 1) = 0x14040878DLL;
      *(_QWORD *)&v121 = 0x140408784LL;
      *((_QWORD *)&v120 + 1) = 0x14040877BLL;
      *(_QWORD *)&v120 = 0x140408772LL;
      *((_QWORD *)&v119 + 1) = 0x140408769LL;
      *(_QWORD *)&v119 = 0x140408760LL;
      v118 = 0x140408757LL;
      v117 = 0x14040874ELL;
      v116 = 0x140408745LL;
      v115 = 0x14040873CLL;
      v114 = 0x140408733LL;
      v113 = 0x14040872ALL;
      v112 = 0x140408721LL;
      v111 = 0x140408718LL;
      v110 = 0x14040870FLL;
      v109 = 0x140408706LL;
      v108 = 0x1404086FDLL;
      v107 = 0x1404086F4LL;
      v106 = 0x1404086EBLL;
      v105 = 0x1404086E2LL;
    }
    _mm_lfence();
  }
  __writegsbyte(0x853u, 0);
  BYTE3(v110) = 2;
  CurrentThread = KeGetCurrentThread();
  _m_prefetchw(&CurrentThread->TrapFrame);
  HIDWORD(v110) = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v62 = CurrentThread->Header.Reserved1 == 0;
  LOWORD(v130) = 0;
  if ( v62 )
  {
LABEL_28:
    v69 = v111;
    v70 = (void *)v112;
    v64 = v113;
    _enable();
    CurrentThread->FirstArgument = v70;
    CurrentThread->SystemCallNumber = v69;
    CurrentThread->TrapFrame = (_KTRAP_FRAME *)&v105;
    v71 = (v69 >> 7) & 0x20;
    v72 = v69 & 0xFFF;
    do
    {
      v73 = &KeServiceDescriptorTable;
      v74 = &KeServiceDescriptorTableShadow;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x80) != 0 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x200000) != 0 )
          v74 = &KeServiceDescriptorTableFilter;
        v73 = v74;
      }
      if ( (unsigned int)v72 < *(_DWORD *)((char *)v73 + v71 + 16) )
      {
        v75 = *(_QWORD *)((char *)v73 + v71);
        v76 = *(int *)(v75 + 4 * v72);
        v77 = (__int64 (__fastcall *)(_QWORD, _QWORD))((v76 >> 4) + v75);
        if ( (_DWORD)v71 == 32 && *((_DWORD *)CurrentThread->Teb + 1488) )
        {
          v111 = v76;
          v112 = (__int64)v70;
          v113 = v64;
          v78 = a3;
          v79 = a4;
          v80 = v77;
          PsInvokeWin32Callout(7LL, 0LL, 0LL, 0LL);
          LOBYTE(v76) = v111;
          v70 = (void *)v112;
          v64 = v113;
          a3 = v78;
          a4 = v79;
          v77 = v80;
        }
        if ( v76 & 0xF )
          __asm { jmp     r11 }
        if ( (KiDynamicTraceMask & 1) != 0 )
        {
          v99 = v70;
          v100 = v64;
          v101 = a3;
          v102 = a4;
          v103 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64))v77;
          v111 = KiTrackSystemCallEntry(v77, &v99, 4LL, &v109);
          v97 = v103(v99, v100, v101, v102);
          result = KiTrackSystemCallExit(v111, v97);
        }
        else if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
        {
          v99 = v70;
          v100 = v64;
          v101 = a3;
          v102 = a4;
          v103 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64))v77;
          PerfInfoLogSysCallEntry(v77);
          v98 = v103(v99, v100, v101, v102);
          result = PerfInfoLogSysCallExit(v98);
        }
        else
        {
          result = v77(v70, v64);
        }
        __incgsdword(0x2EB8u);
        goto KiSystemServiceExit;
      }
      if ( (_DWORD)v71 != 32 )
        goto LABEL_93;
      v109 = a4;
      v62 = (unsigned int)KiConvertToGuiThread() == 0;
      v72 = (unsigned int)v105;
      v70 = (void *)v106;
      v64 = v107;
      a3 = v108;
      a4 = v109;
      CurrentThread->TrapFrame = (_KTRAP_FRAME *)&v105;
    }
    while ( v62 );
    v93 = *((unsigned int *)&xmmword_140CFCA60 + 4);
    if ( (unsigned int)v72 >= (unsigned int)v93
      || (result = (unsigned int)*(char *)(xmmword_140CFCA60 + 4 * v93 + v72), (int)result > 0) )
    {
LABEL_93:
      result = 3221225500LL;
      goto KiSystemServiceExit;
    }
    goto KiSystemServiceExit;
  }
  v62 = (CurrentThread->Header.Reserved1 & 3) == 0;
  v114 = a3;
  v115 = a4;
  if ( !v62 )
    *(double *)&v53 = KiSaveDebugRegisterState(v59, a2);
  if ( (CurrentThread->Header.Reserved1 & 0x24) == 0 )
    goto LABEL_23;
  v117 = v51;
  v116 = v51;
  v119 = v53;
  v120 = v54;
  v121 = v55;
  v122 = v56;
  v123 = v57;
  v124 = v58;
  _enable();
  v63 = PsAltSystemCallDispatch(&v105, a2);
  v65 = v63 < 1;
  if ( v63 == 1 )
  {
LABEL_23:
    if ( (CurrentThread->Header.Reserved1 & 0x80u) == 0 )
      goto LABEL_25;
    v67 = __readmsr(0xC0000102);
    if ( v67 >= MmUserProbeAddress )
      v67 = MmUserProbeAddress;
    if ( CurrentThread->Teb == (void *)v67 )
    {
LABEL_25:
      if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
        CurrentThread->MiscFlags |= 0x10000u;
    }
    else
    {
      Object = CurrentThread->WaitBlock[3].Object;
      CurrentThread->MiscFlags |= 0x100u;
      --CurrentThread->SpecialApcDisable;
      Object[16] = v67;
      _enable();
      KiUmsCallEntry(3221225730LL);
    }
    a3 = v114;
    a4 = v115;
    goto LABEL_28;
  }
  result = v111;
  if ( !v65 )
  {
    KiExceptionDispatch(3221225500LL, 0LL, v133);
    __debugbreak();
  }
  if ( (CurrentThread->Header.Reserved1 & 4) != 0 )
  {
    v82 = KeGetCurrentThread();
    if ( !(v82->WaitBlock[3].SpareLong | (unsigned __int8)(v82->ApcStateIndex | KeGetCurrentIrql())) )
    {
      _disable();
      while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
      {
        __writecr8(1uLL);
        _enable();
        KiInitiateUserApc();
        __writecr8(0LL);
        _disable();
      }
      if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
        KiUpdateStibpPairing(0LL);
      v89 = KeGetCurrentThread();
      if ( (v89->Header.LockNV & 0x8000000) != 0 )
        KiRestoreSetContextState((__int64)v89, v64, a3, a4, v109);
      v90 = KeGetCurrentThread();
      if ( (v90->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v90 = KeGetCurrentThread();
      }
      if ( (_WORD)v130 )
        KiRestoreDebugRegisterState(v90);
      __writegsbyte(0x853u, 0);
      BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
      if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
      {
        __writegsbyte(0x27Au, BpbUserSpecCtrl);
        __writemsr(0x48u, BpbUserSpecCtrl);
      }
      v87 = _bittestandreset16(MK_FP(__GS__, 632LL), 2u);
      if ( v87 )
        __writemsr(0x49u, 1uLL);
      _mm_setcsr(HIDWORD(v110));
      if ( (KiKvaShadow & 1) == 0 )
      {
        __asm
        {
          swapgs
          iretq
        }
      }
      return KiKernelExit(v112, v113, v114, v115, a5);
    }
LABEL_94:
    v94 = 74LL;
    CombinedApcDisable = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( !(_DWORD)CurrentIrql )
    {
      v94 = 1LL;
      CurrentIrql = v82->ApcStateIndex;
      CombinedApcDisable = v82->CombinedApcDisable;
    }
    KiBugCheckDispatch(v94, v133, CurrentIrql, CombinedApcDisable);
  }
KiSystemServiceExit:
  v82 = KeGetCurrentThread();
  if ( (v134 & 1) == 0 )
  {
    v82->TrapFrame = v131;
    v82->PreviousMode = v110;
    _disable();
    _enable();
    return result;
  }
  if ( v82->WaitBlock[3].SpareLong | (unsigned __int8)(v82->ApcStateIndex | KeGetCurrentIrql()) )
    goto LABEL_94;
  _disable();
  while ( (KeGetCurrentThread()->ApcState.UserApcPendingAll & 3) != 0 )
  {
    v111 = result;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0LL;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    v124 = 0LL;
    __writecr8(1uLL);
    _enable();
    KiInitiateUserApc();
    _disable();
    __writecr8(0LL);
    result = v111;
  }
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
  {
    v111 = result;
    KiUpdateStibpPairing(0LL);
    result = v111;
  }
  v83 = KeGetCurrentThread();
  if ( (v83->Header.LockNV & 0x8000000) != 0 )
  {
    v111 = result;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0LL;
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0LL;
    v123 = 0LL;
    v124 = 0LL;
    result = KiRestoreSetContextState((__int64)v83, v64, a3, a4, v109);
  }
  v84 = KeGetCurrentThread();
  if ( (v84->Header.LockNV & 0x40010000) != 0 )
  {
    v111 = result;
    if ( (v84->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v84 = KeGetCurrentThread();
    }
    if ( (v84->Header.Reserved1 & 0x40) != 0 )
      KiUmsExit(0LL);
    result = v111;
  }
  _mm_setcsr(HIDWORD(v110));
  if ( (_WORD)v130 )
  {
    v111 = result;
    KiRestoreDebugRegisterState(v84);
    InstrumentationCallback = KeGetCurrentThread()->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback && (_WORD)v134 == 51 )
      v133 = InstrumentationCallback;
    result = v111;
  }
  v111 = result;
  __writegsbyte(0x853u, 0);
  v86 = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != v86 )
  {
    __writegsbyte(0x27Au, v86);
    __writemsr(0x48u, v86);
  }
  v87 = _bittestandreset16(MK_FP(__GS__, 632LL), 2u);
  if ( v87 )
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
           v133,
           0LL,
           StackLimit,
           v132,
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
