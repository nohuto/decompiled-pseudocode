/*
 * XREFs of MiProbeLockFrame @ 0x1402A6D80
 * Callers:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiLockPageTablePage @ 0x1402A83C0 (MiLockPageTablePage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402EAC50 (ExAcquireRundownProtectionCacheAware.c)
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiLockNonPagedPoolPte @ 0x14053EF4C (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  unsigned __int64 CurrentPrcb; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rcx
  bool v13; // bp
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned __int64 v16; // rcx
  ULONG_PTR *v17; // r15
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  int v20; // edi
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 result; // rax
  __int64 v27; // rax
  __int64 **Address; // rax
  int v29; // ecx
  int v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 80)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0LL
      && ((v29 = *((_DWORD *)Address + 12), (v29 & 0x70) == 0x40) || (v29 & 0x70) == 0x10) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 128), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_140C4E6DC;
      }
    }
    else
    {
      ++dword_140C4E6D8;
      return 3221225477LL;
    }
    return result;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0xF) != 4
    || (v6 = *(_QWORD *)a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)a1))
    || (v7 = MiLockNonPagedPoolPte(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        a2 = (unsigned __int128)((v7 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
        v4 = (v7 + 0x58000000000LL) / 48,
        *(_QWORD *)(a1 + 128) = v4,
        !v7) )
  {
    v7 = 48 * v4 - 0x58000000000LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, a2, a3, a4);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v8 = *(unsigned __int8 *)(v7 + 34);
  if ( ((unsigned __int8)v8 & 7u) <= 1 || (v9 = *(_WORD *)(v7 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_140C4E6CC;
    return 3221225477LL;
  }
  if ( v9 >= 0x7FFFu )
    goto LABEL_69;
  CurrentPrcb = *(_QWORD *)(v7 + 40);
  v11 = 1;
  if ( (CurrentPrcb & 0x1000000000LL) == 0 && (CurrentPrcb & 0x2000000000000LL) == 0 )
  {
    v12 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 == 1 )
    {
      if ( v12 )
        goto LABEL_20;
    }
    else if ( v9 != 2 || !v12 )
    {
      goto LABEL_37;
    }
    if ( (v8 & 8) != 0 )
    {
LABEL_20:
      v13 = 0;
      if ( (unsigned int)MI_PFN_IS_PROTO(v7, CurrentPrcb, v8) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v8 = 0x8000000000000000uLL;
        v16 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
        if ( v16 <= 0xFFFFF6BFFFFFFF78uLL && v16 >= 0xFFFFF68000000000uLL )
          v13 = (*(_BYTE *)(v7 + 35) & 0x20) != 0;
      }
      v17 = *(ULONG_PTR **)(qword_140C4E588 + 8 * (*(_QWORD *)&v15 & (v14 >> 39)));
      if ( !v13 || (unsigned int)MiChargeCommit((__int64)v17, 1uLL, 8u) )
      {
        if ( v17 == &MiSystemPartition )
        {
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v18 = *(_DWORD *)(CurrentPrcb + 33564);
          while ( v18 )
          {
            if ( v18 == -1 )
              break;
            v19 = v18;
            v18 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 33564), v18 - 1, v18);
            if ( v19 == v18 )
              goto LABEL_37;
          }
        }
        v20 = MiChargePartitionResidentAvailable(v17, 1LL, 0LL);
        if ( !v20 && v13 )
          MiReturnCommit((__int64)v17, 1LL);
        if ( v20 )
          goto LABEL_37;
      }
LABEL_69:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++dword_140C4E6D0;
      return 3221225633LL;
    }
  }
LABEL_37:
  ++*(_WORD *)(v7 + 32);
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v21 = *(_QWORD *)(v7 + 16);
    if ( (v21 & 0x400) == 0 && (v21 & 4) != 0 )
      *(_BYTE *)(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL)) + 675LL) = 1;
  }
  v22 = *(_BYTE *)(v7 + 34);
  if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v7 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 64) & 0xF) == 1 )
  {
    CurrentPrcb = *(_QWORD *)(v7 + 40);
    if ( (CurrentPrcb & 0x1000000000LL) == 0 && ((CurrentPrcb >> 60) & 7) != 1 )
    {
      CurrentPrcb &= 0xFFFFFFFFFuLL;
      if ( CurrentPrcb != 0xFFFFFFFFDLL && *(_QWORD *)(a1 + 136) != CurrentPrcb )
      {
        if ( !(unsigned int)MI_PFN_IS_PROTO(v7, CurrentPrcb, v8) )
        {
          v24 = 48 * v23 - 0x58000000000LL;
          v11 = 2;
        }
        if ( !(unsigned int)MiLockPageTablePage(v24, v11) )
        {
          v31 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v31, CurrentPrcb, v8, v25);
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v7);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++dword_140C4E6D4;
          return 3221225633LL;
        }
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL;
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x100u;
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 56) + 10LL) < 0 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(v7, CurrentPrcb, v8) )
    {
      v27 = *(_QWORD *)(v7 + 16);
      if ( (v27 & 0x400) != 0 )
      {
        if ( qword_140C4DE80 && (v27 & 0x10) == 0 )
          v27 &= ~qword_140C4DE80;
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v27 >> 16) + 112LL));
      }
    }
  }
  if ( ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140C4E588
                                                                                    + 8
                                                                                    * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL))
                                                                        + 2144LL));
  return 0LL;
}
