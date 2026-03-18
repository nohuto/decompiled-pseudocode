/*
 * XREFs of MiChangePageAttributeContiguous @ 0x14035D13C
 * Callers:
 *     MiZeroAndConvertPage @ 0x14031A554 (MiZeroAndConvertPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     KeInvalidateAllCaches @ 0x1403A2070 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangePageAttributeContiguous(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  int v10; // esi
  int v11; // r14d
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  char v14; // al
  unsigned int v15; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int8 v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+88h] [rbp+20h]

  v4 = 1;
  v25 = 1;
  v5 = a3;
  v6 = 48 * a1 - 0x58000000000LL;
  v23 = 17;
  v7 = v6 + 48 * a2;
  v22 = v7;
  while ( v6 < v7 )
  {
    v24 = 0;
    v8 = 0;
    v21 = v6;
    v9 = v6;
    v10 = 1;
    if ( v6 < v7 )
    {
      do
      {
        v11 = v10;
        if ( v8 >= 0x1000 )
          break;
        if ( v8 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v23 = MiLockPageInline(v6, a2, a3, SchedulerAssist);
        }
        v10 = 0;
        if ( (*(_BYTE *)(v6 + 34) & 0xC0) == 0xC0 )
          v10 = v11;
        MiAbortCombineScan(v6, a2, a3);
        if ( v4 && MiPfnZeroingNeeded(v6, v5) )
          v4 = 0;
        ++v8;
        v6 += 48LL;
      }
      while ( v6 < v7 );
      v9 = v21;
      v25 = v4;
      if ( !v10 )
      {
        MiFlushEntireTbDueToAttributeChange();
        if ( v8 >= dword_140C4DD0C && v5 != 1 )
        {
          ++dword_140C4DD04;
          KeInvalidateAllCaches();
          v24 = 1;
        }
      }
    }
    v6 = v9;
    v12 = 0;
    if ( v8 )
    {
      do
      {
        v13 = *(unsigned __int8 *)(v6 + 34);
        v14 = ((_BYTE)v5 << 6) | v13 & 0x3F;
        v15 = v13 >> 6;
        *(_BYTE *)(v6 + 34) = v14;
        if ( !v24 && !v10 && v5 != 1 && v15 != v5 && v15 == 1 )
        {
          ++dword_140C4DD08;
          MiFlushCacheForAttributeChange((__int64)(v6 + 0x58000000000LL) / 48, 1LL, v5);
        }
        MiSetPfnTbFlushStamp(v6, 0, 1);
        if ( v12 < v8 - 1 )
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 += 48LL;
        ++v12;
      }
      while ( v12 < v8 );
      v7 = v22;
      v4 = v25;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 - 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v23 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << (v23 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)a2;
          v19 = (v18 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v18 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v23);
  }
  return v4;
}
