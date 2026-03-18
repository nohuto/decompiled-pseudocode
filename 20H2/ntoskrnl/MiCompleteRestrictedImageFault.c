/*
 * XREFs of MiCompleteRestrictedImageFault @ 0x1402A07F0
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     PfSnReferenceProcessTrace @ 0x1402A1A10 (PfSnReferenceProcessTrace.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x1402A1C00 (MiGetSessionIdForVa.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     PfSnLogPageFaultCommon @ 0x1402D2898 (PfSnLogPageFaultCommon.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     PfSnCheckLoggingForThread @ 0x140356D4C (PfSnCheckLoggingForThread.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  ULONG_PTR v14; // rcx
  unsigned int v15; // ebp
  __int64 v16; // r9
  _QWORD *v17; // r15
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
  __int64 v45; // rbx
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v48; // [rsp+40h] [rbp-88h]
  unsigned __int64 v49; // [rsp+48h] [rbp-80h] BYREF
  _QWORD *v50; // [rsp+50h] [rbp-78h]
  __int64 v51; // [rsp+58h] [rbp-70h]
  unsigned __int64 v52; // [rsp+60h] [rbp-68h]
  __int64 v53; // [rsp+68h] [rbp-60h]
  __int64 v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v56; // [rsp+D8h] [rbp+10h]
  _QWORD *v57; // [rsp+E0h] [rbp+18h]
  unsigned int v58; // [rsp+E8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v4 = a4;
  v53 = *(_QWORD *)a1;
  v5 = a3;
  v6 = a2;
  v8 = 1;
  v9 = 48LL * *a3 - 0x58000000000LL;
  v10 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
  v11 = *(_QWORD *)(v9 + 16);
  v52 = v10;
  if ( qword_140C4DDC0 && (v11 & 0x10) == 0 )
    v11 &= ~qword_140C4DDC0;
  v12 = *(_QWORD *)(v11 >> 16);
  v54 = v12;
  if ( PfSnNumActiveTraces )
  {
    v13 = MiReferenceControlAreaFile(v12);
    v10 = v52;
    v14 = v13;
  }
  else
  {
    v14 = 0LL;
  }
  v48 = v14;
  v15 = 0;
  if ( v4 )
  {
    v50 = v5;
    while ( 1 )
    {
      v16 = *v5;
      v51 = v16;
      v17 = (_QWORD *)(48 * v16 - 0x58000000000LL);
      v18 = v17[2];
      v49 = v18;
      v19 = v18;
      if ( qword_140C4DDC0 && (v18 & 0x10) == 0 )
        v19 = v18 & ~qword_140C4DDC0;
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
      v28 = PfSnCheckLoggingForThread(CurrentThread, v26, 1LL);
      v30 = v48;
      if ( v28 )
        PfSnLogPageFaultCommon((_DWORD)v27, v48, *(_QWORD *)(v48 + 24), v25, v29);
      ExReleaseRundownProtection_0(v27 + 45);
      v16 = v51;
      v5 = v50;
LABEL_20:
      if ( (unsigned __int64)&v49 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v49 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v32 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v49 >> 3) & 0x1FF));
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
      Wsle = MiAllocateWsle(v53, v21, v17, 0, v36, 12, 0LL);
      v4 = v58;
      v6 = v56;
      if ( !Wsle )
      {
        v5 = v57;
        v8 = 0;
        goto LABEL_52;
      }
      v10 = v52;
      ++v5;
      ++v15;
      v50 = v5;
      if ( v15 >= v58 )
      {
        v5 = v57;
        goto LABEL_52;
      }
      v14 = v48;
    }
    v16 = v51;
    v5 = v50;
LABEL_19:
    v30 = v48;
    goto LABEL_20;
  }
  v30 = v14;
LABEL_52:
  if ( v15 )
  {
    if ( *(_WORD *)(a1 + 10) )
      MiEmptyDeferredWorkingSetEntries(a1);
    v45 = 48 * MiGetContainingPageTable(v6) - 0x58000000000LL;
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(v45 + 24) < 0 );
    }
    *(_QWORD *)(v45 + 24) ^= (*(_QWORD *)(v45 + 24) ^ (*(_QWORD *)(v45 + 24) + v15)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v6 << 25) >> 16, 0x3FFFFFFFFFFFFFFFLL);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v15);
  }
  else
  {
    *(_WORD *)(a1 + 10) = 0;
  }
  for ( ; v15 != v4; ++v15 )
    MiLockAndDecrementShareCount(48LL * v5[v15] - 0x58000000000LL, 0);
  if ( v30 )
    MiDereferenceControlAreaFile(v54, v30);
  return v8;
}
