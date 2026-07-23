/*
 * XREFs of MiDrainZeroLookasides @ 0x1403071D0
 * Callers:
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiReturnPartitionPagesToParent @ 0x14055D1D4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1403FDDE0 (RtlpInterlockedFlushSList.c)
 */

_QWORD *__fastcall MiDrainZeroLookasides(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  _QWORD *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r14d
  _WORD *v12; // rsi
  PSLIST_ENTRY v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  _QWORD *v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+40h] [rbp-48h]
  _SLIST_ENTRY *Next; // [rsp+48h] [rbp-40h]
  unsigned __int8 v28; // [rsp+98h] [rbp+10h]
  unsigned int v29; // [rsp+A0h] [rbp+18h]

  v4 = dword_140C4DE3C;
  if ( a2 )
    v4 = a4 + 1;
  v29 = v4;
  v6 = 513;
  v7 = a2 != 0 ? a4 : 0;
  v22 = v7;
  v26 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 4200);
  v9 = 2LL;
  v24 = result;
  v25 = 2LL;
  do
  {
    v10 = *result;
    v11 = v7;
    v23 = *result;
    if ( v7 < v4 )
    {
      v12 = (_WORD *)(v10 + 16LL * v7);
      do
      {
        if ( *v12 )
        {
          v13 = RtlpInterlockedFlushSList((PSLIST_HEADER)(v10 + 16LL * v11));
          if ( v13 )
          {
            do
            {
              Next = v13->Next;
              if ( a2 && ((unsigned __int64)v13 < a2 || (unsigned __int64)v13 >= v26) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              v13[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte((__int64)v13[1].Next, 0LL);
              v28 = MiLockPageInline(v13, v14, v15);
              MiInsertPageInFreeOrZeroedList((__int64)&v13[0x5800000000LL] / 48, v6);
              _InterlockedAnd64((volatile signed __int64 *)&v13[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v16 = v28;
                if ( v28 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v20 = ~(unsigned __int16)(-1LL << (v28 + 1));
                  v21 = (v20 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v20;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v16 = v28;
              }
              __writecr8(v16);
              v13 = Next;
            }
            while ( Next );
            v4 = v29;
          }
          v10 = v23;
        }
        ++v11;
        v12 += 8;
      }
      while ( v11 < v4 );
      v7 = v22;
      result = v24;
      v9 = v25;
    }
    ++result;
    v6 = v6 & 0xFFFFFFFC | 2;
    v24 = result;
    v25 = --v9;
  }
  while ( v9 );
  return result;
}
