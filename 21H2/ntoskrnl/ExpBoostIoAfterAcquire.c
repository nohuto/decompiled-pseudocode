/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x14021CA70
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x14021CD50 (ExpFindCurrentThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024E928 (KiAbThreadInsertList.c)
 *     IoBoostThreadIoPriority @ 0x140280754 (IoBoostThreadIoPriority.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // r9
  int v6; // esi
  int v7; // r10d
  __int64 v8; // rax
  int v9; // edx
  int v10; // ebx
  volatile __int64 *v11; // rbp
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v14; // rdx
  __int64 CurrentThread; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int64 v20; // rsi
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int8 v23; // bp
  _DWORD *v24; // r9
  struct _KPRCB *v25; // r14
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  __int64 ExtensionTable; // rax
  __int128 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *(_WORD *)(a1 + 26);
  v6 = a1;
  v37 = 0LL;
  v38 = 0LL;
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 544);
      v9 = *(_DWORD *)(a2 + 1376);
      if ( (*(_DWORD *)(v8 + 1124) & 0x100000) != 0 || (v9 & 0xE00u) < 0x400 )
        v7 = 4;
    }
    v10 = v7 | 2;
    if ( (v3 & 2) == 0 )
      v10 = v7;
    if ( v10 )
    {
      v11 = (volatile __int64 *)(a1 + 96);
      *((_QWORD *)&v37 + 1) = a1 + 96;
      *(_QWORD *)&v37 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      LOBYTE(v38) = CurrentIrql;
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v14[6];
          v14[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v37, v11);
      }
      else if ( _InterlockedExchange64(v11, (__int64)&v37) )
      {
        KxWaitForLockOwnerShip(&v37);
      }
      CurrentThread = ExpFindCurrentThread(v6, a2, (unsigned int)&v37, 0, 1, a3);
      v16 = CurrentThread;
      if ( (v10 & 4) != 0 )
      {
        if ( (*(_DWORD *)(CurrentThread + 8) & 1) != 0 )
        {
          v10 &= ~4u;
        }
        else
        {
          PsBoostThreadIoEx(a2, 0LL, 0LL, 0LL);
          *(_DWORD *)(v16 + 8) |= 1u;
        }
      }
      if ( (v10 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v16 + 8) & 4) != 0 )
        {
          v10 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1444)) == 1 && *(_BYTE *)(a2 + 793) )
          {
            v23 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
            {
              v24 = KeGetCurrentPrcb()->SchedulerAssist;
              v24[5] |= (-1 << (v23 + 1)) & 4;
            }
            v25 = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &v25->AbPropagateBoostsList, a2 + 808) )
              KiAbQueueAutoBoostDpc(v25);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v26 = KeGetCurrentIrql();
                if ( v26 <= 0xFu && v23 <= 0xFu && v26 >= 2u )
                {
                  v27 = KeGetCurrentPrcb();
                  v28 = v27->SchedulerAssist;
                  v29 = ~(unsigned __int16)(-1LL << (v23 + 1));
                  v30 = (v29 & v28[5]) == 0;
                  v28[5] &= v29;
                  if ( v30 )
                    KiRemoveSystemWorkPriorityKick(v27);
                }
              }
            }
            __writecr8(v23);
          }
          *(_DWORD *)(v16 + 8) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
      }
      else
      {
        _m_prefetchw(&v37);
        v17 = v37;
        if ( !(_QWORD)v37 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v37 + 1),
                             0LL,
                             (signed __int64)&v37) == &v37 )
            goto LABEL_22;
          v17 = KxWaitForLockChainValid(&v37);
        }
        *(_QWORD *)&v37 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
      }
LABEL_22:
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v31 = v19[6] - 1;
          v19[6] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      v20 = (unsigned __int8)v38;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
            v30 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      __writecr8(v20);
      if ( v10 )
      {
        if ( (v10 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v10 & 2) != 0 && *(_DWORD *)(a2 + 1448) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}
