/*
 * XREFs of KiNmiInterruptStart @ 0x14042CF40
 * Callers:
 *     KiNmiInterruptShadow @ 0x140AB5240 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiMcheckFastForward @ 0x14024EDB0 (KiMcheckFastForward.c)
 *     KiCheckForSListAddress @ 0x1402F2540 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1403B4940 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041F8A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F920 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x140424CA0 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x14042D380 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x140434DC0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x140569E70 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140571820 (KiCopyCounters.c)
 */

__int64 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v16; // zf
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int64 v31; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v33; // cf
  struct _KTHREAD *CurrentThread; // rcx
  int v38; // r9d
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v44; // [rsp+28h] [rbp-58h]
  unsigned __int8 v45; // [rsp+29h] [rbp-57h]
  char v46; // [rsp+2Bh] [rbp-55h]
  unsigned int v47; // [rsp+2Ch] [rbp-54h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  __int64 v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  __int64 v52; // [rsp+50h] [rbp-30h]
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  unsigned __int64 v55; // [rsp+68h] [rbp-18h]
  _OWORD v56[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v57; // [rsp+D0h] [rbp+50h]
  __int64 v58; // [rsp+D8h] [rbp+58h]
  __int16 v59; // [rsp+100h] [rbp+80h]
  unsigned int v60; // [rsp+140h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v62; // [rsp+170h] [rbp+F0h]

  v46 = 0;
  v48 = v8;
  v49 = a1;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = v9;
  v54 = v10;
  if ( (v62 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v58 = _RDX;
    v55 = __readmsr(0xC0000101);
    v17 = __segmentlimit(0x50u);
    if ( v16 )
    {
      v20 = (v17 & 0x3FF) << 6;
      v19 = v17 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v56);
        v18 = *(_QWORD *)(*(_QWORD *)((char *)v56 + 2) - 8000LL);
LABEL_8:
        v21 = v18;
        v22 = HIDWORD(v18);
        __writemsr(0xC0000101, __PAIR64__(v22, v21));
        v23 = __readcr2();
        v57 = v23;
        KiSetSpecCtrlNmi(3221225729LL, v22);
        goto LABEL_16;
      }
      __asm { rdtscp }
      v19 = 1;
      v20 = 805306432;
    }
    v18 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v20 | v19]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
  {
    __asm { rdsspq  rdx }
    if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
    {
      __asm
      {
        rstorssp qword ptr [rcx]
        saveprevssp
      }
    }
  }
  ((void (*)(void))KiSetSpecCtrlNmi)();
  v16 = (*(_BYTE *)(v31 + 3) & 3) == 0;
  v59 = 0;
  if ( !v16 )
    *(double *)&v11 = KiSaveDebugRegisterState();
LABEL_16:
  v47 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v56[0] = v11;
  v56[1] = v12;
  v56[2] = v13;
  v56[3] = v14;
  v56[4] = v27;
  v56[5] = v28;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor(v25, v24, v26);
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x82C0u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v45 = CurrentIrql;
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 1);
  v33 = _bittestandset16(MK_FP(__GS__, 32806LL), 0);
  if ( v33
    || (v62 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x8026u, 0);
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v45);
  else
    __writecr8(v45);
  if ( (v62 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v47);
    if ( v59 )
      KiRestoreDebugRegisterState(CurrentThread);
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
      {
        _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    v38 = v52;
    v39 = v51;
    __writegsbyte(0x856u, v44);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v60);
    v40 = v50;
    v41 = v49;
    if ( (KiKvaShadow & 1) == 0 )
    {
      if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
        __asm { verw    [rsp+arg_18] }
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v47);
    __writegsbyte(0x856u, v44);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v60);
    __writemsr(0xC0000101, v55);
    __writecr2(v57);
    v38 = v52;
    v39 = v51;
    v40 = v50;
    v41 = v49;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v41, v40, v39, v38, a5, a6, a7, a8);
}
