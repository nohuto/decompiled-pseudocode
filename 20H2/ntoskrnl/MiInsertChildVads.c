/*
 * XREFs of MiInsertChildVads @ 0x1408DBFC0
 * Callers:
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     MiGetWsAndInsertVad @ 0x14022DCA0 (MiGetWsAndInsertVad.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x140543788 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rbp
  int *v6; // rsi
  int inserted; // eax
  int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  void *v11; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rcx
  bool v14; // zf
  _OWORD v16[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v16, 0, sizeof(v16));
  KiStackAttachProcess(a1, 0, (__int64)v16);
  v5 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = (int *)(a2 + 48);
      if ( (*(_DWORD *)(a2 + 48) & 0x100000) == 0 )
      {
        v4 = MiUpControlAreaRefs(a2, 1);
        if ( v4 < 0 )
          break;
      }
      v4 = MiCommitPageTableRangesForVad(a2);
      if ( v4 < 0 )
      {
        v14 = (*v6 & 0x100000) == 0;
LABEL_22:
        if ( v14 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v8 = *v6;
      v4 = inserted;
      if ( inserted < 0 )
      {
        v14 = (v8 & 0x100000) == 0;
        goto LABEL_22;
      }
      a2 = *(_QWORD *)a2;
      if ( (v8 & 0xC0000) == 0x40000 )
      {
        v9 = a1[1].ActiveProcessorsPadding[8];
        if ( (v8 & 0x100000) != 0 )
          ++*(_QWORD *)(v9 + 424);
        else
          ++*(_QWORD *)(v9 + 432);
      }
      v10 = *v6;
      if ( (*v6 & 0x100000) == 0 )
      {
        v11 = *(void **)(v5 + 128);
        if ( v11 )
        {
          ObfReferenceObject(v11);
          v10 = *v6;
        }
        if ( (v10 & 0x100000) == 0 && *(__int64 *)(v5 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C810, 0LL);
          v13 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
          ++*(_DWORD *)(v13 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C810);
          KeAbPostRelease((ULONG_PTR)&qword_140C4C810);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(v5 + 16) = -2LL;
      MiGetWsAndInsertVad(v5);
      v5 = a2;
      if ( !a2 )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads((_QWORD *)a2, 1);
  }
LABEL_25:
  KiUnstackDetachProcess((__int64)v16, 0);
  return (unsigned int)v4;
}
