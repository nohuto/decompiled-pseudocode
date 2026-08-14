// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1403FCEA0
 * Callers:
 *     KiIdleLoop @ 0x1403F9910 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1403FCCC0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiUpdateSpeculationControl @ 0x1402DDBB0 (KiUpdateSpeculationControl.c)
 *     KiBeginThreadAccountingPeriod @ 0x140357AA0 (KiBeginThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceContextSwap @ 0x1403AA7B0 (EtwTraceContextSwap.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1404F52E0 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x14050CC50 (KiClearLastBranchRecordStack.c)
 *     KiResetProcessorTraceBuffer @ 0x14050F2D0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405149E0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140514B20 (KiSaveThreadIptState.c)
 *     KeCheckAndApplyBamQos @ 0x1405189A0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x140519640 (KiCheckAndApplyCacheIsolation.c)
 */

bool __fastcall SwapContext(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  ULONG_PTR v10; // rbp
  unsigned __int64 v12; // rax
  ULONG64 v13; // rax
  __int64 v16; // rcx
  unsigned __int8 BpbTrappedRetpolineExitSpecCtrl; // al
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // rcx
  unsigned int v34; // ebp
  _BYTE v35[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v36; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v6 + 113));
  v36 = a1;
  if ( *(_BYTE *)(v6 + 113) )
  {
    v34 = 0;
    do
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v34);
      }
      _mm_pause();
    }
    while ( *(_BYTE *)(v6 + 113) );
  }
  *(_BYTE *)(v6 + 113) = 1;
  _disable();
  v7 = __rdtsc();
  v8 = (((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) - *(_QWORD *)(v4 + 32448);
  *(_QWORD *)(v4 + 32568) += v8;
  *(_QWORD *)(v4 + 32448) += v8;
  v9 = v8;
  if ( *(_BYTE *)(v4 + 6) )
  {
    *(_BYTE *)(v4 + 6) = 0;
    if ( *(_QWORD *)(v4 + 24) != v6 )
      HalRequestSoftwareInterrupt(2);
  }
  if ( (*(_BYTE *)(v6 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v4, (struct _KTHREAD *)v6, v9, a4);
  }
  else
  {
    --*(_BYTE *)(v4 + 32);
    _enable();
  }
  ++*(_DWORD *)(v4 + 11580);
  v10 = KeFeatureBits;
  if ( KiCacheIsoBitmap && (KeFeatureBits & 0x100000000000LL) != 0 )
    KiCheckAndApplyCacheIsolation(v4, v6);
  if ( *(_QWORD *)(v4 + 24) != v6 && (unsigned __int8)*(_DWORD *)(v6 + 512) != *(_BYTE *)(v4 + 236) )
    KeCheckAndApplyBamQos(v4, v6);
  _RCX = *(_DWORD **)(v5 + 96);
  v12 = *(_DWORD *)(v5 + 592) & 0xFFFFFFFD;
  if ( (*(_QWORD *)(v5 + 592) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
  {
    if ( (v10 & 0x4000000000LL) != 0 )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( (v10 & 0x8000) != 0 )
    {
      _xsaveopt(_RCX, v12);
    }
    else if ( (v10 & 0x800000) != 0 )
    {
      _xsave(_RCX, v12);
    }
    else
    {
      _fxsave(_RCX);
    }
  }
  _RCX[6] = _mm_getcsr();
  if ( (v12 & 0x100) != 0 && (_DWORD)KiIptMsrMask )
    KiSaveThreadIptState(v5);
  *(_QWORD *)(v5 + 88) = v35;
  if ( *(char *)(v5 + 3) < 0 )
  {
    v13 = __readmsr(0xC0000102);
    if ( v13 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    *(_QWORD *)(*(_QWORD *)(v5 + 496) + 128LL) = v13;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 544) + 1408LL) )
    *(_QWORD *)(v5 + 1512) = __readmsr(0xC0000100);
  if ( _bittestandreset(MK_FP(__GS__, 2131LL), 0) )
    *(_BYTE *)(v5 + 127) |= 2u;
  if ( _bittestandreset((signed __int32 *)(v6 + 127), 1u) )
    __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 1);
  v16 = *(_QWORD *)(v6 + 544);
  LOBYTE(v16) = (*(_BYTE *)(v4 + 254) | v16) & 0xC2;
  if ( v16 == *(_QWORD *)(v5 + 544) )
  {
    if ( (KeGetPcr()->Prcb.BpbRetpolineState & 3) == 1 )
    {
      _disable();
      BpbTrappedRetpolineExitSpecCtrl = KeGetPcr()->Prcb.BpbTrappedRetpolineExitSpecCtrl;
      if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbTrappedRetpolineExitSpecCtrl )
      {
        __writegsbyte(0x27Au, BpbTrappedRetpolineExitSpecCtrl);
        __writemsr(0x48u, BpbTrappedRetpolineExitSpecCtrl);
      }
      if ( (KeGetPcr()->Prcb.BpbTrappedBpbState & 0x10) != 0 )
        __writemsr(0x49u, 1uLL);
      else
        _mm_lfence();
      __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
      _enable();
    }
  }
  else
  {
    LOBYTE(v16) = v16 & 0xC0;
    KiUpdateSpeculationControl(v16);
  }
  v18 = *(_QWORD *)(v6 + 184);
  if ( v18 != *(_QWORD *)(v5 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v18 + 8LL * *(unsigned __int8 *)(v4 + 208) + 376),
      *(unsigned __int8 *)(v4 + 209));
    v19 = *(_QWORD *)(v18 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v19 & 2) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
        *(_DWORD *)(v4 + 36504) |= 1u;
      }
      *(_QWORD *)(v4 + 36480) = v19;
      v19 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v4 + 36504) &= ~2u;
      if ( _bittest((const signed __int32 *)(v18 + 912), 0) )
        *(_DWORD *)(v4 + 36504) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v19);
    }
    else
    {
      __writecr3(v19);
      if ( (KiKvaShadow & 1) != 0 && (v19 & 2) == 0 )
      {
        v20 = __readcr4();
        v20 ^= 0x80uLL;
        __writecr4(v20);
        __writecr4(v20 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v5 + 184) + 8LL * *(unsigned __int8 *)(v4 + 208) + 376),
      *(unsigned __int8 *)(v4 + 209));
  }
  v21 = *(_QWORD *)(v6 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v4 + 36488) = v21;
  else
    *(_QWORD *)(*(_QWORD *)(v4 - 376) + 4LL) = v21;
  *(_QWORD *)(v4 + 40) = v21;
  if ( v21 >= 0 )
    KeBugCheckEx(0x1CEu, v5, v6, 0LL, 0LL);
  if ( KiCpuTracingFlags )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(v5, v6);
    if ( (KiCpuTracingFlags & 2) != 0 )
      KiClearLastBranchRecordStack();
    if ( (KiCpuTracingFlags & 4) != 0 )
      KiResetProcessorTraceBuffer();
  }
  v22 = *(_QWORD *)(v6 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v5 + 592);
  *(_BYTE *)(v5 + 113) = 0;
  _RCX = *(unsigned int **)(v6 + 96);
  v24 = v22 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v24 )
  {
    if ( (v10 & 0x20000000000LL) != 0 && (v24 & 1) != 0 )
      __asm { fninit }
    if ( (v10 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v10 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v24);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( (v24 & 0x100) != 0 && (_DWORD)KiIptMsrMask )
    KiRestoreThreadIptState(v6);
  if ( !_bittest((const signed __int32 *)(v6 + 116), 0xAu) )
  {
    v25 = *(_DWORD *)(v6 + 1512);
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 544) + 1408LL) )
      v25 = *(_DWORD *)(v6 + 240) + 0x2000;
    v26 = *(_QWORD *)(v4 - 384);
    *(_WORD *)(v26 + 82) = v25;
    v27 = HIWORD(v25);
    *(_BYTE *)(v26 + 84) = v27;
    *(_BYTE *)(v26 + 87) = BYTE1(v27);
    __writemsr(0xC0000100, *(_QWORD *)(v6 + 1512));
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v28 = *(_QWORD *)(v6 + 240);
    v29 = *(_DWORD *)(v6 + 244);
    *(_QWORD *)(v4 - 336) = v28;
    if ( (*(_BYTE *)(v6 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v6 + 3) >= 0 )
      {
        LODWORD(v28) = *(_DWORD *)(v6 + 1520);
        v29 = *(_DWORD *)(v6 + 1524);
      }
      else
      {
        v30 = *(_QWORD *)(v6 + 496);
        LODWORD(v28) = *(_DWORD *)(v30 + 128);
        v29 = *(_DWORD *)(v30 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v29, v28));
  }
  if ( (*(_DWORD *)(v4 + 12588) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v5, v6, 0LL, 0LL);
  ++*(_DWORD *)(v6 + 340);
  v31 = *(_BYTE *)(v6 + 193) == 1;
  if ( *(_BYTE *)(v6 + 193) == 1 )
  {
    v31 = (*(_WORD *)(v6 + 486) | v36) == 0;
    if ( *(_WORD *)(v6 + 486) | v36 )
    {
      HalRequestSoftwareInterrupt(1);
      return ((unsigned __int64)v35 | v32) == 0;
    }
  }
  return v31;
}
