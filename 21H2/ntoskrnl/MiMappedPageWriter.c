/*
 * XREFs of MiMappedPageWriter @ 0x1403B78A0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     MiFreeModWriterEntry @ 0x140276D58 (MiFreeModWriterEntry.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     MiAllocateModWriterEntry @ 0x14027BAC8 (MiAllocateModWriterEntry.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDeleteMappedMdls @ 0x1405357BC (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  KPRIORITY v3; // eax
  __int64 v4; // r9
  PVOID *v5; // rcx
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  _QWORD *ModWriterEntry; // rdi
  unsigned __int32 v14; // eax
  _QWORD *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
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
      v12 = *(_DWORD *)(a1 + 108);
      if ( !v12 && v9 < 0x10 )
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
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1, v4);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v16 = (_QWORD *)(a1 + 632);
        v17 = *(__int64 **)(a1 + 632);
        if ( v17 == (__int64 *)(a1 + 632) )
        {
          *(_BYTE *)(a1 + 672) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)(a1 + 632);
          if ( (_QWORD *)v17[1] != v16 )
            goto LABEL_41;
          v18 = *v17;
          if ( *(_QWORD **)(v18 + 8) != ModWriterEntry )
            goto LABEL_41;
          *v16 = v18;
          *(_QWORD *)(v18 + 8) = v16;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
        if ( v14 > *(_DWORD *)(a1 + 628) )
          *(_DWORD *)(a1 + 628) = v14;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v19 = *(_QWORD **)(a1 + 640);
            if ( *v19 != a1 + 632 )
LABEL_41:
              __fastfail(3u);
            ModWriterEntry[1] = v19;
            *ModWriterEntry = a1 + 632;
            *v19 = ModWriterEntry;
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
      KeWaitForGate(a1 + 648, 0x13u);
    }
    if ( !v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 624) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 624) );
  }
  MiDeleteMappedMdls(a1, v7);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6);
}
