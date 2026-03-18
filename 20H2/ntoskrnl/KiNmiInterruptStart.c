/*
 * XREFs of KiNmiInterruptStart @ 0x140408700
 * Callers:
 *     KiNmiInterruptShadow @ 0x140A17240 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x1404006F0 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x140408AC0 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x140517EE0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     KiMcheckFastForward @ 0x140524BE0 (KiMcheckFastForward.c)
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
  bool v15; // zf
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v25; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v27; // cf
  struct _KTHREAD *CurrentThread; // rcx
  int v30; // r9d
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v36; // [rsp+28h] [rbp-58h]
  unsigned __int8 v37; // [rsp+29h] [rbp-57h]
  unsigned __int8 v38; // [rsp+2Ah] [rbp-56h]
  char v39; // [rsp+2Bh] [rbp-55h]
  unsigned int v40; // [rsp+2Ch] [rbp-54h]
  __int64 v41; // [rsp+30h] [rbp-50h]
  __int64 v42; // [rsp+38h] [rbp-48h]
  __int64 v43; // [rsp+40h] [rbp-40h]
  __int64 v44; // [rsp+48h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-30h]
  __int64 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  unsigned __int64 v48; // [rsp+68h] [rbp-18h]
  _OWORD v49[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v50; // [rsp+D0h] [rbp+50h]
  __int16 v51; // [rsp+100h] [rbp+80h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v53; // [rsp+170h] [rbp+F0h]

  v39 = 0;
  v41 = v8;
  v42 = a1;
  v43 = a2;
  v44 = a3;
  v45 = a4;
  v46 = v9;
  v47 = v10;
  if ( (v53 & 1) == 0 )
  {
    v48 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v15 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( !MEMORY[0xFFFFF78000000294] )
      {
        __sgdt(v49);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v49 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v50 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_13;
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
  ((void (*)(void))KiSetSpecCtrlNmi)();
  v15 = (*(_BYTE *)(v25 + 3) & 3) == 0;
  v51 = 0;
  if ( !v15 )
    *(double *)&v11 = KiSaveDebugRegisterState();
LABEL_13:
  v40 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v49[0] = v11;
  v49[1] = v12;
  v49[2] = v13;
  v49[3] = v14;
  v49[4] = v23;
  v49[5] = v24;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x8000u);
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
  v37 = CurrentIrql;
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4);
  v27 = _bittestandset16(MK_FP(__GS__, 32102LL), 0);
  if ( v27
    || (v53 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x7D66u, 0);
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v37);
  else
    __writecr8(v37);
  if ( (v53 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v40);
    if ( v51 )
      KiRestoreDebugRegisterState(CurrentThread);
    v30 = v45;
    v31 = v44;
    __writegsbyte(0x853u, v36);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v38);
    v32 = v43;
    v33 = v42;
    if ( (KiKvaShadow & 1) == 0 )
    {
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v40);
    __writegsbyte(0x853u, v36);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v38);
    __writemsr(0xC0000101, v48);
    __writecr2(v50);
    v30 = v45;
    v31 = v44;
    v32 = v43;
    v33 = v42;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v33, v32, v31, v30, a5, a6, a7, a8);
}
