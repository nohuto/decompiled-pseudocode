/*
 * XREFs of MiMappedPageWriter @ 0x1403B2930
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiFreeModWriterEntry @ 0x140354048 (MiFreeModWriterEntry.c)
 *     MiAllocateModWriterEntry @ 0x1403543FC (MiAllocateModWriterEntry.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDeleteMappedMdls @ 0x14052FA5C (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  KPRIORITY v3; // eax
  __int64 v4; // r9
  PVOID *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *ModWriterEntry; // rdi
  _DWORD *v14; // r9
  unsigned __int32 v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  _DWORD *v18; // r9
  _QWORD *v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  memset(&Object[1], 0, 0x88uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v5 = Object;
  v6 = v3;
  v7 = a1 + 4408;
  v8 = 16LL;
  do
  {
    *v5 = (PVOID)v7;
    v7 += 24LL;
    ++v5;
    --v8;
  }
  while ( v8 );
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 792);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v9 = -1;
LABEL_5:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 7488), v11 = *(_QWORD *)(a1 + 7600), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 788) )
  {
    v9 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(a1 + 108);
      if ( !(_DWORD)v12 && v9 < 0x10 )
      {
        v7 = 5LL * v9;
        if ( *(_QWORD *)(a1 + 40LL * v9 + 3472) == 0xFFFFFFFFFLL )
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
        v20 = (_QWORD *)(a1 + 632);
        v21 = *(__int64 **)(a1 + 632);
        if ( v21 == (__int64 *)(a1 + 632) )
        {
          *(_BYTE *)(a1 + 672) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)(a1 + 632);
          if ( (_QWORD *)v21[1] != v20 )
            goto LABEL_41;
          v22 = *v21;
          if ( *(_QWORD **)(v22 + 8) != ModWriterEntry )
            goto LABEL_41;
          *v20 = v22;
          *(_QWORD *)(v22 + 8) = v20;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v12, v4);
      }
      if ( ModWriterEntry )
      {
        v15 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
        if ( v15 > *(_DWORD *)(a1 + 628) )
          *(_DWORD *)(a1 + 628) = v15;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry, v14) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v23 = *(_QWORD **)(a1 + 640);
            if ( *v23 != a1 + 632 )
LABEL_41:
              __fastfail(3u);
            ModWriterEntry[1] = v23;
            *ModWriterEntry = a1 + 632;
            *v23 = ModWriterEntry;
            *(_QWORD *)(a1 + 640) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v16, v4);
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
    if ( !(_DWORD)v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 624) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 624) );
  }
  MiDeleteMappedMdls(a1, v7);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v17, v18);
}
