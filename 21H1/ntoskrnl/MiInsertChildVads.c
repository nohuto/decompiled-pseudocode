/*
 * XREFs of MiInsertChildVads @ 0x1408D4E30
 * Callers:
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetWsAndInsertVad @ 0x1402A2750 (MiGetWsAndInsertVad.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x14053F768 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // edi
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rbp
  int *v10; // rsi
  __int64 v11; // r8
  _DWORD *v12; // r9
  int inserted; // eax
  int v14; // ecx
  unsigned __int64 v15; // rax
  int v16; // eax
  void *v17; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  _OWORD v25[3]; // [rsp+20h] [rbp-68h] BYREF

  v6 = 0;
  memset(v25, 0, sizeof(v25));
  KiStackAttachProcess(a1, 0LL, (__int64)v25, a4);
  v9 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = (int *)(a2 + 48);
      if ( (*(_DWORD *)(a2 + 48) & 0x100000) == 0 )
      {
        v6 = MiUpControlAreaRefs(a2, 1);
        if ( v6 < 0 )
          break;
      }
      v6 = MiCommitPageTableRangesForVad(a2);
      if ( v6 < 0 )
      {
        v23 = (*v10 & 0x100000) == 0;
LABEL_22:
        if ( v23 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v14 = *v10;
      v6 = inserted;
      if ( inserted < 0 )
      {
        v23 = (v14 & 0x100000) == 0;
        goto LABEL_22;
      }
      a2 = *(_QWORD *)a2;
      if ( (v14 & 0xC0000) == 0x40000 )
      {
        v15 = a1[1].ActiveProcessorsPadding[8];
        if ( (v14 & 0x100000) != 0 )
          ++*(_QWORD *)(v15 + 424);
        else
          ++*(_QWORD *)(v15 + 432);
      }
      v16 = *v10;
      if ( (*v10 & 0x100000) == 0 )
      {
        v17 = *(void **)(v9 + 128);
        if ( v17 )
        {
          ObfReferenceObject(v17);
          v16 = *v10;
        }
        if ( (v16 & 0x100000) == 0 && *(__int64 *)(v9 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C8D0, 0LL);
          v19 = *(_QWORD *)(***(_QWORD ***)(v9 + 72) + 32LL);
          ++*(_DWORD *)(v19 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C8D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C4C8D0);
          KeAbPostRelease((ULONG_PTR)&qword_140C4C8D0);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
        }
      }
      *(_QWORD *)(v9 + 16) = -2LL;
      MiGetWsAndInsertVad(v9);
      v9 = a2;
      if ( !a2 )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads((_QWORD *)a2, 1, v11, v12);
  }
LABEL_25:
  KiUnstackDetachProcess((__int64)v25, 0LL, v7, v8);
  return (unsigned int)v6;
}
