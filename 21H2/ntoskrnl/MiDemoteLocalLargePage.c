/*
 * XREFs of MiDemoteLocalLargePage @ 0x1402D6960
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x140215A94 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiInsertDemotedPages @ 0x14020F840 (MiInsertDemotedPages.c)
 *     MiIsFreeZeroPfnCold @ 0x14030DE70 (MiIsFreeZeroPfnCold.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetFreeZeroLargePages @ 0x1403F6914 (MiGetFreeZeroLargePages.c)
 *     MiAddPageToHeatList @ 0x1403F7C88 (MiAddPageToHeatList.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int16 v4; // bx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int v8; // r12d
  unsigned int v9; // esi
  int v10; // ebx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 FreeZeroLargePages; // rax
  __int64 v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rax
  _DWORD *v28; // r9
  int v29; // edx
  unsigned int v30; // [rsp+40h] [rbp-E8h]
  __int64 v32; // [rsp+48h] [rbp-E0h]
  __int64 v33; // [rsp+50h] [rbp-D8h] BYREF
  int v34; // [rsp+58h] [rbp-D0h]
  __int128 v35; // [rsp+5Ch] [rbp-CCh]
  __int128 v36; // [rsp+6Ch] [rbp-BCh]
  __int128 v37; // [rsp+7Ch] [rbp-ACh]
  __int128 v38; // [rsp+8Ch] [rbp-9Ch]
  __int128 v39; // [rsp+9Ch] [rbp-8Ch]
  __int128 v40; // [rsp+ACh] [rbp-7Ch]
  __int128 v41; // [rsp+BCh] [rbp-6Ch]
  __int128 v42; // [rsp+CCh] [rbp-5Ch]
  int v43; // [rsp+DCh] [rbp-4Ch]

  v4 = a3;
  if ( (a3 & 1) != 0 )
    return 0LL;
  v6 = 0;
  v30 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v6 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140C4DECD);
    v30 = v6;
  }
  v7 = a2 >> byte_140C4DECC;
  v32 = *(_QWORD *)(a1 + 16) + 4544LL * (a2 >> byte_140C4DECC);
  if ( MiNodeFreeZeroPages(v32, v6, a3) >= a4 )
    return 0LL;
  if ( (v4 & 0x400) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( (v4 & 0x800) != 0 )
      v8 = 2;
  }
  v9 = 3;
  v10 = (2 * (v4 & 2)) | 9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  while ( 1 )
  {
    v13 = v10;
    v10 |= 0x20u;
    if ( --v9 )
      v10 = v13;
    FreeZeroLargePages = MiGetFreeZeroLargePages(a1, v9, 1, v10, v7, a2, v6, v8);
    v15 = FreeZeroLargePages;
    if ( FreeZeroLargePages )
      break;
    v6 = v30;
    if ( !v9 )
    {
      if ( (v10 & 1) == 0 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        return 0LL;
      }
      v9 = 3;
      v10 &= 0xFFFFFFDE;
    }
  }
  if ( (v10 & 0x20) != 0 )
  {
    MiInsertDemotedPages(v32, FreeZeroLargePages, v9, 1, FreeZeroLargePages);
    v9 = 1;
  }
  v22 = *(_QWORD *)(a1 + 7104);
  if ( v22 )
    --v22;
  if ( v22 >= 0x9F
    || (v23 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3), (v23 & 0xC) == 8)
    || (v22 >= 0x20 || (ULONG_PTR *)a1 != &MiSystemPartition)
    && ((v23 & 2) != 0 && v22 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x20) != 0) )
  {
    v24 = v15 + 48 * (a2 & (unsigned __int64)(MiLargePageSizes[v9] - 1));
  }
  else
  {
    v24 = 0LL;
  }
  if ( (unsigned int)MiIsFreeZeroPfnCold(v15) && (HvlEnlightenments & 0x200000) != 0 )
  {
    v33 = 1LL;
    v34 = 1;
    v43 = 0;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    MiAddPageToHeatList(&v33, v25, v9);
    MiSetFreeZeroPfnCold(v15, 0LL);
  }
  MiConvertEntireLargePageToSmall(v15, v9, 1, (*(_DWORD *)(v15 + 16) & 0x3E0LL) != 0, v24, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v24;
}
