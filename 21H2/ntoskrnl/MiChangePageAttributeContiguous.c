/*
 * XREFs of MiChangePageAttributeContiguous @ 0x14026873C
 * Callers:
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiZeroAndConvertPage @ 0x1405B05D0 (MiZeroAndConvertPage.c)
 *     MiGetFastLargePages @ 0x1405C2478 (MiGetFastLargePages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiPfnZeroingNeeded @ 0x140268A70 (MiPfnZeroingNeeded.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangePageAttributeContiguous(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  int v4; // r12d
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r9d
  unsigned __int8 v10; // di
  unsigned int v11; // esi
  int v12; // ebp
  int v13; // r14d
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+70h] [rbp+8h]
  unsigned __int64 v25; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = 1;
  result = 0xFFFFDE0000000000uLL;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = v6;
  v8 = v6 + 48 * a2;
  v23 = v6;
  v22 = v8;
  if ( v6 < v8 )
  {
    v9 = 0;
    v10 = 17;
    do
    {
      v11 = v9;
      v24 = v9;
      v12 = 1;
      v25 = v7;
      do
      {
        v13 = v12;
        if ( v11 >= 0x1000 )
          break;
        if ( v11 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v10 = MiLockPageInline(v7);
          v9 = 0;
        }
        v12 = v9;
        if ( (*(_BYTE *)(v7 + 34) & 0xC0) == 0xC0 )
          v12 = v13;
        MiAbortCombineScan(v7, a2);
        v9 = 0;
        if ( v4 && (unsigned int)MiPfnZeroingNeeded(v7, v3) )
          v4 = v9;
        ++v11;
        v7 += 48LL;
      }
      while ( v7 < v8 );
      if ( v12 )
      {
        a2 = v24;
      }
      else
      {
        MiFlushEntireTbDueToAttributeChange(a1, a2);
        if ( v11 < dword_140C5074C || v3 == 1 )
        {
          a2 = v24;
        }
        else
        {
          ++dword_140C50744;
          KeInvalidateAllCaches();
          a2 = 1LL;
          v24 = 1;
        }
        v9 = 0;
      }
      v7 = v25;
      v14 = v9;
      if ( v11 )
      {
        do
        {
          v15 = *(unsigned __int8 *)(v7 + 34);
          v16 = ((_BYTE)v3 << 6) | v15 & 0x3F;
          a1 = v15 >> 6;
          *(_BYTE *)(v7 + 34) = v16;
          if ( !(_DWORD)a2 && !v12 && v3 != 1 && (_DWORD)a1 == 1 )
          {
            ++dword_140C50748;
            MiFlushCacheForAttributeChange(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x220000000000LL) >> 4), 1LL, v3);
            a2 = v24;
            v9 = 0;
          }
          *(_QWORD *)(v7 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
          if ( v14 < v11 - 1 )
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 += 48LL;
          ++v14;
        }
        while ( v14 < v11 );
        v8 = v22;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 - 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a1 = (unsigned int)v10 + 1;
            a2 = -1LL << (v10 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)a2;
            v21 = (v20 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v20 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v9 = 0;
          }
        }
      }
      result = v10;
      __writecr8(v10);
    }
    while ( v7 < v8 );
    v6 = v23;
    if ( !v4 )
      return MiSetOriginalPtePfnFromFreeList(v23 + 16, a2, a3);
  }
  *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  return result;
}
