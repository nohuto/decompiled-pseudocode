/*
 * XREFs of MiChangePageAttributeBatch @ 0x1403530A0
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140345564 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140545D20 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x140549828 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v6; // rsi
  unsigned __int8 v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdi
  int v10; // ebp
  int v11; // r12d
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // ecx
  char v15; // r11
  int v16; // r12d
  __int64 *v17; // rax
  __int64 v18; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v21; // zf
  unsigned int v22; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v4 = a3;
    v5 = a2;
    v6 = a1;
    v7 = 17;
    do
    {
      v8 = 0;
      v9 = v6;
      v22 = 0;
      v10 = 1;
      do
      {
        v11 = v10;
        if ( v8 >= 0x1000 )
          break;
        if ( v8 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v7 = MiLockPageInline(v9, a2, a3, SchedulerAssist);
        }
        v10 = 0;
        if ( (*(_BYTE *)(v9 + 34) & 0xC0) == 0xC0 )
          v10 = v11;
        MiAbortCombineScan(v9);
        v9 = *(_QWORD *)(v9 + 16);
        ++v8;
      }
      while ( v9 );
      if ( v10 || (MiFlushEntireTbDueToAttributeChange(), v8 < dword_140C4DE4C) || v5 == 1 )
      {
        LODWORD(a3) = 0;
      }
      else
      {
        ++dword_140C4DE44;
        KeInvalidateAllCaches();
        LODWORD(a3) = 1;
        v22 = 1;
      }
      v16 = 0;
      v18 = v6;
      v15 = v7 + 1;
      LOBYTE(a2) = (_BYTE)v5 << 6;
      do
      {
        v12 = *(unsigned __int8 *)(v18 + 34);
        v13 = a2 | v12 & 0x3F;
        v14 = v12 >> 6;
        *(_BYTE *)(v18 + 34) = v13;
        if ( !(_DWORD)a3 && !v10 && v5 != 1 && v14 != v5 && v14 == 1 )
        {
          ++dword_140C4DE48;
          MiFlushCacheForAttributeChange((v18 + 0x58000000000LL) / 48, 1LL, v5);
          v15 = v7 + 1;
        }
        *(_QWORD *)(v18 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v16;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v16 == v8 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                a2 = ~(unsigned __int16)(-1LL << v15);
                v21 = ((unsigned int)a2 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= a2;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v7);
          v17 = (__int64 *)(v18 + 16);
          v18 = 0LL;
          v6 = *v17;
        }
        else
        {
          v17 = (__int64 *)(v18 + 16);
          v18 = *(_QWORD *)(v18 + 16);
        }
        if ( v4 != -1 )
          *v17 = v4;
        LOBYTE(a2) = (_BYTE)v5 << 6;
        v15 = v7 + 1;
        a3 = v22;
      }
      while ( v18 );
    }
    while ( v6 );
  }
}
