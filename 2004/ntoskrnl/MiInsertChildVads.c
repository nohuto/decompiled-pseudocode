/*
 * XREFs of MiInsertChildVads @ 0x1408D6180
 * Callers:
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiGetWsAndInsertVad @ 0x140249720 (MiGetWsAndInsertVad.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x14053FDB8 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rbp
  int *v6; // rsi
  __int64 v7; // r8
  _DWORD *v8; // r9
  int inserted; // eax
  int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  void *v13; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rcx
  bool v16; // zf
  _OWORD v18[3]; // [rsp+20h] [rbp-68h] BYREF

  v4 = 0;
  memset(v18, 0, sizeof(v18));
  KiStackAttachProcess(a1, 0LL, (__int64)v18);
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
        v16 = (*v6 & 0x100000) == 0;
LABEL_22:
        if ( v16 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v10 = *v6;
      v4 = inserted;
      if ( inserted < 0 )
      {
        v16 = (v10 & 0x100000) == 0;
        goto LABEL_22;
      }
      a2 = *(_QWORD *)a2;
      if ( (v10 & 0xC0000) == 0x40000 )
      {
        v11 = a1[1].ActiveProcessorsPadding[8];
        if ( (v10 & 0x100000) != 0 )
          ++*(_QWORD *)(v11 + 424);
        else
          ++*(_QWORD *)(v11 + 432);
      }
      v12 = *v6;
      if ( (*v6 & 0x100000) == 0 )
      {
        v13 = *(void **)(v5 + 128);
        if ( v13 )
        {
          ObfReferenceObject(v13);
          v12 = *v6;
        }
        if ( (v12 & 0x100000) == 0 && *(__int64 *)(v5 + 120) < 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C790, 0LL);
          v15 = *(_QWORD *)(***(_QWORD ***)(v5 + 72) + 32LL);
          ++*(_DWORD *)(v15 + 8);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C790);
          KeAbPostRelease((ULONG_PTR)&qword_140C4C790);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(v5 + 16) = -2LL;
      MiGetWsAndInsertVad(v5);
      v5 = a2;
      if ( !a2 )
        goto LABEL_25;
    }
    MiDeletePartialCloneVads((_QWORD *)a2, 1, v7, v8);
  }
LABEL_25:
  KiUnstackDetachProcess((__int64)v18, 0LL);
  return (unsigned int)v4;
}
