/*
 * XREFs of HalpDmaZeroMapBuffers @ 0x1404C8B14
 * Callers:
 *     HalpMapTransferV3 @ 0x1404CAA78 (HalpMapTransferV3.c)
 *     HalpMapTransferV2 @ 0x1404CCBD4 (HalpMapTransferV2.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C80CC (HalpDmaReleaseBufferMappings.c)
 */

void __fastcall HalpDmaZeroMapBuffers(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  char v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int i; // edx
  _DWORD *SchedulerAssist; // r9
  _QWORD *j; // r13
  unsigned int v14; // ebx
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  _OWORD v20[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  unsigned int v22; // [rsp+C0h] [rbp+18h]

  v22 = a3;
  v4 = a4;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = a3 & 0xFFF;
  v8 = 0;
  v9 = (v7 + (unsigned __int64)a4 + 4095) >> 12;
  if ( CurrentIrql <= 2u )
  {
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v7 = (unsigned int)CurrentIrql + 1;
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v8 = 1;
    }
    HalpDmaAcquireBufferMappings(v7, a2, v9, (__int64)v20);
    a3 = v22;
  }
  else
  {
    v10 = (__int64)a2;
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      if ( (*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF06uLL, 0LL, 0LL);
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  for ( j = a2; v4; v4 -= v14 )
  {
    v14 = v4;
    if ( v4 >= 4096 - a3 )
      v14 = 4096 - a3;
    memset((void *)((j[6] & 0xFFFFFFFFFFFFF000uLL) + a3), 0, v14);
    j = (_QWORD *)j[1];
    a3 = 0;
  }
  if ( CurrentIrql <= 2u )
    HalpDmaReleaseBufferMappings(v10, (__int64)a2, v9, (__int64)v20);
  if ( v8 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
