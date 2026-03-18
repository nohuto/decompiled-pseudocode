/*
 * XREFs of PsCallEnclave @ 0x140908B50
 * Callers:
 *     NtCallEnclave @ 0x1403FEAB0 (NtCallEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ZwTerminateProcess @ 0x1403F28B0 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x14057B8A0 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x14058D6F0 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x14058D7E4 (RtlPrepareEnclaveCall.c)
 *     VslCallEnclave @ 0x14088A7E4 (VslCallEnclave.c)
 *     MiHotPatchImageTreeCompare @ 0x1408C5CE8 (MiHotPatchImageTreeCompare.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408CF324 (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x140909804 (PsDereferenceVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x140909D74 (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x140909E08 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x140909E64 (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140909F14 (PspSelectVsmEnclaveByNumber.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  unsigned __int64 v9; // r13
  char *v10; // r14
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int64 *v18; // r12
  __int64 v19; // rsi
  int v20; // eax
  PVOID v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  _QWORD *v45; // r14
  bool v46; // r8
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // [rsp+50h] [rbp-A8h] BYREF
  char v59; // [rsp+51h] [rbp-A7h]
  PVOID v60; // [rsp+58h] [rbp-A0h] BYREF
  int v61; // [rsp+60h] [rbp-98h] BYREF
  __int64 v62; // [rsp+68h] [rbp-90h] BYREF
  int v63; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  __int64 v65; // [rsp+80h] [rbp-78h] BYREF
  __int64 v66; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 *v67; // [rsp+90h] [rbp-68h]
  __int64 v68; // [rsp+98h] [rbp-60h]
  __int64 v69; // [rsp+A0h] [rbp-58h]
  _QWORD v70[10]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+100h] [rbp+8h] BYREF
  __int64 v72; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v74; // [rsp+118h] [rbp+20h]

  v74 = a4;
  ExitStatus = a3;
  v72 = a2;
  v71 = a1;
  v62 = 0LL;
  v60 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v58 = 0;
  v70[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v70[1] = CurrentThread;
  v69 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v71 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v62 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v60);
    v9 = v71;
  }
  else
  {
    v9 = v71;
    result = MmSelectVsmEnclaveByAddress(Process, v71, &v60);
  }
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v60;
  if ( !*((_DWORD *)v60 + 10) )
  {
    EnclaveReturnFrame = -1073741816;
    goto LABEL_91;
  }
  if ( *((_BYTE *)v60 + 76) )
  {
    --CurrentThread->KernelApcDisable;
    v18 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v67 = (unsigned __int64 *)(v10 + 104);
    v19 = *((_QWORD *)v10 + 13);
    while ( v19 )
    {
      v31 = MiHotPatchImageTreeCompare(v9, v19);
      if ( v31 >= 0 )
      {
        if ( v31 <= 0 )
          break;
        v19 = *(_QWORD *)(v19 + 8);
      }
      else
      {
        v19 = *(_QWORD *)v19;
      }
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v32, v33, v34);
    if ( !v19 )
    {
      EnclaveReturnFrame = -1073741800;
      goto LABEL_90;
    }
    v68 = v19;
    goto LABEL_61;
  }
  BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
  v69 = BaseTrapFrame;
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlPrepareEnclaveCall(BaseTrapFrame, (__int64)a4, v13, v14, &v66, &v65);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
  if ( EnclaveReturnFrame < 0 )
    goto LABEL_91;
  --CurrentThread->KernelApcDisable;
  v18 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v67 = (unsigned __int64 *)(v10 + 104);
  v19 = *((_QWORD *)v10 + 13);
  while ( v19 )
  {
    v20 = MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, v19);
    if ( v20 >= 0 )
    {
      if ( v20 <= 0 )
        break;
      v19 = *(_QWORD *)(v19 + 8);
    }
    else
    {
      v19 = *(_QWORD *)v19;
    }
  }
  if ( !v19 )
  {
    v21 = 0LL;
    P = 0LL;
    if ( v72 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v22 = *((_DWORD *)v10 + 18);
      if ( v22 )
      {
        *((_DWORD *)v10 + 18) = v22 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v21 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v21 )
      {
LABEL_45:
        v19 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v19;
        *(_QWORD *)(v19 + 24) = CurrentThread;
        *(_QWORD *)(v19 + 32) = 0LL;
        goto LABEL_46;
      }
    }
    if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v23, v24, v25);
    if ( EnclaveReturnFrame < 0 )
    {
LABEL_90:
      v10 = (char *)v60;
      goto LABEL_91;
    }
    v26 = P;
    v27 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v70 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v60;
    if ( v27 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v60, v26, v27);
    else
      EnclaveReturnFrame = v26[10];
    ExFreePoolWithTag(v26, 0);
    if ( EnclaveReturnFrame )
    {
      if ( EnclaveReturnFrame != 192
        && EnclaveReturnFrame != -1073740526
        && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_91;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v18, 0LL);
    goto LABEL_45;
  }
LABEL_46:
  v68 = v19;
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v28, v29, v30);
  if ( *(_DWORD *)(v19 + 36) == -1 )
  {
    EnclaveReturnFrame = -1073741670;
    goto LABEL_90;
  }
LABEL_61:
  --CurrentThread->SpecialApcDisable;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  v61 = *(_DWORD *)(v19 + 32);
  v10 = (char *)v60;
  EnclaveReturnFrame = VslCallEnclave((__int64)v60, &v61, &v71, ExitStatus, &v62, &v66, &v65, &ExitStatus, &v58);
  v63 = EnclaveReturnFrame;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v35, v36, v37);
  if ( v58 )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( EnclaveReturnFrame < 0 )
  {
    if ( !v72 )
      goto LABEL_85;
    v71 = 0LL;
  }
  v40 = v71;
  if ( !v71 )
  {
    *v74 = v62;
    if ( v72 )
    {
      if ( (*(_DWORD *)(v19 + 36))-- == 1 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v19);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10 + 112);
        KeAbPostRelease((ULONG_PTR)(v10 + 112));
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v52, v53, v54);
        v10 = (char *)v60;
      }
    }
    goto LABEL_85;
  }
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(v69, v38, v39, *((_QWORD *)v10 + 1), v40, ExitStatus, v66, v65, v62);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v41, v42, v43);
  if ( v72 )
    goto LABEL_85;
  v44 = *(_DWORD *)(v19 + 36);
  if ( v44 )
    goto LABEL_79;
  *(_DWORD *)(v19 + 32) = v61;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v18, 0LL);
  v45 = (_QWORD *)*v67;
  v46 = 0;
  v59 = 0;
  if ( !v45 )
    goto LABEL_76;
  while ( (int)MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, (__int64)v45) >= 0 )
  {
    v47 = (_QWORD *)v45[1];
    if ( !v47 )
    {
      v46 = 1;
      v59 = 1;
      goto LABEL_76;
    }
LABEL_74:
    v45 = v47;
  }
  v47 = (_QWORD *)*v45;
  if ( *v45 )
    goto LABEL_74;
  v46 = 0;
  v59 = 0;
LABEL_76:
  RtlAvlInsertNodeEx(v67, (unsigned __int64)v45, v46, (_QWORD *)v19);
  if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v48, v49, v50);
  v44 = *(_DWORD *)(v19 + 36);
  v10 = (char *)v60;
LABEL_79:
  *(_DWORD *)(v19 + 36) = v44 + 1;
LABEL_85:
  if ( !v10[76] && !*(_DWORD *)(v19 + 36) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v19 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v19;
    PspReleaseEnclaveThread(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 112);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v55, v56, v57);
    goto LABEL_90;
  }
LABEL_91:
  PsDereferenceVsmEnclave(v10);
  return (unsigned int)EnclaveReturnFrame;
}
