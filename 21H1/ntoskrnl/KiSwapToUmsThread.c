/*
 * XREFs of KiSwapToUmsThread @ 0x1408B90E0
 * Callers:
 *     KiUmsTrapEntry @ 0x1404086C0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1404088C0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140408A80 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     ObReferenceObjectSafe @ 0x1402EEA30 (ObReferenceObjectSafe.c)
 *     PsGetThreadId @ 0x140304680 (PsGetThreadId.c)
 *     RtlXSave @ 0x1403113B0 (RtlXSave.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1403F28B0 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1403F2D90 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1403F6530 (KeResetLegacyFloatingPointState.c)
 *     KeSaveLegacyFloatingPointControlWord @ 0x1403F6540 (KeSaveLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiBlockAndActivateUmsThread @ 0x1405201C8 (KiBlockAndActivateUmsThread.c)
 *     KeSetCurrentUmsTeb @ 0x1405211D4 (KeSetCurrentUmsTeb.c)
 *     KeBuildPrimaryThreadContext @ 0x1408B965C (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x1408BA1E0 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x140905A50 (PspFindThreadForTeb.c)
 */

NTSTATUS __fastcall KiSwapToUmsThread(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v3; // rdi
  __int64 ThreadForTeb; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  signed __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  void *v13; // rsp
  unsigned __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // r8
  unsigned __int64 NpxState; // r13
  char *Object; // r14
  struct _KEVENT *v19; // rdi
  __int64 v20; // rcx
  struct _DMA_ADAPTER *Blink; // rcx
  int CycleTime; // eax
  int v23; // eax
  char v24; // al
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  HANDLE ThreadId; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // [rsp+30h] [rbp+0h]
  EXCEPTION_RECORD ExitStatus; // [rsp+40h] [rbp+10h] BYREF
  _DWORD v38[4]; // [rsp+E0h] [rbp+B0h] BYREF
  _DWORD v39[4]; // [rsp+F0h] [rbp+C0h] BYREF
  _DWORD *v40; // [rsp+100h] [rbp+D0h] BYREF
  int v41; // [rsp+108h] [rbp+D8h]
  int v42; // [rsp+10Ch] [rbp+DCh]
  _DWORD *v43; // [rsp+110h] [rbp+E0h] BYREF
  int v44; // [rsp+118h] [rbp+E8h]
  int v45; // [rsp+11Ch] [rbp+ECh]

  memset(&ExitStatus, 0, sizeof(ExitStatus));
  CurrentThread = KeGetCurrentThread();
  a1[12] = CurrentThread;
  v36 = *((_QWORD *)CurrentThread->WaitBlock[3].Object + 16);
  v3 = v36;
  ThreadForTeb = PspFindThreadForTeb(v36);
  v6 = ThreadForTeb;
  if ( ThreadForTeb )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(ThreadForTeb + 504), (signed __int64)a1, 0LL);
    if ( v7 == -1 )
    {
      v8 = a1[9];
      v9 = 1;
      v10 = 0LL;
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      v11 = (v8 & 1) == 0;
    }
    else
    {
      if ( v7 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v6);
        goto LABEL_30;
      }
      v12 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
      if ( v12 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      v15 = (a1[9] & 1) == 0;
      a1[8] = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v15 )
      {
        KeSaveLegacyFloatingPointControlWord();
      }
      else if ( MEMORY[0xFFFFF780000003D8] )
      {
        memset((void *)(v14 + 512), 0, 0x40uLL);
        RtlXSave(
          (_DWORD *)(((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL),
          MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL,
          v16);
      }
      else
      {
        _fxsave((void *)v14);
      }
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (a1[9] & 1) != 0 )
        KeFixUserSwitchContext(v6, **(_QWORD **)(v6 + 496), a1, 0LL);
      Object = (char *)CurrentThread->WaitBlock[3].Object;
      v19 = *(struct _KEVENT **)(v6 + 496);
      v20 = *((_QWORD *)Object + 2);
      if ( v19->Header.WaitListHead.Blink != (struct _LIST_ENTRY *)v20 )
      {
        ObReferenceObjectSafe(v20);
        Blink = (struct _DMA_ADAPTER *)v19->Header.WaitListHead.Blink;
        if ( Blink )
          HalPutDmaAdapter(Blink);
        v19->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 2);
        v19->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 1);
      }
      v19[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(Object + 32);
      v19[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(Object + 96);
      v19[1].Header.LockNV = *((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
      {
        CycleTime = CurrentThread[1].CycleTime;
        v42 = 0;
        v38[0] = CycleTime;
        v38[2] = CurrentThread[1].CurrentRunTime;
        v38[1] = *(_DWORD *)(v6 + 1152);
        v23 = a1[9] & 1;
        v41 = 16;
        v38[3] = v23;
        v40 = v38;
        EtwTraceKernelEvent((__int64)&v40, 1u, 0x40000080u, 0x1920u, 0x401802u);
      }
      v24 = KiBlockAndActivateUmsThread((__int64)CurrentThread, (struct _KQUEUE *)(Object + 32), v5, v19);
      CurrentThread->MiscFlags &= ~0x100u;
      ++*((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
      {
        v39[0] = CurrentThread[1].CycleTime;
        v39[2] = CurrentThread[1].CurrentRunTime;
        v25 = *(_DWORD *)(v6 + 1152);
        v45 = 0;
        v39[3] = v24 != 0;
        v39[1] = v25;
        v43 = v39;
        v44 = 16;
        EtwTraceKernelEvent((__int64)&v43, 1u, 0x40000080u, 0x1921u, 0x401802u);
      }
      v11 = *((_QWORD *)Object + 14);
      if ( v11 )
      {
        *((_QWORD *)Object + 14) = 0LL;
        v9 = 2;
        v10 = *((_QWORD *)Object + 15);
      }
      else
      {
        v9 = 1;
        v10 = 0LL;
        v11 = HIWORD(*(_DWORD *)(v6 + 116)) & 1;
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v6);
      --CurrentThread->SpecialApcDisable;
      CurrentThread->NpxState = NpxState;
    }
    KeResetLegacyFloatingPointState();
    if ( (int)KeBuildPrimaryThreadContext((_DWORD)CurrentThread, (_DWORD)a1, 0, v9, v11, v10) >= 0 )
    {
      KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v26, v27, v28);
    }
    v3 = v36;
  }
LABEL_30:
  KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
  CurrentThread->MiscFlags &= ~0x100u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v30, v31, v32);
  if ( v6 )
    ThreadId = PsGetThreadId((PETHREAD)v6);
  else
    ThreadId = 0LL;
  v34 = a1[10];
  v35 = a1[11];
  ExitStatus.ExceptionAddress = 0LL;
  ExitStatus.NumberParameters = 2;
  ExitStatus.ExceptionInformation[0] = (unsigned __int64)ThreadId;
  ExitStatus.ExceptionInformation[1] = v3;
  ExitStatus.ExceptionCode = -1073740004;
  ExitStatus.ExceptionFlags = 1;
  KiDispatchException(&ExitStatus, v35, v34, 1u, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
