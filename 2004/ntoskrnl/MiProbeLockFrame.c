/*
 * XREFs of MiProbeLockFrame @ 0x14024DD50
 * Callers:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiLockPageTablePage @ 0x14024F390 (MiLockPageTablePage.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140324580 (ExAcquireRundownProtectionCacheAware.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiLockNonPagedPoolPte @ 0x14053F59C (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  char v6; // r8
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rcx
  bool v11; // bp
  unsigned __int64 v12; // rdx
  int v13; // r9d
  unsigned __int64 v14; // rcx
  ULONG_PTR *v15; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v18; // ett
  int v19; // edi
  __int64 v20; // rax
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 result; // rax
  __int64 v30; // rax
  __int64 **Address; // rax
  int v32; // ecx
  int v33; // [rsp+88h] [rbp+10h] BYREF
  int v34; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 80)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0LL
      && ((v32 = *((_DWORD *)Address + 12), (v32 & 0x70) == 0x40) || (v32 & 0x70) == 0x10) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 128), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_140C4E59C;
      }
    }
    else
    {
      ++dword_140C4E598;
      return 3221225477LL;
    }
    return result;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0xF) != 4
    || (v4 = *(_QWORD *)a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)a1))
    || (v5 = MiLockNonPagedPoolPte(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        a2 = (unsigned __int128)((v5 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
        v2 = (v5 + 0x58000000000LL) / 48,
        *(_QWORD *)(a1 + 128) = v2,
        !v5) )
  {
    v5 = 48 * v2 - 0x58000000000LL;
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v33, a2);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
  }
  v6 = *(_BYTE *)(v5 + 34);
  if ( (v6 & 7u) <= 1 || (v7 = *(_WORD *)(v5 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140C4E58C;
    return 3221225477LL;
  }
  if ( v7 >= 0x7FFFu )
    goto LABEL_69;
  v8 = *(_QWORD *)(v5 + 40);
  v9 = 1;
  if ( (v8 & 0x1000000000LL) == 0 && (v8 & 0x2000000000000LL) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v7 == 1 )
    {
      if ( v10 )
        goto LABEL_20;
    }
    else if ( v7 != 2 || !v10 )
    {
      goto LABEL_37;
    }
    if ( (v6 & 8) != 0 )
    {
LABEL_20:
      v11 = 0;
      if ( (unsigned int)MI_PFN_IS_PROTO(v5) && (*(_DWORD *)(v5 + 16) & 0x400LL) != 0 )
      {
        v11 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
        if ( v14 <= 0xFFFFF6BFFFFFFF78uLL && v14 >= 0xFFFFF68000000000uLL )
          v11 = (*(_BYTE *)(v5 + 35) & 0x20) != 0;
      }
      v15 = *(ULONG_PTR **)(qword_140C4E448 + 8 * (*(_QWORD *)&v13 & (v12 >> 39)));
      if ( !v11 || (unsigned int)MiChargeCommit(v15, 1LL, 8LL) )
      {
        if ( v15 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v18 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v18 == CachedResidentAvailable )
              goto LABEL_37;
          }
        }
        v19 = MiChargePartitionResidentAvailable(v15, 1LL, 0LL);
        if ( !v19 && v11 )
          MiReturnCommit((__int64)v15, 1LL);
        if ( v19 )
          goto LABEL_37;
      }
LABEL_69:
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++dword_140C4E590;
      return 3221225633LL;
    }
  }
LABEL_37:
  ++*(_WORD *)(v5 + 32);
  if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v20 = *(_QWORD *)(v5 + 16);
    if ( (v20 & 0x400) == 0 && (v20 & 4) != 0 )
      *(_BYTE *)(*(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v5 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
  }
  v21 = *(_BYTE *)(v5 + 34);
  if ( (v21 & 0x20) != 0 && (v21 & 8) == 0 && (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v5 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 64) & 0xF) == 1 )
  {
    v22 = *(_QWORD *)(v5 + 40);
    if ( (v22 & 0x1000000000LL) == 0 && ((v22 >> 60) & 7) != 1 )
    {
      v23 = v22 & 0xFFFFFFFFFLL;
      if ( v23 != 0xFFFFFFFFDLL && *(_QWORD *)(a1 + 136) != v23 )
      {
        if ( !(unsigned int)MI_PFN_IS_PROTO(v5) )
        {
          v25 = 48 * v24 - 0x58000000000LL;
          v9 = 2;
        }
        if ( !(unsigned int)MiLockPageTablePage(v25, v9) )
        {
          v34 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34, v26);
            while ( *(__int64 *)(v5 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v5, v26, v27, v28);
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++dword_140C4E594;
          return 3221225633LL;
        }
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL;
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x100u;
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 56) + 10LL) < 0 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(v5) )
    {
      v30 = *(_QWORD *)(v5 + 16);
      if ( (v30 & 0x400) != 0 )
      {
        if ( qword_140C4DD40 && (v30 & 0x10) == 0 )
          v30 &= ~qword_140C4DD40;
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v30 >> 16) + 112LL));
      }
    }
  }
  if ( ((*(_QWORD *)(v5 + 40) >> 39) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140C4E448
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v5 + 40) >> 39) & 0x3FFLL))
                                                                        + 2144LL));
  return 0LL;
}
