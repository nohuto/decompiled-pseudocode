/*
 * XREFs of MiDeleteTransitionPte @ 0x1402DD080
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiPurgeFileOnlyPfn @ 0x140541FB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInvalidateCollidedIos @ 0x140248AEC (MiInvalidateCollidedIos.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  ULONG_PTR v6; // r9
  __int64 v7; // rdx
  ULONG_PTR v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  char v22; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+80h] [rbp+8h] BYREF
  __int64 v32; // [rsp+88h] [rbp+10h]
  unsigned __int8 v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v33 = a3;
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
      v24 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
      v25 = v6 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = *(_QWORD *)BugCheckParameter2;
      v6 = v25;
      if ( (v24 & 0x42) != 0 )
        v6 = v25 | 0x42;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v11 = 0LL;
  v32 = 0LL;
  v12 = 0LL;
  if ( (v9 & 0x400) != 0 )
  {
    if ( qword_140C4DF80 && (v9 & 0x10) == 0 )
      v9 &= ~qword_140C4DF80;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v9 >> 16), v9 >> 16, a3, 2);
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
    v22 = *(_BYTE *)(a2 + 34);
    if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 )
    {
      v11 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v11 + 16) == v11 + 16 )
        v11 = 0LL;
    }
    v16 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2, 0);
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
    {
      v12 = MiCapturePageFileInfoInline((unsigned __int64 *)(a2 + 16), 0, 1);
      v32 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
    }
    v16 = 4;
  }
  if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    goto LABEL_16;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v15 & 1) != 0 )
      v15 |= 0x8000000000000000uLL;
LABEL_16:
    *(_QWORD *)BugCheckParameter2 = v15;
    goto LABEL_17;
  }
  if ( !HIBYTE(word_140C4E048) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v15;
  MiWritePteShadow(BugCheckParameter2, v15);
LABEL_17:
  if ( v16 == 4 )
    MiInsertPageInFreeOrZeroedList(v8, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = 48 * v10;
  v18 = 48 * v10 - 0x58000000000LL;
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  v19 = *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, v17 / 48, *(_BYTE *)(v18 + 34) & 7, *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v18 + 24) ^= ((v19 - 1) ^ *(_QWORD *)(v18 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v19 == 1 )
    MiPfnShareCountIsZero(v17 - 0x58000000000LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = v33;
  if ( v33 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v33 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v33 + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
  }
  if ( v11 )
    MiInvalidateCollidedIos(v11);
  if ( v12 && v34 )
    MiReleasePageFileInfo(v32, v12, (_BYTE)v20 == 17);
  return v16;
}
