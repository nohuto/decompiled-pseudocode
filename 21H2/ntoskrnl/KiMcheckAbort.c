/*
 * XREFs of KiMcheckAbort @ 0x140430F00
 * Callers:
 *     KiMcheckAbortShadow @ 0x140AB59C0 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiMcheckFastForward @ 0x14024EDB0 (KiMcheckFastForward.c)
 *     KiCheckForSListAddress @ 0x1402F2540 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1403B4940 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041F8A0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F920 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x140424CA0 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x140431540 (KxMcheckAbort.c)
 *     KzSetIrqlUnsafe @ 0x140569E70 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140571820 (KiCopyCounters.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 _RDX,
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
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int64 v29; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v34; // r8d
  int v35; // r9d
  unsigned __int64 InitialStack; // rcx
  unsigned __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v41)(); // rcx
  __int64 (__fastcall *v42)(); // rax
  bool v43; // zf
  _KIDTENTRY64 *IdtBase; // rax
  int v45; // edx
  int v46; // ecx
  __m128i v47; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v49; // [rsp+38h] [rbp-58h]
  unsigned __int8 v50; // [rsp+39h] [rbp-57h]
  char v51; // [rsp+3Bh] [rbp-55h]
  unsigned int v52; // [rsp+3Ch] [rbp-54h]
  __int64 v53; // [rsp+40h] [rbp-50h]
  __int64 v54; // [rsp+48h] [rbp-48h]
  __int64 v55; // [rsp+50h] [rbp-40h]
  __int64 v56; // [rsp+58h] [rbp-38h]
  __int64 v57; // [rsp+60h] [rbp-30h]
  __int64 v58; // [rsp+68h] [rbp-28h]
  __int64 v59; // [rsp+70h] [rbp-20h]
  unsigned __int64 v60; // [rsp+78h] [rbp-18h]
  _OWORD v61[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v62; // [rsp+E0h] [rbp+50h]
  __int64 v63; // [rsp+E8h] [rbp+58h]
  __int16 v64; // [rsp+110h] [rbp+80h]
  unsigned int v65; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v67; // [rsp+180h] [rbp+F0h]
  unsigned int v68; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v69; // [rsp+190h] [rbp+100h]
  unsigned __int16 v70; // [rsp+198h] [rbp+108h]

  v51 = 0;
  v53 = v8;
  v54 = a1;
  v55 = _RDX;
  v56 = a3;
  v57 = a4;
  v58 = v9;
  v59 = v10;
  if ( (v67 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v63 = _RDX;
    v60 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v43 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v61);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v61 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v62 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_16;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = KeGetPcr()->Prcb.KernelShadowStackInitial;
  if ( _RCX )
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
  KiSetSpecCtrlNmi(_RCX, _RDX);
  v43 = (*(_BYTE *)(v29 + 3) & 3) == 0;
  v64 = 0;
  if ( !v43 )
    *(double *)&v11 = KiSaveDebugRegisterState(v24);
LABEL_16:
  v52 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v61[0] = v11;
  v61[1] = v12;
  v61[2] = v13;
  v61[3] = v14;
  v61[4] = v26;
  v61[5] = v27;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor(v24, v23, v25);
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
  v50 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 0);
  __incgsbyte(0x8027u);
  if ( (v67 & 1) == 0 )
  {
    v32 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v69 <= v32 )
    {
      v31 = 24576LL;
      if ( (KiKvaShadow & 1) != 0 )
        v31 = 464LL;
      if ( v69 > v32 - v31 )
        goto LABEL_34;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v69 <= v33 && v69 > v33 - 24544 )
      {
LABEL_34:
        v70 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v68 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v31, &v47);
  if ( (v47.m128i_i8[0] & 1) != 0 )
  {
    if ( (v47.m128i_i8[0] & 0x10) != 0 )
      InitialStack = v69 & 0xFFFFFFFFFFFFFFF0uLL;
    else
      InitialStack = (unsigned __int64)KeGetCurrentThread()->InitialStack;
    *(__m128i *)(InitialStack - 416) = _mm_load_si128(&v47);
    v51 = 1;
  }
  __writegsbyte(0x8027u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v50);
  else
    __writecr8(v50);
  _disable();
  if ( (v67 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v52);
    if ( v64 )
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
    v35 = v57;
    v34 = v56;
    if ( !v51 )
    {
LABEL_66:
      __writegsbyte(0x856u, v49);
      if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
        __writemsr(0x48u, v65);
      goto LABEL_68;
    }
    v37 = (unsigned __int64)KeGetCurrentThread()->InitialStack;
  }
  else
  {
    if ( !v51 )
      goto LABEL_72;
    v37 = v69 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v41 = (__int64 (__fastcall **)())(v37 - 40);
  *v41 = retaddr;
  v41[1] = (__int64 (__fastcall *)())v67;
  v41[2] = (__int64 (__fastcall *)())v68;
  v41[3] = (__int64 (__fastcall *)())v69;
  v41[4] = (__int64 (__fastcall *)())v70;
  if ( (v67 & 1) == 0 )
  {
    retaddr = KxMcheckAlternateReturn;
LABEL_72:
    _mm_setcsr(v52);
    __writegsbyte(0x856u, v49);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v65);
    __writemsr(0xC0000101, v60);
    __writecr2(v62);
    v35 = v57;
    v34 = v56;
    v45 = v55;
    v46 = v54;
    if ( (KiKvaShadow & 1) == 0 )
      goto LABEL_71;
LABEL_69:
    KiKernelIstMceExit(v46, v45, v34, v35, a5, a6, a7, a8);
    return;
  }
  v42 = KxMcheckAlternateReturn;
  v43 = (KiKvaShadow & 1) == 0;
  if ( (KiKvaShadow & 1) != 0 )
  {
    IdtBase = KeGetPcr()->IdtBase;
    *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
    IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
    IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
    IdtBase->Alignment = (unsigned __int64)*v41;
    *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v41 + 1);
    *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v41[3];
    IdtBase[2].Alignment = (unsigned __int64)v41;
    v42 = KxMcheckAlternateReturnShadow;
  }
  retaddr = v42;
  if ( v43 )
    goto LABEL_66;
LABEL_68:
  v45 = v55;
  v46 = v54;
  if ( (KiKvaShadow & 1) != 0 )
    goto LABEL_69;
  __asm { swapgs }
  _mm_lfence();
LABEL_71:
  KiMcheckExit();
}
