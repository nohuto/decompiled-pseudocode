/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x140327DF0
 * Callers:
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     PfSnCheckLoggingForThread @ 0x1402A3B5C (PfSnCheckLoggingForThread.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     PfSnLogPageFaultCommon @ 0x140325D9C (PfSnLogPageFaultCommon.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     PfSnReferenceProcessTrace @ 0x140329010 (PfSnReferenceProcessTrace.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x140329200 (MiGetSessionIdForVa.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r12
  unsigned __int64 v6; // r13
  unsigned int v8; // edi
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r9
  _QWORD *v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  unsigned int SessionIdForVa; // eax
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdi
  int v28; // eax
  char v29; // r8
  __int64 v30; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 ValidPte; // rax
  char v35; // dl
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int16 v38; // r8
  char v39; // dl
  __int16 v40; // ax
  int v41; // edx
  char v42; // r8
  char v43; // cl
  int Wsle; // eax
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // [rsp+40h] [rbp-88h]
  unsigned __int64 v54; // [rsp+48h] [rbp-80h] BYREF
  _QWORD *v55; // [rsp+50h] [rbp-78h]
  __int64 v56; // [rsp+58h] [rbp-70h]
  unsigned __int64 v57; // [rsp+60h] [rbp-68h]
  __int64 v58; // [rsp+68h] [rbp-60h]
  __int64 v59; // [rsp+70h] [rbp-58h]
  int v60; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v61; // [rsp+D8h] [rbp+10h]
  _QWORD *v62; // [rsp+E0h] [rbp+18h]
  unsigned int v63; // [rsp+E8h] [rbp+20h]

  v63 = a4;
  v62 = a3;
  v61 = a2;
  v4 = a4;
  v58 = *(_QWORD *)a1;
  v5 = a3;
  v6 = a2;
  v8 = 1;
  v9 = 48LL * *a3 - 0x58000000000LL;
  v10 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v11 = *(_QWORD *)(v9 + 16);
  v57 = v10;
  if ( qword_140C4DF80 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140C4DF80;
  v12 = *(_QWORD *)(v11 >> 16);
  v59 = v12;
  if ( PfSnNumActiveTraces )
  {
    v13 = MiReferenceControlAreaFile(v12);
    v10 = v57;
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  v53 = v14;
  v15 = 0;
  if ( v4 )
  {
    v55 = v5;
    while ( 1 )
    {
      v16 = *v5;
      v56 = v16;
      v17 = (_QWORD *)(48 * v16 - 0x58000000000LL);
      v18 = v17[2];
      v54 = v18;
      v19 = v18;
      if ( qword_140C4DF80 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C4DF80;
      v20 = v17[1] | 0x8000000000000000uLL;
      v21 = v6 + 8 * ((__int64)(v20 - v10) >> 3);
      if ( !v14 )
        goto LABEL_19;
      SessionIdForVa = MiGetSessionIdForVa((__int64)(v21 << 25) >> 16);
      v23 = MiStartingOffset(v19 >> 16, v20, SessionIdForVa);
      CurrentThread = KeGetCurrentThread();
      v25 = v23;
      v26 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
      v27 = (struct _EX_RUNDOWN_REF *)v26;
      if ( !v26 )
        break;
      v28 = PfSnCheckLoggingForThread((__int64)CurrentThread, v26, 1);
      v30 = v53;
      if ( v28 )
        PfSnLogPageFaultCommon((__int64)v27, v53, *(_QWORD *)(v53 + 24), v25, v29);
      ExReleaseRundownProtection(v27 + 45);
      v16 = v56;
      v5 = v55;
LABEL_20:
      if ( (unsigned __int64)&v54 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v54 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v54 >> 3) & 0x1FF));
          v33 = v18 | 0x20;
          if ( (v32 & 0x20) == 0 )
            v33 = v18;
          v18 = v33;
          if ( (v32 & 0x42) != 0 )
            v18 = v33 | 0x42;
        }
      }
      ValidPte = MiMakeValidPte(v21, v16, (v18 >> 5) & 0x1F);
      v35 = *(_BYTE *)(a1 + 13);
      v36 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
      if ( (v35 & 5) != 4 || (v35 & 2) != 0 )
      {
        v8 = 1;
        goto LABEL_47;
      }
      v37 = *(unsigned __int16 *)(a1 + 10);
      v38 = 511;
      if ( (_WORD)v37 )
      {
        if ( v37 + *(unsigned __int16 *)(a1 + 8) == (((unsigned int)v21 >> 3) & 0x1FF) )
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(v17) )
          {
            if ( !v39 )
              goto LABEL_41;
          }
          else if ( v39 )
          {
            goto LABEL_41;
          }
        }
        MiEmptyDeferredWorkingSetEntries(a1);
        v38 = 511;
      }
LABEL_41:
      v40 = *(_WORD *)(a1 + 10);
      v8 = 1;
      if ( v40 )
      {
        *(_WORD *)(a1 + 10) = v40 + 1;
      }
      else
      {
        *(_WORD *)(a1 + 10) = 1;
        *(_WORD *)(a1 + 8) = v38 & ((unsigned int)v21 >> 3);
        v41 = MI_PFN_IS_PROTO(v17);
        v43 = v42 & 0xEF;
        if ( !v41 )
          v43 = v42 | 0x10;
        *(_BYTE *)(a1 + 13) = v43;
      }
LABEL_47:
      Wsle = MiAllocateWsle(v58, v21, v17, 0, v36, 12, 0LL);
      v4 = v63;
      v6 = v61;
      if ( !Wsle )
      {
        v5 = v62;
        v8 = 0;
        goto LABEL_52;
      }
      v10 = v57;
      ++v5;
      ++v15;
      v55 = v5;
      if ( v15 >= v63 )
      {
        v5 = v62;
        goto LABEL_52;
      }
      v14 = v53;
    }
    v16 = v56;
    v5 = v55;
LABEL_19:
    v30 = v53;
    goto LABEL_20;
  }
  v30 = v14;
LABEL_52:
  if ( v15 )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    v46 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
    v60 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60, v45, v47, v48);
      while ( *(__int64 *)(v46 + 24) < 0 );
    }
    *(_QWORD *)(v46 + 24) ^= (*(_QWORD *)(v46 + 24) ^ (*(_QWORD *)(v46 + 24) + v15)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v6 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v15, v50, v51);
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  for ( ; v15 != v4; ++v15 )
    MiLockAndDecrementShareCount(48LL * v5[v15] - 0x58000000000LL, 0);
  if ( v30 )
    MiDereferenceControlAreaFile(v59, v30);
  return v8;
}
