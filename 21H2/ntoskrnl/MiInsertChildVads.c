/*
 * XREFs of MiInsertChildVads @ 0x140980DD8
 * Callers:
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiInsertVad @ 0x14030E390 (MiInsertVad.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiCommitPageTableRangesForVad @ 0x1405A44FC (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1407B88C0 (MiInsertVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 */

__int64 __fastcall MiInsertChildVads(_KPROCESS *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int inserted; // edi
  __int64 v7; // rbp
  const signed __int32 *v8; // rsi
  signed __int32 v9; // eax
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rcx
  bool v13; // zf
  bool v14; // cf
  _OWORD v16[3]; // [rsp+20h] [rbp-68h] BYREF

  inserted = 0;
  memset(v16, 0, sizeof(v16));
  KiStackAttachProcess(a1, 0LL, (__int64)v16, a4);
  v7 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = (const signed __int32 *)(a2 + 48);
      if ( !_bittest((const signed __int32 *)(a2 + 48), 0x15u) )
      {
        inserted = MiUpControlAreaRefs(a2, 1);
        if ( inserted < 0 )
          break;
      }
      inserted = MiCommitPageTableRangesForVad(a2);
      if ( inserted < 0 )
      {
        v14 = _bittest(v8, 0x15u);
LABEL_20:
        if ( !v14 )
          MiUpControlAreaRefs(a2, 0);
        break;
      }
      inserted = MiInsertVadCharges(a2, a1);
      v9 = *v8;
      if ( inserted < 0 )
      {
        v14 = (v9 & 0x200000) != 0;
        goto LABEL_20;
      }
      a2 = *(_QWORD *)a2;
      if ( (v9 & 0x200000) == 0 )
      {
        v10 = *(void **)(v7 + 128);
        if ( v10 )
        {
          ObfReferenceObject(v10);
          v9 = *v8;
        }
      }
      if ( (v9 & 0x200000) == 0 && *(__int64 *)(v7 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
        v12 = *(_QWORD *)(***(_QWORD ***)(v7 + 72) + 32LL);
        ++*(_DWORD *)(v12 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
        v13 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v13
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      *(_QWORD *)(v7 + 16) = -2LL;
      MiInsertVad(v7, (__int64)a1, 0);
      v7 = a2;
      if ( !a2 )
        goto LABEL_23;
    }
    MiDeletePartialCloneVads((_QWORD *)a2);
  }
LABEL_23:
  KiUnstackDetachProcess((__int64)v16, 0LL);
  return (unsigned int)inserted;
}
