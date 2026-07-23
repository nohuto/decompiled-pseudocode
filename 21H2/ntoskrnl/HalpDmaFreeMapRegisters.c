/*
 * XREFs of HalpDmaFreeMapRegisters @ 0x1404C7CF8
 * Callers:
 *     HalpDmaFreeCrashDumpRegisters @ 0x14038DCF0 (HalpDmaFreeCrashDumpRegisters.c)
 *     IoFreeMapRegistersV3 @ 0x1403A2E24 (IoFreeMapRegistersV3.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1403A71C0 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1404CCF28 (HalpDmaProcessMapRegisterQueueV2.c)
 *     IoFreeMapRegistersV2 @ 0x1404CD1E0 (IoFreeMapRegistersV2.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C80CC (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaReturnPageToOwner @ 0x1404C818C (HalpDmaReturnPageToOwner.c)
 */

__int64 __fastcall HalpDmaFreeMapRegisters(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r14d
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // si
  char v13; // bp
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  void *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v19; // r10
  int v20; // eax
  bool v21; // zf
  _OWORD v22[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]
  _QWORD *v24; // [rsp+B8h] [rbp+10h]

  result = 0LL;
  v4 = 0;
  v23 = 0LL;
  v8 = a2;
  memset(v22, 0, sizeof(v22));
  if ( a3 )
  {
    do
    {
      v9 = 2LL;
      v24 = (_QWORD *)v8[1];
      v10 = v8[6];
      if ( (v10 & 0x20) != 0 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
        v12 = 0;
        v13 = 0;
        v8[6] = v11;
        CurrentIrql = 0;
        if ( (v11 & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql > 2u )
            KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
          if ( CurrentIrql < 2u )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v9 = (unsigned int)CurrentIrql + 1;
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
            v13 = 1;
          }
          HalpDmaAcquireBufferMappings(v9, v8, 1u, (__int64)v22);
          v12 = 1;
        }
        v16 = (void *)(v8[6] & 0xFFFFFFFFFFFFF000uLL);
        if ( v16 )
          memset(v16, 0, 0x1000uLL);
        if ( v12 )
          HalpDmaReleaseBufferMappings(v16, a2, 1LL, v22);
        if ( v13 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v17 = KeGetCurrentIrql();
              if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v19 = CurrentPrcb->SchedulerAssist;
                v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v21 = (v20 & v19[5]) == 0;
                v19[5] &= v20;
                if ( v21 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
      }
      result = HalpDmaReturnPageToOwner(a1, *(_QWORD *)(a1 + 152), v8);
      v8 = v24;
      ++v4;
    }
    while ( v4 < a3 );
  }
  return result;
}
