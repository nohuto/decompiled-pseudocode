/*
 * XREFs of MiChangePageAttributeBatch @ 0x1402680C0
 * Callers:
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140265D40 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiChangeAwePageAttributes @ 0x1405AA320 (MiChangeAwePageAttributes.c)
 *     MiPerformFinalZeroing @ 0x1405ADCD4 (MiPerformFinalZeroing.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rsi
  unsigned __int8 v6; // r12
  int v7; // r13d
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdi
  int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  char v15; // al
  __int64 *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v20; // zf
  int v21; // [rsp+88h] [rbp+20h]

  if ( a1 )
  {
    v4 = a2;
    v5 = a1;
    v6 = 17;
    v7 = 0;
    do
    {
      v8 = 0;
      v9 = 1;
      v10 = v5;
      do
      {
        if ( v8 >= 0x1000 )
          break;
        if ( v8 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v6 = MiLockPageInline(v10);
        }
        if ( (*(_BYTE *)(v10 + 34) & 0xC0) != 0xC0 )
          v9 = 0;
        MiAbortCombineScan(v10, a2);
        v10 = *(_QWORD *)(v10 + 16);
        ++v8;
      }
      while ( v10 );
      if ( v9 || (MiFlushEntireTbDueToAttributeChange(a1, a2), v8 < dword_140C5074C) || v4 == 1 )
      {
        v21 = 0;
        v11 = v5;
        v12 = 0;
      }
      else
      {
        ++dword_140C50744;
        KeInvalidateAllCaches();
        v12 = 1;
        v11 = v5;
        v21 = 1;
      }
      v13 = v6 + 1;
      LOBYTE(a2) = (_BYTE)v4 << 6;
      do
      {
        v14 = *(unsigned __int8 *)(v11 + 34);
        v15 = a2 | v14 & 0x3F;
        a1 = v14 >> 6;
        *(_BYTE *)(v11 + 34) = v15;
        if ( !v12 && !v9 && v4 != 1 && (_DWORD)a1 == 1 )
        {
          ++dword_140C50748;
          MiFlushCacheForAttributeChange(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), 1LL, v4);
          v13 = v6 + 1;
        }
        *(_QWORD *)(v11 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
        ++v7;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v7 == v8 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                a1 = v13;
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                a2 = ~(unsigned __int16)(-1LL << v13);
                v20 = ((unsigned int)a2 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= a2;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v6);
          v16 = (__int64 *)(v11 + 16);
          v11 = 0LL;
          v5 = *v16;
        }
        else
        {
          v16 = (__int64 *)(v11 + 16);
          v11 = *(_QWORD *)(v11 + 16);
        }
        if ( a3 != -1 )
          *v16 = a3;
        LOBYTE(a2) = (_BYTE)v4 << 6;
        v12 = v21;
        v13 = v6 + 1;
      }
      while ( v11 );
      v7 = 0;
    }
    while ( v5 );
  }
}
