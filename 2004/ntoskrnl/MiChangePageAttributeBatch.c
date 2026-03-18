/*
 * XREFs of MiChangePageAttributeBatch @ 0x1402F70C0
 * Callers:
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiConvertContiguousPages @ 0x14031600C (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140316224 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x140546370 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x140549E78 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KeInvalidateAllCaches @ 0x1403A2070 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int8 v6; // r13
  unsigned int v7; // r14d
  __int64 v8; // rdi
  int v9; // ebp
  int v10; // r12d
  int v11; // r8d
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // ecx
  char v15; // r11
  int v16; // r12d
  __int64 *v17; // rax
  __int64 v18; // rdi
  char v19; // dl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // edx
  bool v24; // zf
  int v25; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v5 = a1;
    v6 = 17;
    do
    {
      v7 = 0;
      v8 = v5;
      v25 = 0;
      v9 = 1;
      do
      {
        v10 = v9;
        if ( v7 >= 0x1000 )
          break;
        if ( v7 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v6 = MiLockPageInline(v8);
        }
        v9 = 0;
        if ( (*(_BYTE *)(v8 + 34) & 0xC0) == 0xC0 )
          v9 = v10;
        MiAbortCombineScan(v8);
        v8 = *(_QWORD *)(v8 + 16);
        ++v7;
      }
      while ( v8 );
      if ( v9 || (MiFlushEntireTbDueToAttributeChange(), v7 < dword_140C4DD0C) || a2 == 1 )
      {
        v11 = 0;
      }
      else
      {
        ++dword_140C4DD04;
        KeInvalidateAllCaches();
        v11 = 1;
        v25 = 1;
      }
      v16 = 0;
      v18 = v5;
      v15 = v6 + 1;
      v19 = (_BYTE)a2 << 6;
      do
      {
        v12 = *(unsigned __int8 *)(v18 + 34);
        v13 = v19 | v12 & 0x3F;
        v14 = v12 >> 6;
        *(_BYTE *)(v18 + 34) = v13;
        if ( !v11 && !v9 && a2 != 1 && v14 != a2 && v14 == 1 )
        {
          ++dword_140C4DD08;
          MiFlushCacheForAttributeChange((v18 + 0x58000000000LL) / 48, 1LL, a2);
          v15 = v6 + 1;
        }
        *(_QWORD *)(v18 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v16;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v16 == v7 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v23 = ~(unsigned __int16)(-1LL << v15);
                v24 = (v23 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v23;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
          v17 = (__int64 *)(v18 + 16);
          v18 = 0LL;
          v5 = *v17;
        }
        else
        {
          v17 = (__int64 *)(v18 + 16);
          v18 = *(_QWORD *)(v18 + 16);
        }
        if ( a3 != -1 )
          *v17 = a3;
        v19 = (_BYTE)a2 << 6;
        v15 = v6 + 1;
        v11 = v25;
      }
      while ( v18 );
    }
    while ( v5 );
  }
}
