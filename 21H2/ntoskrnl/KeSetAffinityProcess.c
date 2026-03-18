/*
 * XREFs of KeSetAffinityProcess @ 0x1403DAC1C
 * Callers:
 *     PspSetProcessAffinitySafe @ 0x1409AE810 (PspSetProcessAffinitySafe.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1402A01BC (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeGroupMask @ 0x1402A0324 (KiComputeGroupMask.c)
 *     KiSelectIdealProcessorSetsForProcess @ 0x1402A08EC (KiSelectIdealProcessorSetsForProcess.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeSetAffinityProcess(__int64 a1, char a2, unsigned __int16 *a3)
{
  char v6; // r15
  char v7; // r12
  _QWORD *i; // rdi
  volatile LONG *v10; // r13
  unsigned __int16 v11; // di
  unsigned __int16 *v12; // r15
  char v13; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int16 v21; // r11
  unsigned __int16 v22; // cx
  _QWORD *v23; // rdx
  char v24; // r13
  __int64 v25; // r8
  char v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-C8h]
  __int128 v30; // [rsp+40h] [rbp-C0h]
  _DWORD v31[68]; // [rsp+50h] [rbp-B0h] BYREF

  v31[0] = 2097153;
  v26 = 0;
  v28 = 0LL;
  v6 = 0;
  v7 = 0;
  memset(&v31[1], 0, 0x104uLL);
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      v6 = 1;
    }
    else
    {
      v7 = 1;
      v26 = 1;
    }
  }
  v27 = KiComputeGroupMask(a3);
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v10 = (volatile LONG *)(a1 + 64);
  CurrentPrcb = KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( v6 && (*(_DWORD *)(a1 + 632) & 0x1000) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 3221225485LL;
  }
  v11 = 0;
  v12 = (unsigned __int16 *)(a1 + 80);
  if ( !v7 )
  {
    KiCopyAffinityEx(a1 + 80, *(_WORD *)(a1 + 82), a3);
    if ( *a3 )
    {
      v13 = 0;
      do
      {
        if ( *(_QWORD *)&a3[4 * v11 + 4] )
        {
          KiSetIdealNodeProcessByGroup(a1, 0LL, v11);
          if ( !v13 )
          {
            v13 = 1;
            *(_WORD *)(a1 + 836) = *(_WORD *)(a1 + 2LL * v11 + 772);
            *(_WORD *)(a1 + 1040) = v11;
          }
        }
        ++v11;
      }
      while ( v11 < *a3 );
      v7 = v26;
      v12 = (unsigned __int16 *)(a1 + 80);
      v10 = (volatile LONG *)(a1 + 64);
    }
LABEL_17:
    KiSelectIdealProcessorSetsForProcess(a1, (_DWORD *)(a1 + 2560), a1 + 2576, (_QWORD *)(a1 + 2564));
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      KiSetAffinityThread((__int64)(i - 95), (__int64)&v28, v12);
    if ( !v7 )
      *(_DWORD *)(a1 + 636) = v27;
    goto LABEL_7;
  }
  v21 = *v12;
  v22 = 0;
  if ( !*v12 )
    goto LABEL_7;
  v23 = a3 + 4;
  v24 = 0;
  do
  {
    v25 = *(_QWORD *)((char *)v23 + a1 - (_QWORD)a3 + 80);
    if ( !v25 )
      goto LABEL_44;
    if ( v22 < *a3 && (*v23 | v25) != v25 )
    {
      v25 |= *v23;
      v24 = 1;
    }
    if ( LOWORD(v31[0]) <= v22 )
    {
      if ( HIWORD(v31[0]) <= v22 )
        goto LABEL_44;
      LOWORD(v31[0]) = v22 + 1;
    }
    *(_QWORD *)((char *)v23 + (char *)v31 - (char *)a3) |= v25;
LABEL_44:
    ++v22;
    ++v23;
  }
  while ( v22 < v21 );
  v20 = v24 == 0;
  v10 = (volatile LONG *)(a1 + 64);
  if ( !v20 )
  {
    KiCopyAffinityEx(a1 + 80, 0x14u, (unsigned __int16 *)v31);
    goto LABEL_17;
  }
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v28, CurrentIrql);
  return 0LL;
}
