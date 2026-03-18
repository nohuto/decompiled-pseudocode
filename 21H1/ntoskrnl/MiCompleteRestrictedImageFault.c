/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x1402B4EE0
 * Callers:
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     PfSnReferenceProcessTrace @ 0x1402B6100 (PfSnReferenceProcessTrace.c)
 *     MiGetSessionIdForVa @ 0x1402B6250 (MiGetSessionIdForVa.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnLogPageFaultCommon @ 0x1402B632C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x140324330 (PfSnCheckLoggingForThread.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompleteRestrictedImageFault(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 *v5; // r12
  unsigned __int64 v6; // r13
  unsigned int v8; // edi
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r9
  ULONG_PTR v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  unsigned int SessionIdForVa; // eax
  int v23; // eax
  struct _KTHREAD *CurrentThread; // r14
  int v25; // r12d
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v27; // rdi
  int v28; // eax
  int v29; // r8d
  unsigned __int64 v30; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 ValidPte; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int16 v38; // r8
  __int16 v39; // ax
  __int16 v40; // ax
  __int64 v41; // r8
  int v42; // edx
  char v43; // r8
  char v44; // cl
  int Wsle; // eax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 UsedPtesHandle; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v54; // [rsp+40h] [rbp-88h]
  unsigned __int64 v55; // [rsp+48h] [rbp-80h] BYREF
  __int64 *v56; // [rsp+50h] [rbp-78h]
  __int64 v57; // [rsp+58h] [rbp-70h]
  unsigned __int64 v58; // [rsp+60h] [rbp-68h]
  __int64 v59; // [rsp+68h] [rbp-60h]
  __int64 v60; // [rsp+70h] [rbp-58h]
  int v61; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v62; // [rsp+D8h] [rbp+10h]
  __int64 *v63; // [rsp+E0h] [rbp+18h]
  unsigned int v64; // [rsp+E8h] [rbp+20h]

  v64 = a4;
  v63 = a3;
  v62 = a2;
  v4 = a4;
  v59 = *(_QWORD *)a1;
  v5 = a3;
  v6 = a2;
  v8 = 1;
  v9 = 48 * *a3 - 0x58000000000LL;
  v10 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v11 = *(_QWORD *)(v9 + 16);
  v58 = v10;
  if ( qword_140C4DE80 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140C4DE80;
  v12 = *(_QWORD *)(v11 >> 16);
  v60 = v12;
  if ( PfSnNumActiveTraces )
  {
    v13 = MiReferenceControlAreaFile(v12);
    v10 = v58;
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  v54 = v14;
  v15 = 0;
  if ( v4 )
  {
    v56 = v5;
    while ( 1 )
    {
      v16 = *v5;
      v57 = v16;
      v17 = 48 * v16 - 0x58000000000LL;
      v18 = *(_QWORD *)(v17 + 16);
      v55 = v18;
      v19 = v18;
      if ( qword_140C4DE80 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C4DE80;
      v20 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
      v21 = v6 + 8 * ((__int64)(v20 - v10) >> 3);
      if ( !v14 )
        goto LABEL_19;
      SessionIdForVa = MiGetSessionIdForVa((__int64)(v21 << 25) >> 16, v10, 511LL);
      v23 = MiStartingOffset((__int64 *)(v19 >> 16), v20, SessionIdForVa);
      CurrentThread = KeGetCurrentThread();
      v25 = v23;
      v26 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
      v27 = (struct _EX_RUNDOWN_REF *)v26;
      if ( !v26 )
        break;
      v28 = PfSnCheckLoggingForThread(CurrentThread, v26, 1LL);
      v30 = v54;
      if ( v28 )
        PfSnLogPageFaultCommon((_DWORD)v27, v54, *(_QWORD *)(v54 + 24), v25, v29);
      ExReleaseRundownProtection_0(v27 + 45);
      v16 = v57;
      v5 = v56;
LABEL_20:
      if ( (unsigned __int64)&v55 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v55 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v55 >> 3) & 0x1FF));
          v33 = v18 | 0x20;
          if ( (v32 & 0x20) == 0 )
            v33 = v18;
          v18 = v33;
          if ( (v32 & 0x42) != 0 )
            v18 = v33 | 0x42;
        }
      }
      ValidPte = MiMakeValidPte(v21, v16, (v18 >> 5) & 0x1F, v16);
      v35 = *(unsigned __int8 *)(a1 + 13);
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
          LOBYTE(v35) = v35 & 0x10;
          if ( (unsigned int)MI_PFN_IS_PROTO(v17, v35, 511LL) )
          {
            if ( !(_BYTE)v35 )
              goto LABEL_41;
          }
          else if ( (_BYTE)v35 )
          {
            goto LABEL_41;
          }
        }
        MiEmptyDeferredWorkingSetEntries(a1);
        v38 = 511;
      }
LABEL_41:
      v39 = *(_WORD *)(a1 + 10);
      v8 = 1;
      if ( v39 )
      {
        *(_WORD *)(a1 + 10) = v39 + 1;
      }
      else
      {
        *(_WORD *)(a1 + 10) = 1;
        v40 = v38 & ((unsigned int)v21 >> 3);
        v41 = *(unsigned __int8 *)(a1 + 13);
        *(_WORD *)(a1 + 8) = v40;
        v42 = MI_PFN_IS_PROTO(v17, v35, v41);
        v44 = v43 & 0xEF;
        if ( !v42 )
          v44 = v43 | 0x10;
        *(_BYTE *)(a1 + 13) = v44;
      }
LABEL_47:
      Wsle = MiAllocateWsle(v59, v21, v17, 0, v36, 12, 0LL);
      v4 = v64;
      v6 = v62;
      if ( !Wsle )
      {
        v5 = v63;
        v8 = 0;
        goto LABEL_52;
      }
      v10 = v58;
      ++v5;
      ++v15;
      v56 = v5;
      if ( v15 >= v64 )
      {
        v5 = v63;
        goto LABEL_52;
      }
      v14 = v54;
    }
    v16 = v57;
    v5 = v56;
LABEL_19:
    v30 = v54;
    goto LABEL_20;
  }
  v30 = v14;
LABEL_52:
  if ( v15 )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    v47 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
    v61 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v61, v46, v48, v49);
      while ( *(__int64 *)(v47 + 24) < 0 );
    }
    *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + v15)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v6 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v15, v51, v52);
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  for ( ; v15 != v4; ++v15 )
    MiLockAndDecrementShareCount(48 * v5[v15] - 0x58000000000LL, 0LL);
  if ( v30 )
    MiDereferenceControlAreaFile(v60, v30);
  return v8;
}
