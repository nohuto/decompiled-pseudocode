/*
 * XREFs of MiConvertEntireLargePageToSmall @ 0x1402C6AA0
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x1402BEEA0 (MiInsertLargePageInNodeList.c)
 *     MiInsertLargePageChain @ 0x1402C15F0 (MiInsertLargePageChain.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 *     MiResolvePrivateZeroFault @ 0x1403219B0 (MiResolvePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiLargeFreePageToMdl @ 0x1403D5CF4 (MiLargeFreePageToMdl.c)
 *     MiFindLargeNodePage @ 0x1403D6C20 (MiFindLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x14058D990 (MiUpdateLargePageSectionPfns.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B04C20 (MiCreateKernelHalSlabRange.c)
 *     MiInitializeNonPagedPool @ 0x140B0681C (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiConvertEntireLargePageToSmall(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r15
  char v13; // r13
  ULONG_PTR v14; // rdi
  unsigned __int8 CurrentIrql; // cl
  char v16; // al
  char v17; // al
  __int64 v18; // rax
  bool v19; // zf
  __int64 result; // rax
  __int64 v21; // r15
  unsigned __int8 v22; // r10
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // eax
  _DWORD *v27; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v33; // [rsp+20h] [rbp-58h]
  __int128 v34; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  unsigned __int64 v36; // [rsp+48h] [rbp-30h]
  unsigned __int8 v37; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+88h] [rbp+10h] BYREF

  v10 = MiLargePageSizes[a2];
  v11 = a1 + 48 * v10;
  v12 = 0x3FFFFFFFFFLL;
  v13 = 0;
  v14 = v10 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  if ( a3 == 1 )
  {
    v13 = (a4 != 0) + 1;
    if ( a6 )
      *a6 = 0LL;
    if ( a7 )
      *a7 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v37 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  do
  {
    v11 -= 48LL;
    v38 = 0;
    --v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v16 = *(_BYTE *)(v11 + 34);
    *(_BYTE *)(v11 + 35) &= 0xF8u;
    v17 = v16 & 0xEF;
    *(_BYTE *)(v11 + 34) = v17;
    if ( v11 != a1 )
    {
      *(_BYTE *)(v11 + 34) = v17 ^ (v17 ^ *(_BYTE *)(a1 + 34)) & 7;
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1 + 16);
    }
    v18 = *(_QWORD *)(v11 + 40);
    *(_BYTE *)(v11 + 36) &= 0xFCu;
    v35 = 0LL;
    v36 = v18 & 0xFFFFFEFFFFFFFFFFuLL;
    v33 = 0LL;
    v34 = 0LL;
    *(_QWORD *)(v11 + 40) = v18 & 0xFFFFFEFFFFFFFFFFuLL;
    if ( a4 <= 1 )
    {
      *(_QWORD *)(v11 + 24) &= 0xC000000000000000uLL;
      v19 = *(_WORD *)(v11 + 32) == 2;
      *(_WORD *)(v11 + 32) -= 2;
      if ( v19 )
      {
        _InterlockedOr(v32, 0);
        *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0x3800000000000000LL;
      }
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( v11 == a5 )
        {
          *(_QWORD *)v11 = 0LL;
          *(_QWORD *)(v11 + 8) |= 0x8000000000000000uLL;
          *(_QWORD *)(v11 + 16) = ZeroPte;
          if ( (v13 & 1) != 0 )
          {
            if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
              MiArePageContentsZero(v14);
          }
          else
          {
            MiSetOriginalPtePfnFromFreeList(v11 + 16, 0xC000000000000000uLL, 0LL);
          }
        }
        else
        {
          if ( a7 && (*(_BYTE *)(v11 + 35) & 0x40) != 0 )
            ++*a7;
          if ( *(_WORD *)(v11 + 32) )
          {
            if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
              *(_QWORD *)(v11 + 24) |= 0x4000000000000000uLL;
            *(_BYTE *)(v11 + 34) |= 7u;
          }
          else
          {
            if ( a6 )
              ++*a6;
            MiInsertPageInFreeOrZeroedList(v14);
          }
        }
      }
      else if ( a3 == 2 )
      {
        v21 = *(_QWORD *)(v11 + 24) ^ v12;
        *(_QWORD *)(v11 + 16) = ZeroPte;
        *(_QWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 24) ^= v21 & 0xFFFFFFFFFFLL;
        v12 = v14;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v14 & 0xF) == 0 && v37 < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (v37 + 1));
          v19 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v37);
      v22 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
      {
        v27 = KeGetCurrentPrcb()->SchedulerAssist;
        v27[5] |= (-1 << (v22 + 1)) & 4;
      }
      v37 = v22;
    }
  }
  while ( v11 != a1 );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && v37 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v19 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  result = v37;
  __writecr8(v37);
  return result;
}
