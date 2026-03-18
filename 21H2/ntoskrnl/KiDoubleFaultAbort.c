/*
 * XREFs of KiDoubleFaultAbort @ 0x14042EBC0
 * Callers:
 *     KiDoubleFaultAbortShadow @ 0x140AB5540 (KiDoubleFaultAbortShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F920 (KiSaveDebugRegisterState.c)
 *     KiDoubleFaultAbort @ 0x14042EBC0 (KiDoubleFaultAbort.c)
 *     KiBugCheckDispatch @ 0x140434DC0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1404357C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiDoubleFaultAbort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v17; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  bool v20; // zf
  _BYTE v21[44]; // [rsp+0h] [rbp-80h] BYREF
  int v22; // [rsp+2Ch] [rbp-54h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int128 v30; // [rsp+70h] [rbp-10h]
  __int128 v31; // [rsp+80h] [rbp+0h]
  __int128 v32; // [rsp+90h] [rbp+10h]
  __int128 v33; // [rsp+A0h] [rbp+20h]
  __int128 v34; // [rsp+B0h] [rbp+30h]
  __int128 v35; // [rsp+C0h] [rbp+40h]
  __int64 v36; // [rsp+D8h] [rbp+58h]
  __int16 v37; // [rsp+100h] [rbp+80h]
  char v38; // [rsp+170h] [rbp+F0h]
  __int64 v39; // [rsp+180h] [rbp+100h]

  v21[43] = 1;
  v23 = v4;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v27 = a4;
  v28 = v5;
  v29 = v6;
  if ( (v38 & 1) != 0 )
  {
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
    CurrentThread = KeGetCurrentThread();
    v17 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v17);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v17) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v17);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v17 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v17 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x14042EE29LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v17);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    v20 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v37 = 0;
    if ( !v20 )
      *(double *)&v7 = KiSaveDebugRegisterState(v17);
  }
  else
  {
    __asm { rdsspq  rdx }
    v36 = _RDX;
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  v22 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v30 = v7;
  v31 = v8;
  v32 = v9;
  v33 = v10;
  v34 = v11;
  v35 = v12;
  if ( (_BYTE)KeSmapEnabled )
  {
    if ( (v38 & 1) != 0 )
      __asm { stac }
  }
  KiBugCheckDispatch(127LL, 8LL, v21, v39);
}
