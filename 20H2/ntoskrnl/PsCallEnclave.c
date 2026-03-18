/*
 * XREFs of PsCallEnclave @ 0x14090FA20
 * Callers:
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ZwTerminateProcess @ 0x1403F86F0 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x14057F910 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x140591810 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x140591940 (RtlPrepareEnclaveCall.c)
 *     VslCallEnclave @ 0x140891654 (VslCallEnclave.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CCE78 (MiHotPatchImageTreeCompare.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D64B4 (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x1409106F0 (PsDereferenceVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x140910C60 (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x140910CF4 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x140910D50 (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140910E00 (PspSelectVsmEnclaveByNumber.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  volatile signed __int64 *v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  PVOID v18; // rcx
  int v19; // eax
  _DWORD *v20; // rsi
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // r14
  bool v28; // r8
  _QWORD *v29; // rax
  char v31; // [rsp+50h] [rbp-A8h] BYREF
  char v32; // [rsp+51h] [rbp-A7h]
  PVOID v33; // [rsp+58h] [rbp-A0h] BYREF
  int v34; // [rsp+60h] [rbp-98h] BYREF
  __int64 v35; // [rsp+68h] [rbp-90h] BYREF
  int v36; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h] BYREF
  __int64 v38; // [rsp+80h] [rbp-78h] BYREF
  __int64 v39; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 *v40; // [rsp+90h] [rbp-68h]
  __int64 v41; // [rsp+98h] [rbp-60h]
  __int64 v42; // [rsp+A0h] [rbp-58h]
  _QWORD v43[10]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+100h] [rbp+8h] BYREF
  __int64 v45; // [rsp+108h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+110h] [rbp+18h] BYREF
  __int64 *v47; // [rsp+118h] [rbp+20h]

  v47 = a4;
  ExitStatus = a3;
  v45 = a2;
  v44 = a1;
  v35 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v31 = 0;
  v43[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v43[1] = CurrentThread;
  v42 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v44 )
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
  v35 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v33);
    v9 = v44;
  }
  else
  {
    v9 = v44;
    result = MmSelectVsmEnclaveByAddress(Process, v44, &v33);
  }
  if ( (int)result < 0 )
    return result;
  v10 = (char *)v33;
  if ( !*((_DWORD *)v33 + 10) )
  {
    EnclaveReturnFrame = -1073741816;
    goto LABEL_91;
  }
  if ( *((_BYTE *)v33 + 76) )
  {
    --CurrentThread->KernelApcDisable;
    v15 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v40 = (unsigned __int64 *)(v10 + 104);
    v16 = *((_QWORD *)v10 + 13);
    while ( v16 )
    {
      v22 = MiHotPatchImageTreeCompare(v9, v16);
      if ( v22 >= 0 )
      {
        if ( v22 <= 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v16 = *(_QWORD *)v16;
      }
    }
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v16 )
    {
      EnclaveReturnFrame = -1073741800;
      goto LABEL_90;
    }
    v41 = v16;
    goto LABEL_61;
  }
  BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
  v42 = BaseTrapFrame;
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlPrepareEnclaveCall(
                         BaseTrapFrame,
                         (__int64)a4,
                         v13,
                         v14,
                         (CurrentThread->MiscFlags & 0x100000) != 0,
                         &v39,
                         &v38);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( EnclaveReturnFrame < 0 )
    goto LABEL_91;
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(v10 + 112);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
  v40 = (unsigned __int64 *)(v10 + 104);
  v16 = *((_QWORD *)v10 + 13);
  while ( v16 )
  {
    v17 = MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, v16);
    if ( v17 >= 0 )
    {
      if ( v17 <= 0 )
        break;
      v16 = *(_QWORD *)(v16 + 8);
    }
    else
    {
      v16 = *(_QWORD *)v16;
    }
  }
  if ( !v16 )
  {
    v18 = 0LL;
    P = 0LL;
    if ( v45 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v19 = *((_DWORD *)v10 + 18);
      if ( v19 )
      {
        *((_DWORD *)v10 + 18) = v19 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v18 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v18 )
      {
LABEL_45:
        v16 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v16;
        *(_QWORD *)(v16 + 24) = CurrentThread;
        *(_QWORD *)(v16 + 32) = 0LL;
        goto LABEL_46;
      }
    }
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
    {
LABEL_90:
      v10 = (char *)v33;
      goto LABEL_91;
    }
    v20 = P;
    v21 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)v43 & -(__int64)((ExitStatus & 1) != 0)));
    v10 = (char *)v33;
    if ( v21 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v33, v20, v21);
    else
      EnclaveReturnFrame = v20[10];
    ExFreePoolWithTag(v20, 0);
    if ( EnclaveReturnFrame )
    {
      if ( (unsigned int)(EnclaveReturnFrame - 257) > 1
        && EnclaveReturnFrame != -1073740526
        && EnclaveReturnFrame != 192 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_91;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
    goto LABEL_45;
  }
LABEL_46:
  v41 = v16;
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( *(_DWORD *)(v16 + 36) == -1 )
  {
    EnclaveReturnFrame = -1073741670;
    goto LABEL_90;
  }
LABEL_61:
  --CurrentThread->SpecialApcDisable;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  v34 = *(_DWORD *)(v16 + 32);
  v10 = (char *)v33;
  EnclaveReturnFrame = VslCallEnclave((__int64)v33, &v34, &v44, ExitStatus, &v35, &v39, &v38, &ExitStatus, &v31);
  v36 = EnclaveReturnFrame;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v31 )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
  if ( EnclaveReturnFrame < 0 )
  {
    if ( !v45 )
      goto LABEL_85;
    v44 = 0LL;
  }
  v25 = v44;
  if ( !v44 )
  {
    *v47 = v35;
    if ( v45 )
    {
      if ( (*(_DWORD *)(v16 + 36))-- == 1 )
      {
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
        RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v16);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
        KeAbPostRelease((ULONG_PTR)(v10 + 112));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v10 = (char *)v33;
      }
    }
    goto LABEL_85;
  }
  --CurrentThread->SpecialApcDisable;
  EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                         v42,
                         v23,
                         v24,
                         *((_QWORD *)v10 + 1),
                         v25,
                         ExitStatus,
                         v39,
                         v38,
                         v35,
                         (CurrentThread->MiscFlags & 0x100000) != 0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v45 )
    goto LABEL_85;
  v26 = *(_DWORD *)(v16 + 36);
  if ( v26 )
    goto LABEL_79;
  *(_DWORD *)(v16 + 32) = v34;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
  v27 = (_QWORD *)*v40;
  v28 = 0;
  v32 = 0;
  if ( !v27 )
    goto LABEL_76;
  while ( (int)MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, (__int64)v27) >= 0 )
  {
    v29 = (_QWORD *)v27[1];
    if ( !v29 )
    {
      v28 = 1;
      v32 = 1;
      goto LABEL_76;
    }
LABEL_74:
    v27 = v29;
  }
  v29 = (_QWORD *)*v27;
  if ( *v27 )
    goto LABEL_74;
  v28 = 0;
  v32 = 0;
LABEL_76:
  RtlAvlInsertNodeEx(v40, (unsigned __int64)v27, v28, (_QWORD *)v16);
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v26 = *(_DWORD *)(v16 + 36);
  v10 = (char *)v33;
LABEL_79:
  *(_DWORD *)(v16 + 36) = v26 + 1;
LABEL_85:
  if ( !v10[76] && !*(_DWORD *)(v16 + 36) )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    *(_QWORD *)v16 = *((_QWORD *)v10 + 16);
    *((_QWORD *)v10 + 16) = v16;
    PspReleaseEnclaveThread(v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_90;
  }
LABEL_91:
  PsDereferenceVsmEnclave(v10);
  return (unsigned int)EnclaveReturnFrame;
}
