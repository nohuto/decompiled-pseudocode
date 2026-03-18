/*
 * XREFs of EtwpUnregisterPartitionPages @ 0x1405AB5D0
 * Callers:
 *     EtwpFreePartitionMemory @ 0x1405AB168 (EtwpFreePartitionMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUnregisterPartitionPages(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  void *v4; // rdi
  unsigned __int64 v6; // rbp
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // r11d
  __int64 v11; // r8
  _QWORD *i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v15; // eax
  _DWORD *SchedulerAssist; // r8
  bool v17; // zf
  __int64 v19; // [rsp+68h] [rbp+10h]
  __int64 v20; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = ExAcquireSpinLockExclusive(&dword_140C196B0);
  v7 = (unsigned int)dword_140C196A4 >> 5;
  v8 = -1LL << (dword_140C196A4 & 0x1F);
  v9 = a2 & v8;
  if ( (unsigned int)dword_140C196A4 >> 5 )
  {
    v10 = v7 - 1;
    v19 = a2 & v8;
    v11 = qword_140C196A8
        + 8LL
        * ((v7 - 1) & (HIBYTE(v19)
                     + 37
                     * (BYTE6(v19)
                      + 37
                      * (BYTE5(v19)
                       + 37
                       * (BYTE4(v19)
                        + 37
                        * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v9 + 11623883)))))))));
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v11 + 8)) )
        goto LABEL_7;
    }
    v11 = 0LL;
LABEL_7:
    if ( v11 )
    {
      v3 = *(_QWORD *)(v11 + 16);
      v4 = (void *)v11;
      if ( a1 )
        *a1 = *(_QWORD *)(v11 + 24);
      v20 = v8 & *(_QWORD *)(v11 + 8);
      for ( i = (_QWORD *)(qword_140C196A8
                         + 8LL
                         * (v10 & (HIBYTE(v20)
                                 + 37
                                 * (BYTE6(v20)
                                  + 37
                                  * (BYTE5(v20)
                                   + 37
                                   * (BYTE4(v20)
                                    + 37
                                    * (BYTE3(v20)
                                     + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883))))))))));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v11 )
        {
          *i = *(_QWORD *)v11;
          --EtwpMdlTable;
          *(_QWORD *)v11 |= 0x8000000000000002uLL;
          break;
        }
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C196B0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4F777445u);
  return v3;
}
