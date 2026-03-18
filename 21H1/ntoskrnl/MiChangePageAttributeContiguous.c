/*
 * XREFs of MiChangePageAttributeContiguous @ 0x14031F698
 * Callers:
 *     MiZeroAndConvertPage @ 0x140349894 (MiZeroAndConvertPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EEA3C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangePageAttributeContiguous(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  unsigned __int64 v8; // r13
  int v9; // esi
  int v10; // r14d
  unsigned int v11; // r14d
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int8 v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+88h] [rbp+20h]

  v3 = 1;
  v25 = 1;
  v4 = a3;
  v5 = 48 * a1 - 0x58000000000LL;
  v23 = 17;
  v6 = v5 + 48 * a2;
  v22 = v6;
  while ( v5 < v6 )
  {
    v24 = 0;
    v7 = 0;
    v21 = v5;
    v8 = v5;
    v9 = 1;
    if ( v5 < v6 )
    {
      do
      {
        v10 = v9;
        if ( v7 >= 0x1000 )
          break;
        if ( v7 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v23 = MiLockPageInline(v5, a2, a3);
        }
        v9 = 0;
        if ( (*(_BYTE *)(v5 + 34) & 0xC0) == 0xC0 )
          v9 = v10;
        MiAbortCombineScan(v5);
        if ( v3 && (unsigned int)MiPfnZeroingNeeded(v5, v4) )
          v3 = 0;
        ++v7;
        v5 += 48LL;
      }
      while ( v5 < v6 );
      v8 = v21;
      v25 = v3;
      if ( !v9 )
      {
        MiFlushEntireTbDueToAttributeChange(a1, a2);
        if ( v7 >= dword_140C4DE4C && v4 != 1 )
        {
          ++dword_140C4DE44;
          KeInvalidateAllCaches();
          v24 = 1;
        }
      }
    }
    v5 = v8;
    v11 = 0;
    if ( v7 )
    {
      do
      {
        v12 = *(unsigned __int8 *)(v5 + 34);
        v13 = ((_BYTE)v4 << 6) | v12 & 0x3F;
        v14 = v12 >> 6;
        *(_BYTE *)(v5 + 34) = v13;
        if ( !v24 && !v9 && v4 != 1 && v14 != v4 && v14 == 1 )
        {
          ++dword_140C4DE48;
          MiFlushCacheForAttributeChange((__int64)(v5 + 0x58000000000LL) / 48, 1LL, v4);
        }
        MiSetPfnTbFlushStamp(v5, 0, 1);
        if ( v11 < v7 - 1 )
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 += 48LL;
        ++v11;
      }
      while ( v11 < v7 );
      v6 = v22;
      v3 = v25;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 - 24), 0x7FFFFFFFFFFFFFFFuLL);
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
    a1 = v23;
    __writecr8(v23);
  }
  return v3;
}
