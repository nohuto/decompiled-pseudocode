/*
 * XREFs of MiDeleteTransitionPte @ 0x1402C3100
 * Callers:
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x140226AE0 (MiInvalidateCollidedIos.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x1405AD6C8 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // rbp
  __int64 v8; // r12
  __int16 v9; // r13
  unsigned int v10; // r15d
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  char v24; // al
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // [rsp+30h] [rbp-58h]
  int v35; // [rsp+90h] [rbp+8h] BYREF
  __int64 v36; // [rsp+98h] [rbp+10h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+18h]
  int v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
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
      v26 = *((_QWORD *)&Flink->Flink + ((BugCheckParameter2 >> 3) & 0x1FF));
      if ( (v26 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v26 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v8 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFLL;
  v9 = *(_WORD *)(a2 + 32);
  v10 = 0;
  v34 = 0LL;
  v11 = 0LL;
  if ( !v9 )
    MiUnlinkPageFromListEx(a2);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = (unsigned __int64 *)(a2 + 16);
  if ( (v12 & 0x400) != 0 )
  {
    if ( qword_140C50780 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140C50780;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v12 >> 16), v12 >> 16, a3, 2);
    v12 = *(_QWORD *)(a2 + 16);
    v14 = v12 & 0xFFFFFFFFFFFFF7FFuLL;
    if ( (v12 & 0x400) == 0 )
      v14 = v12 & 0xFFFFFFFFFFFFFFF1uLL;
    v13 = (unsigned __int64 *)(a2 + 16);
  }
  else
  {
    v14 = 0LL;
  }
  v36 = 0LL;
  if ( v9 )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v24 = *(_BYTE *)(a2 + 34);
    if ( (v24 & 0x20) != 0 && (v24 & 8) == 0 )
    {
      v27 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v27 + 16) == v27 + 16 )
        v27 = 0LL;
      v36 = v27;
    }
    v15 = 3;
  }
  else
  {
    if ( (v12 & 0x400) == 0 )
    {
      v11 = MiCapturePageFileInfoInline(v13, 0, 1);
      v34 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    }
    v15 = 4;
  }
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x35u) )
  {
    v28 = *(_BYTE *)(a2 + 35);
    if ( (v28 & 0x10) == 0 )
      *(_BYTE *)(a2 + 35) = v28 | 0x10;
  }
  if ( !(unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    goto LABEL_19;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_19:
    *(_QWORD *)BugCheckParameter2 = v14;
    goto LABEL_20;
  }
  if ( !HIBYTE(word_140C51864) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v14;
  MiWritePteShadow(BugCheckParameter2, v14);
LABEL_20:
  if ( v15 == 4 )
    MiInsertPageInFreeOrZeroedList(v7);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 48 * v8 - 0x220000000000LL;
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v35);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
    MiBadShareCount(v19, v16, v17, v18);
  v20 = *(_QWORD *)(v19 + 24);
  v21 = (v20 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v19 + 24) = v20 ^ (v21 ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v20 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v19, v21);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v22 = v37;
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
          v32 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
  }
  if ( v36 )
    MiInvalidateCollidedIos(v36);
  if ( v11 && v38 )
  {
    if ( (_BYTE)v22 == 17 )
      v10 = 1;
    MiReleasePageFileInfo(v34, v11, v10);
  }
  return v15;
}
