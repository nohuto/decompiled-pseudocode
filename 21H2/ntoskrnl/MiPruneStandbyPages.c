/*
 * XREFs of MiPruneStandbyPages @ 0x14045C812
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1405B3D90 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140264BD8 (MiNodeFreeZeroPages.c)
 *     MiIsFreeZeroPfnCold @ 0x140268620 (MiIsFreeZeroPfnCold.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeZeroPagesNeeded @ 0x14045C75A (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v5; // r15d
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // r12
  unsigned int v11; // r9d
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned __int64 v16; // rsi
  unsigned __int64 i; // rsi
  signed __int32 v18; // ecx
  __int64 Page; // rax
  unsigned __int64 v20; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 result; // rax
  __int64 v27; // rbp
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rbx
  unsigned int PfnChannel; // eax
  __int64 v33; // rax
  ULONG_PTR v34; // rsi
  unsigned __int64 v35; // rbx
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  ULONG_PTR v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int128 v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+90h] [rbp+8h]
  int v43; // [rsp+98h] [rbp+10h]
  int v44; // [rsp+98h] [rbp+10h]
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v46 = a4;
  v5 = 2;
  v41 = 0LL;
  v7 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  v8 = 0LL;
  v9 = 1;
  v10 = a4;
  v11 = a3;
  v43 = 1;
  v42 = *(_DWORD *)(v7 + 22784) & 1;
  v12 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_44;
  do
  {
    v13 = *(unsigned int *)(qword_140C506D8 + 4LL * (a2 * v12 + v9));
    v14 = *(_QWORD *)(a1 + 16) + 24512 * v13;
    if ( *(_QWORD *)(v14 + 22608) || !(_DWORD)InitializationPhase )
    {
      v15 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v16 = v15 * MiNodeFreeZeroPages(v14, v11, 4096);
        if ( v16 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v13 + 1, (__int64)&v41);
          for ( i = v16 - 0x10000; i; --i )
          {
            v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v41, 1u);
            Page = MiGetPage(a1, DWORD2(v41) & (unsigned int)v18 | HIDWORD(v41), 0x40u);
            v39 = Page;
            if ( Page != -1 )
            {
              v38 = MiSwapNumaStandbyPage(Page, a2, a3, 16LL);
              v20 = (unsigned __int8)MiLockPageInline(48 * v38 - 0x220000000000LL);
              MiInsertPageInFreeOrZeroedList(v38, 2);
              _InterlockedAnd64((volatile signed __int64 *)(48 * v38 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                    v25 = (v24 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v24;
                    if ( v25 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v20);
              result = v38;
              if ( v38 == v39 )
                return result;
              if ( ++v8 == v10 )
              {
                result = MiFreeZeroPagesNeeded(a1, a2, a3);
                v46 = result;
                v10 = result;
                if ( !result )
                  return result;
                v8 = 0LL;
              }
            }
          }
        }
        v11 = a3;
      }
    }
    v12 = (unsigned __int16)KeNumberNodes;
    v9 = v43 + 1;
    v43 = v9;
  }
  while ( v9 < (unsigned __int16)KeNumberNodes );
LABEL_44:
  while ( 1 )
  {
    result = MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
    v34 = result;
    if ( result == -1 )
      break;
    v40 = v8;
    v44 = 0;
    v27 = 48 * result - 0x220000000000LL;
    ++v8;
    LOBYTE(v28) = MiIsFreeZeroPfnCold(v27);
    v29 = v5;
    v5 |= 0x400u;
    v30 = v29 & 0xFFFFFBFF;
    if ( !v28 )
      v5 = v30;
    v31 = *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v27 + 0x220000000000LL) >> 4)) + 2);
    PfnChannel = MiGetPfnChannel(48 * v34 - 0x220000000000LL);
    if ( (_DWORD)v31 != a2 || PfnChannel != a3 && v42 )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + 24512 * v31, PfnChannel, 4096) >= 0x200 )
      {
        v33 = MiSwapNumaStandbyPage(v34, a2, a3, 48LL);
        if ( v33 == v34 )
        {
          v44 = 1;
        }
        else
        {
          v34 = v33;
          v27 = 48 * v33 - 0x220000000000LL;
          v5 &= ~0x400u;
        }
      }
      else
      {
        v8 = v40;
      }
    }
    v35 = (unsigned __int8)MiLockPageInline(v27);
    MiInsertPageInFreeOrZeroedList(v34, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v35 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v25 = ((unsigned int)result & v37[5]) == 0;
          v37[5] &= result;
          if ( v25 )
            result = KiRemoveSystemWorkPriorityKick((__int64)v36);
        }
      }
    }
    __writecr8(v35);
    if ( v44 )
      break;
    if ( v8 == v46 )
    {
      result = MiFreeZeroPagesNeeded(a1, a2, a3);
      v46 = result;
      if ( !result )
        return result;
      v8 = 0LL;
    }
  }
  return result;
}
