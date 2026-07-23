/*
 * XREFs of HalpDmaControllerProgramChannel @ 0x1404CEAC4
 * Callers:
 *     HalMapTransferEx @ 0x14039F830 (HalMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaControllerProgramChannel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 CurrentIrql; // si
  char v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  char v28; // [rsp+30h] [rbp-38h]

  CurrentIrql = KeGetCurrentIrql();
  v11 = 0;
  if ( CurrentIrql == 15 )
    goto LABEL_17;
  v12 = *(unsigned __int8 *)(a1 + 176);
  v13 = KeGetCurrentIrql();
  __writecr8(v12);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)(v12 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (v13 + 1)) & ((1LL << ((unsigned __int8)v12 + 1)) - 1) & 0xFFFFFFFC;
  }
  CurrentIrql = v13;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v15 = *(_QWORD *)(a2 + 352);
  v11 = 1;
  if ( v15 && (*(_DWORD *)(v15 + 12) & 1) != 0 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 168));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && v13 <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    return 3221225760LL;
  }
  else
  {
LABEL_17:
    v22 = *(_QWORD *)(a1 + 56) + 160LL * *(unsigned int *)(a2 + 372);
    *(_QWORD *)(v22 + 8) = a3;
    *(_QWORD *)(v22 + 16) = a4;
    v28 = *(_BYTE *)(a2 + 435);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, char, char))(a1 + 104))(
      *(_QWORD *)(a1 + 64),
      *(unsigned int *)(a2 + 372),
      *(unsigned int *)(a2 + 376),
      a5,
      a6,
      a7,
      v28);
    if ( v11 )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 168));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
