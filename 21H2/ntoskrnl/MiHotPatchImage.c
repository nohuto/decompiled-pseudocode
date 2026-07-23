/*
 * XREFs of MiHotPatchImage @ 0x1408CA494
 * Callers:
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE664 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MiUnlockVadShared @ 0x14027C67C (MiUnlockVadShared.c)
 *     MiVadDeleted @ 0x14027C8A0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14027C8B4 (MiLockVadShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     MiDeleteHotPatchEntry @ 0x1408C9AC8 (MiDeleteHotPatchEntry.c)
 *     MiDeleteImageHotPatchState @ 0x1408C9C7C (MiDeleteImageHotPatchState.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9E50 (MiFindProcessImageHotPatchRecord.c)
 *     MiGetHotPatchEntry @ 0x1408CA14C (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA358 (MiGetProcessHotPatchContext.c)
 *     MiLogHotPatchOperation @ 0x1408CB8B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CBBA0 (MiLogHotPatchOperationStatus.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
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
  int v23; // ebx
  __int64 v25; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  int v27; // [rsp+78h] [rbp-31h]
  __int64 v28; // [rsp+80h] [rbp-29h] BYREF
  struct _KTHREAD *v29; // [rsp+88h] [rbp-21h]
  __int64 v30; // [rsp+90h] [rbp-19h]
  PEX_RUNDOWN_REF RunRef; // [rsp+98h] [rbp-11h]
  UNICODE_STRING v32; // [rsp+A8h] [rbp-1h]
  __int64 v33; // [rsp+F8h] [rbp+4Fh] BYREF
  __int64 v34; // [rsp+100h] [rbp+57h]
  int v35; // [rsp+110h] [rbp+67h]

  v35 = a4;
  v34 = a2;
  v33 = a1;
  v25 = 0LL;
  v28 = 0LL;
  v7 = a4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  v29 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v30 = Process;
  RunRef = (PEX_RUNDOWN_REF)(Process + 1112);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Process + 1112)) )
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
                                     &v25);
      LODWORD(v33) = ProcessImageHotPatchRecord;
      v11 = ProcessImageHotPatchRecord;
      if ( ProcessImageHotPatchRecord >= 0 )
      {
        v16 = v25;
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
        LODWORD(v25) = 0;
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
      HotPatchEntry = MiGetHotPatchEntry((PRTL_RB_TREE)ProcessHotPatchContext, a3, v16, (int *)&v33);
      v19 = HotPatchEntry;
      if ( !HotPatchEntry )
        break;
      HIDWORD(v25) = 1;
      v20 = MiPerformImageHotPatch(
              (_DWORD)ProcessHotPatchContext,
              HotPatchEntry,
              v18,
              v34,
              (__int64)a3,
              (__int64)&DestinationString,
              v35,
              a5,
              a6,
              (__int64)&v28);
      LODWORD(v33) = v20;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(ProcessHotPatchContext + 2), 0LL);
      MiLogHotPatchOperation(v19, v35, a5, v16, (__int64)&v28, (__int64)&DestinationString, v20);
      *(_DWORD *)(v19 + 92) &= ~1u;
      v27 = *(_DWORD *)(v19 + 92);
      if ( v20 < 0 )
      {
        LOBYTE(v22) = v27;
      }
      else
      {
        v21 = *(UNICODE_STRING *)(v19 + 64);
        *(_DWORD *)(v19 + 48) = v35;
        *(_DWORD *)(v19 + 52) = a5;
        *(_QWORD *)(v19 + 80) = v28;
        *(_DWORD *)(v19 + 88) = v16;
        *(UNICODE_STRING *)(v19 + 64) = DestinationString;
        DestinationString = v21;
        v22 = *(_DWORD *)(v19 + 92);
        v32 = v21;
      }
      if ( (_InterlockedExchangeAdd64(ProcessHotPatchContext + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(ProcessHotPatchContext + 2);
      KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
      CurrentThread = v29;
      KiLeaveGuardedRegionUnsafe((__int64)v29);
      v11 = v33;
      if ( (int)v33 < 0 )
        goto LABEL_26;
      if ( (v22 & 2) != 0 )
      {
        MiDeleteHotPatchEntry((UNICODE_STRING *)v19);
        HIDWORD(v25) = 0;
        goto LABEL_26;
      }
      v12 = 0;
      RtlFreeAnsiString(&DestinationString);
      RtlInitUnicodeString(&DestinationString, 0LL);
      Process = v30;
      v7 = v35;
    }
    v11 = v33;
    if ( (int)v33 >= 0 && (_DWORD)v33 != 259 )
      goto LABEL_26;
LABEL_27:
    if ( HIDWORD(v25) )
    {
      MiLockVadShared((__int64)CurrentThread, (__int64)a3);
      v23 = MiVadDeleted((__int64)a3);
      MiUnlockVadShared((__int64)CurrentThread, (__int64)a3);
      if ( v23 )
        MiDeleteImageHotPatchState((__int64)a3);
    }
    if ( v14 )
      MiLogHotPatchOperationStatus(v35, a5, (unsigned int)&DestinationString, v11, 0);
    ExReleaseRundownProtection(RunRef);
  }
  else
  {
    v11 = -1073741558;
  }
  RtlFreeAnsiString(&DestinationString);
  return v11;
}
