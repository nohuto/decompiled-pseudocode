/*
 * XREFs of MiChangePageAttributeBatch @ 0x14030E2F0
 * Callers:
 *     MiConvertContiguousPages @ 0x140294F14 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140295074 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x14054BA80 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x14054F588 (MiPerformFinalZeroing.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403A4F50 (KeInvalidateAllCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned int v14; // r11d
  int v15; // r12d
  __int64 *v16; // rax
  __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v20; // zf
  unsigned int v21; // [rsp+88h] [rbp+20h]

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
      v21 = 0;
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
      if ( v10 || (MiFlushEntireTbDueToAttributeChange(a1, a2, a3, SchedulerAssist), v8 < dword_140C4DF4C) || v5 == 1 )
      {
        LODWORD(a3) = 0;
      }
      else
      {
        ++dword_140C4DF44;
        KeInvalidateAllCaches();
        LODWORD(a3) = 1;
        v21 = 1;
      }
      v15 = 0;
      v17 = v6;
      v14 = v7 + 1;
      LOBYTE(a2) = (_BYTE)v5 << 6;
      do
      {
        v12 = *(unsigned __int8 *)(v17 + 34);
        v13 = a2 | v12 & 0x3F;
        a1 = v12 >> 6;
        *(_BYTE *)(v17 + 34) = v13;
        if ( !(_DWORD)a3 && !v10 && v5 != 1 && (_DWORD)a1 != v5 && (_DWORD)a1 == 1 )
        {
          ++dword_140C4DF48;
          MiFlushCacheForAttributeChange((v17 + 0x58000000000LL) / 48, 1LL, v5);
          v14 = v7 + 1;
        }
        *(_QWORD *)(v17 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v15;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v15 == v8 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                a1 = v14;
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                a2 = ~(unsigned __int16)(-1LL << v14);
                v20 = ((unsigned int)a2 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= a2;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v7);
          v16 = (__int64 *)(v17 + 16);
          v17 = 0LL;
          v6 = *v16;
        }
        else
        {
          v16 = (__int64 *)(v17 + 16);
          v17 = *(_QWORD *)(v17 + 16);
        }
        if ( v4 != -1 )
          *v16 = v4;
        LOBYTE(a2) = (_BYTE)v5 << 6;
        v14 = v7 + 1;
        a3 = v21;
      }
      while ( v17 );
    }
    while ( v6 );
  }
}
