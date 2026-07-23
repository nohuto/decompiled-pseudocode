/*
 * XREFs of MiProbeLockFrame @ 0x1402AF5D0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x14020E650 (ExAcquireRundownProtectionCacheAware.c)
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiLockPageTablePage @ 0x1402AE6F0 (MiLockPageTablePage.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiLockNonPagedPoolPte @ 0x140544CB0 (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  char v5; // r8
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rcx
  bool v10; // bp
  unsigned __int64 v11; // rdx
  int v12; // r9d
  unsigned __int64 v13; // rcx
  ULONG_PTR *v14; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v17; // ett
  int v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  char v22; // al
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rax
  __int64 **Address; // rax
  int v30; // ecx
  int v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1[16];
  if ( v1 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
  {
    if ( !a1[10]
      || (Address = MiLocateAddress(*a1)) != 0LL
      && ((v30 = *((_DWORD *)Address + 12), (v30 & 0x70) == 0x40) || (v30 & 0x70) == 0x10) )
    {
      result = MiReferenceIoPages(0, a1[16], 1LL, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(a1[7] + 10) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_140C4E7DC;
      }
    }
    else
    {
      ++dword_140C4E7D8;
      return 3221225477LL;
    }
    return result;
  }
  if ( (a1[8] & 0xF) != 4
    || (v3 = *a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*a1))
    || (v4 = MiLockNonPagedPoolPte(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v1 = (v4 + 0x58000000000LL) / 48,
        a1[16] = v1,
        !v4) )
  {
    v4 = 48 * v1 - 0x58000000000LL;
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
  }
  v5 = *(_BYTE *)(v4 + 34);
  if ( (v5 & 7u) <= 1 || (v6 = *(_WORD *)(v4 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140C4E7CC;
    return 3221225477LL;
  }
  if ( v6 >= 0x7FFFu )
    goto LABEL_69;
  v7 = *(_QWORD *)(v4 + 40);
  v8 = 1;
  if ( (v7 & 0x1000000000LL) == 0 && (v7 & 0x2000000000000LL) == 0 )
  {
    v9 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v6 == 1 )
    {
      if ( v9 )
        goto LABEL_20;
    }
    else if ( v6 != 2 || !v9 )
    {
      goto LABEL_37;
    }
    if ( (v5 & 8) != 0 )
    {
LABEL_20:
      v10 = 0;
      if ( (unsigned int)MI_PFN_IS_PROTO(v4) && (*(_DWORD *)(v4 + 16) & 0x400LL) != 0 )
      {
        v10 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL;
        if ( v13 <= 0xFFFFF6BFFFFFFF78uLL && v13 >= 0xFFFFF68000000000uLL )
          v10 = (*(_BYTE *)(v4 + 35) & 0x20) != 0;
      }
      v14 = *(ULONG_PTR **)(qword_140C4E688 + 8 * (*(_QWORD *)&v12 & (v11 >> 39)));
      if ( !v10 || (unsigned int)MiChargeCommit(v14, 1LL, 8LL) )
      {
        if ( v14 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( CachedResidentAvailable )
          {
            if ( CachedResidentAvailable == -1 )
              break;
            v17 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v17 == CachedResidentAvailable )
              goto LABEL_37;
          }
        }
        v18 = MiChargePartitionResidentAvailable((__int64)v14, 1uLL, 0LL);
        if ( !v18 && v10 )
          MiReturnCommit(v14, 1LL, v19, v20);
        if ( v18 )
          goto LABEL_37;
      }
LABEL_69:
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++dword_140C4E7D0;
      return 3221225633LL;
    }
  }
LABEL_37:
  ++*(_WORD *)(v4 + 32);
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v21 = *(_QWORD *)(v4 + 16);
    if ( (v21 & 0x400) == 0 && (v21 & 4) != 0 )
      *(_BYTE *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
  }
  v22 = *(_BYTE *)(v4 + 34);
  if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 && (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v4 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (a1[8] & 0xF) == 1 )
  {
    v23 = *(_QWORD *)(v4 + 40);
    if ( (v23 & 0x1000000000LL) == 0 && ((v23 >> 60) & 7) != 1 )
    {
      v24 = v23 & 0xFFFFFFFFFLL;
      if ( v24 != 0xFFFFFFFFDLL && a1[17] != v24 )
      {
        if ( !(unsigned int)MI_PFN_IS_PROTO(v4) )
        {
          v26 = 48 * v25 - 0x58000000000LL;
          v8 = 2;
        }
        if ( !(unsigned int)MiLockPageTablePage(v26, v8) )
        {
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32);
            while ( *(__int64 *)(v4 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v4);
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++dword_140C4E7D4;
          return 3221225633LL;
        }
        a1[17] = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL;
        *(_WORD *)(a1[7] + 10) |= 0x100u;
      }
    }
  }
  if ( *(char *)(a1[7] + 10) < 0 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(v4) )
    {
      v28 = *(_QWORD *)(v4 + 16);
      if ( (v28 & 0x400) != 0 )
      {
        if ( qword_140C4DF80 && (v28 & 0x10) == 0 )
          v28 &= ~qword_140C4DF80;
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v28 >> 16) + 112LL));
      }
    }
  }
  if ( ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140C4E688
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v4 + 40) >> 39) & 0x3FFLL))
                                                                        + 2144LL));
  return 0LL;
}
