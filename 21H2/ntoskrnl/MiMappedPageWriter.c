/*
 * XREFs of MiMappedPageWriter @ 0x1403C5160
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     MiAllocateModWriterEntry @ 0x1402820F4 (MiAllocateModWriterEntry.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiFreeModWriterEntry @ 0x14028C978 (MiFreeModWriterEntry.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiDeleteMappedMdls @ 0x14058DC5C (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  void *ModWriterEntry; // rax
  __int64 v14; // rdi
  unsigned __int32 v15; // eax
  _QWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 *v21; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  memset(&Object[1], 0, 0x88uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = (__int64)Object;
  v5 = 0LL;
  v6 = v3;
  v7 = 16LL;
  do
  {
    v8 = v5 + a1 + 6840;
    v5 += 24LL;
    *(_QWORD *)v4 = v8;
    v4 += 8LL;
    --v7;
  }
  while ( v7 );
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 816);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v9 = -1;
LABEL_5:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 17280), v11 = *(_QWORD *)(a1 + 17504), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 812) )
  {
    v9 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 108);
      if ( !v12 && v9 < 0x10 )
      {
        v4 = 88LL * v9;
        if ( *(_QWORD *)(v4 + a1 + 5136) == 0x3FFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 17280) == *(_QWORD *)(a1 + 17504) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 648) >= *(_QWORD *)(a1 + 640) )
      {
        v14 = 0LL;
      }
      else
      {
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
        v14 = (__int64)ModWriterEntry;
        if ( ModWriterEntry )
        {
          memset(ModWriterEntry, 0, 0x108uLL);
          *(_QWORD *)v14 = 97LL;
          *(_QWORD *)(v14 + 192) = a1;
LABEL_14:
          v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
          if ( v15 > *(_DWORD *)(a1 + 652) )
            *(_DWORD *)(a1 + 652) = v15;
          *(_QWORD *)(v14 + 200) = 0LL;
          if ( !(unsigned int)MiGatherMappedPages(a1, v9, v14) )
          {
            v4 = 0xFFFFFFFFLL;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF);
            if ( (*(_DWORD *)(v14 + 40) & 1) != 0 )
            {
              --CurrentThread->SpecialApcDisable;
              v21 = *(__int64 **)(a1 + 664);
              if ( *v21 != a1 + 656 )
LABEL_44:
                __fastfail(3u);
              *(_QWORD *)v14 = a1 + 656;
              *(_QWORD *)(v14 + 8) = v21;
              *v21 = v14;
              *(_QWORD *)(a1 + 664) = v14;
              v20 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v20
                && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery();
              }
            }
            else
            {
              MiFreeModWriterEntry((_QWORD *)v14, 1u);
            }
          }
          goto LABEL_5;
        }
      }
      --CurrentThread->SpecialApcDisable;
      v17 = (_QWORD *)(a1 + 656);
      v18 = *(__int64 **)(a1 + 656);
      if ( v18 == (__int64 *)(a1 + 656) )
      {
        *(_BYTE *)(a1 + 696) = 1;
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 656);
        if ( (_QWORD *)v18[1] != v17 )
          goto LABEL_44;
        v19 = *v18;
        if ( *(_QWORD *)(v19 + 8) != v14 )
          goto LABEL_44;
        *v17 = v19;
        *(_QWORD *)(v19 + 8) = v17;
      }
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v14 )
        goto LABEL_14;
      KeWaitForGate(a1 + 672, 0x13u);
    }
    if ( !v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 648) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 648) );
  }
  MiDeleteMappedMdls(a1, v4);
  return KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, v6);
}
