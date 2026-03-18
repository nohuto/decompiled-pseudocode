/*
 * XREFs of MiMappedPageWriter @ 0x1403B60F0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     MiAllocateModWriterEntry @ 0x140344134 (MiAllocateModWriterEntry.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiFreeModWriterEntry @ 0x140344D2C (MiFreeModWriterEntry.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDeleteMappedMdls @ 0x140533A7C (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  KPRIORITY v3; // eax
  PVOID *v4; // rcx
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // r8d
  _QWORD *ModWriterEntry; // rdi
  unsigned __int32 v13; // eax
  __int64 v14; // r8
  _DWORD *v15; // r9
  _QWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  memset(&Object[1], 0, 0x88uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v5 = v3;
  v6 = a1 + 4408;
  v7 = 16LL;
  do
  {
    *v4 = (PVOID)v6;
    v6 += 24LL;
    ++v4;
    --v7;
  }
  while ( v7 );
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 792);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v8 = -1;
LABEL_5:
  if ( v8 == -1
    || (v9 = *(_QWORD *)(a1 + 7488), v10 = *(_QWORD *)(a1 + 7600), v9 <= v10)
    || v9 - v10 < 0x10 && !*(_DWORD *)(a1 + 788) )
  {
    v8 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 108);
      if ( !v11 && v8 < 0x10 )
      {
        v6 = 5LL * v8;
        if ( *(_QWORD *)(a1 + 40LL * v8 + 3472) == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 7488) == *(_QWORD *)(a1 + 7600) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 624) >= *(_QWORD *)(a1 + 616) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v17 = (_QWORD *)(a1 + 632);
        v18 = *(__int64 **)(a1 + 632);
        if ( v18 == (__int64 *)(a1 + 632) )
        {
          *(_BYTE *)(a1 + 672) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)(a1 + 632);
          if ( (_QWORD *)v18[1] != v17 )
            goto LABEL_41;
          v19 = *v18;
          if ( *(_QWORD **)(v19 + 8) != ModWriterEntry )
            goto LABEL_41;
          *v17 = v19;
          *(_QWORD *)(v19 + 8) = v17;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v13 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
        if ( v13 > *(_DWORD *)(a1 + 628) )
          *(_DWORD *)(a1 + 628) = v13;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v8, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v20 = *(_QWORD **)(a1 + 640);
            if ( *v20 != a1 + 632 )
LABEL_41:
              __fastfail(3u);
            ModWriterEntry[1] = v20;
            *ModWriterEntry = a1 + 632;
            *v20 = ModWriterEntry;
            *(_QWORD *)(a1 + 640) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate(a1 + 648, 19);
    }
    if ( !v11 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 624) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 624) );
  }
  MiDeleteMappedMdls(a1, v6);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v5, v14, v15);
}
