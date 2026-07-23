/*
 * XREFs of MiDrainZeroLookasides @ 0x140344FD0
 * Callers:
 *     MiProcessWorkingSets @ 0x1402036D0 (MiProcessWorkingSets.c)
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiReturnPartitionPagesToParent @ 0x14055D824 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
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
  _DWORD *v16; // r9
  unsigned __int8 v17; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  unsigned int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  _QWORD *v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-48h]
  _SLIST_ENTRY *Next; // [rsp+48h] [rbp-40h]
  unsigned __int8 v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]

  v4 = dword_140C4DCFC;
  if ( a2 )
    v4 = a4 + 1;
  v30 = v4;
  v6 = 513;
  v7 = a2 != 0 ? a4 : 0;
  v23 = v7;
  v27 = a2 + 48 * a3;
  result = (_QWORD *)(a1 + 4200);
  v9 = 2LL;
  v25 = result;
  v26 = 2LL;
  do
  {
    v10 = *result;
    v11 = v7;
    v24 = *result;
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
              if ( a2 && ((unsigned __int64)v13 < a2 || (unsigned __int64)v13 >= v27) )
                v6 &= ~0x40u;
              else
                v6 |= 0x40u;
              v13[1].Next = (_SLIST_ENTRY *)MiUpdatePageFileHighInPte((__int64)v13[1].Next, 0LL);
              v29 = MiLockPageInline((__int64)v13, v14, v15, v16);
              MiInsertPageInFreeOrZeroedList((__int64)&v13[0x5800000000LL] / 48, v6);
              _InterlockedAnd64((volatile signed __int64 *)&v13[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v17 = v29;
                if ( v29 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v21 = ~(unsigned __int16)(-1LL << (v29 + 1));
                  v22 = (v21 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v21;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              else
              {
                v17 = v29;
              }
              __writecr8(v17);
              v13 = Next;
            }
            while ( Next );
            v4 = v30;
          }
          v10 = v24;
        }
        ++v11;
        v12 += 8;
      }
      while ( v11 < v4 );
      v7 = v23;
      result = v25;
      v9 = v26;
    }
    ++result;
    v6 = v6 & 0xFFFFFFFC | 2;
    v25 = result;
    v26 = --v9;
  }
  while ( v9 );
  return result;
}
