/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x14052EE3C
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x14057EB38 (PspIumReplenishPartitionPages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiPartitionObjectToPartition @ 0x14031338C (MiPartitionObjectToPartition.c)
 *     MiInitializeMdlPfn @ 0x140313B6C (MiInitializeMdlPfn.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG_PTR **a1, unsigned int *a2, __int64 *a3)
{
  ULONG_PTR *v5; // rsi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  signed __int32 v10; // ecx
  unsigned int v11; // ebx
  __int64 SlabPage; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v18; // eax
  bool v19; // zf
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+78h] [rbp+10h] BYREF

  v21 = 0;
  v20 = 0LL;
  v5 = MiPartitionObjectToPartition(a1, 1, &v21);
  v6 = 0;
  MiInitializePageColorBase(0LL, 0, (__int64)&v20);
  if ( *a2 )
  {
    do
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)v20, 1u);
      v11 = DWORD2(v20) & v10 | HIDWORD(v20);
      if ( (*((_DWORD *)v5 + 1) & 8) != 0 )
        SlabPage = MiGetSlabPage((__int64)v5, 0x18u, 0, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
      else
        SlabPage = -1LL;
      if ( SlabPage == -1 )
      {
        SlabPage = MiGetPage((__int64)v5, v11, 0LL);
        if ( SlabPage == -1 )
          break;
      }
      v13 = 48 * SlabPage - 0x58000000000LL;
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 16) = ZeroPte;
      *(_QWORD *)(v13 + 40) = *(_QWORD *)(v13 + 40) & 0x7FFFFFF000000000LL | 0xFFFFFFFFDLL;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 54);
      v14 = (unsigned __int8)MiLockPageInline(v13, v7, v8, SchedulerAssist);
      MiInitializeMdlPfn(v13, 131584LL, v15);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = -1LL << ((unsigned __int8)v14 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)v7;
            v19 = (v18 & SchedulerAssist[5]) == 0;
            v8 = (unsigned int)v18 & SchedulerAssist[5];
            SchedulerAssist[5] = v8;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
      *a3 = SlabPage;
      ++v6;
      ++a3;
    }
    while ( v6 < *a2 );
  }
  v19 = v21 == 0;
  *a2 = v6;
  if ( !v19 )
    PsDereferencePartition(v5[22]);
}
