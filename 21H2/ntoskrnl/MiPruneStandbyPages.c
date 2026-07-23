/*
 * XREFs of MiPruneStandbyPages @ 0x140551014
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x140551440 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // r12d
  int v7; // r14d
  unsigned int v8; // r10d
  __int64 v9; // r13
  int i; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  signed __int32 v16; // ecx
  __int64 Page; // rax
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  unsigned __int64 v23; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // rax
  ULONG_PTR v30; // r15
  __int64 v31; // rbp
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // rbx
  unsigned int PfnChannel; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  int v47; // [rsp+20h] [rbp-68h]
  __int64 BugCheckParameter2; // [rsp+28h] [rbp-60h]
  __int128 v49; // [rsp+30h] [rbp-58h] BYREF
  int v51; // [rsp+98h] [rbp+10h]
  unsigned __int64 v53; // [rsp+A8h] [rbp+20h]

  v53 = a4;
  v4 = 0LL;
  v49 = 0LL;
  v6 = 1;
  v7 = 2;
  v8 = a3;
  v9 = a1;
  v47 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4544LL * a2 + 4280) & 1;
  for ( i = (unsigned __int16)KeNumberNodes; v6 < (unsigned __int16)KeNumberNodes; ++v6 )
  {
    v11 = *(unsigned int *)(qword_140C4DED8 + 4LL * (v6 + a2 * i));
    v12 = *(_QWORD *)(v9 + 16) + 4544 * v11;
    if ( *(_QWORD *)(v12 + 4176) || !(_DWORD)InitializationPhase )
    {
      v13 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v14 = v13 * MiNodeFreeZeroPages(v12, v8, 4096);
        if ( v14 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v11 + 1, (__int64)&v49);
          v15 = v14 - 0x10000;
          if ( v15 )
          {
            while ( 1 )
            {
              v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v49, 1u);
              Page = MiGetPage(v9, DWORD2(v49) & (unsigned int)v16 | HIDWORD(v49), 64LL);
              v18 = Page;
              if ( Page == -1 )
              {
                a4 = v53;
              }
              else
              {
                BugCheckParameter2 = MiSwapNumaStandbyPage(Page, a2, a3, 16LL);
                v19 = 48 * BugCheckParameter2 - 0x58000000000LL;
                v23 = (unsigned __int8)MiLockPageInline(v19, v20, v21, v22);
                *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
                MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2);
                _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
                      v28 = (v27 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v27;
                      if ( v28 )
                        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(v23);
                if ( BugCheckParameter2 == v18 )
                  return v4;
                a4 = v53;
                if ( ++v4 == v53 )
                  return v4;
              }
              v9 = a1;
              if ( !--v15 )
                goto LABEL_22;
            }
          }
        }
        a4 = v53;
LABEL_22:
        v8 = a3;
      }
    }
    i = (unsigned __int16)KeNumberNodes;
  }
  if ( v4 < a4 )
  {
    do
    {
      v29 = MiRemoveLowestPriorityStandbyPage(v9, 8u, 0);
      v30 = v29;
      if ( v29 == -1 )
        break;
      v51 = 0;
      v31 = 48 * v29 - 0x58000000000LL;
      ++v4;
      LOBYTE(v32) = MiIsFreeZeroPfnCold(v31);
      v33 = v7;
      v7 |= 0x400u;
      v34 = v33 & 0xFFFFFBFF;
      if ( !v32 )
        v7 = v34;
      v35 = *((unsigned int *)MiSearchNumaNodeTable((v31 + 0x58000000000LL) / 48) + 2);
      PfnChannel = MiGetPfnChannel(v31);
      if ( (_DWORD)v35 != a2 || PfnChannel != a3 && v47 )
      {
        if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(v9 + 16) + 4544 * v35, PfnChannel, 4096) >= 0x200 )
        {
          v40 = MiSwapNumaStandbyPage(v30, a2, a3, 48LL);
          if ( v40 == v30 )
          {
            v51 = 1;
          }
          else
          {
            v30 = v40;
            v31 = 48 * v40 - 0x58000000000LL;
            v7 &= ~0x400u;
          }
        }
        else
        {
          --v4;
        }
      }
      v41 = (unsigned __int8)MiLockPageInline(v31, v37, v38, v39);
      *(_QWORD *)(v31 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(v30, v7);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
            v28 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
      }
      __writecr8(v41);
      if ( v51 == 1 )
        break;
    }
    while ( v4 < v53 );
  }
  return v4;
}
