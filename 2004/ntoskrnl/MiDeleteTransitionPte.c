/*
 * XREFs of MiDeleteTransitionPte @ 0x1402419A0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x140253830 (MiTryDeleteTransitionPte.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x14035875C (MiInvalidateCollidedIos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  ULONG_PTR v6; // r9
  __int64 v7; // rdx
  ULONG_PTR v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  char v26; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  int v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h]
  unsigned __int8 v37; // [rsp+90h] [rbp+18h]
  int v38; // [rsp+98h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v28 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
      v29 = v6 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = *(_QWORD *)BugCheckParameter2;
      v6 = v29;
      if ( (v28 & 0x42) != 0 )
        v6 = v29 | 0x42;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v11 = 0LL;
  v36 = 0LL;
  v12 = 0LL;
  if ( (v9 & 0x400) != 0 )
  {
    if ( qword_140C4DD40 && (v9 & 0x10) == 0 )
      v9 &= ~qword_140C4DD40;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v9 >> 16), v9 >> 16, a3, 2LL);
    v13 = *(_QWORD *)(a2 + 16);
    v14 = -2049LL;
    if ( (v13 & 0x400) == 0 )
      v14 = -9LL;
    v15 = v14 & *(_QWORD *)(a2 + 16);
    if ( (v13 & 0x400) == 0 )
      v15 &= 0xFFFFFFFFFFFFFFF9uLL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v26 = *(_BYTE *)(a2 + 34);
    if ( (v26 & 0x20) != 0 && (v26 & 8) == 0 )
    {
      v11 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v11 + 16) == v11 + 16 )
        v11 = 0LL;
    }
    v16 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v12 = MiCapturePageFileInfoInline(a2 + 16, 0LL);
      v36 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
    }
    v16 = 4;
  }
  if ( !MiPteInShadowRange(BugCheckParameter2) )
    goto LABEL_16;
  if ( !(unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
LABEL_16:
    *(_QWORD *)BugCheckParameter2 = v15;
    goto LABEL_17;
  }
  if ( !HIBYTE(word_140C4DE08) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v15;
  MiWritePteShadow(BugCheckParameter2, v15);
LABEL_17:
  if ( v16 == 4 )
    MiInsertPageInFreeOrZeroedList(v8, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v21 = 48 * v10;
  v22 = 48 * v10 - 0x58000000000LL;
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v35, v17);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  v23 = *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, v21 / 48, *(_BYTE *)(v22 + 34) & 7, *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v22 + 24) ^= ((v23 - 1) ^ *(_QWORD *)(v22 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v23 == 1 )
    MiPfnShareCountIsZero(v21 - 0x58000000000LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v24 = v37;
  if ( v37 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v34 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v24);
  }
  if ( v11 )
    MiInvalidateCollidedIos(v11);
  if ( v12 && v38 )
    MiReleasePageFileInfo(v36, v12, (_BYTE)v24 == 17);
  return v16;
}
