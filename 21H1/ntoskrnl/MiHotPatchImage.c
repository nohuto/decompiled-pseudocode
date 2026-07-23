/*
 * XREFs of MiHotPatchImage @ 0x1408C59E4
 * Callers:
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1402A4694 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x1402A5470 (MiUnlockVadShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     MiDeleteHotPatchEntry @ 0x1408C5018 (MiDeleteHotPatchEntry.c)
 *     MiDeleteImageHotPatchState @ 0x1408C51CC (MiDeleteImageHotPatchState.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C53A0 (MiFindProcessImageHotPatchRecord.c)
 *     MiGetHotPatchEntry @ 0x1408C569C (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408C58A8 (MiGetProcessHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x1408C6E08 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C70F0 (MiLogHotPatchOperationStatus.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 */

__int64 __fastcall MiHotPatchImage(__int64 a1, __int64 a2, _RTL_BALANCED_NODE *a3, int a4, int a5, char a6, int a7)
{
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 Process; // rbx
  unsigned int v11; // edi
  int v12; // r14d
  _QWORD *ProcessHotPatchContext; // r13
  int v14; // esi
  int ProcessImageHotPatchRecord; // eax
  int v16; // edi
  unsigned __int64 HotPatchEntry; // rax
  int v18; // r8d
  unsigned __int64 v19; // r14
  int v20; // ebx
  UNICODE_STRING v21; // xmm1
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  __int64 v28; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  int v30; // [rsp+78h] [rbp-31h]
  __int64 v31; // [rsp+80h] [rbp-29h] BYREF
  struct _KTHREAD *v32; // [rsp+88h] [rbp-21h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  PEX_RUNDOWN_REF RunRef; // [rsp+98h] [rbp-11h]
  UNICODE_STRING v35; // [rsp+A8h] [rbp-1h]
  __int64 v36; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v37; // [rsp+100h] [rbp+57h]
  int v38; // [rsp+110h] [rbp+67h]

  v38 = a4;
  v37 = a2;
  v36 = a1;
  v28 = 0LL;
  v31 = 0LL;
  v7 = a4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v33 = Process;
  RunRef = (PEX_RUNDOWN_REF)(Process + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Process + 1112)) )
  {
    v12 = a7;
    ProcessHotPatchContext = 0LL;
    v14 = 1;
    while ( 1 )
    {
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                     (PEPROCESS)Process,
                                     v7,
                                     a5,
                                     &DestinationString,
                                     &v28);
      LODWORD(v36) = ProcessImageHotPatchRecord;
      v11 = ProcessImageHotPatchRecord;
      if ( ProcessImageHotPatchRecord >= 0 )
      {
        v16 = v28;
      }
      else
      {
        if ( ProcessImageHotPatchRecord != -1073741275 )
          goto LABEL_27;
        if ( v12 || !MiGetProcessHotPatchContext(Process, 0) )
        {
          v11 = 1075380276;
LABEL_26:
          v14 = 0;
          goto LABEL_27;
        }
        v16 = 0;
        LODWORD(v28) = 0;
      }
      if ( !ProcessHotPatchContext )
      {
        ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 1);
        if ( !ProcessHotPatchContext )
        {
          v11 = -1073741670;
          goto LABEL_27;
        }
      }
      HotPatchEntry = MiGetHotPatchEntry((PRTL_RB_TREE)ProcessHotPatchContext, a3, v16, (int *)&v36);
      v19 = HotPatchEntry;
      if ( !HotPatchEntry )
        break;
      HIDWORD(v28) = 1;
      v20 = MiPerformImageHotPatch(
              (_DWORD)ProcessHotPatchContext,
              HotPatchEntry,
              v18,
              v37,
              (__int64)a3,
              (__int64)&DestinationString,
              v38,
              a5,
              a6,
              (__int64)&v31);
      LODWORD(v36) = v20;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      MiLogHotPatchOperation(v19, v38, a5, v16, (__int64)&v31, (__int64)&DestinationString, v20);
      *(_DWORD *)(v19 + 92) &= ~1u;
      v30 = *(_DWORD *)(v19 + 92);
      if ( v20 < 0 )
      {
        LOBYTE(v22) = v30;
      }
      else
      {
        v21 = *(UNICODE_STRING *)(v19 + 64);
        *(_DWORD *)(v19 + 48) = v38;
        *(_DWORD *)(v19 + 52) = a5;
        *(_QWORD *)(v19 + 80) = v31;
        *(_DWORD *)(v19 + 88) = v16;
        *(UNICODE_STRING *)(v19 + 64) = DestinationString;
        DestinationString = v21;
        v22 = *(_DWORD *)(v19 + 92);
        v35 = v21;
      }
      if ( (_InterlockedExchangeAdd64(ProcessHotPatchContext + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(ProcessHotPatchContext + 2);
      KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
      CurrentThread = v32;
      KiLeaveGuardedRegionUnsafe((__int64)v32, v23, v24, v25);
      v11 = v36;
      if ( (int)v36 < 0 )
        goto LABEL_26;
      if ( (v22 & 2) != 0 )
      {
        MiDeleteHotPatchEntry((UNICODE_STRING *)v19);
        HIDWORD(v28) = 0;
        goto LABEL_26;
      }
      v12 = 0;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, 0LL);
      Process = v33;
      v7 = v38;
    }
    v11 = v36;
    if ( (int)v36 >= 0 && (_DWORD)v36 != 259 )
      goto LABEL_26;
LABEL_27:
    if ( HIDWORD(v28) )
    {
      MiLockVadShared((__int64)CurrentThread, (__int64)a3);
      v26 = MiVadDeleted((__int64)a3);
      MiUnlockVadShared((__int64)CurrentThread, (__int64)a3);
      if ( v26 )
        MiDeleteImageHotPatchState((__int64)a3);
    }
    if ( v14 )
      MiLogHotPatchOperationStatus(v38, a5, (unsigned int)&DestinationString, v11, 0);
    ExReleaseRundownProtection_0(RunRef);
  }
  else
  {
    v11 = -1073741558;
  }
  RtlFreeAnsiString(&DestinationString);
  return v11;
}
